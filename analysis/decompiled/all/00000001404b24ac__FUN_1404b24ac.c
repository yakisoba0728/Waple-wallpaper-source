// Function: FUN_1404b24ac
// Addr: 1404b24ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b24ac(longlong param_1,uint param_2)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *(char *)(param_1 + 0x8e40400) = *(char *)(param_1 + 0x8e40400) + (char)(param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

