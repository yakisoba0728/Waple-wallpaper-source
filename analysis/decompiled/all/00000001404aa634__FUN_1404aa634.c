// Function: FUN_1404aa634
// Addr: 1404aa634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa634(longlong param_1,longlong param_2)

{
  longlong unaff_RSI;
  
  *(int *)(param_2 + param_1) = *(int *)(param_2 + param_1) + (int)param_2;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

