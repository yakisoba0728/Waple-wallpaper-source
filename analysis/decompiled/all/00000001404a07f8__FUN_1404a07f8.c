// Function: FUN_1404a07f8
// Addr: 1404a07f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a07f8(void)

{
  uint uVar1;
  uint *in_RAX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *(char *)(unaff_RBP + 3) = *(char *)(unaff_RBP + 3) + CARRY1((byte)uVar1,(byte)in_RAX);
  uRam00000001b44f0810 = uRam00000001b44f0810 & (uint)in_RAX + *in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

