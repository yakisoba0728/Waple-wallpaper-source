// Function: FUN_1404a0840
// Addr: 1404a0840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0840(void)

{
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + 3) = *(char *)(unaff_RSI + 3) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

