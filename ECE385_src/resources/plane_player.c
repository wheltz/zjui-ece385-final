#include "plane_player.h"

const sprite_data_t plane_player_seq[] = {
		{48, 32, plane_player0},
		{48, 32, plane_player1},
		{48, 32, plane_player2},
		{48, 32, plane_player1},
};

const uint16_t plane_player0[48 * 32] __attribute__((section(".resources"))) = {
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xe651,0xfffe,0xbd4f,0xeed8,0xffff,0xfffb,0xfff5,0xce2c,0xa3c7,0xfe8b,0xbc8d,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcce6,0xedca,0xef7b,0xc5b2,0xc52f,0xc5b4,0xc592,0xbd6c,0x9c26,0xa385,0xe589,0xab48,0x8249,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xd544,0xdd67,0x93c8,0x940b,0x9366,0x8305,0x9369,0x7ac6,0x7284,0x7222,0x7a83,0x8224,0x6125,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x7bee,0x736a,0x7bac,0x7ae9,0xd5a1,0xd5c3,0xe6b1,0xb52c,0xde77,0xffff,0xfffa,0xfffb,0xd651,0xa3a7,0xbc6a,0x4102,0x61c2,0x9c6f,0x9bf1,0x7b0d,0x79ae,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0x4a29,0x62eb,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xa531,0xc636,0xad2f,0x948b,0x7ae8,0xb4a2,0xce05,0xe64b,0xa446,0xc58f,0xf777,0xf72e,0xf751,0xbd4a,0x9b66,0xccaa,0x5162,0x6a02,0xa4cd,0xce35,0xbdb2,0x72a9,0x93af,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x808f,0x90b2,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0x9450,0xb4f1,0x6aa7,0x8c2c,0xb5af,0xd66e,0xbda9,0x8c47,0x83e8,0x8428,0xb56a,0xd6aa,0xd688,0xce48,0xce68,0xc627,0xc5e5,0xb524,0xace4,0xdeaa,0xe70a,0xe70a,0xce48,0xace6,0x4982,0x72c3,0x93a4,0x93e4,0x93c3,0x8b61,0x8385,0x8367,0x6263,0x5a84,0x5264,0x6ae4,0x72e3,0x7b04,0x8be8,0x83ac,0xb553,0x6aea,0x8acf,0xf81f,0xf81f,
		0xf81f,0xf81f,0xb235,0x83cc,0x9c6d,0x9429,0xbdca,0xce6a,0xdea7,0xb564,0x9468,0x8429,0x8c69,0xbda8,0xcea4,0xc625,0xbe24,0xa504,0x9ca4,0x9cc4,0xb524,0xb4e5,0xef2d,0xef6d,0xef4b,0xdea9,0xbda8,0x4122,0x6243,0x6a83,0x72c3,0x7b03,0x82e2,0x8327,0x72a4,0x6283,0x5aa5,0x5285,0x6b05,0x7b23,0x7ac2,0x7b03,0x8365,0xa4ce,0x7328,0x5969,0x824e,0xf81f,
		0xf81f,0xf81f,0x83c4,0x9422,0xbda4,0xc5e4,0xbda3,0xbd83,0xbda5,0xa525,0x9469,0x8c69,0x948a,0xb586,0xc604,0xbdc5,0xbd85,0x8c24,0x83a3,0x8384,0xac85,0xcdcb,0xf74d,0xf76d,0xeeeb,0xde89,0xcde8,0x4101,0x51a2,0x5a02,0x6242,0x72a2,0x8b23,0x8303,0x82e2,0x6ac3,0x5285,0x5244,0x6ae5,0x7b23,0x7ae3,0x7ae2,0x7ac2,0x6a42,0x6262,0x51e2,0x51a6,0xf81f,
		0xf81f,0xf81f,0xa482,0xace3,0xb523,0xb543,0xb564,0xb584,0xbd83,0xa505,0x9489,0x8c69,0x94aa,0xb586,0xc604,0xbdc5,0xc5a5,0xad04,0xa464,0x9c44,0xbd27,0xe6d1,0xe750,0xef50,0xe6ed,0xd66a,0xce09,0x6202,0x4921,0x72a2,0x7ac3,0x8303,0x8b03,0x8b23,0x82e2,0x6aa3,0x5264,0x4a44,0x62c4,0x7b23,0x82e1,0x7b03,0x7ae2,0x7aa2,0x6a62,0x6222,0x51e2,0xf81f,
		0xaced,0x93e3,0x9c23,0x9c23,0x9405,0x6cb1,0x9426,0x9446,0x74f1,0xaca5,0x9468,0x8c29,0x9469,0xad06,0xbd83,0x9409,0x5203,0x6a62,0xa424,0xac24,0x94cf,0xbe93,0xbf12,0xbef1,0xb66f,0xa5ce,0x9d4e,0x7369,0x49c7,0x61c2,0x82c3,0x7284,0x5a86,0x3921,0x7242,0x6a83,0x4a23,0x4a03,0x5a83,0x7ac2,0x64b3,0x7ac5,0x72e6,0x6430,0x6a63,0x5a02,0x51e3,0x49a3,
		0xa4ab,0x9c23,0x9c43,0x9c43,0x9404,0x64f4,0x5d35,0x6535,0x6514,0xaca4,0x9467,0x8c27,0x8c48,0xad05,0xbd43,0xde93,0xad08,0x6a62,0x7283,0x9bc4,0xcdc9,0xf70d,0xf70c,0xeeea,0xde47,0xd5c6,0xc525,0x8303,0x4943,0x61e2,0x8283,0xb52c,0xc60b,0x7b83,0x2881,0x51e3,0x4a23,0x4a03,0x5a63,0x7aa2,0x5d16,0x64d4,0x5cf6,0x5c92,0x7284,0x6222,0x6202,0x51a3,
		0xa4ec,0x9402,0xa443,0xa463,0xa463,0x8c49,0x463f,0x465f,0x9469,0xa4a5,0x83e8,0x7ba8,0x83c8,0x9466,0xa487,0x83e9,0x83c6,0x39c4,0x4943,0x5142,0x8c0c,0x7e35,0x76b9,0x6e79,0x6df7,0x6577,0x6557,0x536f,0x4965,0x69e2,0x82e5,0x6b28,0xbdc7,0x4a04,0x49a4,0x28a2,0x3163,0x39c3,0x5a63,0x8303,0x7349,0x361f,0x3e1e,0x72e6,0x7a62,0x7243,0x6a42,0x51a2,
		0xad0d,0x93c2,0xa443,0xa443,0x9425,0x6537,0x6cd3,0x6cf3,0x6536,0xa484,0x83c7,0x7368,0x7b88,0x83c6,0x6b07,0x7ba6,0x7b43,0x3143,0x4983,0x5161,0x5aee,0x5dd9,0x569d,0x565c,0x55dc,0x559b,0x4d9b,0x43d4,0x41ea,0x69e2,0x6a85,0x62a6,0xa4e4,0x41a2,0x41c4,0x30e2,0x3122,0x3983,0x5a43,0x7aa1,0x5538,0x6451,0x5cb3,0x5cb3,0x7284,0x7263,0x7222,0x51c2,
		0x9c48,0x9c4a,0x93e3,0x9c02,0xa443,0x9c23,0xaca3,0xb4c3,0xac63,0x9c65,0x7b87,0x6b27,0x7347,0x9c65,0x9c03,0x8be3,0x6a61,0x3901,0x4922,0x5982,0xa3c4,0xd5c5,0xd5c6,0xd5c6,0xc545,0xbcc5,0xb4a4,0x8ae2,0x5121,0x7203,0x8ac3,0x8ba3,0x8362,0x51e1,0x2881,0x30c1,0x3963,0x3983,0x5223,0x7ac3,0x82a2,0x8aa2,0x82a2,0x7262,0x7262,0x6a23,0x6a02,0x5a25,
		0x93e7,0x93e8,0x93c3,0x9402,0xa423,0xa462,0xaca4,0xacc4,0xb4c3,0x9425,0x7b86,0x6b06,0x6b47,0x9c25,0xbce4,0x5a43,0x3922,0x30c1,0x5162,0x5982,0xac65,0xd5c6,0xc587,0xc587,0xbd06,0xb4a6,0xac86,0x82e3,0x4922,0x69e2,0x9303,0x6a22,0x49e4,0x28a1,0x30c1,0x30c1,0x3983,0x39a2,0x5223,0x72a3,0x8ac2,0x82c3,0x7ac2,0x7a62,0x7242,0x6a02,0x61e2,0x5a25,
		0xf81f,0x8348,0x8302,0x8b62,0x93e3,0x9c03,0x9c43,0xa443,0xa423,0x93e4,0x7345,0x62c6,0x62e6,0x8bc4,0xac44,0x93a5,0x4983,0x5161,0x9b64,0x9b44,0xbce5,0xcd46,0xb4c5,0xb4c5,0xac65,0xa425,0xa405,0x7263,0x40e1,0x59a2,0x8ac3,0x8aa3,0x49e5,0x38c1,0x61c2,0x6263,0x41c3,0x3183,0x4a24,0x72e6,0x82a2,0x7a83,0x7a83,0x6a22,0x6a22,0x59c2,0x4961,0xa9f3,
		0xf81f,0xf81f,0x72c5,0x7ae2,0x9382,0x93c3,0x93a3,0x93c3,0x93c3,0x8384,0x7325,0x62a4,0x6ae5,0x8ba4,0xac23,0x8325,0x4163,0x5141,0x9b64,0x9344,0xbcc5,0xcdab,0xbc65,0xb465,0xac25,0xa3e5,0xa3c5,0x7264,0x38c1,0x5142,0x7a43,0x7a62,0x39a5,0x30c1,0x61a2,0x6243,0x41c2,0x3982,0x5223,0x7283,0x7a82,0x7242,0x6a43,0x61e2,0x59c2,0x5181,0x61c7,0xf81f,
		0xf81f,0xf81f,0xb9f6,0x7308,0x72a3,0x82e3,0x8322,0x8b63,0x8b43,0x8344,0x7324,0x62a4,0x6ae4,0x8b84,0xa403,0x8304,0x59e3,0x59a2,0x8b03,0x9344,0xbcc4,0xacca,0x9364,0x9344,0x8b24,0x8303,0x8324,0x61e4,0x38a1,0x5142,0x7222,0x7242,0x51c4,0x4101,0x5962,0x5a03,0x49e3,0x41c3,0x5a43,0x6a42,0x7243,0x6203,0x59c2,0x5182,0x51c3,0x8a8f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x49c6,0x3102,0x5982,0x59c1,0x5a22,0x41a2,0x41e2,0x6a62,0x82e3,0x82e3,0x8b03,0x8b03,0x7aa3,0x3902,0x28c1,0x1000,0x30a1,0x30a1,0x30a1,0x30a1,0x3082,0x1841,0x2081,0x30c1,0x7223,0x7243,0x7223,0x7243,0x7223,0x49c2,0x2941,0x2921,0x3982,0x4101,0x3901,0x28c2,0x81ef,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x20c3,0x3902,0x49a4,0x41e4,0x3983,0x39c3,0x4983,0x5162,0x5182,0x5182,0x5982,0x4122,0x2061,0x30e1,0x1861,0x4902,0x4902,0x4902,0x4101,0x40e2,0x1881,0x1861,0x1041,0x3901,0x4922,0x4922,0x4122,0x38e1,0x3122,0x2942,0x2943,0x3984,0x3964,0x28e2,0x79af,0xf83f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x5ac9,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xc0b9,0x1062,0x3165,0x20e4,0x28a1,0x59a3,0x7a83,0x51a2,0x38c2,0x38e2,0x38e2,0x38e1,0x38c1,0x2081,0x1061,0x1020,0x800,0x20e3,0x20a2,0x800,0xaaf5,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x61a9,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x5aa8,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x2904,0x41a6,0x2904,0x4164,0x6203,0x82e3,0x7283,0x30c1,0x30a1,0x30c1,0x30c1,0x30c1,0x28c1,0x1861,0x1882,0x2924,0x3103,0x20c3,0x60ec,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x59a8,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xba37,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x6b4d,0x7bcf,0xf81f,0x818b,0x8b43,0x8b23,0x7a83,0x7283,0x6a22,0x61e2,0x59a2,0x28a1,0x1020,0x91d1,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xe07b,0x9383,0x93c5,0x9384,0x9323,0x7263,0x82c3,0x8ae3,0x30c1,0x1820,0xe09c,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8303,0x9be5,0x7ac3,0xa489,0xde69,0x28c1,0x4122,0x20a1,0x2082,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8324,0x93c3,0x7282,0xa487,0x8c06,0x38e2,0x28a2,0x1860,0x28c3,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf83e,0x59e3,0x8b84,0x8303,0x8b63,0x7b48,0x5205,0x4161,0x39a5,0x49e6,0x1841,0x2081,0x48a6,0x5088,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf79d,0x9c6f,0x49a2,0x8364,0x8323,0x7ac2,0x7b8c,0x5205,0x5206,0x6288,0x62e9,0x1841,0x28a1,0x28c1,0x2060,0x9bf0,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf83f,0xfffe,0x944e,0x4142,0x8343,0x8323,0x7aa3,0x5b4a,0x63cc,0x538e,0x2a8b,0x29a7,0x28a1,0x30e1,0x3102,0x1020,0x8c0d,0xde56,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf85f,0xfffb,0x8bec,0x3921,0x8363,0x8343,0x7aa2,0x3bd1,0x5537,0x44b4,0x4cf7,0x2a8c,0x30c1,0x28a1,0x4182,0x1860,0x7b29,0xce14,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xc550,0x8348,0x4161,0x7b23,0x8343,0x7262,0x9c0c,0x7ac5,0x82e5,0x7307,0x8bcd,0x51e2,0x5a21,0x51e2,0x3101,0x72e7,0xa411,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcdb2,0x838b,0x3942,0x7b64,0x8364,0x72e5,0xd6ba,0x41c7,0x4184,0x8472,0xdeba,0x5a44,0x62a4,0x5a43,0x2902,0x7b49,0xbc34,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
};
const uint16_t plane_player1[48 * 32] __attribute__((section(".resources"))) = {
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xe651,0xfffe,0xbd4f,0xeed8,0xffff,0xfffb,0xfff5,0xce2c,0xa3c7,0xfe8b,0xbc8d,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcce6,0xedca,0xef7b,0xc5b2,0xc52f,0xc5b4,0xc592,0xbd6c,0x9c26,0xa385,0xe589,0xab48,0x99ed,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xd544,0xdd67,0x93c8,0x940b,0x9366,0x8305,0x9369,0x7ac6,0x7284,0x7222,0x7a83,0x8224,0x7109,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x7bee,0x736a,0x7bac,0x7ae9,0xd5a1,0xd5c3,0xe6b1,0xb52c,0xde77,0xffff,0xfffa,0xfffb,0xd651,0xa3a7,0xbc6a,0x4102,0x61c2,0xa430,0xab33,0x9290,0xb0f5,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0x4a29,0x62eb,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xa531,0xc636,0xad2f,0x948b,0x7ae8,0xb4a2,0xce05,0xe64b,0xa446,0xc58f,0xf777,0xf72e,0xf751,0xbd4a,0x9b66,0xccaa,0x5162,0x6a02,0xa4cd,0xce35,0xbdb2,0x7a8a,0xa331,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0x9450,0xb4f1,0x6aa7,0x8c2c,0xb5af,0xd66e,0xbda9,0x8c47,0x83e8,0x8428,0xb56a,0xd6aa,0xd688,0xce48,0xce68,0xc627,0xc5e5,0xb524,0xace4,0xdeaa,0xe70a,0xe70a,0xce48,0xace6,0x4982,0x72c3,0x93a4,0x93e4,0x93c3,0x8b61,0x8385,0x8367,0x6263,0x5a84,0x5264,0x6ae4,0x72e3,0x7b04,0x8be8,0x8b6d,0xb553,0x6aea,0xaa33,0xf81f,0xf81f,
		0xf81f,0xf81f,0xc1d7,0x83cc,0x9c6d,0x9429,0xbdca,0xce6a,0xdea7,0xb564,0x9468,0x8429,0x8c69,0xbda8,0xcea4,0xc625,0xbe24,0xa504,0x9ca4,0x9cc4,0xb524,0xb4e5,0xef2d,0xef6d,0xef4b,0xdea9,0xbda8,0x4122,0x6243,0x6a83,0x72c3,0x7b03,0x82e2,0x8327,0x72a4,0x6283,0x5aa5,0x5285,0x6b05,0x7b23,0x7ac2,0x7b03,0x8365,0xa4ce,0x7328,0x810e,0xa994,0xf81f,
		0xf81f,0xf81f,0x83c4,0x9422,0xbda4,0xc5e4,0xbda3,0xbd83,0xbda5,0xa525,0x9469,0x8c69,0x948a,0xb586,0xc604,0xbdc5,0xbd85,0x8c24,0x83a3,0x8384,0xac85,0xcdcb,0xf74d,0xf76d,0xeeeb,0xde89,0xcde8,0x4101,0x51a2,0x5a02,0x6242,0x72a2,0x8b23,0x8303,0x82e2,0x6ac3,0x5285,0x5244,0x6ae5,0x7b23,0x7ae3,0x7ae2,0x7ac2,0x6a42,0x6262,0x51e2,0x6189,0xf81f,
		0xf81f,0xf81f,0xa482,0xace3,0xb523,0xb543,0xb564,0xb584,0xbd83,0xa505,0x9489,0x8c69,0x94aa,0xb586,0xc604,0xbdc5,0xc5a5,0xad04,0xa464,0x9c44,0xbd27,0xe6d1,0xe750,0xef50,0xe6ed,0xd66a,0xce09,0x6202,0x4921,0x72a2,0x7ac3,0x8303,0x8b03,0x8b23,0x82e2,0x6aa3,0x5264,0x4a44,0x62c4,0x7b23,0x82e1,0x7b03,0x7ae2,0x7aa2,0x6a62,0x6222,0x51e2,0xf81f,
		0xaced,0x93e3,0x9c23,0x9c23,0x9405,0x6cb1,0x9426,0x9446,0x74f1,0xaca5,0x9468,0x8c29,0x9469,0xad06,0xbd83,0x9409,0x5203,0x6a62,0xa424,0xac24,0x94cf,0xbe93,0xbf12,0xbef1,0xb66f,0xa5ce,0x9d4e,0x7369,0x49c7,0x61c2,0x82c3,0x7284,0x5a86,0x3921,0x7242,0x6a83,0x4a23,0x4a03,0x5a83,0x7ac2,0x64b3,0x7ac5,0x72e6,0x6430,0x6a63,0x5a02,0x51e3,0x51a3,
		0xa4ab,0x9c23,0x9c43,0x9c43,0x9404,0x64f4,0x5d35,0x6535,0x6514,0xaca4,0x9467,0x8c27,0x8c48,0xad05,0xbd43,0xde93,0xad08,0x6a62,0x7283,0x9bc4,0xcdc9,0xf70d,0xf70c,0xeeea,0xde47,0xd5c6,0xc525,0x8303,0x4943,0x61e2,0x8283,0xb52c,0xc60b,0x7b83,0x2881,0x51e3,0x4a23,0x4a03,0x5a63,0x7aa2,0x5d16,0x64d4,0x5cf6,0x5c92,0x7284,0x6222,0x6202,0x51a3,
		0xa4ec,0x9402,0xa443,0xa463,0xa463,0x8c49,0x463f,0x465f,0x9469,0xa4a5,0x83e8,0x7ba8,0x83c8,0x9466,0xa487,0x83e9,0x83c6,0x39c4,0x4943,0x5142,0x8c0c,0x7e35,0x76b9,0x6e79,0x6df7,0x6577,0x6557,0x536f,0x4965,0x69e2,0x82e5,0x6b28,0xbdc7,0x4a04,0x49a4,0x28a2,0x3163,0x39c3,0x5a63,0x8303,0x7349,0x361f,0x3e1e,0x72e6,0x7a62,0x7243,0x6a42,0x51a2,
		0xad0d,0x93c2,0xa443,0xa443,0x9425,0x6537,0x6cd3,0x6cf3,0x6536,0xa484,0x83c7,0x7368,0x7b88,0x83c6,0x6b07,0x7ba6,0x7b43,0x3143,0x4983,0x5161,0x5aee,0x5dd9,0x569d,0x565c,0x55dc,0x559b,0x4d9b,0x43d4,0x41ea,0x69e2,0x6a85,0x62a6,0xa4e4,0x41a2,0x41c4,0x30e2,0x3122,0x3983,0x5a43,0x7aa1,0x5538,0x6451,0x5cb3,0x5cb3,0x7284,0x7263,0x7222,0x51c2,
		0x9c48,0x9c4a,0x93e3,0x9c02,0xa443,0x9c23,0xaca3,0xb4c3,0xac63,0x9c65,0x7b87,0x6b27,0x7347,0x9c65,0x9c03,0x8be3,0x6a61,0x3901,0x4922,0x5982,0xa3c4,0xd5c5,0xd5c6,0xd5c6,0xc545,0xbcc5,0xb4a4,0x8ae2,0x5121,0x7203,0x8ac3,0x8ba3,0x8362,0x51e1,0x2881,0x30c1,0x3963,0x3983,0x5223,0x7ac3,0x82a2,0x8aa2,0x82a2,0x7262,0x7262,0x6a23,0x6a02,0x5a25,
		0x93e7,0x93e8,0x93c3,0x9402,0xa423,0xa462,0xaca4,0xacc4,0xb4c3,0x9425,0x7b86,0x6b06,0x6b47,0x9c25,0xbce4,0x5a43,0x3922,0x30c1,0x5162,0x5982,0xac65,0xd5c6,0xc587,0xc587,0xbd06,0xb4a6,0xac86,0x82e3,0x4922,0x69e2,0x9303,0x6a22,0x49e4,0x28a1,0x30c1,0x30c1,0x3983,0x39a2,0x5223,0x72a3,0x8ac2,0x82c3,0x7ac2,0x7a62,0x7242,0x6a02,0x61e2,0x5a25,
		0xf81f,0xf81f,0x8302,0x8b62,0x93e3,0x9c03,0x9c43,0xa443,0xa423,0x93e4,0x7345,0x62c6,0x62e6,0x8bc4,0xac44,0x93a5,0x4983,0x5161,0x9b64,0x9b44,0xbce5,0xcd46,0xb4c5,0xb4c5,0xac65,0xa425,0xa405,0x7263,0x40e1,0x59a2,0x8ac3,0x8aa3,0x49e5,0x38c1,0x61c2,0x6263,0x41c3,0x3183,0x4a24,0x72e6,0x82a2,0x7a83,0x7a83,0x6a22,0x6a22,0x59c2,0x4961,0xe87c,
		0xf81f,0xf81f,0x72c5,0x7ae2,0x9382,0x93c3,0x93a3,0x93c3,0x93c3,0x8384,0x7325,0x62a4,0x6ae5,0x8ba4,0xac23,0x8325,0x4163,0x5141,0x9b64,0x9344,0xbcc5,0xcdab,0xbc65,0xb465,0xac25,0xa3e5,0xa3c5,0x7264,0x38c1,0x5142,0x7a43,0x7a62,0x39a5,0x30c1,0x61a2,0x6243,0x41c2,0x3982,0x5223,0x7283,0x7a82,0x7242,0x6a43,0x61e2,0x59c2,0x5181,0x61c7,0xf81f,
		0xf81f,0xf81f,0xf03e,0x7ae8,0x72a3,0x82e3,0x8322,0x8b63,0x8b43,0x8344,0x7324,0x62a4,0x6ae4,0x8b84,0xa403,0x8304,0x59e3,0x59a2,0x8b03,0x9344,0xbcc4,0xacca,0x9364,0x9344,0x8b24,0x8303,0x8324,0x61e4,0x38a1,0x5142,0x7222,0x7242,0x51c4,0x4101,0x5962,0x5a03,0x49e3,0x41c3,0x5a43,0x6a42,0x7243,0x6203,0x59c2,0x5182,0x51c3,0x8a8f,0xf83f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4438,0x8e3f,0xb67f,0x59c1,0x5a22,0x41a2,0x41e2,0x6a62,0x82e3,0x82e3,0x8b03,0x8b03,0x7aa3,0x3902,0x28c1,0x1000,0x30a1,0x30a1,0x30a1,0x30a1,0x3082,0x1841,0x2081,0x30c1,0x7223,0x7243,0x7223,0x7243,0x7223,0x49c2,0x2941,0x2921,0x3982,0x4101,0x4334,0x5439,0x7a31,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x5d3c,0xb6bf,0xcebe,0x49a4,0x41e4,0x3983,0x39c3,0x4983,0x5162,0x5182,0x5182,0x5982,0x4122,0x2061,0x30e1,0x1861,0x4902,0x4902,0x4902,0x4101,0x40e2,0x1881,0x1861,0x1041,0x3901,0x4922,0x4922,0x4122,0x38e1,0x3122,0x2942,0x2943,0x3984,0x31e9,0x8e3f,0xb67f,0x6499,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x54dc,0xa6df,0xb6de,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x1062,0x3165,0x20e4,0x28a1,0x59a3,0x7a83,0x51a2,0x38c2,0x38e2,0x38e2,0x38e1,0x38c1,0x2081,0x1061,0x1020,0x800,0x20e3,0x20a2,0x800,0xaaf5,0xf81f,0xf81f,0xf81f,0xf81f,0x32b2,0xb69f,0xcede,0x7e1e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x43f6,0x8e7f,0x967e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x40e8,0x41a6,0x2904,0x4164,0x6203,0x82e3,0x7283,0x30c1,0x30a1,0x30c1,0x30c1,0x30c1,0x28c1,0x1861,0x1882,0x2924,0x3103,0x20c3,0x60ec,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xa6df,0xb6de,0x6dbd,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4418,0x5c78,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8ab0,0x9332,0xf81f,0xf81f,0x8b43,0x8b23,0x7a83,0x7283,0x6a22,0x61e2,0x59a2,0x28a1,0x1020,0x91d1,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x657c,0x6dbd,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x32f4,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x9383,0x93c5,0x9384,0x9323,0x7263,0x82c3,0x8ae3,0x30c1,0x1820,0xf03e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4418,0x547a,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8303,0x9be5,0x7ac3,0xa489,0xde69,0x28c1,0x4122,0x20a1,0x2082,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x49d2,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8324,0x93c3,0x7282,0xa487,0x8c06,0x38e2,0x28a2,0x1860,0x28c3,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x59e3,0x8b84,0x8303,0x8b63,0x7b48,0x5205,0x4161,0x39a5,0x49e6,0x1841,0x2081,0x48a6,0x5088,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xfb3e,0x9c30,0x49a2,0x8364,0x8323,0x7ac2,0x7b8c,0x5205,0x5206,0x6288,0x62e9,0x1841,0x28a1,0x28c1,0x2060,0x9bf0,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xfffe,0x944e,0x4142,0x8343,0x8323,0x7aa3,0x5b4a,0x63cc,0x538e,0x2a8b,0x29a7,0x28a1,0x30e1,0x3102,0x1020,0x8c0d,0xde56,0xf89e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xfffb,0x8bec,0x3921,0x8363,0x8343,0x7aa2,0x3bd1,0x5537,0x44b4,0x4cf7,0x2a8c,0x30c1,0x28a1,0x4182,0x1860,0x7b29,0xce14,0xf85f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xc550,0x8348,0x4161,0x7b23,0x8343,0x7262,0x9c0c,0x7ac5,0x82e5,0x7307,0x8bcd,0x51e2,0x5a21,0x51e2,0x3101,0x72e7,0xa411,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcdb2,0x838b,0x3942,0x7b64,0x8364,0x72e5,0xf81f,0xf81f,0x4184,0xf81f,0xf81f,0x5a44,0x62a4,0x5a43,0x2902,0x7b49,0xbc34,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
};
const uint16_t plane_player2[48 * 32] __attribute__((section(".resources"))) = {
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xe651,0xfffe,0xbd4f,0xeed8,0xffff,0xfffb,0xfff5,0xce2c,0xa3c7,0xfe8b,0xbc8d,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcce6,0xedca,0xef7b,0xc5b2,0xc52f,0xc5b4,0xc592,0xbd6c,0x9c26,0xa385,0xe589,0xab48,0x8249,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xd544,0xdd67,0x93c8,0x940b,0x9366,0x8305,0x9369,0x7ac6,0x7284,0x7222,0x7a83,0x8224,0x6125,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x7bee,0x736a,0x7bac,0x7ae9,0xd5a1,0xd5c3,0xe6b1,0xb52c,0xde77,0xffff,0xfffa,0xfffb,0xd651,0xa3a7,0xbc6a,0x4102,0x61c2,0x9c6f,0x9bf1,0x7b0d,0x79ae,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0x4a29,0x62eb,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xa531,0xc636,0xad2f,0x948b,0x7ae8,0xb4a2,0xce05,0xe64b,0xa446,0xc58f,0xf777,0xf72e,0xf751,0xbd4a,0x9b66,0xccaa,0x5162,0x6a02,0xa4cd,0xce35,0xbdb2,0x72a9,0x93af,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x9893,0xb076,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0x9450,0xb4f1,0x6aa7,0x8c2c,0xb5af,0xd66e,0xbda9,0x8c47,0x83e8,0x8428,0xb56a,0xd6aa,0xd688,0xce48,0xce68,0xc627,0xc5e5,0xb524,0xace4,0xdeaa,0xe70a,0xe70a,0xce48,0xace6,0x4982,0x72c3,0x93a4,0x93e4,0x93c3,0x8b61,0x8385,0x8367,0x6263,0x5a84,0x5264,0x6ae4,0x72e3,0x7b04,0x8be8,0x83ac,0xb553,0x6aea,0x8acf,0xf81f,0xf81f,
		0xf81f,0xf81f,0xb235,0x83cc,0x9c6d,0x9429,0xbdca,0xce6a,0xdea7,0xb564,0x9468,0x8429,0x8c69,0xbda8,0xcea4,0xc625,0xbe24,0xa504,0x9ca4,0x9cc4,0xb524,0xb4e5,0xef2d,0xef6d,0xef4b,0xdea9,0xbda8,0x4122,0x6243,0x6a83,0x72c3,0x7b03,0x82e2,0x8327,0x72a4,0x6283,0x5aa5,0x5285,0x6b05,0x7b23,0x7ac2,0x7b03,0x8365,0xa4ce,0x7328,0x5969,0x824e,0xf81f,
		0xf81f,0xf81f,0x83c4,0x9422,0xbda4,0xc5e4,0xbda3,0xbd83,0xbda5,0xa525,0x9469,0x8c69,0x948a,0xb586,0xc604,0xbdc5,0xbd85,0x8c24,0x83a3,0x8384,0xac85,0xcdcb,0xf74d,0xf76d,0xeeeb,0xde89,0xcde8,0x4101,0x51a2,0x5a02,0x6242,0x72a2,0x8b23,0x8303,0x82e2,0x6ac3,0x5285,0x5244,0x6ae5,0x7b23,0x7ae3,0x7ae2,0x7ac2,0x6a42,0x6262,0x51e2,0x51a6,0xf81f,
		0xf81f,0xf81f,0xa482,0xace3,0xb523,0xb543,0xb564,0xb584,0xbd83,0xa505,0x9489,0x8c69,0x94aa,0xb586,0xc604,0xbdc5,0xc5a5,0xad04,0xa464,0x9c44,0xbd27,0xe6d1,0xe750,0xef50,0xe6ed,0xd66a,0xce09,0x6202,0x4921,0x72a2,0x7ac3,0x8303,0x8b03,0x8b23,0x82e2,0x6aa3,0x5264,0x4a44,0x62c4,0x7b23,0x82e1,0x7b03,0x7ae2,0x7aa2,0x6a62,0x6222,0x51e2,0xf81f,
		0xaced,0x93e3,0x9c23,0x9c23,0x9405,0x6cb1,0x9426,0x9446,0x74f1,0xaca5,0x9468,0x8c29,0x9469,0xad06,0xbd83,0x9409,0x5203,0x6a62,0xa424,0xac24,0x94cf,0xbe93,0xbf12,0xbef1,0xb66f,0xa5ce,0x9d4e,0x7369,0x49c7,0x61c2,0x82c3,0x7284,0x5a86,0x3921,0x7242,0x6a83,0x4a23,0x4a03,0x5a83,0x7ac2,0x64b3,0x7ac5,0x72e6,0x6430,0x6a63,0x5a02,0x51e3,0x49a3,
		0xa4ab,0x9c23,0x9c43,0x9c43,0x9404,0x64f4,0x5d35,0x6535,0x6514,0xaca4,0x9467,0x8c27,0x8c48,0xad05,0xbd43,0xde93,0xad08,0x6a62,0x7283,0x9bc4,0xcdc9,0xf70d,0xf70c,0xeeea,0xde47,0xd5c6,0xc525,0x8303,0x4943,0x61e2,0x8283,0xb52c,0xc60b,0x7b83,0x2881,0x51e3,0x4a23,0x4a03,0x5a63,0x7aa2,0x5d16,0x64d4,0x5cf6,0x5c92,0x7284,0x6222,0x6202,0x51a3,
		0xa4ec,0x9402,0xa443,0xa463,0xa463,0x8c49,0x463f,0x465f,0x9469,0xa4a5,0x83e8,0x7ba8,0x83c8,0x9466,0xa487,0x83e9,0x83c6,0x39c4,0x4943,0x5142,0x8c0c,0x7e35,0x76b9,0x6e79,0x6df7,0x6577,0x6557,0x536f,0x4965,0x69e2,0x82e5,0x6b28,0xbdc7,0x4a04,0x49a4,0x28a2,0x3163,0x39c3,0x5a63,0x8303,0x7349,0x361f,0x3e1e,0x72e6,0x7a62,0x7243,0x6a42,0x51a2,
		0xad0d,0x93c2,0xa443,0xa443,0x9425,0x6537,0x6cd3,0x6cf3,0x6536,0xa484,0x83c7,0x7368,0x7b88,0x83c6,0x6b07,0x7ba6,0x7b43,0x3143,0x4983,0x5161,0x5aee,0x5dd9,0x569d,0x565c,0x55dc,0x559b,0x4d9b,0x43d4,0x41ea,0x69e2,0x6a85,0x62a6,0xa4e4,0x41a2,0x41c4,0x30e2,0x3122,0x3983,0x5a43,0x7aa1,0x5538,0x6451,0x5cb3,0x5cb3,0x7284,0x7263,0x7222,0x51c2,
		0x9c48,0x9c4a,0x93e3,0x9c02,0xa443,0x9c23,0xaca3,0xb4c3,0xac63,0x9c65,0x7b87,0x6b27,0x7347,0x9c65,0x9c03,0x8be3,0x6a61,0x3901,0x4922,0x5982,0xa3c4,0xd5c5,0xd5c6,0xd5c6,0xc545,0xbcc5,0xb4a4,0x8ae2,0x5121,0x7203,0x8ac3,0x8ba3,0x8362,0x51e1,0x2881,0x30c1,0x3963,0x3983,0x5223,0x7ac3,0x82a2,0x8aa2,0x82a2,0x7262,0x7262,0x6a23,0x6a02,0x5a25,
		0x93e7,0x93e8,0x93c3,0x9402,0xa423,0xa462,0xaca4,0xacc4,0xb4c3,0x9425,0x7b86,0x6b06,0x6b47,0x9c25,0xbce4,0x5a43,0x3922,0x30c1,0x5162,0x5982,0xac65,0xd5c6,0xc587,0xc587,0xbd06,0xb4a6,0xac86,0x82e3,0x4922,0x69e2,0x9303,0x6a22,0x49e4,0x28a1,0x30c1,0x30c1,0x3983,0x39a2,0x5223,0x72a3,0x8ac2,0x82c3,0x7ac2,0x7a62,0x7242,0x6a02,0x61e2,0x5a25,
		0xf81f,0xf03e,0x8302,0x8b62,0x93e3,0x9c03,0x9c43,0xa443,0xa423,0x93e4,0x7345,0x62c6,0x62e6,0x8bc4,0xac44,0x93a5,0x4983,0x5161,0x9b64,0x9b44,0xbce5,0xcd46,0xb4c5,0xb4c5,0xac65,0xa425,0xa405,0x7263,0x40e1,0x59a2,0x8ac3,0x8aa3,0x49e5,0x38c1,0x61c2,0x6263,0x41c3,0x3183,0x4a24,0x72e6,0x82a2,0x7a83,0x7a83,0x6a22,0x6a22,0x59c2,0x4961,0xf81f,
		0xf81f,0xf81f,0x72c5,0x7ae2,0x9382,0x93c3,0x93a3,0x93c3,0x93c3,0x8384,0x7325,0x62a4,0x6ae5,0x8ba4,0xac23,0x8325,0x4163,0x5141,0x9b64,0x9344,0xbcc5,0xcdab,0xbc65,0xb465,0xac25,0xa3e5,0xa3c5,0x7264,0x38c1,0x5142,0x7a43,0x7a62,0x39a5,0x30c1,0x61a2,0x6243,0x41c2,0x3982,0x5223,0x7283,0x7a82,0x7242,0x6a43,0x61e2,0x59c2,0x5181,0x69a9,0xf81f,
		0xf81f,0xf81f,0xf81f,0x7ae8,0x72a3,0x82e3,0x8322,0x8366,0x5b70,0x8344,0x7324,0x62a4,0x6ae4,0x8b84,0xa403,0x8304,0x59e3,0x59a2,0x8b03,0x9344,0xbcc4,0xacca,0x9364,0x9344,0x8b24,0x8303,0x8324,0x61e4,0x38a1,0x5142,0x7222,0x7242,0x51c4,0x4101,0x5962,0x5a03,0x49e3,0x41c3,0x5a43,0x6a42,0x6a86,0x4aef,0x59c3,0x5182,0x61a5,0x9a31,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x3bb4,0x757e,0x9e1f,0x59c1,0x5a22,0x41a2,0x41e2,0x6a62,0x82e3,0x82e3,0x8b03,0x8b03,0x7aa3,0x3902,0x28c1,0x1000,0x30a1,0x30a1,0x30a1,0x30a1,0x3082,0x1841,0x2081,0x30c1,0x7223,0x7243,0x7223,0x7243,0x7223,0x49c2,0x2941,0x2921,0x3982,0x3942,0x757e,0x9e1f,0x72f5,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4cdb,0xa6bf,0xc6df,0x49a4,0x41e4,0x3983,0x39c3,0x4983,0x5162,0x5182,0x5182,0x5982,0x4122,0x2061,0x30e1,0x1861,0x4902,0x4902,0x4902,0x4101,0x40e2,0x1881,0x1861,0x1041,0x3901,0x4922,0x4922,0x4122,0x38e1,0x3122,0x2942,0x2943,0x3984,0x2a4d,0xa6bf,0xc6df,0x653b,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x657d,0xb69f,0xcebe,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x1062,0x3165,0x20e4,0x28a1,0x59a3,0x7a83,0x51a2,0x38c2,0x38e2,0x38e2,0x38e1,0x38c1,0x2081,0x1061,0x1020,0x800,0x20e3,0x20a2,0x800,0xf83f,0xf81f,0xf81f,0xf81f,0xf81f,0x32d4,0xb69f,0xcebe,0x7dfe,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x5d3c,0xb6bf,0xc6de,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x40e8,0x41a6,0x2904,0x4164,0x6203,0x82e3,0x7283,0x30c1,0x30a1,0x30c1,0x30c1,0x30c1,0x28c1,0x1861,0x1882,0x2924,0x3103,0x40a6,0x78cf,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x2ab1,0xb6bf,0xc6de,0x7e3e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x54ba,0x96df,0xa6bf,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8ab0,0xaab4,0xf81f,0xf81f,0x8b43,0x8b23,0x7a83,0x7283,0x6a22,0x61e2,0x59a2,0x28a1,0x1020,0xc0f8,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x96df,0xa6bf,0x8b9c,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x3bd6,0x8e5e,0x8e7e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x9383,0x93c5,0x9384,0x9323,0x7263,0x82c3,0x8ae3,0x30c1,0x1820,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8e5e,0x8e7e,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xe85e,0x5d3b,0xc9df,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8303,0x9be5,0x7ac3,0xa489,0xde69,0x28c1,0x4122,0x20a1,0x2082,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x5d3b,0xf83f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4418,0xb9fd,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x8324,0x93c3,0x7282,0xa487,0x8c06,0x38e2,0x28a2,0x1860,0x28c3,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4418,0xf83f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x32d3,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x59e3,0x8b84,0x8303,0x8b63,0x7b48,0x5205,0x4161,0x39a5,0x49e6,0x1841,0x2081,0x5889,0x686b,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x32d3,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x3a52,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x9c30,0x49a2,0x8364,0x8323,0x7ac2,0x7b8c,0x5205,0x5206,0x6288,0x62e9,0x1841,0x28a1,0x28c1,0x3863,0xa3b1,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0x4a13,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xfffe,0x944e,0x4142,0x8343,0x8323,0x7aa3,0x5b4a,0x63cc,0x538e,0x2a8b,0x29a7,0x28a1,0x30e1,0x3102,0x1020,0x8c0d,0xde56,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xfffb,0x8bec,0x3921,0x8363,0x8343,0x7aa2,0x3bd1,0x5537,0x44b4,0x4cf7,0x2a8c,0x30c1,0x28a1,0x4182,0x1860,0x7b29,0xce14,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xc550,0x8348,0x4161,0x7b23,0x8343,0x7262,0x9c0c,0x7ac5,0x82e5,0x7307,0x8bcd,0x51e2,0x5a21,0x51e2,0x3101,0x72e7,0xabd2,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
		0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xcdb2,0x838b,0x3942,0x7b64,0x8364,0x72e5,0xf81f,0xf81f,0x4184,0xd95b,0xf81f,0x5a44,0x62a4,0x5a43,0x2902,0x7b49,0xf83f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,0xf81f,
};
