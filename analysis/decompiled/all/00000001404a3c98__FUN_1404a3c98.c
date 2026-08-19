// Function: FUN_1404a3c98
// Addr: 1404a3c98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c98(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

