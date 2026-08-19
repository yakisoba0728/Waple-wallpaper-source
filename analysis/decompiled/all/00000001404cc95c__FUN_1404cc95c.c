// Function: FUN_1404cc95c
// Addr: 1404cc95c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc95c(void)

{
  int unaff_ESP;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

