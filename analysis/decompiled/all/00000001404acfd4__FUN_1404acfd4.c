// Function: FUN_1404acfd4
// Addr: 1404acfd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acfd4(char *param_1)

{
  uint uVar1;
  byte bVar2;
  uint *in_RAX;
  char unaff_BH;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)((longlong)in_RAX + 0x33) = *(byte *)((longlong)in_RAX + 0x33) + unaff_BH;
  uVar1 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  *in_RAX = *in_RAX + (uint)in_RAX + (uint)CARRY1((byte)uVar1,bVar2);
  *param_1 = *param_1 + -8;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  *(byte *)(in_RAX + 0x1900044f) = (byte)in_RAX[0x1900044f] + bVar2;
  *param_1 = *param_1 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

