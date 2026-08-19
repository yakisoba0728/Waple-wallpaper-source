// Function: FUN_1404c4070
// Addr: 1404c4070
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4070(char *param_1,longlong param_2)

{
  undefined2 *puVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char in_CF;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  cVar2 = (in_AL + -0x15) - in_CF;
  puVar1 = (undefined2 *)(param_2 + CONCAT71(in_register_00000001,cVar2) * 2);
  *puVar1 = in_FPUControlWord;
  puVar1[2] = in_FPUStatusWord;
  puVar1[4] = in_FPUTagWord;
  *(undefined8 *)(puVar1 + 10) = in_FPUDataPointer;
  *(undefined8 *)(puVar1 + 6) = in_FPUInstructionPointer;
  puVar1[9] = in_FPULastInstructionOpcode;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

