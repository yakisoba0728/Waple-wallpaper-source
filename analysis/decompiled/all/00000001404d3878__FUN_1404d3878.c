// Function: FUN_1404d3878
// Addr: 1404d3878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3878(void)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  char *in_R9;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar2 = ((uint)in_RAX + 0xdb92ffc2) - (uint)CARRY1((byte)uVar2,(byte)in_RAX);
  pcVar1 = (char *)((ulonglong)uVar2 + 0x2f);
  *pcVar1 = *pcVar1 + (char)uVar2;
  *in_R9 = *in_R9 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

