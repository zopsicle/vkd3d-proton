static const DWORD ps_resolve_setup_simple_code_dxbc[] =
{
    0x43425844, 0x13e7b0e6, 0x841af314, 0x6c284706, 0x5567738d, 0x00000001, 0x00000118, 0x00000003,
    0x0000002c, 0x00000064, 0x00000098, 0x4e475349, 0x00000030, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x0000000a, 0x00000001, 0x00000000, 0x00000101, 0x535f5653, 0x6c706d61, 0x646e4965,
    0xab007865, 0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000,
    0x00000003, 0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x00000078,
    0x00000050, 0x0000001e, 0x0100086a, 0x04000863, 0x00101012, 0x00000000, 0x0000000a, 0x03000065,
    0x001020f2, 0x00000000, 0x02000068, 0x00000001, 0x07000055, 0x00100012, 0x00000000, 0x0010100a,
    0x00000000, 0x00004001, 0x00000001, 0x05000056, 0x00102072, 0x00000000, 0x00100006, 0x00000000,
    0x05000036, 0x00102082, 0x00000000, 0x00004001, 0x3f800000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_resolve_setup_simple_dxbc = { ps_resolve_setup_simple_code_dxbc, sizeof(ps_resolve_setup_simple_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
