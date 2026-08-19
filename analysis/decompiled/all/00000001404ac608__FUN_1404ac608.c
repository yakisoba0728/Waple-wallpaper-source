// Function: FUN_1404ac608
// Addr: 1404ac608
// Size: 1 bytes


void FUN_1404ac608(void)

{
  byte bVar1;
  uint3 uVar3;
  byte bVar4;
  uint uVar6;
  uint *in_RAX;
  char *pcVar8;
  byte bVar2;
  byte bVar5;
  byte *pbVar7;
  
  uVar6 = (uint)in_RAX | *in_RAX;
  uVar3 = (uint3)(uVar6 >> 8) | (uint3)((ulonglong)&stack0x00000000 >> 8);
  bVar5 = (byte)uVar6;
  bVar4 = bVar5 + 0x34;
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  bVar1 = *pbVar7;
  bVar2 = *pbVar7;
  *pbVar7 = bVar2 + bVar4 + (0xcb < bVar5);
  pcVar8 = (char *)CONCAT71((uint7)uVar3,0x39);
  *pcVar8 = *pcVar8 + '9' + (CARRY1(bVar1,bVar4) || CARRY1(bVar2 + bVar4,0xcb < bVar5));
  return;
}

