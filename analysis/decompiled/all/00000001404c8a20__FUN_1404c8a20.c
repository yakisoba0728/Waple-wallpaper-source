// Function: FUN_1404c8a20
// Addr: 1404c8a20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a20(uint param_1)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & param_1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

