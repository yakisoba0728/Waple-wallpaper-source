// Function: FUN_1404a8920
// Addr: 1404a8920
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8920(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  unaff_RDI[1] = unaff_RSI[1];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

