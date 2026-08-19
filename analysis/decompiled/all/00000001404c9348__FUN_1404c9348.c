// Function: FUN_1404c9348
// Addr: 1404c9348
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9348(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char unaff_BL;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  char *unaff_retaddr;
  
  *(undefined2 *)unaff_retaddr = in_FPUControlWord;
  *(undefined2 *)(unaff_retaddr + 4) = in_FPUStatusWord;
  *(undefined2 *)(unaff_retaddr + 8) = in_FPUTagWord;
  *(undefined8 *)(unaff_retaddr + 0x14) = in_FPUDataPointer;
  *(undefined8 *)(unaff_retaddr + 0xc) = in_FPUInstructionPointer;
  *(undefined2 *)(unaff_retaddr + 0x12) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(unaff_retaddr + 0x1c) = in_ST0;
  *(unkbyte10 *)(unaff_retaddr + 0x26) = in_ST1;
  *(unkbyte10 *)(unaff_retaddr + 0x30) = in_ST2;
  *(unkbyte10 *)(unaff_retaddr + 0x3a) = in_ST3;
  *(unkbyte10 *)(unaff_retaddr + 0x44) = in_ST4;
  *(unkbyte10 *)(unaff_retaddr + 0x4e) = in_ST5;
  *(unkbyte10 *)(unaff_retaddr + 0x58) = in_ST6;
  *(unkbyte10 *)(unaff_retaddr + 0x62) = in_ST7;
  pcVar1 = (char *)(param_2 * 5 + 0x4c);
  *pcVar1 = *pcVar1 + in_AL;
  *unaff_retaddr = *unaff_retaddr + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

