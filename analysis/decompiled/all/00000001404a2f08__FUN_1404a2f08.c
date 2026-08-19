// Function: FUN_1404a2f08
// Addr: 1404a2f08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2f08(void)

{
  byte *pbVar1;
  uint *in_RAX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  pbVar1 = (byte *)(unaff_RBP + 0x5851100 + (longlong)in_RAX);
  *pbVar1 = *pbVar1 ^ (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

