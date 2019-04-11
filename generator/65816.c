

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
static LONG32 addr;												// Temporary for subroutine call

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

#define FETCHWORD()				MA = cpu.PC;CPUReadWord();cpu.PC += 2
#define FETCHBYTE() 			MA = cpu.PC;CPUReadByte();cpu.PC += 1
//
//		Read 3 bytes at MA into MA
//
#define READFAR()				CPUReadWord();MA = MA+2;CPUReadByte();MA = MB16 | (MB8 << 16)
//
//		Absolute addressing - uses DBR
//
#define EAC_ABSOLUTE()			FETCHWORD();MA = (cpu.DBR << 16) | MB16
#define EAC_ABSOLUTE_IDX_X()	EAC_ABSOLUTE();MA = MA + cpu.X.W
#define EAC_ABSOLUTE_IDX_Y()	EAC_ABSOLUTE();MA = MA + cpu.Y.W
//
//		Absolute indirect - non indexed goes through page 0
//
#define EAC_JABSOLUTE_IND()		FETCHWORD();MA=MB16;CPUReadWord();MA = MB16
//
//		Absolute indexed indirect - indexed goes through page K.
//
#define EAC_JABSOLUTE_IDX_X_IND() FETCHWORD();MA=((MB16+cpu.X.W) & 0xFFFF)|(cpu.PC & 0xFF0000);CPUReadWord();MA = MB16
//
//		Absolute far indirect
//
#define EAC_JABSOLUTE_IND_FAR()	FETCHWORD();MA = MB16;READFAR()
//
//		Direct addressing - uses D
//
#define EAC_DIRECT()			FETCHBYTE();MA = (cpu.D + MB8) & 0xFFFF
#define EAC_DIRECT_IDX_X()		EAC_DIRECT();MA = MA + cpu.X.W
#define EAC_DIRECT_IDX_Y()		EAC_DIRECT();MA = MA + cpu.Y.W
//
//		Absolute via direct pointer - uses DBR
//
#define EAC_DIRECT_IND()		EAC_DIRECT();CPUReadWord();MA = (cpu.DBR << 16) | MB16
//
//		Absolute via direct indexed - uses DBR
//
#define EAC_DIRECT_IND_IDX_Y()	EAC_DIRECT_IND();MA = MA + cpu.Y.W
//
//		Indirect via X Indexed - uses DBR
//	
#define EAC_DIRECT_IDX_X_IND()	EAC_DIRECT_IDX_X();CPUReadWord();MA = MB16 | (cpu.DBR << 16)
//
//		Far via direct pointer 
//
#define EAC_DIRECT_IND_FAR()	EAC_DIRECT();READFAR();
#define EAC_DIRECT_IND_FAR_IDX_Y()	EAC_DIRECT();READFAR();MA = MA + cpu.Y.W
//
//		8 or 16 bit immediate.
//
#define EAC_IMM_8() 			MA = cpu.PC;cpu.PC = cpu.PC + 1
#define EAC_IMM_16() 			MA = cpu.PC;cpu.PC = cpu.PC + 2
//
//		Long
//
#define EAC_LONG()				FETCHWORD();FETCHBYTE();MA = (MB8 << 16) | MB16
#define EAC_LONG_IDX_X() 		EAC_LONG();MA = MA + cpu.X.W
// 
//		8 and 16 bit relative EAC.
//
#define EAC_RELATIVE_16()		FETCHWORD();MA = (cpu.PC & 0xFF0000) | MB16
#define EAC_RELATIVE_8()		FETCHBYTE();MB16 = (MB8 & 0x80) ? (MB8|0xFF00):MB8;MA = (cpu.PC & 0xFF0000) | MB16
//
//		Stack offset
//
#define EAC_STK_IDX_S()			FETCHWORD();MA = (MB16+cpu.S) & 0xFFFF
//
//		Stack offset indirect y indexed
//
#define EAC_STK_IDX_S_IND_Y()	EAC_STK_IDX_S();CPUReadWord();MA = ((cpu.DBR << 16)|MB16)+cpu.Y.W

static void test(int n) {
	switch(n) {
		#include "65816_opcodes.h"
	}
}

// TODO: Check against tutorial (DBR usage,def)
// TODO: Check against spect ( "" )