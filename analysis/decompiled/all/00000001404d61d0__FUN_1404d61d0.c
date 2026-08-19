// Function: FUN_1404d61d0
// Addr: 1404d61d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d61d0(void)

{
  byte *pbVar1;
  longlong unaff_RBX;
  
  pbVar1 = (byte *)(unaff_RBX + -0x7b16ffc9);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

