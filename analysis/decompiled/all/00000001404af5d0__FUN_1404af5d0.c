// Function: FUN_1404af5d0
// Addr: 1404af5d0
// Size: 1 bytes


void FUN_1404af5d0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  byte bVar6;
  uint *in_RAX;
  byte bVar7;
  undefined6 uVar8;
  longlong unaff_RBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *pbVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & unaff_ESI;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  *(byte *)((longlong)in_RAX + -0x67defff9) = *(byte *)((longlong)in_RAX + -0x67defff9) ^ bVar7;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  iVar2 = (uint)in_RAX + 0x8000988;
  cVar4 = CARRY1((byte)iVar2,0xf7fff677 < (uint)in_RAX) + 'X';
  pbVar5 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),cVar4);
  bVar7 = bVar7 & bVar6;
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,(char)param_1)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,(char)param_1)) + -8;
  *(char *)((longlong)pbVar5 * 2) = *(char *)((longlong)pbVar5 * 2) + cVar4;
  pbVar5[unaff_RBX] = pbVar5[unaff_RBX] + bVar6;
  bVar7 = *pbVar5;
  bVar6 = (byte)((uint)iVar2 >> 8);
  *pbVar5 = *pbVar5 + bVar6;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x14);
  *pcVar1 = *pcVar1 + (char)param_2 + CARRY1(bVar7,bVar6);
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x56);
  *pcVar1 = *pcVar1 + bVar6;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

