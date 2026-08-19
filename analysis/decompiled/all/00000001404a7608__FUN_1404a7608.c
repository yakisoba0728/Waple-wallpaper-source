// Function: FUN_1404a7608
// Addr: 1404a7608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7608(void)

{
  byte *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = *unaff_RSI << 1 | in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

