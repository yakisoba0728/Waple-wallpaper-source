// Function: FUN_1404d4dfc
// Addr: 1404d4dfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4dfc(byte param_1)

{
  char *in_RAX;
  char unaff_BH;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> (param_1 & 0x1f);
  *in_RAX = *in_RAX + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

