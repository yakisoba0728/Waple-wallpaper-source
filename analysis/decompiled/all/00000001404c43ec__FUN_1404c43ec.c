// Function: FUN_1404c43ec
// Addr: 1404c43ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c43ec(char *param_1,longlong param_2)

{
  undefined2 *puVar1;
  char in_AL;
  undefined7 in_register_00000001;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  puVar1 = (undefined2 *)(param_2 + CONCAT71(in_register_00000001,in_AL) * 2);
  *puVar1 = in_FPUControlWord;
  puVar1[2] = in_FPUStatusWord;
  puVar1[4] = in_FPUTagWord;
  *(undefined8 *)(puVar1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar1 + 6) = in_FPUInstructionPointer;
  puVar1[9] = in_FPULastInstructionOpcode;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

