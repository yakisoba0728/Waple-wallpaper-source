// Function: FUN_1404a2bf0
// Addr: 1404a2bf0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2bf0(void)

{
  uint unaff_EBX;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

