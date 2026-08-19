// Function: FUN_1404a90d8
// Addr: 1404a90d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a90d8(void)

{
  int unaff_EBP;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

