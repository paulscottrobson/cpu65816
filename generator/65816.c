

typedef unsigned char BYTE8;
typedef unsigned short WORD16;
typedef unsigned int LONG32;

typedef struct __65816processor {

	union {														// Accumulator A.
		struct { BYTE8 L,H; } B;								// Note AXY need tweaking for big endian
		WORD16 W;
	} A;

	union {														// Index Register X
		struct { BYTE8 L,H; } B;
		WORD16 W;
	} X;

	union {														// Index RegisterY
		struct { BYTE8 L,H; } B;
		WORD16 W;
	} Y;

	LONG32 PC;													// Program Counter
	WORD16 DBR;													// Data Bank Register
	WORD16 D;													// Direct Register
	WORD16 S;													// Stack pointer
	struct _status {
		BYTE8 B; 												// Break Flag
		BYTE8 C;												// Carry Flag
		BYTE8 D;												// Decimal Flag
		BYTE8 E;												// Emulation Mode Flag
		BYTE8 I;												// Interrupt Disable Flag
		BYTE8 M;												// 16 bit Accumulator/Memory Flag
		BYTE8 N;												// Sign flag
		BYTE8 V;												// Overflow flag
		BYTE8 X;												// 16 bit Index Register Flag
		BYTE8 Z;												// Zero Flag
	} P;
} CPU65816;

static LONG32 MA;												// Memory Address Register
static BYTE8 MB8;												// Memory Buffer (8 bit read)
static WORD16 MB16; 											// Memory Buffer (16 bit read)

static CPU65816 cpu;											// Processor.

BYTE8 CPUReadByte() { return 0; }
WORD16 CPUReadWord() { return 0; }
void CPUWriteByte() {}
void CPUWriteWord() {}
void CPUPush8(BYTE8 n) {}
void CPUPush16(WORD16 n) {}
BYTE8 CPUPop8() { return 0; }
WORD16 CPUPop16() { return 0; }

static void ALUSetZ8(BYTE8 n) {}
static void ALUSetNZ8(BYTE8 n) {}
static void ALUBitTest8(BYTE8 n1,BYTE8 n2) {}
static BYTE8 ALUAdc8(BYTE8 a,BYTE8 b) { return 0; }
static BYTE8 ALUSbc8(BYTE8 a,BYTE8 b,BYTE8 forceBinary) { return 0; }

static void ALUAsl8(BYTE8 *p) {}
static void ALULsr8(BYTE8 *p) {}
static void ALURol8(BYTE8 *p) {}
static void ALURor8(BYTE8 *p) {}

static void ALUSetZ16(WORD16 n) {}
static void ALUSetNZ16(WORD16 n) {}
static void ALUBitTest16(WORD16 n1,WORD16 n2) {}
static WORD16 ALUAdc16(WORD16 a,WORD16 b) { return 0; }
static WORD16 ALUSbc16(WORD16 a,WORD16 b,WORD16 forceBinary) { return 0; }

static void ALUAsl16(WORD16 *p) {}
static void ALULsr16(WORD16 *p) {}
static void ALURol16(WORD16 *p) {}
static void ALURor16(WORD16 *p) {}

static void ALUExpandPS(BYTE8 psValue) {}
static BYTE8 ALUBuildPS() {}
static void ALUUpdatePS() {}

// ***********************************************************************************************
//
//								Effective Address Calculation
//
//					(Note : some of the wrapping for emulation mode is WRONG)
//
// ***********************************************************************************************

//
//								Immediate. MA is PC, skip over operand
// 
#define EAC_IMM8() 			MA = cpu.PC;cpu.PC++
#define EAC_IMM16()			MA = cpu.PC;cpu.PC = cpu.PC+2
#define EAC_IMMDEPEND()		MA = cpu.PC;cpu.PC = cpu.PC+((cpu.P.M != 0) ? 2 : 1)
//
//								Relative Offsets, put the final address in MA
//
#define __EAC_CALCREL16()	MA = (cpu.PC & 0xFF0000) | ((cpu.PC+MB16) & 0xFFFF)
//
#define EAC_REL8()			MA = cpu.PC;CPUReadByte(cpu.PC);cpu.PC++;MB16 = (MB8 & 0x80) ? (MB8|0xFF00) : MB8;__EAC_CALCREL16()
#define EAC_REL16()			MA = cpu.PC;CPUReadWord(cpu.PC);cpu.PC+=2;__EAC_CALCREL16()
//
// 								Direct modes like 6502 offset by D. always in Bank 0
//
#define __EAC_DIRECT(of)	MA = cpu.PC;CPUReadByte();cpu.PC++;MA = (MB8 + cpu.D + (of)) & 0xFFFF
#define EAC_DIRECT()		__EAC_DIRECT(0)
#define EAC_DIRECTX()		__EAC_DIRECT(cpu.X.W)
#define EAC_DIRECTY()		__EAC_DIRECT(cpu.Y.W)
//
//								Absolute like 6502 but in DBR page.
//
#define __EAC_ABSOLUTE(of)	MA = cpu.PC;CPUReadWord();cpu.PC = cpu.PC+2;MA = (MB16 + (of)) & 0x00FFFF;MA |= (cpu.DBR << 16)
#define EAC_ABSOLUTE()		__EAC_ABSOLUTE(0)
#define EAC_ABSOLUTEX()		__EAC_ABSOLUTE(cpu.X.W)
#define EAC_ABSOLUTEY()		__EAC_ABSOLUTE(cpu.Y.W)
//
//								Long is a 24 bit address.
//
#define EAC_LONG()			MA = cpu.PC;CPUReadWord();MA += 2;CPUReadByte();cpu.PC = cpu.PC+3;MA = (MB8 << 16)|MB16;
#define EAC_LONGX()			EAC_LONG();MA = MA + cpu.X.W
#define EAC_LONGY()			EAC_LONG();MA = MA + cpu.X.Y
//
//								[Address] which are far indirect.
//
#define __EAC_READFAR()		CPUReadWord();MA += 2;CPUReadByte();MA = MB16 | (MB8 << 16)
#define EAC_DIRFARIND()		EAC_DIRECT();__EAC_READFAR()
#define EAC_ABSFARIND()		EAC_ABSOLUTE();__EAC_READFAR()
#define EAC_DIRFARINDY()	EAC_DIRECT();__EAC_READFAR();MA = MA + cpu.Y.W
//
//								(Address) which are near indirect
//
#define __EACDIRINDREAD()	CPUReadWord();MA = MB16 | (cpu.DBR << 16)
#define EAC_ABSIND()		EAC_ABSOLUTE();__EACDIRINDREAD()
#define EAC_DIRIND()		EAC_DIRECT();__EACDIRINDREAD()
#define EAC_DIRINDY()		EAC_DIRECT();__EACDIRINDREAD();MA += cpu.Y.W
//
//								Indexed Indirect.
//
#define EAC_INDEXIND()		EAC_DIRECTX();__EACDIRINDREAD()
//
//								Jump, which use PC bank not DBR
//
#define EAC_JMPABS()		MA = cpu.PC;CPUReadWord();cpu.PC+=2;MA = (cpu.PC & 0xFF0000)|MB16
#define EAC_JMPABSIND()		EAC_ABSOLUTE();CPUReadWord();MA = (cpu.PC & 0xFF0000)|MB16
#define EAC_JMPABSINDX()	EAC_JMPABS();CPUReadWord();MB16 = MB16 + cpu.X.W;MA = (cpu.PC & 0xFF0000)|MB16
//
//								Stack ops, always in bank 0
//
#define EAC_STACKREL()		MA = cpu.PC;CPUReadByte();cpu.PC++;MA = (cpu.S + MB8) & 0xFFFF
#define EAC_STACKRELINDX()	EAC_STACKREL();MA = (MA + cpu.Y.W) & 0xFFFF;MA |= (cpu.DBR << 16)

static void test(int n) {
	switch(n) {
		#include "65816_opcodes.h"
	}
}
