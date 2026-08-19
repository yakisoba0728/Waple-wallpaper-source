// Function: FUN_1404c40fc
// Addr: 1404c40fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4121) overlaps instruction at (ram,0x0001404c4120)
    */

void FUN_1404c40fc(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined3 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  char cVar16;
  undefined8 in_RAX;
  longlong lVar12;
  byte *pbVar14;
  ulonglong uVar15;
  byte bVar17;
  byte *pbVar18;
  byte bVar19;
  char cVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  byte bVar23;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar24;
  undefined1 auStack_8 [8];
  char *pcVar13;
  
  uVar22 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar21 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  bVar19 = (byte)param_2;
  bVar5 = (byte)in_RAX + 0x72;
  bVar24 = 0x8d < (byte)in_RAX || CARRY1(bVar5,in_CF);
  lVar12 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 + in_CF);
  pbVar18 = (byte *)(lVar12 + 0x19);
  bVar9 = *pbVar18;
  bVar5 = *pbVar18;
  *pbVar18 = bVar5 + bVar17 + bVar24;
  uVar11 = (int)lVar12 + 0x52060002 + (uint)(CARRY1(bVar9,bVar17) || CARRY1(bVar5 + bVar17,bVar24));
  cVar20 = bVar17 + *(char *)(ulonglong)uVar11;
  uVar8 = (undefined3)(uVar11 >> 8);
  bVar9 = (byte)uVar11 & bVar19;
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar8,bVar9);
  *pcVar13 = *pcVar13 + (char)((ulonglong)param_1 >> 8);
  *pcVar13 = *pcVar13 + bVar9;
  bVar5 = *param_1;
  bVar23 = (byte)unaff_EBX;
  *param_1 = *param_1 + bVar23;
  bVar9 = (bVar9 - 6) - CARRY1(bVar5,bVar23);
  pcVar13 = (char *)(ulonglong)CONCAT31(uVar8,bVar9);
  bVar5 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  bVar17 = (byte)param_1;
  cVar10 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar17
  ;
  cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *unaff_RDI = *unaff_RDI << (bVar17 & 7) | *unaff_RDI >> 8 - (bVar17 & 7);
  bVar24 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar7 = (bVar17 & 0x1f) == 1;
  pbVar18 = param_1 + -1;
  cVar16 = (char)(uVar11 >> 8);
  if (pbVar18 == (byte *)0x0 || cVar3 == '\0') {
    if ((bVar7 || !SCARRY1(cVar10,bVar17)) &&
        (!bVar7 ||
        (!bVar24 && CARRY1(bVar5,bVar17) || bVar24 && (*unaff_RDI & 1) != 0) ==
        (char)*unaff_RDI < '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar19 = bVar19 + pcVar13[0x20];
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
    *pcVar13 = *pcVar13 + cVar16;
  }
  bVar9 = bVar9 & bVar19;
  pbVar14 = (byte *)(ulonglong)CONCAT31(uVar8,bVar9);
  *pbVar14 = *pbVar14 + cVar16;
  *pbVar14 = *pbVar14 + bVar9;
  *(int *)pbVar18 = *(int *)pbVar18 + unaff_EBX;
  uVar15 = (ulonglong)CONCAT31(uVar8,bVar9 | *pbVar14);
  puVar2 = (uint *)((longlong)pbVar18 * 2);
  uVar11 = *puVar2;
  *puVar2 = *puVar2 - unaff_ESI;
  puVar2 = (uint *)(pbVar18 + uVar15);
  uVar4 = *puVar2;
  uVar6 = *puVar2 - (uint)auStack_8;
  *puVar2 = uVar6 - (uVar11 < unaff_ESI);
  puVar2 = (uint *)(unaff_RDI + uVar15);
  uVar4 = (uint)(uVar4 < (uint)auStack_8 || uVar6 < (uVar11 < unaff_ESI));
  uVar11 = *puVar2;
  uVar6 = *puVar2 - CONCAT22(uVar21,CONCAT11(cVar20,bVar19));
  *puVar2 = uVar6 - uVar4;
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + uVar15);
  *piVar1 = (*piVar1 - unaff_ESI) -
            (uint)(uVar11 < CONCAT22(uVar21,CONCAT11(cVar20,bVar19)) || uVar6 < uVar4);
  *pbVar18 = *pbVar18 + bVar23;
  bVar19 = bVar19 ^ bRam00000001465e4323;
  *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
       *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
  if (*(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) != '\0') {
    *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
         *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
    pbVar18 = (byte *)(uVar15 ^ 0xe);
    bVar5 = *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19)));
    *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
         *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
    *(uint *)unaff_RDI = (*(int *)unaff_RDI - unaff_EBX) - (uint)CARRY1(bVar5,bVar19);
    *pbVar18 = *pbVar18 | (byte)pbVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  TaskRegister(*(undefined2 *)CONCAT44(unaff_0000001c,unaff_EBX));
  pcVar13 = (char *)(uVar15 ^ 0xe);
  bVar9 = *unaff_RDI;
  bVar17 = (byte)pbVar18;
  bVar5 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar17;
  cVar10 = (char)pcVar13;
  if ((CARRY1(bVar9,bVar17)) || (pbVar18 = param_1 + -2, pbVar18 != (byte *)0x0 && *unaff_RDI != 0))
  {
    *pcVar13 = *pcVar13 + cVar10;
  }
  else {
    if (!SCARRY1(bVar5,bVar17)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar13 = *pcVar13 + cVar10;
  }
  *pcVar13 = *pcVar13 + cVar10;
  cRam000000013f4c6e0a = cRam000000013f4c6e0a + (char)pbVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

