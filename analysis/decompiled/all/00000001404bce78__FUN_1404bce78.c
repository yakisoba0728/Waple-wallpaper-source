// Function: FUN_1404bce78
// Addr: 1404bce78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bce78(void)

{
  int unaff_EBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

