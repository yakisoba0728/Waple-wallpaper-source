// Function: FUN_1404d1528
// Addr: 1404d1528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1528(void)

{
  int unaff_EBX;
  longlong unaff_RSI;
  
  *(int *)(unaff_RSI + 0x349e0008) = *(int *)(unaff_RSI + 0x349e0008) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

