// Function: FUN_1404cc2e8
// Addr: 1404cc2e8
// Size: 1 bytes


void FUN_1404cc2e8(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined3 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulonglong in_RAX;
  char *pcVar8;
  byte *pbVar9;
  ulonglong unaff_RBX;
  char *pcVar10;
  char unaff_R12B;
  
  uVar6 = ((uint)(uint *)(in_RAX | 0xc4) | *(uint *)(in_RAX | 0xc4)) + 0xd0000a34;
  bVar1 = (char)(param_2 & 0xffffffff) + 0x93;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 & bVar1;
  *param_1 = *param_1;
  iVar7 = (int)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),bVar1) + -0x2bfafffe;
  cVar2 = (char)iVar7 + -0x6d;
  uVar4 = (undefined3)((uint)iVar7 >> 8);
  pcVar8 = (char *)(unaff_RBX & 0xffffffff);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,cVar2);
  cVar3 = (char)uVar6 + (char)pcVar8;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  pcVar10[(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar3) * 4] =
       pcVar10[(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar3) * 4] + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar10 = *pcVar10 + cVar2;
  cVar5 = cVar2 + cVar3 + cVar2;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar4,cVar5);
  *pbVar9 = *pbVar9 & cVar3 + cVar2 + 0x93U;
  *param_1 = *param_1 + (char)unaff_RBX;
  *param_1 = *param_1 & (byte)param_1;
  *param_1 = *param_1 + cVar5;
  return;
}

