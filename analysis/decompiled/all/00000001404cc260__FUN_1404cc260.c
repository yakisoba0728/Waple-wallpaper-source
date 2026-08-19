// Function: FUN_1404cc260
// Addr: 1404cc260
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc260(longlong param_1,uint param_2)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(uint *)(in_RAX + param_1) = *(uint *)(in_RAX + param_1) & param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

