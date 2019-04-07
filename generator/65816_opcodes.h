case 0x0a1: // lda (dir,X) [$a1] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0a3: // lda stk,S  [$a3] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0a5: // lda dir    [$a5] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0a7: // lda [dir]  [$a7] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0a9: // lda #imm   [$a9] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0ad: // lda abs    [$ad] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0af: // lda long   [$af] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b1: // lda (dir),Y [$b1] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b2: // lda (dir)  [$b2] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b3: // lda (stk,S),Y [$b3] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b5: // lda dir,x  [$b5] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b7: // lda [dir],y [$b7] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0b9: // lda abs,y  [$b9] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0bd: // lda abs,x  [$bd] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x0bf: // lda long,x [$bf] A0X0
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1a1: // lda (dir,X) [$a1] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1a3: // lda stk,S  [$a3] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1a5: // lda dir    [$a5] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1a7: // lda [dir]  [$a7] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1a9: // lda #imm   [$a9] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1ad: // lda abs    [$ad] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1af: // lda long   [$af] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b1: // lda (dir),Y [$b1] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b2: // lda (dir)  [$b2] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b3: // lda (stk,S),Y [$b3] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b5: // lda dir,x  [$b5] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b7: // lda [dir],y [$b7] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1b9: // lda abs,y  [$b9] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1bd: // lda abs,x  [$bd] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x1bf: // lda long,x [$bf] A0X1
    ;cpu.A.B.L = CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x2a1: // lda (dir,X) [$a1] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2a3: // lda stk,S  [$a3] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2a5: // lda dir    [$a5] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2a7: // lda [dir]  [$a7] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2a9: // lda #imm   [$a9] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2ad: // lda abs    [$ad] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2af: // lda long   [$af] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b1: // lda (dir),Y [$b1] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b2: // lda (dir)  [$b2] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b3: // lda (stk,S),Y [$b3] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b5: // lda dir,x  [$b5] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b7: // lda [dir],y [$b7] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2b9: // lda abs,y  [$b9] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2bd: // lda abs,x  [$bd] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x2bf: // lda long,x [$bf] A1X0
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3a1: // lda (dir,X) [$a1] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3a3: // lda stk,S  [$a3] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3a5: // lda dir    [$a5] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3a7: // lda [dir]  [$a7] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3a9: // lda #imm   [$a9] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3ad: // lda abs    [$ad] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3af: // lda long   [$af] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b1: // lda (dir),Y [$b1] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b2: // lda (dir)  [$b2] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b3: // lda (stk,S),Y [$b3] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b5: // lda dir,x  [$b5] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b7: // lda [dir],y [$b7] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3b9: // lda abs,y  [$b9] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3bd: // lda abs,x  [$bd] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x3bf: // lda long,x [$bf] A1X1
    ;cpu.A = CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x081: // sta (dir,X) [$81] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x083: // sta stk,S  [$83] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x085: // sta dir    [$85] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x087: // sta [dir]  [$87] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x08d: // sta abs    [$8d] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x08f: // sta long   [$8f] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x091: // sta (dir),Y [$91] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x092: // sta (dir)  [$92] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x093: // sta (stk,S),Y [$93] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x095: // sta dir,x  [$95] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x097: // sta [dir],y [$97] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x099: // sta abs,y  [$99] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x09d: // sta abs,x  [$9d] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x09f: // sta long,x [$9f] A0X0
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x181: // sta (dir,X) [$81] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x183: // sta stk,S  [$83] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x185: // sta dir    [$85] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x187: // sta [dir]  [$87] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x18d: // sta abs    [$8d] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x18f: // sta long   [$8f] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x191: // sta (dir),Y [$91] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x192: // sta (dir)  [$92] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x193: // sta (stk,S),Y [$93] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x195: // sta dir,x  [$95] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x197: // sta [dir],y [$97] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x199: // sta abs,y  [$99] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x19d: // sta abs,x  [$9d] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x19f: // sta long,x [$9f] A0X1
    ;MB8 = cpu.A.B.L;CPUWriteByte();break;

case 0x281: // sta (dir,X) [$81] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x283: // sta stk,S  [$83] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x285: // sta dir    [$85] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x287: // sta [dir]  [$87] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x28d: // sta abs    [$8d] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x28f: // sta long   [$8f] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x291: // sta (dir),Y [$91] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x292: // sta (dir)  [$92] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x293: // sta (stk,S),Y [$93] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x295: // sta dir,x  [$95] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x297: // sta [dir],y [$97] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x299: // sta abs,y  [$99] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x29d: // sta abs,x  [$9d] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x29f: // sta long,x [$9f] A1X0
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x381: // sta (dir,X) [$81] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x383: // sta stk,S  [$83] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x385: // sta dir    [$85] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x387: // sta [dir]  [$87] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x38d: // sta abs    [$8d] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x38f: // sta long   [$8f] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x391: // sta (dir),Y [$91] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x392: // sta (dir)  [$92] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x393: // sta (stk,S),Y [$93] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x395: // sta dir,x  [$95] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x397: // sta [dir],y [$97] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x399: // sta abs,y  [$99] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x39d: // sta abs,x  [$9d] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x39f: // sta long,x [$9f] A1X1
    ;MB16 = cpu.A;CPUWriteWord();break;

case 0x061: // adc (dir,X) [$61] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x063: // adc stk,S  [$63] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x065: // adc dir    [$65] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x067: // adc [dir]  [$67] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x069: // adc #imm   [$69] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x06d: // adc abs    [$6d] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x06f: // adc long   [$6f] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x071: // adc (dir),Y [$71] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x072: // adc (dir)  [$72] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x073: // adc (stk,S),Y [$73] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x075: // adc dir,x  [$75] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x077: // adc [dir],y [$77] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x079: // adc abs,y  [$79] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x07d: // adc abs,x  [$7d] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x07f: // adc long,x [$7f] A0X0
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x161: // adc (dir,X) [$61] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x163: // adc stk,S  [$63] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x165: // adc dir    [$65] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x167: // adc [dir]  [$67] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x169: // adc #imm   [$69] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x16d: // adc abs    [$6d] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x16f: // adc long   [$6f] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x171: // adc (dir),Y [$71] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x172: // adc (dir)  [$72] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x173: // adc (stk,S),Y [$73] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x175: // adc dir,x  [$75] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x177: // adc [dir],y [$77] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x179: // adc abs,y  [$79] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x17d: // adc abs,x  [$7d] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x17f: // adc long,x [$7f] A0X1
    ;cpu.A.B.L = ALUAdc8(cpu.A.B.L,CPUReadByte());break;

case 0x261: // adc (dir,X) [$61] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x263: // adc stk,S  [$63] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x265: // adc dir    [$65] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x267: // adc [dir]  [$67] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x269: // adc #imm   [$69] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x26d: // adc abs    [$6d] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x26f: // adc long   [$6f] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x271: // adc (dir),Y [$71] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x272: // adc (dir)  [$72] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x273: // adc (stk,S),Y [$73] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x275: // adc dir,x  [$75] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x277: // adc [dir],y [$77] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x279: // adc abs,y  [$79] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x27d: // adc abs,x  [$7d] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x27f: // adc long,x [$7f] A1X0
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x361: // adc (dir,X) [$61] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x363: // adc stk,S  [$63] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x365: // adc dir    [$65] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x367: // adc [dir]  [$67] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x369: // adc #imm   [$69] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x36d: // adc abs    [$6d] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x36f: // adc long   [$6f] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x371: // adc (dir),Y [$71] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x372: // adc (dir)  [$72] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x373: // adc (stk,S),Y [$73] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x375: // adc dir,x  [$75] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x377: // adc [dir],y [$77] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x379: // adc abs,y  [$79] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x37d: // adc abs,x  [$7d] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x37f: // adc long,x [$7f] A1X1
    ;cpu.A = ALUAdc16(cpu.A,CPUReadWord());break;

case 0x0e1: // sbc (dir,X) [$e1] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0e3: // sbc stk,S  [$e3] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0e5: // sbc dir    [$e5] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0e7: // sbc [dir]  [$e7] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0e9: // sbc #imm   [$e9] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0ed: // sbc abs    [$ed] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0ef: // sbc long   [$ef] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f1: // sbc (dir),Y [$f1] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f2: // sbc (dir)  [$f2] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f3: // sbc (stk,S),Y [$f3] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f5: // sbc dir,x  [$f5] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f7: // sbc [dir],y [$f7] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0f9: // sbc abs,y  [$f9] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0fd: // sbc abs,x  [$fd] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x0ff: // sbc long,x [$ff] A0X0
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1e1: // sbc (dir,X) [$e1] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1e3: // sbc stk,S  [$e3] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1e5: // sbc dir    [$e5] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1e7: // sbc [dir]  [$e7] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1e9: // sbc #imm   [$e9] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1ed: // sbc abs    [$ed] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1ef: // sbc long   [$ef] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f1: // sbc (dir),Y [$f1] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f2: // sbc (dir)  [$f2] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f3: // sbc (stk,S),Y [$f3] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f5: // sbc dir,x  [$f5] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f7: // sbc [dir],y [$f7] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1f9: // sbc abs,y  [$f9] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1fd: // sbc abs,x  [$fd] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x1ff: // sbc long,x [$ff] A0X1
    ;cpu.A.B.L = ALUSbc8(cpu.A.B.L,CPUReadByte(),0);break;

case 0x2e1: // sbc (dir,X) [$e1] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2e3: // sbc stk,S  [$e3] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2e5: // sbc dir    [$e5] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2e7: // sbc [dir]  [$e7] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2e9: // sbc #imm   [$e9] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2ed: // sbc abs    [$ed] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2ef: // sbc long   [$ef] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f1: // sbc (dir),Y [$f1] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f2: // sbc (dir)  [$f2] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f3: // sbc (stk,S),Y [$f3] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f5: // sbc dir,x  [$f5] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f7: // sbc [dir],y [$f7] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2f9: // sbc abs,y  [$f9] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2fd: // sbc abs,x  [$fd] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x2ff: // sbc long,x [$ff] A1X0
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3e1: // sbc (dir,X) [$e1] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3e3: // sbc stk,S  [$e3] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3e5: // sbc dir    [$e5] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3e7: // sbc [dir]  [$e7] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3e9: // sbc #imm   [$e9] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3ed: // sbc abs    [$ed] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3ef: // sbc long   [$ef] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f1: // sbc (dir),Y [$f1] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f2: // sbc (dir)  [$f2] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f3: // sbc (stk,S),Y [$f3] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f5: // sbc dir,x  [$f5] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f7: // sbc [dir],y [$f7] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3f9: // sbc abs,y  [$f9] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3fd: // sbc abs,x  [$fd] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x3ff: // sbc long,x [$ff] A1X1
    ;cpu.A = ALUSbc16(cpu.A,CPUReadWord(),0);break;

case 0x0c1: // cmp (dir,X) [$c1] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0c3: // cmp stk,S  [$c3] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0c5: // cmp dir    [$c5] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0c7: // cmp [dir]  [$c7] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0c9: // cmp #imm   [$c9] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0cd: // cmp abs    [$cd] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0cf: // cmp long   [$cf] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d1: // cmp (dir),Y [$d1] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d2: // cmp (dir)  [$d2] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d3: // cmp (stk,S),Y [$d3] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d5: // cmp dir,x  [$d5] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d7: // cmp [dir],y [$d7] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0d9: // cmp abs,y  [$d9] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0dd: // cmp abs,x  [$dd] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x0df: // cmp long,x [$df] A0X0
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1c1: // cmp (dir,X) [$c1] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1c3: // cmp stk,S  [$c3] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1c5: // cmp dir    [$c5] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1c7: // cmp [dir]  [$c7] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1c9: // cmp #imm   [$c9] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1cd: // cmp abs    [$cd] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1cf: // cmp long   [$cf] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d1: // cmp (dir),Y [$d1] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d2: // cmp (dir)  [$d2] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d3: // cmp (stk,S),Y [$d3] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d5: // cmp dir,x  [$d5] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d7: // cmp [dir],y [$d7] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1d9: // cmp abs,y  [$d9] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1dd: // cmp abs,x  [$dd] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x1df: // cmp long,x [$df] A0X1
    ;ALUSbc8(cpu.A.B.L,CPUReadByte(),1);break;

case 0x2c1: // cmp (dir,X) [$c1] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2c3: // cmp stk,S  [$c3] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2c5: // cmp dir    [$c5] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2c7: // cmp [dir]  [$c7] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2c9: // cmp #imm   [$c9] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2cd: // cmp abs    [$cd] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2cf: // cmp long   [$cf] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d1: // cmp (dir),Y [$d1] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d2: // cmp (dir)  [$d2] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d3: // cmp (stk,S),Y [$d3] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d5: // cmp dir,x  [$d5] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d7: // cmp [dir],y [$d7] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2d9: // cmp abs,y  [$d9] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2dd: // cmp abs,x  [$dd] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x2df: // cmp long,x [$df] A1X0
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3c1: // cmp (dir,X) [$c1] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3c3: // cmp stk,S  [$c3] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3c5: // cmp dir    [$c5] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3c7: // cmp [dir]  [$c7] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3c9: // cmp #imm   [$c9] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3cd: // cmp abs    [$cd] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3cf: // cmp long   [$cf] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d1: // cmp (dir),Y [$d1] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d2: // cmp (dir)  [$d2] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d3: // cmp (stk,S),Y [$d3] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d5: // cmp dir,x  [$d5] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d7: // cmp [dir],y [$d7] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3d9: // cmp abs,y  [$d9] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3dd: // cmp abs,x  [$dd] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x3df: // cmp long,x [$df] A1X1
    ;ALUSbc16(cpu.A,CPUReadWord(),1);break;

case 0x021: // and (dir,X) [$21] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x023: // and stk,S  [$23] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x025: // and dir    [$25] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x027: // and [dir]  [$27] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x029: // and #imm   [$29] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x02d: // and abs    [$2d] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x02f: // and long   [$2f] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x031: // and (dir),Y [$31] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x032: // and (dir)  [$32] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x033: // and (stk,S),Y [$33] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x035: // and dir,x  [$35] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x037: // and [dir],y [$37] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x039: // and abs,y  [$39] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x03d: // and abs,x  [$3d] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x03f: // and long,x [$3f] A0X0
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x121: // and (dir,X) [$21] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x123: // and stk,S  [$23] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x125: // and dir    [$25] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x127: // and [dir]  [$27] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x129: // and #imm   [$29] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x12d: // and abs    [$2d] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x12f: // and long   [$2f] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x131: // and (dir),Y [$31] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x132: // and (dir)  [$32] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x133: // and (stk,S),Y [$33] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x135: // and dir,x  [$35] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x137: // and [dir],y [$37] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x139: // and abs,y  [$39] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x13d: // and abs,x  [$3d] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x13f: // and long,x [$3f] A0X1
    ;cpu.A.B.L = cpu.A.B.L & CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x221: // and (dir,X) [$21] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x223: // and stk,S  [$23] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x225: // and dir    [$25] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x227: // and [dir]  [$27] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x229: // and #imm   [$29] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x22d: // and abs    [$2d] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x22f: // and long   [$2f] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x231: // and (dir),Y [$31] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x232: // and (dir)  [$32] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x233: // and (stk,S),Y [$33] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x235: // and dir,x  [$35] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x237: // and [dir],y [$37] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x239: // and abs,y  [$39] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x23d: // and abs,x  [$3d] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x23f: // and long,x [$3f] A1X0
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x321: // and (dir,X) [$21] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x323: // and stk,S  [$23] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x325: // and dir    [$25] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x327: // and [dir]  [$27] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x329: // and #imm   [$29] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x32d: // and abs    [$2d] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x32f: // and long   [$2f] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x331: // and (dir),Y [$31] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x332: // and (dir)  [$32] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x333: // and (stk,S),Y [$33] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x335: // and dir,x  [$35] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x337: // and [dir],y [$37] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x339: // and abs,y  [$39] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x33d: // and abs,x  [$3d] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x33f: // and long,x [$3f] A1X1
    ;cpu.A = cpu.A & CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x041: // eor (dir,X) [$41] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x043: // eor stk,S  [$43] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x045: // eor dir    [$45] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x047: // eor [dir]  [$47] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x049: // eor #imm   [$49] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x04d: // eor abs    [$4d] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x04f: // eor long   [$4f] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x051: // eor (dir),Y [$51] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x052: // eor (dir)  [$52] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x053: // eor (stk,S),Y [$53] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x055: // eor dir,x  [$55] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x057: // eor [dir],y [$57] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x059: // eor abs,y  [$59] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x05d: // eor abs,x  [$5d] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x05f: // eor long,x [$5f] A0X0
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x141: // eor (dir,X) [$41] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x143: // eor stk,S  [$43] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x145: // eor dir    [$45] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x147: // eor [dir]  [$47] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x149: // eor #imm   [$49] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x14d: // eor abs    [$4d] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x14f: // eor long   [$4f] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x151: // eor (dir),Y [$51] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x152: // eor (dir)  [$52] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x153: // eor (stk,S),Y [$53] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x155: // eor dir,x  [$55] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x157: // eor [dir],y [$57] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x159: // eor abs,y  [$59] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x15d: // eor abs,x  [$5d] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x15f: // eor long,x [$5f] A0X1
    ;cpu.A.B.L = cpu.A.B.L ^ CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x241: // eor (dir,X) [$41] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x243: // eor stk,S  [$43] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x245: // eor dir    [$45] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x247: // eor [dir]  [$47] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x249: // eor #imm   [$49] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x24d: // eor abs    [$4d] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x24f: // eor long   [$4f] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x251: // eor (dir),Y [$51] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x252: // eor (dir)  [$52] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x253: // eor (stk,S),Y [$53] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x255: // eor dir,x  [$55] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x257: // eor [dir],y [$57] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x259: // eor abs,y  [$59] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x25d: // eor abs,x  [$5d] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x25f: // eor long,x [$5f] A1X0
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x341: // eor (dir,X) [$41] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x343: // eor stk,S  [$43] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x345: // eor dir    [$45] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x347: // eor [dir]  [$47] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x349: // eor #imm   [$49] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x34d: // eor abs    [$4d] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x34f: // eor long   [$4f] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x351: // eor (dir),Y [$51] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x352: // eor (dir)  [$52] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x353: // eor (stk,S),Y [$53] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x355: // eor dir,x  [$55] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x357: // eor [dir],y [$57] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x359: // eor abs,y  [$59] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x35d: // eor abs,x  [$5d] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x35f: // eor long,x [$5f] A1X1
    ;cpu.A = cpu.A ^ CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x001: // ora (dir,X) [$01] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x003: // ora stk,S  [$03] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x005: // ora dir    [$05] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x007: // ora [dir]  [$07] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x009: // ora #imm   [$09] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x00d: // ora abs    [$0d] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x00f: // ora long   [$0f] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x011: // ora (dir),Y [$11] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x012: // ora (dir)  [$12] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x013: // ora (stk,S),Y [$13] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x015: // ora dir,x  [$15] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x017: // ora [dir],y [$17] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x019: // ora abs,y  [$19] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x01d: // ora abs,x  [$1d] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x01f: // ora long,x [$1f] A0X0
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x101: // ora (dir,X) [$01] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x103: // ora stk,S  [$03] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x105: // ora dir    [$05] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x107: // ora [dir]  [$07] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x109: // ora #imm   [$09] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x10d: // ora abs    [$0d] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x10f: // ora long   [$0f] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x111: // ora (dir),Y [$11] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x112: // ora (dir)  [$12] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x113: // ora (stk,S),Y [$13] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x115: // ora dir,x  [$15] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x117: // ora [dir],y [$17] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x119: // ora abs,y  [$19] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x11d: // ora abs,x  [$1d] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x11f: // ora long,x [$1f] A0X1
    ;cpu.A.B.L = cpu.A.B.L | CPUReadByte();ALUSetNZ8(cpu.A.B.L);break;

case 0x201: // ora (dir,X) [$01] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x203: // ora stk,S  [$03] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x205: // ora dir    [$05] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x207: // ora [dir]  [$07] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x209: // ora #imm   [$09] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x20d: // ora abs    [$0d] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x20f: // ora long   [$0f] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x211: // ora (dir),Y [$11] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x212: // ora (dir)  [$12] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x213: // ora (stk,S),Y [$13] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x215: // ora dir,x  [$15] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x217: // ora [dir],y [$17] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x219: // ora abs,y  [$19] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x21d: // ora abs,x  [$1d] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x21f: // ora long,x [$1f] A1X0
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x301: // ora (dir,X) [$01] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x303: // ora stk,S  [$03] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x305: // ora dir    [$05] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x307: // ora [dir]  [$07] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x309: // ora #imm   [$09] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x30d: // ora abs    [$0d] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x30f: // ora long   [$0f] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x311: // ora (dir),Y [$11] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x312: // ora (dir)  [$12] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x313: // ora (stk,S),Y [$13] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x315: // ora dir,x  [$15] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x317: // ora [dir],y [$17] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x319: // ora abs,y  [$19] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x31d: // ora abs,x  [$1d] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x31f: // ora long,x [$1f] A1X1
    ;cpu.A = cpu.A | CPUReadWord();ALUSetNZ16(cpu.A);break;

case 0x0a2: // ldx #imm   [$a2] A0X0
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0a6: // ldx dir    [$a6] A0X0
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0ae: // ldx abs    [$ae] A0X0
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0b6: // ldx dir,Y  [$b6] A0X0
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0be: // ldx abs,Y  [$be] A0X0
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1a2: // ldx #imm   [$a2] A0X1
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1a6: // ldx dir    [$a6] A0X1
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1ae: // ldx abs    [$ae] A0X1
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1b6: // ldx dir,Y  [$b6] A0X1
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1be: // ldx abs,Y  [$be] A0X1
    ;cpu.XL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x2a2: // ldx #imm   [$a2] A1X0
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2a6: // ldx dir    [$a6] A1X0
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2ae: // ldx abs    [$ae] A1X0
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2b6: // ldx dir,Y  [$b6] A1X0
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2be: // ldx abs,Y  [$be] A1X0
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3a2: // ldx #imm   [$a2] A1X1
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3a6: // ldx dir    [$a6] A1X1
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3ae: // ldx abs    [$ae] A1X1
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3b6: // ldx dir,Y  [$b6] A1X1
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3be: // ldx abs,Y  [$be] A1X1
    ;cpu.X = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x0a0: // ldy #imm   [$a0] A0X0
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0a4: // ldy dir    [$a4] A0X0
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0ac: // ldy abs    [$ac] A0X0
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0b4: // ldy dir,Y  [$b4] A0X0
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x0bc: // ldy abs,Y  [$bc] A0X0
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1a0: // ldy #imm   [$a0] A0X1
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1a4: // ldy dir    [$a4] A0X1
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1ac: // ldy abs    [$ac] A0X1
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1b4: // ldy dir,Y  [$b4] A0X1
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x1bc: // ldy abs,Y  [$bc] A0X1
    ;cpu.YL = CPUReadByte();ALUSetNZ8(cpu.XL);break;

case 0x2a0: // ldy #imm   [$a0] A1X0
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2a4: // ldy dir    [$a4] A1X0
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2ac: // ldy abs    [$ac] A1X0
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2b4: // ldy dir,Y  [$b4] A1X0
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x2bc: // ldy abs,Y  [$bc] A1X0
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3a0: // ldy #imm   [$a0] A1X1
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3a4: // ldy dir    [$a4] A1X1
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3ac: // ldy abs    [$ac] A1X1
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3b4: // ldy dir,Y  [$b4] A1X1
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x3bc: // ldy abs,Y  [$bc] A1X1
    ;cpu.Y = CPUReadWord();ALUSetNZ16(cpu.X);break;

case 0x086: // stx dir    [$86] A0X0
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x08e: // stx abs    [$8e] A0X0
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x096: // stx dir,X  [$96] A0X0
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x186: // stx dir    [$86] A0X1
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x18e: // stx abs    [$8e] A0X1
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x196: // stx dir,X  [$96] A0X1
    ;MB8 = cpu.XL;CPUWriteByte();break;

case 0x286: // stx dir    [$86] A1X0
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x28e: // stx abs    [$8e] A1X0
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x296: // stx dir,X  [$96] A1X0
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x386: // stx dir    [$86] A1X1
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x38e: // stx abs    [$8e] A1X1
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x396: // stx dir,X  [$96] A1X1
    ;MB16 = cpu.X;CPUWriteWord();break;

case 0x084: // sty dir    [$84] A0X0
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x08c: // sty abs    [$8c] A0X0
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x094: // sty dir,X  [$94] A0X0
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x184: // sty dir    [$84] A0X1
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x18c: // sty abs    [$8c] A0X1
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x194: // sty dir,X  [$94] A0X1
    ;MB8 = cpu.YL;CPUWriteByte();break;

case 0x284: // sty dir    [$84] A1X0
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x28c: // sty abs    [$8c] A1X0
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x294: // sty dir,X  [$94] A1X0
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x384: // sty dir    [$84] A1X1
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x38c: // sty abs    [$8c] A1X1
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x394: // sty dir,X  [$94] A1X1
    ;MB16 = cpu.Y;CPUWriteWord();break;

case 0x064: // stz dir    [$64] A0X0
    ;MB8 = 0;CPUWriteByte();break;

case 0x074: // stz dir,X  [$74] A0X0
    ;MB8 = 0;CPUWriteByte();break;

case 0x09c: // stz abs    [$9c] A0X0
    ;MB8 = 0;CPUWriteByte();break;

case 0x09e: // stz abs,X  [$9e] A0X0
    ;MB8 = 0;CPUWriteByte();break;

case 0x164: // stz dir    [$64] A0X1
    ;MB8 = 0;CPUWriteByte();break;

case 0x174: // stz dir,X  [$74] A0X1
    ;MB8 = 0;CPUWriteByte();break;

case 0x19c: // stz abs    [$9c] A0X1
    ;MB8 = 0;CPUWriteByte();break;

case 0x19e: // stz abs,X  [$9e] A0X1
    ;MB8 = 0;CPUWriteByte();break;

case 0x264: // stz dir    [$64] A1X0
    ;MB16 = 0;CPUWriteWord();break;

case 0x274: // stz dir,X  [$74] A1X0
    ;MB16 = 0;CPUWriteWord();break;

case 0x29c: // stz abs    [$9c] A1X0
    ;MB16 = 0;CPUWriteWord();break;

case 0x29e: // stz abs,X  [$9e] A1X0
    ;MB16 = 0;CPUWriteWord();break;

case 0x364: // stz dir    [$64] A1X1
    ;MB16 = 0;CPUWriteWord();break;

case 0x374: // stz dir,X  [$74] A1X1
    ;MB16 = 0;CPUWriteWord();break;

case 0x39c: // stz abs    [$9c] A1X1
    ;MB16 = 0;CPUWriteWord();break;

case 0x39e: // stz abs,X  [$9e] A1X1
    ;MB16 = 0;CPUWriteWord();break;

case 0x0e0: // cpx #imm   [$e0] A0X0
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x0e4: // cpx dir    [$e4] A0X0
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x0ec: // cpx abs    [$ec] A0X0
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x1e0: // cpx #imm   [$e0] A0X1
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x1e4: // cpx dir    [$e4] A0X1
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x1ec: // cpx abs    [$ec] A0X1
    ;ALUSbc8(cpu.XL,CPUReadByte(),1);break;

case 0x2e0: // cpx #imm   [$e0] A1X0
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x2e4: // cpx dir    [$e4] A1X0
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x2ec: // cpx abs    [$ec] A1X0
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x3e0: // cpx #imm   [$e0] A1X1
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x3e4: // cpx dir    [$e4] A1X1
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x3ec: // cpx abs    [$ec] A1X1
    ;ALUSbc16(cpu.X,CPUReadWord(),1);break;

case 0x0c0: // cpy #imm   [$c0] A0X0
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x0c4: // cpy dir    [$c4] A0X0
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x0cc: // cpy abs    [$cc] A0X0
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x1c0: // cpy #imm   [$c0] A0X1
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x1c4: // cpy dir    [$c4] A0X1
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x1cc: // cpy abs    [$cc] A0X1
    ;ALUSbc8(cpu.YL,CPUReadByte(),1);break;

case 0x2c0: // cpy #imm   [$c0] A1X0
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x2c4: // cpy dir    [$c4] A1X0
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x2cc: // cpy abs    [$cc] A1X0
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x3c0: // cpy #imm   [$c0] A1X1
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x3c4: // cpy dir    [$c4] A1X1
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x3cc: // cpy abs    [$cc] A1X1
    ;ALUSbc16(cpu.Y,CPUReadWord(),1);break;

case 0x0c6: // dec dir    [$c6] A0X0
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0ce: // dec abs    [$ce] A0X0
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0d6: // dec dir,x  [$d6] A0X0
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0de: // dec abs,x  [$de] A0X0
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1c6: // dec dir    [$c6] A0X1
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1ce: // dec abs    [$ce] A0X1
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1d6: // dec dir,x  [$d6] A0X1
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1de: // dec abs,x  [$de] A0X1
    ;CPUReadByte();MB8--;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x2c6: // dec dir    [$c6] A1X0
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2ce: // dec abs    [$ce] A1X0
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2d6: // dec dir,x  [$d6] A1X0
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2de: // dec abs,x  [$de] A1X0
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3c6: // dec dir    [$c6] A1X1
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3ce: // dec abs    [$ce] A1X1
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3d6: // dec dir,x  [$d6] A1X1
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3de: // dec abs,x  [$de] A1X1
    ;CPUReadWord();MB16--;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x03a: // dec        [$3a] A0X0
    cpu.A.B.L--;ALUSetNZ8(cpu.A.B.L);break;

case 0x13a: // dec        [$3a] A0X1
    cpu.A.B.L--;ALUSetNZ8(cpu.A.B.L);break;

case 0x23a: // dec        [$3a] A1X0
    cpu.A--;ALUSetNZ16(cpu.A);break;

case 0x33a: // dec        [$3a] A1X1
    cpu.A--;ALUSetNZ16(cpu.A);break;

case 0x0ca: // dex        [$ca] A0X0
    cpu.XL--;ALUSetNZ8(cpu.XL);break;

case 0x1ca: // dex        [$ca] A0X1
    cpu.XL--;ALUSetNZ8(cpu.XL);break;

case 0x2ca: // dex        [$ca] A1X0
    cpu.X--;ALUSetNZ16(cpu.X);break;

case 0x3ca: // dex        [$ca] A1X1
    cpu.X--;ALUSetNZ16(cpu.X);break;

case 0x088: // dey        [$88] A0X0
    cpu.YL--;ALUSetNZ8(cpu.YL);break;

case 0x188: // dey        [$88] A0X1
    cpu.YL--;ALUSetNZ8(cpu.YL);break;

case 0x288: // dey        [$88] A1X0
    cpu.Y--;ALUSetNZ16(cpu.Y);break;

case 0x388: // dey        [$88] A1X1
    cpu.Y--;ALUSetNZ16(cpu.Y);break;

case 0x0e6: // inc dir    [$e6] A0X0
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0ee: // inc abs    [$ee] A0X0
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0f6: // inc dir,x  [$f6] A0X0
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x0fe: // inc abs,x  [$fe] A0X0
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1e6: // inc dir    [$e6] A0X1
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1ee: // inc abs    [$ee] A0X1
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1f6: // inc dir,x  [$f6] A0X1
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x1fe: // inc abs,x  [$fe] A0X1
    ;CPUReadByte();MB8++;CPUWriteByte();ALUSetNZ8(MB8);break;

case 0x2e6: // inc dir    [$e6] A1X0
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2ee: // inc abs    [$ee] A1X0
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2f6: // inc dir,x  [$f6] A1X0
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x2fe: // inc abs,x  [$fe] A1X0
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3e6: // inc dir    [$e6] A1X1
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3ee: // inc abs    [$ee] A1X1
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3f6: // inc dir,x  [$f6] A1X1
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x3fe: // inc abs,x  [$fe] A1X1
    ;CPUReadWord();MB16++;CPUWriteWord();ALUSetNZ16(MB16);break;

case 0x01a: // inc        [$1a] A0X0
    cpu.A.B.L++;ALUSetNZ8(cpu.A.B.L);break;

case 0x11a: // inc        [$1a] A0X1
    cpu.A.B.L++;ALUSetNZ8(cpu.A.B.L);break;

case 0x21a: // inc        [$1a] A1X0
    cpu.A++;ALUSetNZ16(cpu.A);break;

case 0x31a: // inc        [$1a] A1X1
    cpu.A++;ALUSetNZ16(cpu.A);break;

case 0x0e8: // inx        [$e8] A0X0
    cpu.XL++;ALUSetNZ8(cpu.XL);break;

case 0x1e8: // inx        [$e8] A0X1
    cpu.XL++;ALUSetNZ8(cpu.XL);break;

case 0x2e8: // inx        [$e8] A1X0
    cpu.X++;ALUSetNZ16(cpu.X);break;

case 0x3e8: // inx        [$e8] A1X1
    cpu.X++;ALUSetNZ16(cpu.X);break;

case 0x0c8: // iny        [$c8] A0X0
    cpu.YL++;ALUSetNZ8(cpu.YL);break;

case 0x1c8: // iny        [$c8] A0X1
    cpu.YL++;ALUSetNZ8(cpu.YL);break;

case 0x2c8: // iny        [$c8] A1X0
    cpu.Y++;ALUSetNZ16(cpu.Y);break;

case 0x3c8: // iny        [$c8] A1X1
    cpu.Y++;ALUSetNZ16(cpu.Y);break;

case 0x024: // bit dir    [$24] A0X0
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x02c: // bit abs    [$2c] A0X0
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x034: // bit dir,x  [$34] A0X0
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x03c: // bit abs,x  [$3c] A0X0
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x124: // bit dir    [$24] A0X1
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x12c: // bit abs    [$2c] A0X1
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x134: // bit dir,x  [$34] A0X1
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x13c: // bit abs,x  [$3c] A0X1
    ;ALUBitTest8(CPUReadByte(),cpu.A.B.L);break;

case 0x224: // bit dir    [$24] A1X0
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x22c: // bit abs    [$2c] A1X0
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x234: // bit dir,x  [$34] A1X0
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x23c: // bit abs,x  [$3c] A1X0
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x324: // bit dir    [$24] A1X1
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x32c: // bit abs    [$2c] A1X1
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x334: // bit dir,x  [$34] A1X1
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x33c: // bit abs,x  [$3c] A1X1
    ;ALUBitTest16(CPUReadWord(),cpu.A);break;

case 0x089: // bit #imm8  [$89] A0X0
    ;ALUSetZ8(CPUReadByte() & cpu.A.B.L);break;

case 0x189: // bit #imm8  [$89] A0X1
    ;ALUSetZ8(CPUReadByte() & cpu.A.B.L);break;

case 0x289: // bit #imm8  [$89] A1X0
    ;ALUSetZ16(CPUReadWord() & cpu.A);break;

case 0x389: // bit #imm8  [$89] A1X1
    ;ALUSetZ16(CPUReadWord() & cpu.A);break;

case 0x014: // trb dir    [$14] A0X0
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 &= (cpu.A.B.L ^ 0xFF);CPUWriteByte();break;

case 0x01c: // trb abs    [$1c] A0X0
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 &= (cpu.A.B.L ^ 0xFF);CPUWriteByte();break;

case 0x114: // trb dir    [$14] A0X1
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 &= (cpu.A.B.L ^ 0xFF);CPUWriteByte();break;

case 0x11c: // trb abs    [$1c] A0X1
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 &= (cpu.A.B.L ^ 0xFF);CPUWriteByte();break;

case 0x214: // trb dir    [$14] A1X0
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 &= (cpu.A ^ 0xFFFF);CPUWriteWord();break;

case 0x21c: // trb abs    [$1c] A1X0
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 &= (cpu.A ^ 0xFFFF);CPUWriteWord();break;

case 0x314: // trb dir    [$14] A1X1
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 &= (cpu.A ^ 0xFFFF);CPUWriteWord();break;

case 0x31c: // trb abs    [$1c] A1X1
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 &= (cpu.A ^ 0xFFFF);CPUWriteWord();break;

case 0x004: // tsb dir    [$04] A0X0
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 |= cpu.A.B.L;CPUWriteByte();break;

case 0x00c: // tsb abs    [$0c] A0X0
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 |= cpu.A.B.L;CPUWriteByte();break;

case 0x104: // tsb dir    [$04] A0X1
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 |= cpu.A.B.L;CPUWriteByte();break;

case 0x10c: // tsb abs    [$0c] A0X1
    ;CPUReadByte();ALUSetZ8(MB8 & cpu.A.B.L);MB8 |= cpu.A.B.L;CPUWriteByte();break;

case 0x204: // tsb dir    [$04] A1X0
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 |= cpu.A;CPUWriteWord();break;

case 0x20c: // tsb abs    [$0c] A1X0
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 |= cpu.A;CPUWriteWord();break;

case 0x304: // tsb dir    [$04] A1X1
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 |= cpu.A;CPUWriteWord();break;

case 0x30c: // tsb abs    [$0c] A1X1
    ;CPUReadWord();ALUSetZ16(MB16 & cpu.A);MB16 |= cpu.A;CPUWriteWord();break;

case 0x006: // asl dir    [$06] A0X0
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x00e: // asl abs    [$0e] A0X0
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x016: // asl dir,x  [$16] A0X0
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x01e: // asl abs,x  [$1e] A0X0
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x106: // asl dir    [$06] A0X1
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x10e: // asl abs    [$0e] A0X1
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x116: // asl dir,x  [$16] A0X1
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x11e: // asl abs,x  [$1e] A0X1
    ;CPUReadByte();ALUAsl8(&MB8);CPUWriteByte();break;

case 0x206: // asl dir    [$06] A1X0
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x20e: // asl abs    [$0e] A1X0
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x216: // asl dir,x  [$16] A1X0
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x21e: // asl abs,x  [$1e] A1X0
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x306: // asl dir    [$06] A1X1
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x30e: // asl abs    [$0e] A1X1
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x316: // asl dir,x  [$16] A1X1
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x31e: // asl abs,x  [$1e] A1X1
    ;CPUReadWord();ALUAsl16(&MB16);CPUWriteWord();break;

case 0x00a: // asl a      [$0a] A0X0
    ALUAsl8(&cpu.A.B.L);break;

case 0x10a: // asl a      [$0a] A0X1
    ALUAsl8(&cpu.A.B.L);break;

case 0x20a: // asl a      [$0a] A1X0
    ALUAsl16(&cpu.A);break;

case 0x30a: // asl a      [$0a] A1X1
    ALUAsl16(&cpu.A);break;

case 0x046: // lsr dir    [$46] A0X0
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x04e: // lsr abs    [$4e] A0X0
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x056: // lsr dir,x  [$56] A0X0
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x05e: // lsr abs,x  [$5e] A0X0
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x146: // lsr dir    [$46] A0X1
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x14e: // lsr abs    [$4e] A0X1
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x156: // lsr dir,x  [$56] A0X1
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x15e: // lsr abs,x  [$5e] A0X1
    ;CPUReadByte();ALULsr8(&MB8);CPUWriteByte();break;

case 0x246: // lsr dir    [$46] A1X0
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x24e: // lsr abs    [$4e] A1X0
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x256: // lsr dir,x  [$56] A1X0
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x25e: // lsr abs,x  [$5e] A1X0
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x346: // lsr dir    [$46] A1X1
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x34e: // lsr abs    [$4e] A1X1
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x356: // lsr dir,x  [$56] A1X1
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x35e: // lsr abs,x  [$5e] A1X1
    ;CPUReadWord();ALULsr16(&MB16);CPUWriteWord();break;

case 0x04a: // lsr a      [$4a] A0X0
    ALULsr8(&cpu.A.B.L);break;

case 0x14a: // lsr a      [$4a] A0X1
    ALULsr8(&cpu.A.B.L);break;

case 0x24a: // lsr a      [$4a] A1X0
    ALULsr16(&cpu.A);break;

case 0x34a: // lsr a      [$4a] A1X1
    ALULsr16(&cpu.A);break;

case 0x026: // rol dir    [$26] A0X0
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x02e: // rol abs    [$2e] A0X0
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x036: // rol dir,x  [$36] A0X0
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x03e: // rol abs,x  [$3e] A0X0
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x126: // rol dir    [$26] A0X1
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x12e: // rol abs    [$2e] A0X1
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x136: // rol dir,x  [$36] A0X1
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x13e: // rol abs,x  [$3e] A0X1
    ;CPUReadByte();ALURol8(&MB8);CPUWriteByte();break;

case 0x226: // rol dir    [$26] A1X0
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x22e: // rol abs    [$2e] A1X0
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x236: // rol dir,x  [$36] A1X0
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x23e: // rol abs,x  [$3e] A1X0
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x326: // rol dir    [$26] A1X1
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x32e: // rol abs    [$2e] A1X1
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x336: // rol dir,x  [$36] A1X1
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x33e: // rol abs,x  [$3e] A1X1
    ;CPUReadWord();ALURol16(&MB16);CPUWriteWord();break;

case 0x02a: // rol a      [$2a] A0X0
    ALURol8(&cpu.A.B.L);break;

case 0x12a: // rol a      [$2a] A0X1
    ALURol8(&cpu.A.B.L);break;

case 0x22a: // rol a      [$2a] A1X0
    ALURol16(&cpu.A);break;

case 0x32a: // rol a      [$2a] A1X1
    ALURol16(&cpu.A);break;

case 0x066: // ror dir    [$66] A0X0
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x06e: // ror abs    [$6e] A0X0
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x076: // ror dir,x  [$76] A0X0
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x07e: // ror abs,x  [$7e] A0X0
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x166: // ror dir    [$66] A0X1
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x16e: // ror abs    [$6e] A0X1
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x176: // ror dir,x  [$76] A0X1
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x17e: // ror abs,x  [$7e] A0X1
    ;CPUReadByte();ALURor8(&MB8);CPUWriteByte();break;

case 0x266: // ror dir    [$66] A1X0
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x26e: // ror abs    [$6e] A1X0
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x276: // ror dir,x  [$76] A1X0
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x27e: // ror abs,x  [$7e] A1X0
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x366: // ror dir    [$66] A1X1
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x36e: // ror abs    [$6e] A1X1
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x376: // ror dir,x  [$76] A1X1
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x37e: // ror abs,x  [$7e] A1X1
    ;CPUReadWord();ALURor16(&MB16);CPUWriteWord();break;

case 0x06a: // ror a      [$6a] A0X0
    ALURor8(&cpu.A.B.L);break;

case 0x16a: // ror a      [$6a] A0X1
    ALURor8(&cpu.A.B.L);break;

case 0x26a: // ror a      [$6a] A1X0
    ALURor16(&cpu.A);break;

case 0x36a: // ror a      [$6a] A1X1
    ALURor16(&cpu.A);break;

case 0x090: // bcc rel8   [$90] A0X0
    ;if (cpu.P.C == 0) cpu.PC = MA;break;

case 0x190: // bcc rel8   [$90] A0X1
    ;if (cpu.P.C == 0) cpu.PC = MA;break;

case 0x290: // bcc rel8   [$90] A1X0
    ;if (cpu.P.C == 0) cpu.PC = MA;break;

case 0x390: // bcc rel8   [$90] A1X1
    ;if (cpu.P.C == 0) cpu.PC = MA;break;

case 0x0b0: // bcs rel8   [$b0] A0X0
    ;if (cpu.P.C != 0) cpu.PC = MA;break;

case 0x1b0: // bcs rel8   [$b0] A0X1
    ;if (cpu.P.C != 0) cpu.PC = MA;break;

case 0x2b0: // bcs rel8   [$b0] A1X0
    ;if (cpu.P.C != 0) cpu.PC = MA;break;

case 0x3b0: // bcs rel8   [$b0] A1X1
    ;if (cpu.P.C != 0) cpu.PC = MA;break;

case 0x0f0: // beq rel8   [$f0] A0X0
    ;if (cpu.P.Z != 0) cpu.PC = MA;break;

case 0x1f0: // beq rel8   [$f0] A0X1
    ;if (cpu.P.Z != 0) cpu.PC = MA;break;

case 0x2f0: // beq rel8   [$f0] A1X0
    ;if (cpu.P.Z != 0) cpu.PC = MA;break;

case 0x3f0: // beq rel8   [$f0] A1X1
    ;if (cpu.P.Z != 0) cpu.PC = MA;break;

case 0x030: // bmi rel8   [$30] A0X0
    ;if (cpu.P.M != 0) cpu.PC = MA;break;

case 0x130: // bmi rel8   [$30] A0X1
    ;if (cpu.P.M != 0) cpu.PC = MA;break;

case 0x230: // bmi rel8   [$30] A1X0
    ;if (cpu.P.M != 0) cpu.PC = MA;break;

case 0x330: // bmi rel8   [$30] A1X1
    ;if (cpu.P.M != 0) cpu.PC = MA;break;

case 0x0d0: // bne rel8   [$d0] A0X0
    ;if (cpu.P.Z == 0) cpu.PC = MA;break;

case 0x1d0: // bne rel8   [$d0] A0X1
    ;if (cpu.P.Z == 0) cpu.PC = MA;break;

case 0x2d0: // bne rel8   [$d0] A1X0
    ;if (cpu.P.Z == 0) cpu.PC = MA;break;

case 0x3d0: // bne rel8   [$d0] A1X1
    ;if (cpu.P.Z == 0) cpu.PC = MA;break;

case 0x010: // bpl rel8   [$10] A0X0
    ;if (cpu.P.M == 0) cpu.PC = MA;break;

case 0x110: // bpl rel8   [$10] A0X1
    ;if (cpu.P.M == 0) cpu.PC = MA;break;

case 0x210: // bpl rel8   [$10] A1X0
    ;if (cpu.P.M == 0) cpu.PC = MA;break;

case 0x310: // bpl rel8   [$10] A1X1
    ;if (cpu.P.M == 0) cpu.PC = MA;break;

case 0x080: // bra rel8   [$80] A0X0
    ;cpu.PC = MA;break;

case 0x180: // bra rel8   [$80] A0X1
    ;cpu.PC = MA;break;

case 0x280: // bra rel8   [$80] A1X0
    ;cpu.PC = MA;break;

case 0x380: // bra rel8   [$80] A1X1
    ;cpu.PC = MA;break;

case 0x050: // bvc rel8   [$50] A0X0
    ;if (cpu.P.V == 0) cpu.PC = MA;break;

case 0x150: // bvc rel8   [$50] A0X1
    ;if (cpu.P.V == 0) cpu.PC = MA;break;

case 0x250: // bvc rel8   [$50] A1X0
    ;if (cpu.P.V == 0) cpu.PC = MA;break;

case 0x350: // bvc rel8   [$50] A1X1
    ;if (cpu.P.V == 0) cpu.PC = MA;break;

case 0x070: // bvs rel8   [$70] A0X0
    ;if (cpu.P.V != 0) cpu.PC = MA;break;

case 0x170: // bvs rel8   [$70] A0X1
    ;if (cpu.P.V != 0) cpu.PC = MA;break;

case 0x270: // bvs rel8   [$70] A1X0
    ;if (cpu.P.V != 0) cpu.PC = MA;break;

case 0x370: // bvs rel8   [$70] A1X1
    ;if (cpu.P.V != 0) cpu.PC = MA;break;

case 0x082: // brl rel16  [$82] A0X0
    ;cpu.PC = MA;break;

case 0x182: // brl rel16  [$82] A0X1
    ;cpu.PC = MA;break;

case 0x282: // brl rel16  [$82] A1X0
    ;cpu.PC = MA;break;

case 0x382: // brl rel16  [$82] A1X1
    ;cpu.PC = MA;break;

case 0x05c: // jmp long   [$5c] A0X0
    ;cpu.PC = MA;break;

case 0x0dc: // jmp [abs]  [$dc] A0X0
    ;cpu.PC = MA;break;

case 0x15c: // jmp long   [$5c] A0X1
    ;cpu.PC = MA;break;

case 0x1dc: // jmp [abs]  [$dc] A0X1
    ;cpu.PC = MA;break;

case 0x25c: // jmp long   [$5c] A1X0
    ;cpu.PC = MA;break;

case 0x2dc: // jmp [abs]  [$dc] A1X0
    ;cpu.PC = MA;break;

case 0x35c: // jmp long   [$5c] A1X1
    ;cpu.PC = MA;break;

case 0x3dc: // jmp [abs]  [$dc] A1X1
    ;cpu.PC = MA;break;

case 0x04c: // jmp abs    [$4c] A0X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x06c: // jmp (abs)  [$6c] A0X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x07c: // jmp (abs,X) [$7c] A0X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x14c: // jmp abs    [$4c] A0X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x16c: // jmp (abs)  [$6c] A0X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x17c: // jmp (abs,X) [$7c] A0X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x24c: // jmp abs    [$4c] A1X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x26c: // jmp (abs)  [$6c] A1X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x27c: // jmp (abs,X) [$7c] A1X0
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x34c: // jmp abs    [$4c] A1X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x36c: // jmp (abs)  [$6c] A1X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x37c: // jmp (abs,X) [$7c] A1X1
    ;cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x022: // jsl long   [$22] A0X0
    ;cpu.PC--;CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC & 0xFFFF);cpu.PC = MA;break;

case 0x122: // jsl long   [$22] A0X1
    ;cpu.PC--;CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC & 0xFFFF);cpu.PC = MA;break;

case 0x222: // jsl long   [$22] A1X0
    ;cpu.PC--;CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC & 0xFFFF);cpu.PC = MA;break;

case 0x322: // jsl long   [$22] A1X1
    ;cpu.PC--;CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC & 0xFFFF);cpu.PC = MA;break;

case 0x020: // jsr abs    [$20] A0X0
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x0fc: // jsr (abs,X) [$fc] A0X0
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x120: // jsr abs    [$20] A0X1
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x1fc: // jsr (abs,X) [$fc] A0X1
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x220: // jsr abs    [$20] A1X0
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x2fc: // jsr (abs,X) [$fc] A1X0
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x320: // jsr abs    [$20] A1X1
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x3fc: // jsr (abs,X) [$fc] A1X1
    ;cpu.PC--;CPUPush16(cpu.PC & 0xFFFF);cpu.PC = (cpu.PC & 0xFF0000) | (MA & 0xFFFF);break;

case 0x06b: // rtl        [$6b] A0X0
    cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);cpu.PC++;break;

case 0x16b: // rtl        [$6b] A0X1
    cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);cpu.PC++;break;

case 0x26b: // rtl        [$6b] A1X0
    cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);cpu.PC++;break;

case 0x36b: // rtl        [$6b] A1X1
    cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);cpu.PC++;break;

case 0x060: // rts        [$60] A0X0
    cpu.PC = (cpu.PC & 0xFF0000) | CPUPop16();cpu.PC++;break;

case 0x160: // rts        [$60] A0X1
    cpu.PC = (cpu.PC & 0xFF0000) | CPUPop16();cpu.PC++;break;

case 0x260: // rts        [$60] A1X0
    cpu.PC = (cpu.PC & 0xFF0000) | CPUPop16();cpu.PC++;break;

case 0x360: // rts        [$60] A1X1
    cpu.PC = (cpu.PC & 0xFF0000) | CPUPop16();cpu.PC++;break;

case 0x040: // rti        [$40] A0X0
    ALUExpandPS(CPUPop8());cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);ALUUpdatePS();break;

case 0x140: // rti        [$40] A0X1
    ALUExpandPS(CPUPop8());cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);ALUUpdatePS();break;

case 0x240: // rti        [$40] A1X0
    ALUExpandPS(CPUPop8());cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);ALUUpdatePS();break;

case 0x340: // rti        [$40] A1X1
    ALUExpandPS(CPUPop8());cpu.PC = CPUPop16();cpu.PC |= (CPUPop8() << 16);ALUUpdatePS();break;

case 0x000: // brk        [$00] A0X0
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFE6;CPUReadWord();cpu.PC = MB16;break;

case 0x100: // brk        [$00] A0X1
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFE6;CPUReadWord();cpu.PC = MB16;break;

case 0x200: // brk        [$00] A1X0
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFE6;CPUReadWord();cpu.PC = MB16;break;

case 0x300: // brk        [$00] A1X1
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFE6;CPUReadWord();cpu.PC = MB16;break;

case 0x002: // cop        [$02] A0X0
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFF4;CPUReadWord();cpu.PC = MB16;break;

case 0x102: // cop        [$02] A0X1
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFF4;CPUReadWord();cpu.PC = MB16;break;

case 0x202: // cop        [$02] A1X0
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFF4;CPUReadWord();cpu.PC = MB16;break;

case 0x302: // cop        [$02] A1X1
    CPUPush8(cpu.PC >> 16);CPUPush16(cpu.PC+1);CPUPush8(ALUBuildPS());MA = 0xFFF4;CPUReadWord();cpu.PC = MB16;break;

case 0x018: // clc        [$18] A0X0
    cpu.P.C = 0;break;

case 0x118: // clc        [$18] A0X1
    cpu.P.C = 0;break;

case 0x218: // clc        [$18] A1X0
    cpu.P.C = 0;break;

case 0x318: // clc        [$18] A1X1
    cpu.P.C = 0;break;

case 0x0d8: // cld        [$d8] A0X0
    cpu.P.D = 0;break;

case 0x1d8: // cld        [$d8] A0X1
    cpu.P.D = 0;break;

case 0x2d8: // cld        [$d8] A1X0
    cpu.P.D = 0;break;

case 0x3d8: // cld        [$d8] A1X1
    cpu.P.D = 0;break;

case 0x058: // cli        [$58] A0X0
    cpu.P.I = 0;break;

case 0x158: // cli        [$58] A0X1
    cpu.P.I = 0;break;

case 0x258: // cli        [$58] A1X0
    cpu.P.I = 0;break;

case 0x358: // cli        [$58] A1X1
    cpu.P.I = 0;break;

case 0x0b8: // clv        [$b8] A0X0
    cpu.P.V = 0;break;

case 0x1b8: // clv        [$b8] A0X1
    cpu.P.V = 0;break;

case 0x2b8: // clv        [$b8] A1X0
    cpu.P.V = 0;break;

case 0x3b8: // clv        [$b8] A1X1
    cpu.P.V = 0;break;

case 0x038: // sec        [$38] A0X0
    cpu.P.C = 1;break;

case 0x138: // sec        [$38] A0X1
    cpu.P.C = 1;break;

case 0x238: // sec        [$38] A1X0
    cpu.P.C = 1;break;

case 0x338: // sec        [$38] A1X1
    cpu.P.C = 1;break;

case 0x0f8: // sed        [$f8] A0X0
    cpu.P.D = 1;break;

case 0x1f8: // sed        [$f8] A0X1
    cpu.P.D = 1;break;

case 0x2f8: // sed        [$f8] A1X0
    cpu.P.D = 1;break;

case 0x3f8: // sed        [$f8] A1X1
    cpu.P.D = 1;break;

case 0x078: // sei        [$78] A0X0
    cpu.P.I = 1;break;

case 0x178: // sei        [$78] A0X1
    cpu.P.I = 1;break;

case 0x278: // sei        [$78] A1X0
    cpu.P.I = 1;break;

case 0x378: // sei        [$78] A1X1
    cpu.P.I = 1;break;

case 0x0c2: // rep #imm8  [$c2] A0X0
    ;ALUExpandPS(ALUBuildPS() & (CPUReadByte()^0xFF));ALUUpdatePS();break;

case 0x1c2: // rep #imm8  [$c2] A0X1
    ;ALUExpandPS(ALUBuildPS() & (CPUReadByte()^0xFF));ALUUpdatePS();break;

case 0x2c2: // rep #imm8  [$c2] A1X0
    ;ALUExpandPS(ALUBuildPS() & (CPUReadByte()^0xFF));ALUUpdatePS();break;

case 0x3c2: // rep #imm8  [$c2] A1X1
    ;ALUExpandPS(ALUBuildPS() & (CPUReadByte()^0xFF));ALUUpdatePS();break;

case 0x0e2: // sep #imm8  [$e2] A0X0
    ;ALUExpandPS(ALUBuildPS() | CPUReadByte());ALUUpdatePS();break;

case 0x1e2: // sep #imm8  [$e2] A0X1
    ;ALUExpandPS(ALUBuildPS() | CPUReadByte());ALUUpdatePS();break;

case 0x2e2: // sep #imm8  [$e2] A1X0
    ;ALUExpandPS(ALUBuildPS() | CPUReadByte());ALUUpdatePS();break;

case 0x3e2: // sep #imm8  [$e2] A1X1
    ;ALUExpandPS(ALUBuildPS() | CPUReadByte());ALUUpdatePS();break;

case 0x0ea: // nop        [$ea] A0X0
    ;break;

case 0x1ea: // nop        [$ea] A0X1
    ;break;

case 0x2ea: // nop        [$ea] A1X0
    ;break;

case 0x3ea: // nop        [$ea] A1X1
    ;break;

case 0x042: // wdm        [$42] A0X0
    cpu.PC++;break;

case 0x142: // wdm        [$42] A0X1
    cpu.PC++;break;

case 0x242: // wdm        [$42] A1X0
    cpu.PC++;break;

case 0x342: // wdm        [$42] A1X1
    cpu.PC++;break;

case 0x0f4: // pea #imm16 [$f4] A0X0
    ;CPUPush16(CPUReadWord());break;

case 0x1f4: // pea #imm16 [$f4] A0X1
    ;CPUPush16(CPUReadWord());break;

case 0x2f4: // pea #imm16 [$f4] A1X0
    ;CPUPush16(CPUReadWord());break;

case 0x3f4: // pea #imm16 [$f4] A1X1
    ;CPUPush16(CPUReadWord());break;

case 0x0d4: // pei dir    [$d4] A0X0
    ;CPUPush16(CPUReadWord());break;

case 0x1d4: // pei dir    [$d4] A0X1
    ;CPUPush16(CPUReadWord());break;

case 0x2d4: // pei dir    [$d4] A1X0
    ;CPUPush16(CPUReadWord());break;

case 0x3d4: // pei dir    [$d4] A1X1
    ;CPUPush16(CPUReadWord());break;

case 0x062: // per rel16  [$62] A0X0
    ;CPUPush16(MA & 0xFFFF);break;

case 0x162: // per rel16  [$62] A0X1
    ;CPUPush16(MA & 0xFFFF);break;

case 0x262: // per rel16  [$62] A1X0
    ;CPUPush16(MA & 0xFFFF);break;

case 0x362: // per rel16  [$62] A1X1
    ;CPUPush16(MA & 0xFFFF);break;

case 0x048: // pha        [$48] A0X0
    CPUPush8(cpu.A.B.L);break;

case 0x148: // pha        [$48] A0X1
    CPUPush8(cpu.A.B.L);break;

case 0x248: // pha        [$48] A1X0
    CPUPush16(cpu.A);break;

case 0x348: // pha        [$48] A1X1
    CPUPush16(cpu.A);break;

case 0x0da: // phx        [$da] A0X0
    CPUPush8(cpu.XL);break;

case 0x1da: // phx        [$da] A0X1
    CPUPush8(cpu.XL);break;

case 0x2da: // phx        [$da] A1X0
    CPUPush16(cpu.X);break;

case 0x3da: // phx        [$da] A1X1
    CPUPush16(cpu.X);break;

case 0x05a: // phy        [$5a] A0X0
    CPUPush8(cpu.YL);break;

case 0x15a: // phy        [$5a] A0X1
    CPUPush8(cpu.YL);break;

case 0x25a: // phy        [$5a] A1X0
    CPUPush16(cpu.Y);break;

case 0x35a: // phy        [$5a] A1X1
    CPUPush16(cpu.Y);break;

case 0x068: // pla        [$68] A0X0
    cpu.A.B.L = CPUPop8();ALUSetNZ8(cpu.A.B.L);break;

case 0x168: // pla        [$68] A0X1
    cpu.A.B.L = CPUPop8();ALUSetNZ8(cpu.A.B.L);break;

case 0x268: // pla        [$68] A1X0
    cpu.A = CPUPop16();ALUSetNZ16(cpu.A);break;

case 0x368: // pla        [$68] A1X1
    cpu.A = CPUPop16();ALUSetNZ16(cpu.A);break;

case 0x0fa: // plx        [$fa] A0X0
    cpu.XL = CPUPop8();ALUSetNZ8(cpu.XL);break;

case 0x1fa: // plx        [$fa] A0X1
    cpu.XL = CPUPop8();ALUSetNZ8(cpu.XL);break;

case 0x2fa: // plx        [$fa] A1X0
    cpu.X = CPUPop16();ALUSetNZ16(cpu.X);break;

case 0x3fa: // plx        [$fa] A1X1
    cpu.X = CPUPop16();ALUSetNZ16(cpu.X);break;

case 0x07a: // ply        [$7a] A0X0
    cpu.YL = CPUPop8();ALUSetNZ8(cpu.YL);break;

case 0x17a: // ply        [$7a] A0X1
    cpu.YL = CPUPop8();ALUSetNZ8(cpu.YL);break;

case 0x27a: // ply        [$7a] A1X0
    cpu.Y = CPUPop16();ALUSetNZ16(cpu.Y);break;

case 0x37a: // ply        [$7a] A1X1
    cpu.Y = CPUPop16();ALUSetNZ16(cpu.Y);break;

case 0x04b: // phk        [$4b] A0X0
    CPUPush8(cpu.PC >> 16);break;

case 0x14b: // phk        [$4b] A0X1
    CPUPush8(cpu.PC >> 16);break;

case 0x24b: // phk        [$4b] A1X0
    CPUPush8(cpu.PC >> 16);break;

case 0x34b: // phk        [$4b] A1X1
    CPUPush8(cpu.PC >> 16);break;

case 0x008: // php        [$08] A0X0
    CPUPush8(ALUBuildPS());break;

case 0x108: // php        [$08] A0X1
    CPUPush8(ALUBuildPS());break;

case 0x208: // php        [$08] A1X0
    CPUPush8(ALUBuildPS());break;

case 0x308: // php        [$08] A1X1
    CPUPush8(ALUBuildPS());break;

case 0x028: // plp        [$28] A0X0
    MB8 = CPUPop8();ALUExpandPS(MB8);ALUUpdatePS();break;

case 0x128: // plp        [$28] A0X1
    MB8 = CPUPop8();ALUExpandPS(MB8);ALUUpdatePS();break;

case 0x228: // plp        [$28] A1X0
    MB8 = CPUPop8();ALUExpandPS(MB8);ALUUpdatePS();break;

case 0x328: // plp        [$28] A1X1
    MB8 = CPUPop8();ALUExpandPS(MB8);ALUUpdatePS();break;

case 0x08b: // phb        [$8b] A0X0
    CPUPush8(cpu.DBR);break;

case 0x18b: // phb        [$8b] A0X1
    CPUPush8(cpu.DBR);break;

case 0x28b: // phb        [$8b] A1X0
    CPUPush8(cpu.DBR);break;

case 0x38b: // phb        [$8b] A1X1
    CPUPush8(cpu.DBR);break;

case 0x0ab: // plb        [$ab] A0X0
    cpu.DBR = CPUPop8();ALUSetNZ8(cpu.DBR);break;

case 0x1ab: // plb        [$ab] A0X1
    cpu.DBR = CPUPop8();ALUSetNZ8(cpu.DBR);break;

case 0x2ab: // plb        [$ab] A1X0
    cpu.DBR = CPUPop8();ALUSetNZ8(cpu.DBR);break;

case 0x3ab: // plb        [$ab] A1X1
    cpu.DBR = CPUPop8();ALUSetNZ8(cpu.DBR);break;

case 0x00b: // phd        [$0b] A0X0
    CPUPush16(cpu.D);break;

case 0x10b: // phd        [$0b] A0X1
    CPUPush16(cpu.D);break;

case 0x20b: // phd        [$0b] A1X0
    CPUPush16(cpu.D);break;

case 0x30b: // phd        [$0b] A1X1
    CPUPush16(cpu.D);break;

case 0x02b: // pld        [$2b] A0X0
    cpu.D = CPUPop16();ALUSetNZ16(cpu.D);break;

case 0x12b: // pld        [$2b] A0X1
    cpu.D = CPUPop16();ALUSetNZ16(cpu.D);break;

case 0x22b: // pld        [$2b] A1X0
    cpu.D = CPUPop16();ALUSetNZ16(cpu.D);break;

case 0x32b: // pld        [$2b] A1X1
    cpu.D = CPUPop16();ALUSetNZ16(cpu.D);break;

case 0x0aa: // tax        [$aa] A0X0
    cpu.XL = cpu.A.B.L;ALUSetNZ8(cpu.XL);break;

case 0x1aa: // tax        [$aa] A0X1
    cpu.XL = cpu.A.B.L;ALUSetNZ8(cpu.XL);break;

case 0x2aa: // tax        [$aa] A1X0
    cpu.X = cpu.A;ALUSetNZ16(cpu.X);break;

case 0x3aa: // tax        [$aa] A1X1
    cpu.X = cpu.A;ALUSetNZ16(cpu.X);break;

case 0x0a8: // tay        [$a8] A0X0
    cpu.YL = cpu.A.B.L;ALUSetNZ8(cpu.YL);break;

case 0x1a8: // tay        [$a8] A0X1
    cpu.YL = cpu.A.B.L;ALUSetNZ8(cpu.YL);break;

case 0x2a8: // tay        [$a8] A1X0
    cpu.Y = cpu.A;ALUSetNZ16(cpu.Y);break;

case 0x3a8: // tay        [$a8] A1X1
    cpu.Y = cpu.A;ALUSetNZ16(cpu.Y);break;

case 0x0bb: // tyx        [$bb] A0X0
    cpu.XL = cpu.YL;ALUSetNZ8(cpu.XL);break;

case 0x1bb: // tyx        [$bb] A0X1
    cpu.XL = cpu.YL;ALUSetNZ8(cpu.XL);break;

case 0x2bb: // tyx        [$bb] A1X0
    cpu.X = cpu.Y;ALUSetNZ16(cpu.X);break;

case 0x3bb: // tyx        [$bb] A1X1
    cpu.X = cpu.Y;ALUSetNZ16(cpu.X);break;

case 0x09b: // txy        [$9b] A0X0
    cpu.YL = cpu.XL;ALUSetNZ8(cpu.YL);break;

case 0x19b: // txy        [$9b] A0X1
    cpu.YL = cpu.XL;ALUSetNZ8(cpu.YL);break;

case 0x29b: // txy        [$9b] A1X0
    cpu.Y = cpu.X;ALUSetNZ16(cpu.Y);break;

case 0x39b: // txy        [$9b] A1X1
    cpu.Y = cpu.X;ALUSetNZ16(cpu.Y);break;

case 0x08a: // txa        [$8a] A0X0
    cpu.A.B.L = cpu.XL;ALUSetNZ8(cpu.A.B.L);break;

case 0x18a: // txa        [$8a] A0X1
    cpu.A.B.L = cpu.XL;ALUSetNZ8(cpu.A.B.L);break;

case 0x28a: // txa        [$8a] A1X0
    cpu.A = cpu.X;ALUSetNZ16(cpu.A);break;

case 0x38a: // txa        [$8a] A1X1
    cpu.A = cpu.X;ALUSetNZ16(cpu.A);break;

case 0x098: // tya        [$98] A0X0
    cpu.A.B.L = cpu.YL;ALUSetNZ8(cpu.A.B.L);break;

case 0x198: // tya        [$98] A0X1
    cpu.A.B.L = cpu.YL;ALUSetNZ8(cpu.A.B.L);break;

case 0x298: // tya        [$98] A1X0
    cpu.A = cpu.Y;ALUSetNZ16(cpu.A);break;

case 0x398: // tya        [$98] A1X1
    cpu.A = cpu.Y;ALUSetNZ16(cpu.A);break;

case 0x0ba: // tsx        [$ba] A0X0
    cpu.XL = cpu.S & 0xFF;ALUSetNZ8(cpu.XL);break;

case 0x1ba: // tsx        [$ba] A0X1
    cpu.XL = cpu.S & 0xFF;ALUSetNZ8(cpu.XL);break;

case 0x2ba: // tsx        [$ba] A1X0
    cpu.X = cpu.S;ALUSetNZ16(cpu.X);break;

case 0x3ba: // tsx        [$ba] A1X1
    cpu.X = cpu.S;ALUSetNZ16(cpu.X);break;

case 0x09a: // txs        [$9a] A0X0
    cpu.S = cpu.XL;ALUSetNZ8(cpu.XL);break;

case 0x19a: // txs        [$9a] A0X1
    cpu.S = cpu.XL;ALUSetNZ8(cpu.XL);break;

case 0x29a: // txs        [$9a] A1X0
    cpu.S = cpu.X;break;

case 0x39a: // txs        [$9a] A1X1
    cpu.S = cpu.X;break;

case 0x05b: // tcd        [$5b] A0X0
    cpu.D = cpu.A;ALUSetNZ16(cpu.D);break;

case 0x15b: // tcd        [$5b] A0X1
    cpu.D = cpu.A;ALUSetNZ16(cpu.D);break;

case 0x25b: // tcd        [$5b] A1X0
    cpu.D = cpu.A;ALUSetNZ16(cpu.D);break;

case 0x35b: // tcd        [$5b] A1X1
    cpu.D = cpu.A;ALUSetNZ16(cpu.D);break;

case 0x01b: // tcs        [$1b] A0X0
    cpu.S = cpu.A;break;

case 0x11b: // tcs        [$1b] A0X1
    cpu.S = cpu.A;break;

case 0x21b: // tcs        [$1b] A1X0
    cpu.S = cpu.A;break;

case 0x31b: // tcs        [$1b] A1X1
    cpu.S = cpu.A;break;

case 0x07b: // tdc        [$7b] A0X0
    cpu.A = cpu.D;ALUSetNZ16(cpu.A);break;

case 0x17b: // tdc        [$7b] A0X1
    cpu.A = cpu.D;ALUSetNZ16(cpu.A);break;

case 0x27b: // tdc        [$7b] A1X0
    cpu.A = cpu.D;ALUSetNZ16(cpu.A);break;

case 0x37b: // tdc        [$7b] A1X1
    cpu.A = cpu.D;ALUSetNZ16(cpu.A);break;

case 0x03b: // tsc        [$3b] A0X0
    cpu.A = cpu.S;ALUSetNZ16(cpu.A);break;

case 0x13b: // tsc        [$3b] A0X1
    cpu.A = cpu.S;ALUSetNZ16(cpu.A);break;

case 0x23b: // tsc        [$3b] A1X0
    cpu.A = cpu.S;ALUSetNZ16(cpu.A);break;

case 0x33b: // tsc        [$3b] A1X1
    cpu.A = cpu.S;ALUSetNZ16(cpu.A);break;

case 0x0eb: // xba        [$eb] A0X0
    MB8 = cpu.A.B.L;cpu.A.B.L = cpu.A.B.H;cpu.A.B.H = MB8;ALUSetNZ8(cpu.A.B.L);break;

case 0x1eb: // xba        [$eb] A0X1
    MB8 = cpu.A.B.L;cpu.A.B.L = cpu.A.B.H;cpu.A.B.H = MB8;ALUSetNZ8(cpu.A.B.L);break;

case 0x2eb: // xba        [$eb] A1X0
    MB8 = cpu.A.B.L;cpu.A.B.L = cpu.A.B.H;cpu.A.B.H = MB8;ALUSetNZ8(cpu.A.B.L);break;

case 0x3eb: // xba        [$eb] A1X1
    MB8 = cpu.A.B.L;cpu.A.B.L = cpu.A.B.H;cpu.A.B.H = MB8;ALUSetNZ8(cpu.A.B.L);break;

case 0x0fb: // xce        [$fb] A0X0
    MB8 = cpu.P.E;cpu.P.E = cpu.P.C;cpu.P.C = MB8;if (cpu.P.E != 0) { cpu.P.M = cpu.P.X = 1;cpu.S = (cpu.S & 0xFF)|0x100;ALUUpdatePS(); };break;

case 0x1fb: // xce        [$fb] A0X1
    MB8 = cpu.P.E;cpu.P.E = cpu.P.C;cpu.P.C = MB8;if (cpu.P.E != 0) { cpu.P.M = cpu.P.X = 1;cpu.S = (cpu.S & 0xFF)|0x100;ALUUpdatePS(); };break;

case 0x2fb: // xce        [$fb] A1X0
    MB8 = cpu.P.E;cpu.P.E = cpu.P.C;cpu.P.C = MB8;if (cpu.P.E != 0) { cpu.P.M = cpu.P.X = 1;cpu.S = (cpu.S & 0xFF)|0x100;ALUUpdatePS(); };break;

case 0x3fb: // xce        [$fb] A1X1
    MB8 = cpu.P.E;cpu.P.E = cpu.P.C;cpu.P.C = MB8;if (cpu.P.E != 0) { cpu.P.M = cpu.P.X = 1;cpu.S = (cpu.S & 0xFF)|0x100;ALUUpdatePS(); };break;

case 0x054: // mvn #imm16 [$54] A0X0
    ;break;

case 0x154: // mvn #imm16 [$54] A0X1
    ;break;

case 0x254: // mvn #imm16 [$54] A1X0
    ;break;

case 0x354: // mvn #imm16 [$54] A1X1
    ;break;

case 0x044: // mvp #imm16 [$44] A0X0
    ;break;

case 0x144: // mvp #imm16 [$44] A0X1
    ;break;

case 0x244: // mvp #imm16 [$44] A1X0
    ;break;

case 0x344: // mvp #imm16 [$44] A1X1
    ;break;

case 0x0db: // stp        [$db] A0X0
    ;break;

case 0x1db: // stp        [$db] A0X1
    ;break;

case 0x2db: // stp        [$db] A1X0
    ;break;

case 0x3db: // stp        [$db] A1X1
    ;break;

case 0x0cb: // wait       [$cb] A0X0
    ;break;

case 0x1cb: // wait       [$cb] A0X1
    ;break;

case 0x2cb: // wait       [$cb] A1X0
    ;break;

case 0x3cb: // wait       [$cb] A1X1
    ;break;

