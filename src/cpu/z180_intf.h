#include "z180.h"

void Z180SetWriteHandler(void __fastcall (*write)(UINT32, UINT8));
void Z180SetReadHandler(UINT8 __fastcall (*read)(UINT32));
void Z180SetFetchOpHandler(UINT8 __fastcall (*fetch)(UINT32));
void Z180SetFetchArgHandler(UINT8 __fastcall (*fetch)(UINT32));
void Z180SetWritePortHandler(void __fastcall (*write)(UINT32, UINT8));
void Z180SetReadPortHandler(UINT8 __fastcall (*read)(UINT32));

// pass NULL for ptr to unmap memory
void Z180MapMemory(UINT8 *ptr, UINT32 start, UINT32 end, UINT32 flags);

void Z180Init(UINT32 nCPU);
void Z180Exit();
void Z180Reset();
INT32 Z180Run(INT32 cycles);
void Z180BurnCycles(INT32 cycles);
void Z180SetIRQLine(INT32 irqline, INT32 state);
void Z180Scan();

INT32 Z180GetActive();
void Z180Open(INT32);
void Z180Close();

INT32 Z180TotalCycles();
void Z180NewFrame();
void Z180RunEnd();
