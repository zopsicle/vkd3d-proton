/*
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

#ifndef __VKD3D_UTF8_H
#define __VKD3D_UTF8_H

#include "vkd3d_common.h"

/* max_elements is 0 if only nul-terminator should be used.
 * Otherwise, terminate the string after either a nul-termination byte or max_elements. */
char *vkd3d_strdup_w_utf8(const WCHAR *wstr, size_t max_elements);

#endif /* __VKD3D_UTF8_H */
