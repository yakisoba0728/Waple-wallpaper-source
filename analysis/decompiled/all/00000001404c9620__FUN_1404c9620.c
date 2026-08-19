// Function: FUN_1404c9620
// Addr: 1404c9620
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9620(undefined2 *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char unaff_SPL;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  char *pcVar2;
  
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  uVar1 = in((short)param_2);
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x34ffce27] = pcVar2[-0x34ffce27] + (char)((ulonglong)param_2 >> 8);
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  uVar1 = in((short)param_2);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

