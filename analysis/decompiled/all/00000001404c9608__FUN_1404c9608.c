// Function: FUN_1404c9608
// Addr: 1404c9608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9608(undefined2 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  pcVar1 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  *param_1 = in_FPUControlWord;
  param_1[2] = in_FPUStatusWord;
  param_1[4] = in_FPUTagWord;
  *(undefined8 *)(param_1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(param_1 + 6) = in_FPUInstructionPointer;
  param_1[9] = in_FPULastInstructionOpcode;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

