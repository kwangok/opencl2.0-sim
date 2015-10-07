#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000001fed,0x0000004801000002,0x0000000000000fb4\n"
".quad 0x0000000000000000,0x0000001400010004,0x0000000b00000038,0x0000000000000015\n"
".quad 0x0000000000000000,0x6e61697373756167,0x000000000075632e,0x33010102464c457f\n"
".quad 0x0000000000000004,0x0000000100be0002,0x0000000000000000,0x0000000000000f0c\n"
".quad 0x0000000000000040,0x0038004000140514,0x0001000c00400003,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000300000001\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000340,0x00000000000000f3\n"
".quad 0x0000000000000000,0x0000000000000004,0x0000000000000000,0x000000030000000b\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000433,0x000000000000005d\n"
".quad 0x0000000000000000,0x0000000000000001,0x0000000000000000,0x0000000200000013\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000490,0x00000000000001b0\n"
".quad 0x0000001000000002,0x0000000000000001,0x0000000000000018,0x000000010000006a\n"
".quad 0x0000000000000006,0x0000000000000000,0x0000000000000640,0x00000000000001c8\n"
".quad 0x0c00000b00000003,0x0000000000000004,0x0000000000000000,0x00000001000000d4\n"
".quad 0x0000000000000002,0x0000000000000000,0x0000000000000808,0x0000000000000044\n"
".quad 0x0000000400000000,0x0000000000000004,0x0000000000000000,0x0000000100000081\n"
".quad 0x0000000000000002,0x0000000000000000,0x000000000000084c,0x000000000000007c\n"
".quad 0x0000000400000000,0x0000000000000001,0x0000000000000000,0x0000000100000036\n"
".quad 0x0000000000000006,0x0000000000000000,0x00000000000008c8,0x0000000000000548\n"
".quad 0x0c00000600000003,0x0000000000000004,0x0000000000000000,0x00000001000000b8\n"
".quad 0x0000000000000002,0x0000000000000000,0x0000000000000e10,0x0000000000000038\n"
".quad 0x0000000700000000,0x0000000000000004,0x0000000000000000,0x000000010000009b\n"
".quad 0x0000000000000002,0x0000000000000000,0x0000000000000e48,0x0000000000000008\n"
".quad 0x0000000700000000,0x0000000000000004,0x0000000000000000,0x000000010000004a\n"
".quad 0x0000000000000002,0x0000000000000000,0x0000000000000e50,0x000000000000005c\n"
".quad 0x0000000700000000,0x0000000000000001,0x0000000000000000,0x0000000100000061\n"
".quad 0x0000000000000002,0x0000000000000000,0x0000000000000eac,0x0000000000000060\n"
".quad 0x0000000000000000,0x0000000000000001,0x0000000000000000,0x7472747368732e00\n"
".quad 0x747274732e006261,0x746d79732e006261,0x672e766e2e006261,0x6e692e6c61626f6c\n"
".quad 0x672e766e2e007469,0x742e006c61626f6c,0x46345a5f2e747865,0x695f536650316e61\n"
".quad 0x6e692e766e2e0069,0x6146345a5f2e6f66,0x69695f536650316e,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x50326e6146345a5f,0x6969695f535f5366,0x666e692e766e2e00\n"
".quad 0x6e6146345a5f2e6f,0x695f535f53665032,0x632e766e2e006969,0x31746e6174736e6f\n"
".quad 0x6e6146345a5f2e36,0x0069695f53665031,0x736e6f632e766e2e,0x5a5f2e30746e6174\n"
".quad 0x536650316e614634,0x2e766e2e0069695f,0x746e6174736e6f63,0x6e6146345a5f2e30\n"
".quad 0x695f535f53665032,0x46345a5f00006969,0x695f536650316e61,0x616475635f5f0069\n"
".quad 0x69645f30326d735f,0x3233665f6e725f76,0x5f616475635f5f00,0x7669645f30326d73\n"
".quad 0x74666f6e5f6e725f,0x6c735f3233665f7a,0x5f0068746170776f,0x6650326e6146345a\n"
".quad 0x006969695f535f53,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0001000300000000,0x0000000000000000,0x0000000000000000,0x0002000300000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0003000300000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000300000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000000,0x0000000000000000,0x0000000000000000,0x0007000300000000\n"
".quad 0x0000000000000000,0x0000000000000548,0x000a000300000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000b000300000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x000700020000000f,0x0000000000000138,0x00000000000000a0,0x0007000200000026\n"
".quad 0x00000000000001d8,0x0000000000000370,0x0004000300000000,0x0000000000000000\n"
".quad 0x00000000000001c8,0x0006000300000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0009000300000000,0x0000000000000000,0x0000000000000000,0x0008000300000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0005000300000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0007101200000001,0x0000000000000000,0x0000000000000138\n"
".quad 0x000410120000004c,0x0000000000000000,0x00000000000001c8,0x2800440400005de4\n"
".quad 0x28004000e000dde4,0x2c00000094001c04,0x2c00000084009c04,0x4800fffffc30dc03\n"
".quad 0x2004400020009ca3,0x4800400100301d03,0x1b0e00000021dc03,0x80000000000001e7\n"
".quad 0x2c0000008800dc04,0x2c00000098001c04,0x28004000e0011de4,0x2006400030001ca3\n"
".quad 0x480040010040dd03,0x1b0e00000c01dc03,0x80000000000001e7,0x4800400100209c03\n"
".quad 0x2800400100011de4,0x1800000010025de2,0x4800c00004221c03,0x20084000e040dca3\n"
".quad 0x190e0000fc01dc23,0x20084000e0809ca3,0x4800000000319c03,0x5000c0001020dce3\n"
".quad 0x2013800080211ca3,0x5000c0001061dce3,0x4800000000229c03,0x4800400090315c43\n"
".quad 0x20138000a0619ca3,0x5000c00010a0dce3,0x8400000000415c85,0x48004000b071dc43\n"
".quad 0x20138000a0a09ca3,0x8400000000619c85,0x48004000b030dc43,0x8400000000225c85\n"
".quad 0x3012000018511e00,0x9400000000211c85,0x400000020000a1e7,0x18000000100141e2\n"
".quad 0x5800c00078a00023,0x28004000c00181e4,0x200b800080a08003,0x50004001005100e3\n"
".quad 0x480040009000c043,0x200d4001005280a3,0x5000c000108000e3,0x8400000000208085\n"
".quad 0x48004000d042c043,0x200dc000108180a3,0x8400000000a10085,0x48004000d001c043\n"
".quad 0x8400000000600085,0x3000000010200200,0x9400000000600085,0x8000000000001de7\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x00080a0400000000,0x002400200000000f,0x000c170400241903,0x0020000500000000\n"
".quad 0x000c17040011f000,0x001c000400000000,0x000c17040011f000,0x0018000300000000\n"
".quad 0x000c17040011f000,0x0010000200000000,0x000c17040021f000,0x0008000100000000\n"
".quad 0x000c17040021f000,0x0000000000000000,0x00080d040021f000,0x0000000300030024\n"
".quad 0x2800440400005de4,0x28004000c000dde4,0x2c00000094001c04,0x2c00000084009c04\n"
".quad 0x4800fffffc30dc03,0x2004400020001ca3,0x48004000d0309d03,0x188e00000801dc03\n"
".quad 0x80000000000021e7,0x2c00000084009c04,0x28004000d0019de4,0x2c00000094001c04\n"
".quad 0x48004000d0209c03,0x50004000c060dca3,0x7000c0047c611c23,0x2004400020001ca3\n"
".quad 0x7000c0047c309c23,0x48014000d030dc03,0x4800c00004001c03,0x28004000a001dde4\n"
".quad 0x4800000010215c43,0x200d4000c0001ca3,0x5800c00078319c03,0x4800000013f09c43\n"
".quad 0x200fc00010321c03,0x4000000018511c43,0x5800c0007800dc03,0x6000c00008001c03\n"
".quad 0x48004000b0425c43,0x400000000c209c43,0x48014000a0019c03,0x8400000000815c85\n"
".quad 0x48004000b021dc43,0x8400000000611c85,0x5000000080010007,0x4801400080019c03\n"
".quad 0x480040009021dc43,0x9400000000611c85,0x8000000000001de7,0xc800000010519c00\n"
".quad 0x3801fffffc40dc02,0x300c80000451de40,0x38fe00000030dc42,0x300c00001c619c40\n"
".quad 0x307e00001831dc40,0x300600001c521e40,0x300e00001881dc40,0x3bfe000000421c02\n"
".quad 0x300600001c50de40,0x300e00001831dc40,0x307e00002070dc40,0x39fffffffc319c02\n"
".quad 0x0bfdffffc0619c02,0x1a0e40001461dc03,0x40000000400021e7,0x5000000060010007\n"
".quad 0x280000001000dde4,0x280000000c011de4,0x9000000000001de7,0x6000c0000440dc03\n"
".quad 0x6000c00004519c03,0x5800c0006030dc03,0x5800c00060619c03,0x4800fffffc30dc03\n"
".quad 0x4800fffffc619c03,0x1a0ec003f431dc03,0x1a20c003f461dc03,0x40000004e00021e7\n"
".quad 0x218edfe00041dc80,0x40000000400021e7,0x218edfe00051dc80,0x40000000400001e7\n"
".quad 0x5000000014411c00,0x4000000bc0001de7,0x6000c0000441dc03,0x6000c00004521c03\n"
".quad 0x190e0000fc73dc03,0x190e0000fc85dc03,0x0c0e00000811dc04,0x40000000800001e7\n"
".quad 0x210edfe00047dc80,0x210edfe00051dc80,0x4000000080002de7,0x40000000600021e7\n"
".quad 0x1bff00000000dde2,0xc800000014311c00,0x4000000a20001de7,0x0c0e00004401dc04\n"
".quad 0x40000000600021e7,0x680000001050dc83,0x3a00000000311c02,0x4000000980001de7\n"
".quad 0x0c0e00004831dc04,0x40000000800021e7,0x680000001050dc83,0x3a0000000030dc02\n"
".quad 0x39fe000000311c42,0x40000008c0001de7,0x1b0e0000fc33dc23,0x1b0e0000fc61dc23\n"
".quad 0x307ed7e000412400,0x1bffffff0001e5e2,0x28000000fc01c5e4,0x40000000800001e7\n"
".quad 0x307ed7e000515c00,0x4800c0010071dc03,0x4000000020001de7,0x28000000fc01dde4\n"
".quad 0x4800fffe08621c03,0x4800000018319d03,0x4100000014821ee3,0x4800fffe08315c03\n"
".quad 0xc800000010825c00,0x4100000010511ee3,0x3012800004829e00,0x3012000028915c00\n"
".quad 0x307e000014425c00,0x3008000024829e00,0x3012000014a25c00,0x3008000024821e00\n"
".quad 0x3012000014811c00,0x6000c00004429c03,0x5800c00060a29c03,0x480000002860dc03\n"
".quad 0x480000000c719c03,0x4800fffffc60dc03,0x1a0ec003f431dc03,0x40000000600001e7\n"
".quad 0x480000002860dd03,0x4000000010311ee3,0x40000004a0001de7,0x198ec003f861dc23\n"
".quad 0x40000000600001e7,0x3a0000000040dc02,0x39fe000000311c42,0x4000000400001de7\n"
".quad 0x1a0e0000fc61dc23,0x40000003c00001e7,0x1b0effffa061dc23,0x40000000400001e7\n"
".quad 0x3a00000000411c02,0x4000000340001de7,0x309200001481dc00,0x3112000014829c00\n"
".quad 0x3192000014825c00,0x1c0000001922df84,0x3a0000000040dc02,0x168e000028711c00\n"
".quad 0x3801fffffc915c02,0x190e0000fcb1dc23,0x1c00000019221f84,0x1c00000011211f84\n"
".quad 0x3802000000515c42,0x40000000a00081e7,0x4800c0008061a003,0x600000001851a003\n"
".quad 0x5800000020516003,0x310cc00007f1a003,0x6800000018412043,0x6000c00078519c03\n"
".quad 0x5800c0007c61dc03,0x6800c00004519c03,0x5800c00004515c03,0x680000001c411c43\n"
".quad 0x6800000010611c03,0x1a8e0000fc41dc03,0x4800c00004514003,0x6800000014311c43\n"
".quad 0x9000000000001de7,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x7effffef3f800000,0x0000000e00080a04,0x0018190300180020,0x00000000000c1704\n"
".quad 0x0011f00000140003,0x00000000000c1704,0x0011f00000100002,0x00000000000c1704\n"
".quad 0x0021f00000080001,0x00000000000c1704,0x0021f00000000000,0x001000c000080d04\n"
".quad 0x000812040000000d,0x0000000000000011,0x0000001100081104,0x0008120400000000\n"
".quad 0x000000000000000a,0x0000000a00081104,0x0008120400000000,0x0000000000000009\n"
".quad 0x0000000900081104,0x0008120400000000,0x0000000000000010,0x0000001000081104\n"
".quad 0x0000000600000000,0x00000f0c00000005,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000a800000000,0x000000a800000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x0000064000001105,0x0000000000000000,0x0000000000000000,0x0000028800000000\n"
".quad 0x0000028800000000,0x0000000400000000,0x6000000000000000,0x000008c800001005\n"
".quad 0x0000000000000000,0x0000000000000000,0x000005e400000000,0x000005e400000000\n"
".quad 0x0000000400000000,0x0100000100000000,0x00000fa100000050,0x0000000000000000\n"
".quad 0x0003000000000038,0x0000004000000014,0x000000150000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x7375616700000000,0x0075632e6e616973,0x0a0a0a0a00000000\n"
".quad 0x69737265762e0a0a,0x2e0a302e33206e6f,0x7320746567726174,0x64612e0a30325f6d\n"
".quad 0x69735f7373657264,0x2e0a0a343620657a,0x22203109656c6966,0x6e61697373756167\n"
".quad 0x22692e337070632e,0x3209656c69662e0a,0x6973737561672220,0x2e0a2275632e6e61\n"
".quad 0x22203309656c6966,0x61622f656d6f682f,0x642f726f6c656863,0x3132656469636965\n"
".quad 0x342d616475632f38,0x756c636e692f322e,0x63697665642f6564,0x6974636e75665f65\n"
".quad 0x0a0a22682e736e6f,0x5f207972746e652e,0x6650316e6146345a,0x702e0a2869695f53\n"
".quad 0x36752e206d617261,0x6e6146345a5f2034,0x5f69695f53665031,0x2c305f6d61726170\n"
".quad 0x206d617261702e0a,0x345a5f203436752e,0x5f536650316e6146,0x6d617261705f6969\n"
".quad 0x7261702e0a2c315f,0x203233752e206d61,0x50316e6146345a5f,0x61705f69695f5366\n"
".quad 0x2e0a2c325f6d6172,0x752e206d61726170,0x6146345a5f203233,0x69695f536650316e\n"
".quad 0x335f6d617261705f,0x65722e0a7b0a290a,0x25203233662e2067,0x722e0a3b3e343c66\n"
".quad 0x646572702e206765,0x0a3b3e323c702520,0x33732e206765722e,0x3e35323c72252032\n"
".quad 0x2e206765722e0a3b,0x3c6c722520343673,0x6c0a0a0a3b3e3531,0x2e6d617261702e64\n"
".quad 0x336c722520343675,0x6146345a5f5b202c,0x69695f536650316e,0x305f6d617261705f\n"
".quad 0x61702e646c0a3b5d,0x203436752e6d6172,0x5f5b202c346c7225,0x6650316e6146345a\n"
".quad 0x7261705f69695f53,0x6c0a3b5d315f6d61,0x2e6d617261702e64,0x2c31722520323375\n"
".quad 0x6e6146345a5f5b20,0x5f69695f53665031,0x5d325f6d61726170,0x7261702e646c0a3b\n"
".quad 0x25203233752e6d61,0x345a5f5b202c3272,0x5f536650316e6146,0x6d617261705f6969\n"
".quad 0x7476630a3b5d335f,0x6f6c672e6f742e61,0x203436752e6c6162,0x7225202c316c7225\n"
".quad 0x617476630a3b336c,0x626f6c672e6f742e,0x25203436752e6c61,0x6c7225202c326c72\n"
".quad 0x20636f6c2e0a3b34,0x0a31203033322032,0x203233752e766f6d,0x746e25202c337225\n"
".quad 0x6f6d0a3b782e6469,0x7225203233752e76,0x6961746325202c34,0x766f6d0a3b782e64\n"
".quad 0x357225203233752e,0x782e64697425202c,0x6f6c2e64616d0a3b,0x367225203233732e\n"
".quad 0x25202c337225202c,0x3b357225202c3472,0x3233732e6464610a,0x7225202c37722520\n"
".quad 0x730a3b312d202c31,0x25203233732e6275,0x2c377225202c3872,0x6c2e0a3b32722520\n"
".quad 0x303332203220636f,0x2e707465730a3120,0x25203233752e746c,0x2c367225202c3170\n"
".quad 0x25400a3b38722520,0x4220617262203170,0x2e0a0a3b325f3042,0x3332203220636f6c\n"
".quad 0x3b7465720a322032,0x3a325f3042420a0a,0x617261702e646c0a,0x7225203233752e6d\n"
".quad 0x345a5f5b202c3831,0x5f536650316e6146,0x6d617261705f6969,0x6f6c2e0a3b5d335f\n"
".quad 0x2030333220322063,0x33752e766f6d0a31,0x202c343272252032,0x0a3b782e64697425\n"
".quad 0x32203220636f6c2e,0x6464610a31203133,0x397225203233732e,0x202c38317225202c\n"
".quad 0x6c2e0a3b34327225,0x303332203220636f,0x752e766f6d0a3120,0x2c32327225203233\n"
".quad 0x782e6469746e2520,0x33752e766f6d0a3b,0x202c333272252032,0x782e646961746325\n"
".quad 0x3220636f6c2e0a3b,0x6d0a312031333220,0x33732e6f6c2e6461,0x202c303172252032\n"
".quad 0x7225202c33327225,0x3b397225202c3232,0x3233732e6464610a,0x25202c3131722520\n"
".quad 0x0a3b31202c303172,0x6d617261702e646c,0x317225203233752e,0x46345a5f5b202c37\n"
".quad 0x695f536650316e61,0x5f6d617261705f69,0x636f6c2e0a3b5d32,0x3120313332203220\n"
".quad 0x2e6f6c2e6c756d0a,0x3231722520323373,0x202c31317225202c,0x76630a3b37317225\n"
".quad 0x33752e3436752e74,0x202c356c72252032,0x76630a3b32317225,0x33732e3436732e74\n"
".quad 0x202c366c72252032,0x64610a3b38317225,0x7225203436732e64,0x356c7225202c376c\n"
".quad 0x0a3b366c7225202c,0x32203220636f6c2e,0x6c68730a31203133,0x6c7225203436622e\n"
".quad 0x2c376c7225202c38,0x2e6464610a3b3220,0x396c722520343673,0x202c326c7225202c\n"
".quad 0x756d0a3b386c7225,0x3233732e6f6c2e6c,0x25202c3331722520,0x317225202c383172\n"
".quad 0x732e7476630a3b37,0x25203233732e3436,0x7225202c30316c72,0x2e6464610a3b3331\n"
".quad 0x316c722520343673,0x30316c7225202c31,0x0a3b366c7225202c,0x32203220636f6c2e\n"
".quad 0x6c68730a31203133,0x6c7225203436622e,0x316c7225202c3231,0x64610a3b32202c31\n"
".quad 0x7225203436732e64,0x6c7225202c33316c,0x32316c7225202c32,0x6f6c672e646c0a3b\n"
".quad 0x203233662e6c6162,0x72255b202c316625,0x646c0a3b5d33316c,0x2e6c61626f6c672e\n"
".quad 0x2c32662520323366,0x3b5d396c72255b20,0x203320636f6c2e0a,0x640a332031313331\n"
".quad 0x33662e6e722e7669,0x25202c3366252032,0x3b316625202c3266,0x203220636f6c2e0a\n"
".quad 0x64610a3120313332,0x7225203436732e64,0x6c7225202c34316c,0x3b386c7225202c31\n"
".quad 0x626f6c672e74730a,0x5b203233662e6c61,0x202c5d34316c7225,0x6f6c2e0a3b336625\n"
".quad 0x2032333220322063,0x7d0a3b7465720a32,0x7972746e652e0a0a,0x326e6146345a5f20\n"
".quad 0x69695f535f536650,0x617261702e0a2869,0x5f203436752e206d,0x6650326e6146345a\n"
".quad 0x5f6969695f535f53,0x2c305f6d61726170,0x206d617261702e0a,0x345a5f203436752e\n"
".quad 0x5f536650326e6146,0x61705f6969695f53,0x2e0a2c315f6d6172,0x752e206d61726170\n"
".quad 0x6146345a5f203436,0x5f535f536650326e,0x617261705f696969,0x61702e0a2c325f6d\n"
".quad 0x3233752e206d6172,0x326e6146345a5f20,0x69695f535f536650,0x5f6d617261705f69\n"
".quad 0x617261702e0a2c33,0x5f203233752e206d,0x6650326e6146345a,0x5f6969695f535f53\n"
".quad 0x2c345f6d61726170,0x206d617261702e0a,0x345a5f203233752e,0x5f536650326e6146\n"
".quad 0x61705f6969695f53,0x0a290a355f6d6172,0x2e206765722e0a7b,0x313c662520323366\n"
".quad 0x6765722e0a3b3e31,0x2520646572702e20,0x722e0a3b3e343c70,0x203233732e206765\n"
".quad 0x0a3b3e33333c7225,0x36732e206765722e,0x30323c6c72252034,0x2e646c0a0a0a3b3e\n"
".quad 0x36752e6d61726170,0x202c356c72252034,0x326e6146345a5f5b,0x69695f535f536650\n"
".quad 0x5f6d617261705f69,0x702e646c0a3b5d30,0x3436752e6d617261,0x5b202c366c722520\n"
".quad 0x50326e6146345a5f,0x6969695f535f5366,0x315f6d617261705f,0x61702e646c0a3b5d\n"
".quad 0x203436752e6d6172,0x5f5b202c376c7225,0x6650326e6146345a,0x5f6969695f535f53\n"
".quad 0x5d325f6d61726170,0x7261702e646c0a3b,0x25203233752e6d61,0x345a5f5b202c3172\n"
".quad 0x5f536650326e6146,0x61705f6969695f53,0x0a3b5d335f6d6172,0x6d617261702e646c\n"
".quad 0x327225203233752e,0x6146345a5f5b202c,0x5f535f536650326e,0x617261705f696969\n"
".quad 0x76630a3b5d355f6d,0x6c672e6f742e6174,0x3436752e6c61626f,0x25202c316c722520\n"
".quad 0x7476630a3b376c72,0x6f6c672e6f742e61,0x203436752e6c6162,0x7225202c326c7225\n"
".quad 0x617476630a3b366c,0x626f6c672e6f742e,0x25203436752e6c61,0x6c7225202c336c72\n"
".quad 0x20636f6c2e0a3b35,0x0a31203134322032,0x203233752e766f6d,0x746e25202c367225\n"
".quad 0x6f6d0a3b782e6469,0x7225203233752e76,0x6961746325202c37,0x766f6d0a3b782e64\n"
".quad 0x387225203233752e,0x782e64697425202c,0x6f6c2e64616d0a3b,0x337225203233732e\n"
".quad 0x25202c367225202c,0x3b387225202c3772,0x3233732e6464610a,0x7225202c39722520\n"
".quad 0x730a3b312d202c31,0x25203233732e6275,0x397225202c303172,0x2e0a3b327225202c\n"
".quad 0x3432203220636f6c,0x707465730a312031,0x203233752e65672e,0x337225202c317025\n"
".quad 0x0a3b30317225202c,0x6172622031702540,0x0a3b335f31424220,0x203220636f6c2e0a\n"
".quad 0x6f6d0a3120323432,0x7225203233752e76,0x64697425202c3131,0x2e766f6d0a3b792e\n"
".quad 0x3231722520323375,0x2e6469746e25202c,0x752e766f6d0a3b79,0x2c33317225203233\n"
".quad 0x2e64696174632520,0x6c2e64616d0a3b79,0x7225203233732e6f,0x2c32317225202c34\n"
".quad 0x25202c3331722520,0x2e646c0a3b313172,0x33752e6d61726170,0x202c393272252032\n"
".quad 0x326e6146345a5f5b,0x69695f535f536650,0x5f6d617261705f69,0x702e646c0a3b5d33\n"
".quad 0x3233752e6d617261,0x5b202c3233722520,0x50326e6146345a5f,0x6969695f535f5366\n"
".quad 0x355f6d617261705f,0x20636f6c2e0a3b5d,0x0a31203234322032,0x203233732e627573\n"
".quad 0x7225202c34317225,0x32337225202c3932,0x672e707465730a3b,0x7025203233752e65\n"
".quad 0x202c347225202c32,0x25400a3b34317225,0x4220617262203270,0x6c0a0a3b335f3142\n"
".quad 0x2e6d617261702e64,0x3133722520323375,0x6146345a5f5b202c,0x5f535f536650326e\n"
".quad 0x617261705f696969,0x6c2e0a3b5d355f6d,0x383432203220636f,0x732e6464610a3120\n"
".quad 0x2c35317225203233,0x25202c3133722520,0x2e6464610a3b3372,0x2c35722520323373\n"
".quad 0x31202c3531722520,0x7261702e646c0a3b,0x25203233752e6d61,0x5a5f5b202c383272\n"
".quad 0x536650326e614634,0x705f6969695f535f,0x3b5d335f6d617261,0x203220636f6c2e0a\n"
".quad 0x616d0a3120383432,0x3233732e6f6c2e64,0x25202c3631722520,0x38327225202c3572\n"
".quad 0x0a3b31337225202c,0x656469772e6c756d,0x6c7225203233732e,0x2c36317225202c38\n"
".quad 0x2e6464610a3b3420,0x396c722520343673,0x202c336c7225202c,0x616d0a3b386c7225\n"
".quad 0x3233732e6f6c2e64,0x25202c3731722520,0x327225202c313372,0x3b31337225202c38\n"
".quad 0x3233732e6464610a,0x25202c3831722520,0x347225202c373172,0x69772e6c756d0a3b\n"
".quad 0x25203233732e6564,0x7225202c30316c72,0x610a3b34202c3831,0x25203436732e6464\n"
".quad 0x7225202c31316c72,0x316c7225202c326c,0x6c672e646c0a3b30,0x3233662e6c61626f\n"
".quad 0x255b202c31662520,0x6c0a3b5d31316c72,0x6c61626f6c672e64,0x326625203233662e\n"
".quad 0x5d396c72255b202c,0x33732e6464610a3b,0x202c313272252032,0x7225202c36317225\n"
".quad 0x732e7476630a3b34,0x25203233732e3436,0x327225202c346c72,0x772e6c756d0a3b31\n"
".quad 0x203233732e656469,0x25202c32316c7225,0x0a3b34202c313272,0x203436732e646461\n"
".quad 0x25202c33316c7225,0x6c7225202c326c72,0x672e646c0a3b3231,0x33662e6c61626f6c\n"
".quad 0x5b202c3366252032,0x0a3b5d33316c7225,0x203233662e67656e,0x326625202c346625\n"
".quad 0x6e722e616d660a3b,0x356625203233662e,0x25202c346625202c,0x3b336625202c3166\n"
".quad 0x626f6c672e74730a,0x5b203233662e6c61,0x202c5d33316c7225,0x6f6c2e0a3b356625\n"
".quad 0x2030353220322063,0x652e707465730a31,0x7025203233732e71,0x202c347225202c33\n"
".quad 0x20337025400a3b30,0x5f31424220617262,0x5f3142420a0a3b34,0x20636f6c2e0a3a33\n"
".quad 0x0a32203535322032,0x42420a0a3b746572,0x6f6c2e0a3a345f31,0x2033353220322063\n"
".quad 0x36622e6c68730a31,0x2c34316c72252034,0x32202c346c722520,0x36732e6464610a3b\n"
".quad 0x2c35316c72252034,0x25202c336c722520,0x646c0a3b34316c72,0x752e6d617261702e\n"
".quad 0x2c30337225203233,0x6e6146345a5f5b20,0x695f535f53665032,0x6d617261705f6969\n"
".quad 0x6f6c2e0a3b5d355f,0x2033353220322063,0x69772e6c756d0a31,0x25203233732e6564\n"
".quad 0x7225202c36316c72,0x610a3b34202c3033,0x25203436732e6464,0x7225202c37316c72\n"
".quad 0x316c7225202c316c,0x6c672e646c0a3b36,0x3233662e6c61626f,0x255b202c36662520\n"
".quad 0x6c0a3b5d37316c72,0x6c61626f6c672e64,0x376625203233662e,0x35316c72255b202c\n"
".quad 0x772e6c756d0a3b5d,0x203233732e656469,0x25202c38316c7225,0x610a3b34202c3572\n"
".quad 0x25203436732e6464,0x7225202c39316c72,0x316c7225202c316c,0x6c672e646c0a3b38\n"
".quad 0x3233662e6c61626f,0x255b202c38662520,0x6e0a3b5d39316c72,0x25203233662e6765\n"
".quad 0x3b376625202c3966,0x2e6e722e616d660a,0x3031662520323366,0x25202c396625202c\n"
".quad 0x3b386625202c3666,0x626f6c672e74730a,0x5b203233662e6c61,0x202c5d39316c7225\n"
".quad 0x6c2e0a3b30316625,0x353532203220636f,0x0a3b7465720a3220,0x000000000a0a0a7d\n"
".text");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[1024];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const struct {int m; int v; const unsigned long long* d; char* f;} __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
