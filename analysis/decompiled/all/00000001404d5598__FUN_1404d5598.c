// Function: FUN_1404d5598
// Addr: 1404d5598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5598(char param_1)

{
  byte in_AL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (in_AL | 100);
  *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

