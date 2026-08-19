// Function: FUN_1404a52b0
// Addr: 1404a52b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a52b0(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

