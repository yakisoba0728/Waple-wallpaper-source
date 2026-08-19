// Function: FUN_1404ad9fc
// Addr: 1404ad9fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad9fc(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar11;
  int in_EAX;
  int iVar6;
  uint uVar7;
  byte *pbVar10;
  byte bVar12;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char *pcVar8;
  int *piVar9;
  
  iVar6 = in_EAX + 0x40000a64;
  uVar2 = (uint)param_2;
  *param_2 = *param_2 ^ uVar2;
  bVar12 = (byte)unaff_EBX;
  *(char *)(unaff_RSI + -0xbffedcf) = *(char *)(unaff_RSI + -0xbffedcf) + bVar12;
  cVar3 = in(0x49);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),cVar3);
  cVar11 = (char)((uint)iVar6 >> 8);
  *(byte *)param_1 = (byte)*param_1 + cVar11;
  *pcVar8 = *pcVar8 + cVar3;
  pcVar8[0x31] = pcVar8[0x31] + cVar3;
  *param_2 = *param_2 ^ uVar2;
  bVar4 = in(0x49);
  uVar7 = *param_1;
  *(byte *)param_1 = (byte)*param_1 + bVar4;
  bVar5 = (bVar4 - 10) - CARRY1((byte)uVar7,bVar4);
  pbVar10 = &stack0x00000000 + unaff_RSI;
  bVar4 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar12;
  bVar1 = CARRY1(bVar5,CARRY1(bVar4,bVar12));
  bVar5 = bVar5 + CARRY1(bVar4,bVar12);
  bVar4 = bVar5 + 0x4e;
  uVar7 = CONCAT31(CONCAT21((short)((uint)iVar6 >> 0x10),cVar11 + (char)((ulonglong)param_2 >> 8)),
                   bVar4 - bVar1) + 0x11e013f0 + (uint)(bVar5 < 0xb2 || bVar4 < bVar1);
  piVar9 = (int *)(ulonglong)uVar7;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *piVar9 = *piVar9 + uVar2;
  uVar7 = uVar7 + *piVar9;
  pbVar10 = (byte *)(ulonglong)uVar7;
  *(uint *)(pbVar10 + 8) = *(uint *)(pbVar10 + 8) | (uint)&stack0x00000000;
  bVar4 = (byte)uVar7;
  *pbVar10 = *pbVar10 + bVar4;
  *param_1 = *param_1 & unaff_EBX;
  *pbVar10 = *pbVar10 | bVar4;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

