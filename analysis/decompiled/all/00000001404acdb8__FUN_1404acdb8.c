// Function: FUN_1404acdb8
// Addr: 1404acdb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404acdb9) overlaps instruction at (ram,0x0001404acdb8)
    */

void FUN_1404acdb8(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_RAX;
  uint uVar3;
  byte bVar4;
  char *unaff_RDI;
  bool bVar5;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  bVar5 = CARRY1((byte)*in_RAX,bVar2);
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if (SCARRY1((byte)uVar3,bVar2)) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(byte *)in_RAX = (byte)*in_RAX + bVar2;
    pbVar1 = (byte *)((longlong)in_RAX + -7);
    bVar5 = CARRY1(*pbVar1,bVar4);
    *pbVar1 = *pbVar1 + bVar4;
  }
  *(byte *)in_RAX = (byte)*in_RAX + bVar2 + bVar5;
  uVar3 = (int)param_1 >> 1;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2 + (((ulonglong)param_1 & 1) != 0);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + bVar2;
  *unaff_RDI = *unaff_RDI + (char)uVar3;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

