static const DWORD ps_copy_simple_code_dxbc[] =
{
    0x43425844, 0x2197f96f, 0x3a53fba9, 0x6c9db803, 0x6c95b8cf, 0x00000001, 0x00000138, 0x00000003,
    0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000030f, 0x505f5653, 0x5449534f, 0x004e4f49,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x0000000f, 0x545f5653, 0x45475241, 0xabab0054, 0x58454853, 0x0000009c, 0x00000050,
    0x00000027, 0x0100086a, 0x04001858, 0x00107000, 0x00000000, 0x00005555, 0x04002064, 0x00101032,
    0x00000000, 0x00000001, 0x03000065, 0x001020f2, 0x00000000, 0x02000068, 0x00000001, 0x0500001b,
    0x00100032, 0x00000000, 0x00101046, 0x00000000, 0x08000036, 0x001000c2, 0x00000000, 0x00004002,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8900002d, 0x800000c2, 0x00155543, 0x001020f2,
    0x00000000, 0x00100e46, 0x00000000, 0x00107e46, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_copy_simple_dxbc = { ps_copy_simple_code_dxbc, sizeof(ps_copy_simple_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
