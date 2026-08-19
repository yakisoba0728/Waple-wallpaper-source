// Function: FUN_1404d1780
// Addr: 1404d1780
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1780(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

