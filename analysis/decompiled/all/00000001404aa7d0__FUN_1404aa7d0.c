// Function: FUN_1404aa7d0
// Addr: 1404aa7d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa7d0(longlong param_1,char param_2)

{
  byte *pbVar1;
  char in_AL;
  char *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + param_2;
  pbVar1 = (byte *)(unaff_RDI + 0xe);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *unaff_RBX = *unaff_RBX + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

