// Function: FUN_1404c6f64
// Addr: 1404c6f64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6f64(void)

{
  char *pcVar1;
  byte in_AL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + 0xa21004c + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (in_AL | 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

