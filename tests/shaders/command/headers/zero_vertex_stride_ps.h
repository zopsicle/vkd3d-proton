static const DWORD zero_vertex_stride_ps_code_dxbc[] =
{
    0x43425844, 0x7e8e1beb, 0x7b81c716, 0x0550b2ee, 0xf3d1af87, 0x00000001, 0x000000f8, 0x00000003,
    0x0000002c, 0x00000080, 0x000000b4, 0x4e475349, 0x0000004c, 0x00000002, 0x00000008, 0x00000038,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f, 0x00000044, 0x00000000, 0x00000000,
    0x00000003, 0x00000001, 0x00000f0f, 0x505f5653, 0x5449534f, 0x004e4f49, 0x4f4c4f43, 0xabab0052,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x0000003c, 0x00000050,
    0x0000000f, 0x0100086a, 0x03001062, 0x001010f2, 0x00000001, 0x03000065, 0x001020f2, 0x00000000,
    0x05000036, 0x001020f2, 0x00000000, 0x00101e46, 0x00000001, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE zero_vertex_stride_ps_dxbc = { zero_vertex_stride_ps_code_dxbc, sizeof(zero_vertex_stride_ps_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
