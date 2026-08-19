// Function: FUN_1404b4b18
// Addr: 1404b4b18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b18(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  longlong in_RAX;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  byte bVar11;
  byte bVar12;
  undefined4 unaff_EBX;
  uint *puVar14;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar15;
  byte *pbVar10;
  int iVar13;
  
  bVar11 = (byte)param_2;
  bVar12 = (byte)unaff_EBX;
  iVar13 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                    CONCAT11((byte)((uint)unaff_EBX >> 8) | *(byte *)(in_RAX + 3),bVar12));
  bVar5 = (byte)in_RAX;
  bVar15 = CARRY1(bRam00000001204b4f89,bVar5);
  bRam00000001204b4f89 = bRam00000001204b4f89 + bVar5;
  *(byte *)param_2 = (char)*param_2 + bVar12 + bVar15;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  *param_2 = *param_2 + iVar13 + (uint)CARRY1(bVar1,bVar11);
  uVar7 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 + bVar12);
  puVar8 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  puVar14 = (uint *)(uVar7 & 0xffffffff);
  bVar5 = (byte)puVar14;
  *param_1 = *param_1 + bVar5;
  *puVar8 = *puVar8;
  *(byte *)param_2 = (char)*param_2 + bVar12;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  *param_2 = *param_2 + iVar13 + (uint)CARRY1(bVar1,bVar11);
  lVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),(char)((ulonglong)puVar8 >> 8) + bVar12);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar5;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar1,bVar5);
  uVar4 = *puVar14;
  *(byte *)puVar14 = (char)*puVar14 + bVar12;
  *(longlong *)(lVar9 + -8) = lVar9;
  uVar6 = (uint)uVar7;
  uVar2 = uVar6 + *puVar14;
  pbVar10 = (byte *)(ulonglong)(uVar2 + CARRY1((byte)uVar4,bVar12));
  *(char *)((longlong)param_2 * 2) =
       (*(char *)((longlong)param_2 * 2) - (char)((ulonglong)param_2 >> 8)) -
       (CARRY4(uVar6,*puVar14) || CARRY4(uVar2,(uint)CARRY1((byte)uVar4,bVar12)));
  bVar1 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar12;
  bVar3 = ((byte)param_1 & 0x1f) % 9;
  bVar5 = pbVar10[(longlong)unaff_RSI * 2];
  pbVar10[(longlong)unaff_RSI * 2] =
       bVar5 << bVar3 | (byte)(CONCAT11(CARRY1(bVar1,bVar12),bVar5) >> 9 - bVar3);
  *(uint *)(pbVar10 + lVar9 + -8) = *(uint *)(pbVar10 + lVar9 + -8) & (uint)param_2;
  pbVar10[unaff_RBP * 2] = pbVar10[unaff_RBP * 2] + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

