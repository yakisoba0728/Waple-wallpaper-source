// Function: FUN_14049e7ac
// Addr: 14049e7ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e7ac(void)

{
  char *pcVar1;
  char unaff_BH;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RBP & 0xffffffff);
  *(char *)(unaff_RSI + 0x210049) = *(char *)(unaff_RSI + 0x210049) + unaff_BH;
  *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

