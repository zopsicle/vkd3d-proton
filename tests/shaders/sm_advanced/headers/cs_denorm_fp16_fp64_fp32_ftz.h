static const BYTE cs_denorm_fp16_fp64_fp32_ftz_code_dxil[] =
{
    0x44, 0x58, 0x42, 0x43, 0xa0, 0xf6, 0xf2, 0xea, 0x7a, 0x41, 0x5c, 0x52, 0xd3, 0x8e, 0xe7, 0x14, 0xaa, 0x1b, 0x3d, 0x1c, 0x01, 0x00, 0x00, 0x00, 0x4c, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4f, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x53, 0x56, 0x30, 0x78, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0xb1, 0x8b, 0x17, 0xb9, 0x17, 0xe5, 0xcf, 0x93, 0x05, 0x7d, 0x96,
    0x3b, 0x5c, 0x03, 0x4c, 0x44, 0x58, 0x49, 0x4c, 0x40, 0x07, 0x00, 0x00, 0x62, 0x00, 0x05, 0x00, 0xd0, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x02, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x28, 0x07, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00, 0xc7, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91,
    0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x18, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42, 0xc4, 0x10, 0x32, 0x14,
    0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x62, 0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x11, 0x23, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c,
    0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x31, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x1b, 0xb0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0xc2, 0x1c, 0xe0, 0x61, 0x0e, 0xe4, 0xa0, 0x0d,
    0xc8, 0xa1, 0x1c, 0xdc, 0xe1, 0x1d, 0xe4, 0xa1, 0x1d, 0xda, 0xa0, 0x1d, 0xde, 0x81, 0x1c, 0xca, 0x01, 0x30, 0x07, 0x7a, 0xd0, 0x07, 0x60, 0x83, 0x21, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x00, 0x48,
    0x40, 0xb5, 0x81, 0x18, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xa4, 0x0d, 0x06, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20, 0x01, 0x14, 0x00, 0x00, 0x49, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x13, 0x82, 0x60, 0x42, 0x20, 0x4c, 0x08, 0x86, 0x09, 0x01, 0x01, 0x00, 0x89, 0x20, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x32, 0x22, 0x88, 0x09, 0x20, 0x64, 0x85, 0x04, 0x13, 0x23, 0xa4, 0x84,
    0x04, 0x13, 0x23, 0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8c, 0x8c, 0x0b, 0x84, 0xc4, 0x4c, 0x10, 0x9c, 0xc1, 0x08, 0x40, 0x09, 0x00, 0x0a, 0x66, 0x00, 0xe6, 0x08, 0xc0, 0xe0, 0xa6, 0xe1,
    0xf2, 0x27, 0xec, 0x21, 0x24, 0x7f, 0x25, 0xa4, 0x95, 0x98, 0xfc, 0xe2, 0xb6, 0x51, 0x31, 0x0c, 0xc3, 0x40, 0xcc, 0x11, 0x20, 0x64, 0xdc, 0x33, 0x5c, 0xfe, 0x84, 0x3d, 0x84, 0xe4, 0x87, 0x40,
    0x33, 0x2c, 0x04, 0x0a, 0x8e, 0x72, 0x14, 0x04, 0x42, 0x10, 0x06, 0x41, 0x49, 0x59, 0x00, 0x02, 0x21, 0x88, 0x61, 0x18, 0x06, 0x83, 0xa0, 0x65, 0x14, 0xe0, 0xa6, 0xe1, 0xf2, 0x27, 0xec, 0x21,
    0x24, 0x7f, 0x25, 0xa4, 0x95, 0x98, 0xfc, 0xa2, 0xd6, 0x51, 0xd1, 0x34, 0x4d, 0x43, 0x94, 0xc3, 0x21, 0x10, 0x82, 0x30, 0x08, 0x7a, 0xca, 0x02, 0x10, 0x08, 0x41, 0x34, 0x4d, 0xd3, 0x18, 0x04,
    0x45, 0x73, 0x04, 0x41, 0x31, 0x10, 0xc2, 0x20, 0x88, 0x89, 0xa8, 0x9b, 0x86, 0xcb, 0x9f, 0xb0, 0x87, 0x90, 0xfc, 0x95, 0x90, 0x56, 0x62, 0xf2, 0x91, 0xdb, 0x46, 0x05, 0x41, 0x10, 0x04, 0x51,
    0x0e, 0x8b, 0x40, 0x08, 0xc2, 0x20, 0xe8, 0x1a, 0x02, 0x28, 0x44, 0x46, 0x10, 0x04, 0x69, 0x65, 0x01, 0x08, 0x84, 0x20, 0x08, 0x82, 0x20, 0x0c, 0x82, 0xb8, 0xa3, 0x86, 0xcb, 0x9f, 0xb0, 0x87,
    0x90, 0x7c, 0xe9, 0x59, 0x90, 0x69, 0x70, 0xa8, 0x60, 0x21, 0x90, 0x40, 0x10, 0x65, 0xf0, 0x88, 0x8c, 0xbe, 0x81, 0x80, 0xc3, 0xa4, 0x29, 0xa2, 0x84, 0xc9, 0xdf, 0xb0, 0x89, 0xd0, 0x86, 0x21,
    0x22, 0x24, 0x69, 0xa3, 0x8a, 0x82, 0x88, 0x50, 0x40, 0x90, 0x78, 0x9a, 0x34, 0x45, 0x94, 0x30, 0xf9, 0x2b, 0xbc, 0x61, 0x13, 0xa1, 0x0d, 0x43, 0x44, 0x48, 0xd2, 0x46, 0x15, 0x05, 0x11, 0xa1,
    0x80, 0x20, 0x72, 0x8e, 0x00, 0x14, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xae, 0x50, 0x0e, 0x6d, 0xd0, 0x0e,
    0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x78, 0xd0,
    0x06, 0xe9, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x6d, 0x90, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d,
    0x60, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xd0, 0x06, 0xe6, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06,
    0xee, 0x80, 0x07, 0x7a, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x7a, 0x60, 0x07, 0x74, 0x30, 0xe4, 0x09, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0x93,
    0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x90, 0x67, 0x01, 0x02, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0xcf, 0x03, 0x04, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x9e, 0x08, 0x08, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3c, 0x14, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c,
    0x79, 0x2e, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf2, 0x68, 0x40, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xe4, 0xe1, 0x80, 0x00, 0x18, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xc8, 0xf3, 0x01, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x16, 0x08, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14,
    0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x22, 0x4a, 0xa0, 0x08, 0xca, 0xa1, 0x18, 0x46, 0x00, 0xca, 0xa2, 0x10, 0x68, 0x1a, 0x01, 0x20, 0xb3, 0xd0, 0x01, 0x01, 0x11,
    0xa8, 0x9c, 0x01, 0xa0, 0x71, 0x06, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0xc4, 0x8e, 0x0c, 0x6f, 0xec, 0xed, 0x4d, 0x0c, 0x24,
    0xc6, 0xe5, 0xc6, 0x45, 0x66, 0x06, 0x06, 0xc7, 0xe5, 0x06, 0x04, 0xc5, 0x26, 0xa7, 0xac, 0x86, 0xa6, 0x4c, 0x26, 0x07, 0x26, 0x65, 0x43, 0x10, 0x4c, 0x10, 0x08, 0x65, 0x82, 0x40, 0x2c, 0x1b,
    0x84, 0x81, 0x98, 0x20, 0x10, 0xcc, 0x06, 0x61, 0x30, 0x28, 0x8c, 0xcd, 0x4d, 0x10, 0x88, 0x66, 0xc3, 0x80, 0x24, 0xc4, 0x04, 0x81, 0x70, 0x26, 0x08, 0x63, 0x40, 0x11, 0x98, 0x20, 0x10, 0xcf,
    0x86, 0x64, 0x61, 0x9a, 0x65, 0x19, 0x9c, 0x05, 0xd8, 0x10, 0x3c, 0x13, 0x84, 0x32, 0x98, 0x26, 0x08, 0x53, 0xb4, 0x61, 0x59, 0xa2, 0x66, 0x59, 0x06, 0x47, 0x92, 0x24, 0x60, 0x43, 0x30, 0x6d,
    0x20, 0x20, 0x0a, 0x00, 0x26, 0x08, 0x02, 0x40, 0xa2, 0x2d, 0x2c, 0xcd, 0x6d, 0x82, 0x60, 0x06, 0xd2, 0x04, 0x81, 0x80, 0x36, 0x0c, 0xc3, 0x30, 0x6c, 0x20, 0x16, 0x2c, 0xd3, 0x36, 0x14, 0xd6,
    0x05, 0x54, 0x5b, 0x15, 0x36, 0x36, 0xbb, 0x36, 0x97, 0x34, 0xb2, 0x32, 0x37, 0xba, 0x29, 0x41, 0x50, 0x85, 0x0c, 0xcf, 0xc5, 0xae, 0x4c, 0x6e, 0x2e, 0xed, 0xcd, 0x6d, 0x4a, 0x40, 0x34, 0x21,
    0xc3, 0x73, 0xb1, 0x0b, 0x63, 0xb3, 0x2b, 0x93, 0x9b, 0x12, 0x18, 0x75, 0xc8, 0xf0, 0x5c, 0xe6, 0xd0, 0xc2, 0xc8, 0xca, 0xe4, 0x9a, 0xde, 0xc8, 0xca, 0xd8, 0xa6, 0x04, 0x49, 0x19, 0x32, 0x3c,
    0x17, 0xb9, 0xb2, 0xb9, 0xb7, 0x3a, 0xb9, 0xb1, 0xb2, 0xb9, 0x29, 0x01, 0x55, 0x87, 0x0c, 0xcf, 0xa5, 0xcc, 0x8d, 0x4e, 0x2e, 0x0f, 0xea, 0x2d, 0xcd, 0x8d, 0x6e, 0x6e, 0x4a, 0xb0, 0x01, 0x00,
    0x79, 0x18, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73,
    0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b,
    0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20,
    0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61,
    0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87,
    0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98,
    0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61,
    0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b,
    0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x8c, 0xc5, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x78, 0x90, 0x87, 0x72, 0x18, 0x87, 0x74, 0x98, 0x87, 0x72, 0x98,
    0x11, 0x3d, 0xe4, 0x80, 0x0f, 0x6e, 0x40, 0x0e, 0xe2, 0x70, 0x0e, 0x6e, 0x60, 0x0f, 0xe1, 0x20, 0x0f, 0xec, 0x10, 0x0e, 0xf9, 0xf0, 0x0e, 0xf5, 0x40, 0x0f, 0x33, 0x10, 0x88, 0x1c, 0xf0, 0xc1,
    0x0d, 0xe8, 0xa1, 0x1c, 0xda, 0x01, 0x1e, 0x00, 0x71, 0x20, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x56, 0x20, 0x0d, 0x97, 0xef, 0x3c, 0xbe, 0x10, 0x11, 0xc0, 0x44, 0x84, 0x40, 0x33, 0x2c, 0x84,
    0x1d, 0x50, 0xc3, 0xe5, 0x3b, 0x8f, 0xcf, 0x00, 0x0a, 0xd1, 0x39, 0x54, 0xb0, 0x10, 0x7e, 0xa1, 0xe3, 0x36, 0x70, 0x0d, 0x97, 0xef, 0x3c, 0x7e, 0x04, 0x58, 0x1b, 0x55, 0x14, 0x44, 0x54, 0x3a,
    0xc0, 0xe0, 0x17, 0xb5, 0x6e, 0x01, 0xd7, 0x70, 0xf9, 0xce, 0xe3, 0x47, 0x80, 0xb5, 0x51, 0x45, 0x41, 0x44, 0xa5, 0x03, 0x0c, 0x7e, 0x71, 0xdb, 0x66, 0x70, 0x0d, 0x97, 0xef, 0x3c, 0x7e, 0x04,
    0x58, 0x1b, 0x55, 0x14, 0x44, 0x54, 0x3a, 0xc0, 0xe0, 0x23, 0xb7, 0x6d, 0x04, 0xd8, 0x70, 0xf9, 0xce, 0xe3, 0x47, 0x80, 0xb5, 0x51, 0x45, 0x41, 0x44, 0xec, 0xe4, 0x44, 0x84, 0x5f, 0xd4, 0xba,
    0x09, 0x60, 0xc3, 0xe5, 0x3b, 0x8f, 0x1f, 0x01, 0xd6, 0x46, 0x15, 0x05, 0x11, 0xb1, 0x93, 0x13, 0x11, 0x7e, 0x71, 0xdb, 0x86, 0x80, 0x0d, 0x97, 0xef, 0x3c, 0x7e, 0x04, 0x58, 0x1b, 0x55, 0x14,
    0x44, 0xc4, 0x4e, 0x4e, 0x44, 0xf8, 0xc8, 0x6d, 0x5b, 0x42, 0x35, 0x5c, 0xbe, 0xf3, 0xf8, 0xd2, 0xb3, 0x20, 0x53, 0xe7, 0x50, 0xc1, 0x42, 0xf8, 0x85, 0x8e, 0x1b, 0x00, 0xc1, 0x00, 0x48, 0x03,
    0x61, 0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x13, 0x04, 0x41, 0x2c, 0x10, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x64, 0x8c, 0x00, 0x10, 0x31, 0x03, 0x50, 0x96, 0x02, 0x85, 0x29, 0x50,
    0x72, 0xa5, 0x1c, 0x50, 0x20, 0xc5, 0x1c, 0x50, 0x10, 0x05, 0x43, 0x46, 0x19, 0x94, 0x40, 0x79, 0xd0, 0x30, 0x03, 0x40, 0xcd, 0x0c, 0x00, 0x00, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x40, 0x7d,
    0x0b, 0x61, 0x59, 0xd3, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x50, 0x60, 0xc0, 0x40, 0xd7, 0x45, 0x8d, 0x18, 0x28, 0x00, 0x08, 0x82, 0xc1, 0x05, 0x06, 0x4f, 0x80, 0x41, 0x85, 0x35, 0x9a, 0x10,
    0x00, 0xa3, 0x09, 0x42, 0x30, 0x9a, 0x30, 0x08, 0xa3, 0x09, 0xc4, 0x30, 0x62, 0x70, 0x00, 0x20, 0x08, 0x06, 0x1a, 0x19, 0x44, 0xc4, 0x30, 0x62, 0x70, 0x00, 0x20, 0x08, 0x06, 0x5a, 0x19, 0x48,
    0x83, 0x50, 0x42, 0x00, 0x23, 0x06, 0x06, 0x00, 0x82, 0x60, 0xf0, 0x95, 0x81, 0x14, 0x8c, 0x26, 0x04, 0xc0, 0x68, 0x82, 0x10, 0x8c, 0x18, 0x38, 0x00, 0x08, 0x82, 0x01, 0x97, 0x06, 0x59, 0x33,
    0x06, 0x9b, 0x10, 0x6c, 0x9b, 0x14, 0x06, 0x23, 0x06, 0x0a, 0x00, 0x82, 0x60, 0x90, 0xc0, 0x81, 0xc6, 0x58, 0x9b, 0x14, 0x06, 0xa3, 0x09, 0x01, 0x30, 0x9a, 0x20, 0x04, 0x25, 0x04, 0x30, 0x62,
    0xe0, 0x00, 0x20, 0x08, 0x06, 0xcb, 0x1c, 0x74, 0x11, 0xf6, 0x05, 0xd3, 0x34, 0x55, 0x65, 0x30, 0x62, 0xa0, 0x00, 0x20, 0x08, 0x06, 0x8f, 0x1c, 0x78, 0xd0, 0xf5, 0x51, 0x6a, 0x30, 0x9a, 0x10,
    0x00, 0xa3, 0x09, 0x42, 0x30, 0x9a, 0x30, 0x08, 0xa3, 0x09, 0xc4, 0x50, 0x84, 0x00, 0x45, 0x08, 0x30, 0x62, 0xe0, 0x00, 0x20, 0x08, 0x06, 0x11, 0x1e, 0x90, 0x01, 0x16, 0x06, 0x66, 0x20, 0x04,
    0x59, 0xd6, 0xc5, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE cs_denorm_fp16_fp64_fp32_ftz_dxil = { cs_denorm_fp16_fp64_fp32_ftz_code_dxil, sizeof(cs_denorm_fp16_fp64_fp32_ftz_code_dxil) };
#undef UNUSED_ARRAY_ATTR
