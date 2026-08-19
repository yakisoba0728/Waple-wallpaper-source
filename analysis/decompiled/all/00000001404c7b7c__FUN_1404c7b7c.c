// Function: FUN_1404c7b7c
// Addr: 1404c7b7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7b7c(longlong param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  *(int *)(param_2 + param_1) = *(int *)(param_2 + param_1) + (int)param_2;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_2;
  LocalDescriptorTableRegister(*(undefined2 *)(param_2 * 3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

