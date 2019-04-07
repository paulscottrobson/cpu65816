

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
// ***********************************************************************************************

static void test(int n) {
	switch(n) {
		#include "65816_opcodes.h"
	}
}


