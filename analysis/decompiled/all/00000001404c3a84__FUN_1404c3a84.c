// Function: FUN_1404c3a84
// Addr: 1404c3a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3a84(void)

{
  int in_EAX;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = *unaff_RSI + in_EAX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

