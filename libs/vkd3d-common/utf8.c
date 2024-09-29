/*
 * Copyright 2000 Alexandre Julliard
 * Copyright 2019 Zhiyi Zhang for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#define VKD3D_DBG_CHANNEL VKD3D_DBG_CHANNEL_API

#include "vkd3d_memory.h"
#include "vkd3d_utf8.h"

#include <inttypes.h>

static size_t vkd3d_utf8_len(uint32_t c)
{
    /* 0x00-0x7f: 1 byte */
    if (c < 0x80)
        return 1;
    /* 0x80-0x7ff: 2 bytes */
    if (c < 0x800)
        return 2;
    /* 0x800-0xffff: 3 bytes */
    if (c < 0x10000)
        return 3;
    /* 0x10000-0x10ffff: 4 bytes */
    return 4;
}

static void vkd3d_utf8_append(char **dst, uint32_t c)
{
    char *d = *dst;

    /* 0x00-0x7f: 1 byte */
    if (c < 0x80)
    {
        d[0] = c;
        *dst += 1;
        return;
    }

    /* 0x80-0x7ff: 2 bytes */
    if (c < 0x800)
    {
        d[1] = 0x80 | (c & 0x3f);
        c >>= 6;
        d[0] = 0xc0 | c;
        *dst += 2;
        return;
    }

    /* 0x800-0xffff: 3 bytes */
    if (c < 0x10000)  /* 0x800-0xffff: 3 bytes */
    {
        d[2] = 0x80 | (c & 0x3f);
        c >>= 6;
        d[1] = 0x80 | (c & 0x3f);
        c >>= 6;
        d[0] = 0xe0 | c;
        *dst += 3;
        return;
    }

    /* 0x10000-0x10ffff: 4 bytes */
    d[3] = 0x80 | (c & 0x3f);
    c >>= 6;
    d[2] = 0x80 | (c & 0x3f);
    c >>= 6;
    d[1] = 0x80 | (c & 0x3f);
    c >>= 6;
    d[0] = 0xf0 | c;
    *dst += 4;
}

static uint32_t vkd3d_utf16_read(const WCHAR **src)
{
    const WCHAR *s = *src;

    if (s[0] < 0xd800 || s[0] > 0xdfff) /* Not a surrogate pair. */
    {
        *src += 1;
        return s[0];
    }

    if (s[0] > 0xdbff /* Invalid high surrogate. */
            || s[1] < 0xdc00 || s[1] > 0xdfff) /* Invalid low surrogate. */
    {
        *src += 1;
        return 0;
    }

    *src += 2;
    return 0x10000 + ((s[0] & 0x3ff) << 10) + (s[1] & 0x3ff);
}

static inline bool vkd3d_string_should_loop_u16(ptrdiff_t max_elements, const WCHAR* src, const WCHAR* wstr)
{
    ptrdiff_t cursor_pos = src - wstr;
    return (!max_elements || cursor_pos < max_elements) && *src;
}

char *vkd3d_strdup_w_utf8(const WCHAR *wstr, size_t max_elements)
{
    const WCHAR *src = wstr;
    size_t dst_size = 0;
    char *dst, *utf8;
    uint32_t c;

    while (vkd3d_string_should_loop_u16(max_elements, src, wstr))
    {
        if (!(c = vkd3d_utf16_read(&src)))
            continue;
        dst_size += vkd3d_utf8_len(c);
    }
    ++dst_size;

    if (!(dst = vkd3d_malloc(dst_size)))
        return NULL;

    utf8 = dst;
    src = wstr;
    while (vkd3d_string_should_loop_u16(max_elements, src, wstr))
    {
        if (!(c = vkd3d_utf16_read(&src)))
            continue;
        vkd3d_utf8_append(&utf8, c);
    }
    *utf8 = '\0';

    return dst;
}
