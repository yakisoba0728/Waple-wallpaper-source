// Function: FUN_1404c6e48
// Addr: 1404c6e48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6e48(void)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

