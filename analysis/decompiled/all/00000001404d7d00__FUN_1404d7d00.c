// Function: FUN_1404d7d00
// Addr: 1404d7d00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7d00(void)

{
  byte unaff_BH;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

