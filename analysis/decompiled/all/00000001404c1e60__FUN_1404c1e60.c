// Function: FUN_1404c1e60
// Addr: 1404c1e60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1e60(void)

{
  byte in_AH;
  char unaff_BPL;
  char *unaff_RSI;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ in_AH;
  *unaff_RSI = *unaff_RSI + unaff_BPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

