// Function: FUN_1404b1da8
// Addr: 1404b1da8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1da8(byte param_1)

{
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + 0x16) = *(byte *)(unaff_RSI + 0x16) ^ param_1;
  *(char *)(unaff_RBX + 0x4e) = *(char *)(unaff_RBX + 0x4e) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

