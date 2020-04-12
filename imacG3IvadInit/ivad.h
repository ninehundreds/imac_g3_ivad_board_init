
//properties register address
byte PROPERTY = 0x46;

//register offset constants
const byte PARALLELOGRAM  = 0x0f;
const byte KEYSTONE       = 0x0b;
const byte ROTATION       = 0x12;
const byte PINCUSHION     = 0x0c;
const byte HORIZONTAL_POS = 0x07;
const byte VERTICAL_POS   = 0x09;
const byte CONTRAST       = 0x00;
const byte HEIGHT         = 0x08;
const byte BRIGHTNESS     = 0x11;
const byte WIDTH          = 0x0d;


const byte VERTICAL_POS_VAL[128] = {
  // Low to High
  0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x7a, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 
  0x73, 0x72, 0x71, 0x70, 0x6f, 0x6e, 0x6d, 0x6c, 0x6b, 0x6a, 0x69, 0x68, 
  0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, 0x5f, 0x5e, 0x5d, 0x5c, 
  0x5b, 0x5a, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50, 
  0x4f, 0x4e, 0x4d, 0x4c, 0x4b, 0x4a, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 
  0x43, 0x42, 0x41, 0x40, 0x3f, 0x3e, 0x3d, 0x3c, 0x3b, 0x3a, 0x39, 0x38, 
  0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, 0x2f, 0x2e, 0x2d, 0x2c, 
  0x2b, 0x2a, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20, 
  0x1f, 0x1e, 0x1d, 0x1c, 0x1b, 0x1a, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 
  0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08, 
  0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00
};

const byte CONTRAST_VAL[73] = {
  0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0,
  0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc,
  0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8,
  0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4,
  0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0,
  0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfc, 0xfd,
  0xff
};

const byte HORIZONTAL_POS_VAL[128] = {
  0xff, 0xfe, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 0xf8, 0xf7, 0xf6, 0xf5, 0xf4,
  0xf3, 0xf2, 0xf1, 0xf0, 0xef, 0xee, 0xed, 0xec, 0xeb, 0xea, 0xe9, 0xe8,
  0xe7, 0xe6, 0xe5, 0xe4, 0xe3, 0xe2, 0xe1, 0xe0, 0xdf, 0xde, 0xdd, 0xdc,
  0xdb, 0xda, 0xd9, 0xd8, 0xd7, 0xd6, 0xd5, 0xd4, 0xd3, 0xd2, 0xd1, 0xd0,
  0xcf, 0xce, 0xcd, 0xcc, 0xcb, 0xca, 0xc9, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc3, 0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb, 0xba, 0xb9, 0xb8,
  0xb7, 0xb6, 0xb5, 0xb4, 0xb3, 0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac,
  0xab, 0xaa, 0xa9, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4, 0xa3, 0xa2, 0xa1, 0xa0,
  0x9f, 0x9e, 0x9d, 0x9c, 0x9b, 0x9a, 0x99, 0x98, 0x97, 0x96, 0x95, 0x94,
  0x93, 0x92, 0x91, 0x90, 0x8f, 0x8e, 0x8d, 0x8c, 0x8b, 0x8a, 0x89, 0x88,
  0x87, 0x86, 0x85, 0x84, 0x83, 0x82, 0x81, 0x80
};

const byte HEIGHT_VAL[128] = {
  0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b,
  0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
  0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3,
  0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
  0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb,
  0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
  0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3,
  0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
  0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb,
  0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
  0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

const byte WIDTH_VAL[128] = {
  // thinnest to thickest
  0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x7a, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 
  0x73, 0x72, 0x71, 0x70, 0x6f, 0x6e, 0x6d, 0x6c, 0x6b, 0x6a, 0x69, 0x68, 
  0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, 0x5f, 0x5e, 0x5d, 0x5c, 
  0x5b, 0x5a, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50, 
  0x4f, 0x4e, 0x4d, 0x4c, 0x4b, 0x4a, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 
  0x43, 0x42, 0x41, 0x40, 0x3f, 0x3e, 0x3d, 0x3c, 0x3b, 0x3a, 0x39, 0x38, 
  0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, 0x2f, 0x2e, 0x2d, 0x2c, 
  0x2b, 0x2a, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20, 
  0x1f, 0x1e, 0x1d, 0x1c, 0x1b, 0x1a, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 
  0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08, 
  0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00
};

const byte BRIGHTNESS_VAL[11] = {
  // Dim to Bright
  0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a
};

const byte PARALLELOGRAM_VAL[128]={ // From left to right    
  0xff, 0xfe, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 0xf8, 0xf7, 0xf6, 0xf5, 0xf4,
  0xf3, 0xf2, 0xf1, 0xf0, 0xef, 0xee, 0xed, 0xec, 0xeb, 0xea, 0xe9, 0xe8,
  0xe7, 0xe6, 0xe5, 0xe4, 0xe3, 0xe2, 0xe1, 0xe0, 0xdf, 0xde, 0xdd, 0xdc,
  0xdb, 0xda, 0xd9, 0xd8, 0xd7, 0xd6, 0xd5, 0xd4, 0xd3, 0xd2, 0xd1, 0xd0,
  0xcf, 0xce, 0xcd, 0xcc, 0xcb, 0xca, 0xc9, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc3, 0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb, 0xba, 0xb9, 0xb8,
  0xb7, 0xb6, 0xb5, 0xb4, 0xb3, 0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac,
  0xab, 0xaa, 0xa9, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4, 0xa3, 0xa2, 0xa1, 0xa0,
  0x9f, 0x9e, 0x9d, 0x9c, 0x9b, 0x9a, 0x99, 0x98, 0x97, 0x96, 0x95, 0x94,
  0x93, 0x92, 0x91, 0x90, 0x8f, 0x8e, 0x8d, 0x8c, 0x8b, 0x8a, 0x89, 0x88,
  0x87, 0x86, 0x85, 0x84, 0x83, 0x82, 0x81, 0x80
};


const byte KEYSTONE_VAL[128]={ // Thin top to thin bottom
  0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b,
  0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
  0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3,
  0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
  0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb,
  0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
  0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3,
  0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
  0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb,
  0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
  0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};

const byte ROTATION_VAL[128]={ // From left to right
  0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x7a, 0x79, 0x78, 0x77, 0x76, 0x75, 0x74, 
  0x73, 0x72, 0x71, 0x70, 0x6f, 0x6e, 0x6d, 0x6c, 0x6b, 0x6a, 0x69, 0x68, 
  0x67, 0x66, 0x65, 0x64, 0x63, 0x62, 0x61, 0x60, 0x5f, 0x5e, 0x5d, 0x5c, 
  0x5b, 0x5a, 0x59, 0x58, 0x57, 0x56, 0x55, 0x54, 0x53, 0x52, 0x51, 0x50, 
  0x4f, 0x4e, 0x4d, 0x4c, 0x4b, 0x4a, 0x49, 0x48, 0x47, 0x46, 0x45, 0x44, 
  0x43, 0x42, 0x41, 0x40, 0x3f, 0x3e, 0x3d, 0x3c, 0x3b, 0x3a, 0x39, 0x38, 
  0x37, 0x36, 0x35, 0x34, 0x33, 0x32, 0x31, 0x30, 0x2f, 0x2e, 0x2d, 0x2c, 
  0x2b, 0x2a, 0x29, 0x28, 0x27, 0x26, 0x25, 0x24, 0x23, 0x22, 0x21, 0x20, 
  0x1f, 0x1e, 0x1d, 0x1c, 0x1b, 0x1a, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 
  0x13, 0x12, 0x11, 0x10, 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08, 
  0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00
};

const byte PINCUSHION_VAL[128]={ // From left to right
  0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b,
  0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
  0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3,
  0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf,
  0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb,
  0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7,
  0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3,
  0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf,
  0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb,
  0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
  0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff
};



//this is the EDID information that is sent to the computer that requests it.
//this edid was created by Rocky Hill
//const byte edid[128] =
//{
//
//  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x06, 0x10, 0x74, 0x61,
//  0xed, 0x5f, 0x84, 0x00, 0x06, 0x1e, 0x01, 0x03, 0x6d, 0x1a, 0x14, 0x78,
//  0xea, 0x5e, 0xc0, 0xa4, 0x59, 0x4a, 0x98, 0x25, 0x20, 0x50, 0x54, 0x00,
//  0x00, 0x00, 0x61, 0x4f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
//  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xc3, 0x1e, 0x00, 0x30, 0x41, 0x00,
//  0x34, 0x30, 0x14, 0x60, 0xd3, 0x00, 0x0a, 0xc8, 0x10, 0x00, 0x00, 0x1e,
//  0x5f, 0x18, 0x20, 0xf0, 0x30, 0x58, 0x2c, 0x20, 0x15, 0x50, 0x93, 0x00,
//  0xd0, 0x9c, 0x00, 0x00, 0x00, 0x18, 0x7d, 0x13, 0x80, 0xc0, 0x20, 0xe0,
//  0x22, 0x10, 0x11, 0x40, 0x13, 0x00, 0xa6, 0x7d, 0x00, 0x00, 0x00, 0x18,
//  0x00, 0x00, 0x00, 0xfd, 0x00, 0x3b, 0x3d, 0x3a, 0x3d, 0x08, 0x00, 0x00,
//  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19
//};

//edid1
// extracted from an iMac and given by user oshimai
//https://forums.macrumors.com/threads/imac-g3-mod-video-connector.1712095/post-28356515

//const byte edid[128]
//{
//0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x10,0x52,0x03,0x01,0x01,0x01,0x01,
//0x01,0x06,0x01,0x01,0x28,0x26,0x1D,0x86,0xE8,0x01,0xC9,0xA0,0x57,0x49,0x98,0x27,
//0x12,0x48,0x4C,0x3F,0xFF,0x80,0x01,0x01,0x31,0x59,0x45,0x59,0x81,0x59,0x61,0x59,
//0xA9,0x4F,0x01,0x01,0x01,0x01,0x10,0x0E,0x80,0xC0,0x20,0xE0,0x1D,0x10,0x38,0x38,
//0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0xF9,0x15,0x20,0xF8,0x30,0x58,0x1F,0x20,
//0x20,0x40,0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0x00,0x00,0x00,0xFD,0x00,0x30,
//0x78,0x1E,0x5E,0xFF,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,
//0x00,0x41,0x70,0x6C,0x56,0x69,0x73,0x69,0x6F,0x6E,0x38,0x35,0x30,0x0A,0x00,0xA4
//};

//edid2
// extracted from an iMac and given by user oshimai
//https://forums.macrumors.com/threads/imac-g3-mod-video-connector.1712095/post-28356515

//const byte edid[128]
//{
//0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x10,0xEE,0x02,0x01,0x01,0x01,0x01,
//0x01,0x01,0x01,0x01,0x28,0x20,0x18,0x86,0xE8,0x01,0xC9,0xA0,0x57,0x49,0x98,0x27,
//0x12,0x48,0x4C,0x35,0x6B,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
//0x01,0x01,0x01,0x01,0x01,0x01,0x10,0x0E,0x80,0xC0,0x20,0xE0,0x1D,0x10,0x38,0x38,
//0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0x10,0x0E,0x80,0xC0,0x20,0xE0,0x1D,0x10,
//0x38,0x38,0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0x00,0x00,0x00,0xFD,0x00,0x30,
//0x78,0x1E,0x53,0xFF,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,
//0x00,0x41,0x70,0x6C,0x56,0x69,0x73,0x69,0x6F,0x6E,0x37,0x35,0x30,0x20,0x00,0xA9
//};

//edid3
// extracted from an iMac and given by user oshimai
//https://forums.macrumors.com/threads/imac-g3-mod-video-connector.1712095/post-28356515

//const byte edid[128]
//{
//0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x10,0x10,0x92,0x01,0x01,0x01,0x01,
//0x00,0x08,0x01,0x01,0x68,0x27,0x1D,0x86,0xE8,0x0D,0xC9,0xA0,0x57,0x47,0x98,0x27,
//0x12,0x48,0x4C,0x35,0xEF,0x80,0x31,0x59,0x45,0x59,0x61,0x59,0x81,0x80,0x81,0x99,
//0xA9,0x40,0xA9,0x4F,0xA9,0x59,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
//0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
//0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x00,0x00,0x00,0xFD,0x00,0x30,
//0x78,0x1E,0x6B,0x17,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,
//0x00,0x53,0x74,0x75,0x64,0x69,0x6F,0x44,0x73,0x70,0x6C,0x79,0x32,0x31,0x00,0x0F
//};

//edid 4
// extracted from an iMac and given by user oshimai
//https://forums.macrumors.com/threads/imac-g3-mod-video-connector.1712095/post-28358458

//const byte edid[128]
//{
//0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x10,0x02,0x9D,0x01,0x01,0x01,0x01,
//0x00,0x08,0x01,0x01,0x68,0x20,0x18,0x8C,0xE8,0x04,0x89,0xA0,0x57,0x4A,0x9B,0x26,
//0x12,0x48,0x4C,0x31,0x2B,0x80,0x31,0x59,0x45,0x59,0x61,0x59,0xA9,0x40,0x01,0x01,
//0x01,0x01,0x01,0x01,0x01,0x01,0x60,0x16,0x40,0x40,0x31,0x70,0x2B,0x20,0x20,0x40,
//0x23,0x00,0x38,0xEA,0x10,0x00,0x00,0x18,0x48,0x3F,0x40,0x32,0x62,0xB0,0x32,0x40,
//0x40,0xC2,0x13,0x00,0x38,0xEA,0x10,0x00,0x00,0x18,0x00,0x00,0x00,0xFD,0x00,0x30,
//0xA0,0x1E,0x55,0x10,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,
//0x00,0x53,0x74,0x75,0x64,0x69,0x6F,0x44,0x73,0x70,0x6C,0x79,0x31,0x37,0x00,0xBE
//};


//edid 5
// extracted from an iMac and given by user oshimai
//https://forums.macrumors.com/threads/imac-g3-mod-video-connector.1712095/post-28358458

//const byte edid[128]
//{
//0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x10,0x52,0x03,0x01,0x01,0x01,0x01,
//0x01,0x06,0x01,0x01,0x28,0x26,0x1D,0x28,0xE8,0x01,0xC9,0xA0,0x57,0x49,0x98,0x27,
//0x12,0x48,0x4C,0x3F,0xFF,0x80,0x01,0x01,0x31,0x59,0x45,0x59,0x81,0x59,0x61,0x59,
//0xA9,0x4F,0x01,0x01,0x01,0x01,0x10,0x0E,0x80,0xC0,0x20,0xE0,0x1D,0x10,0x38,0x38,
//0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0xF9,0x15,0x20,0xF8,0x30,0x58,0x1F,0x20,
//0x20,0x40,0x13,0x00,0x7C,0x22,0x11,0x00,0x00,0x1E,0x00,0x00,0x00,0xFD,0x00,0x30,
//0x78,0x1E,0x5E,0xFF,0x00,0x0A,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0xFC,
//0x00,0x41,0x70,0x6C,0x56,0x69,0x73,0x69,0x6F,0x6E,0x38,0x35,0x30,0x0A,0x00,0x02
//};
