// Function: FUN_1404b4af0
// Addr: 1404b4af0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4b1d) overlaps instruction at (ram,0x0001404b4b1b)
    */

void FUN_1404b4af0(byte *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *in_RAX;
  undefined7 uVar10;
  byte *pbVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int unaff_EBX;
  ulonglong uVar15;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar16;
  
  bVar12 = (byte)param_2;
  bVar11 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *unaff_RDI = *unaff_RDI >> 2 | *unaff_RDI << 6;
  pbVar6 = (byte *)((longlong)in_RAX + (longlong)param_2);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar11;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = ((char)in_RAX - (char)*in_RAX) - CARRY1(bVar3,bVar11);
  if (-1 < (char)bVar3) {
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar3;
    *(char *)CONCAT71(uVar10,bVar3) = *(char *)CONCAT71(uVar10,bVar3) + bVar3;
    pbVar6 = (byte *)(CONCAT71(uVar10,(bVar3 ^ 8) * '\x02') | 0x10);
    bVar3 = *pbVar6;
    bVar5 = (byte)pbVar6 - *pbVar6;
    lVar7 = CONCAT71(uVar10,bVar5);
    if ((char)bVar5 >= '\0') {
      *param_1 = *param_1;
      bVar4 = bVar5 | *(byte *)(lVar7 * 2);
      cVar13 = (char)unaff_EBX;
      unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                           CONCAT11((byte)((uint)unaff_EBX >> 8) |
                                    *(byte *)(CONCAT71(uVar10,bVar4) + 3),cVar13));
      bVar16 = CARRY1(bRam00000001204b4f89,bVar4);
      bRam00000001204b4f89 = bRam00000001204b4f89 + bVar4;
      *(char *)param_2 = (char)*param_2 + cVar13 + bVar16;
      bVar14 = *unaff_RDI;
      *unaff_RDI = *unaff_RDI + bVar12;
      *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar14,bVar12);
      puVar8 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
      register0x00000020 = (BADSPACEBASE *)(CONCAT71(uVar10,bVar4 + cVar13) & 0xffffffff);
      *param_1 = *param_1 + (char)register0x00000020;
      *puVar8 = *puVar8;
      lVar7 = CONCAT71((int7)((ulonglong)puVar8 >> 8),(char)((ulonglong)puVar8 >> 8));
    }
    bVar14 = (byte)unaff_EBX;
    *(byte *)param_2 = (char)*param_2 + bVar14 + ((char)bVar5 < '\0' && (byte)pbVar6 < bVar3);
    bVar3 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + bVar12;
    *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar3,bVar12);
    puVar9 = (uint *)((ulonglong)register0x00000020 & 0xffffffff);
    uVar15 = CONCAT71((int7)((ulonglong)lVar7 >> 8),(char)lVar7 + bVar14) & 0xffffffff;
    bVar3 = *param_1;
    bVar5 = (byte)puVar9;
    *param_1 = *param_1 + bVar5;
    *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar3,bVar5);
    uVar2 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar14;
    *(ulonglong *)(uVar15 - 8) = uVar15;
    uVar2 = (uint)CARRY1((byte)uVar2,bVar14);
    uVar1 = (uint)register0x00000020 + *puVar9;
    pbVar6 = (byte *)(ulonglong)(uVar1 + uVar2);
    *(char *)((longlong)param_2 * 2) =
         (*(char *)((longlong)param_2 * 2) - (char)((ulonglong)param_2 >> 8)) -
         (CARRY4((uint)register0x00000020,*puVar9) || CARRY4(uVar1,uVar2));
    bVar3 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar14;
    bVar5 = (bVar11 & 0x1f) % 9;
    bVar11 = pbVar6[(longlong)unaff_RSI * 2];
    pbVar6[(longlong)unaff_RSI * 2] =
         bVar11 << bVar5 | (byte)(CONCAT11(CARRY1(bVar3,bVar14),bVar11) >> 9 - bVar5);
    *(uint *)(pbVar6 + (uVar15 - 8)) = *(uint *)(pbVar6 + (uVar15 - 8)) & (uint)param_2;
    pbVar6[unaff_RBP * 2] = pbVar6[unaff_RBP * 2] + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

