// Function: FUN_1404ad9d8
// Addr: 1404ad9d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad9d8(uint *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar10;
  uint *in_RAX;
  byte *pbVar9;
  uint uVar11;
  uint *puVar12;
  byte bVar14;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char *pcVar7;
  int *piVar8;
  byte bVar13;
  
  uVar6 = (uint)in_RAX;
  uRamc800122c0e00122b = uVar6;
  *in_RAX = *in_RAX & uVar6;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar11 = (int)param_2 - *param_2;
  pcVar7 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x43ffedd5);
  *pcVar7 = *pcVar7 + (char)((ulonglong)in_RAX >> 8);
  *(uint *)(ulonglong)uVar11 = *(uint *)(ulonglong)uVar11 & (uint)param_1;
  bVar13 = (byte)(uVar11 >> 8) | *(byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + (longlong)param_1);
  uVar11 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(bVar13,(char)uVar11));
  puVar12 = (uint *)(ulonglong)uVar11;
  iVar5 = uVar6 + 0x40000a64;
  *puVar12 = *puVar12 ^ uVar11;
  bVar14 = (byte)unaff_EBX;
  *(char *)(unaff_RSI + -0xbffedcf) = *(char *)(unaff_RSI + -0xbffedcf) + bVar14;
  cVar2 = in(0x49);
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),cVar2);
  cVar10 = (char)((uint)iVar5 >> 8);
  *(byte *)param_1 = (byte)*param_1 + cVar10;
  *pcVar7 = *pcVar7 + cVar2;
  pcVar7[0x31] = pcVar7[0x31] + cVar2;
  *puVar12 = *puVar12 ^ uVar11;
  bVar3 = in(0x49);
  uVar6 = *param_1;
  *(byte *)param_1 = (byte)*param_1 + bVar3;
  bVar4 = (bVar3 - 10) - CARRY1((byte)uVar6,bVar3);
  pbVar9 = &stack0x00000000 + unaff_RSI;
  bVar3 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar14;
  bVar1 = CARRY1(bVar4,CARRY1(bVar3,bVar14));
  bVar4 = bVar4 + CARRY1(bVar3,bVar14);
  bVar3 = bVar4 + 0x4e;
  uVar6 = CONCAT31(CONCAT21((short)((uint)iVar5 >> 0x10),cVar10 + bVar13),bVar3 - bVar1) +
          0x11e013f0 + (uint)(bVar4 < 0xb2 || bVar3 < bVar1);
  piVar8 = (int *)(ulonglong)uVar6;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *piVar8 = *piVar8 + uVar11;
  uVar6 = uVar6 + *piVar8;
  pbVar9 = (byte *)(ulonglong)uVar6;
  *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) | (uint)&stack0x00000000;
  bVar3 = (byte)uVar6;
  *pbVar9 = *pbVar9 + bVar3;
  *param_1 = *param_1 & unaff_EBX;
  *pbVar9 = *pbVar9 | bVar3;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

