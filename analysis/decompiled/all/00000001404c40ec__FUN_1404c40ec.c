// Function: FUN_1404c40ec
// Addr: 1404c40ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4121) overlaps instruction at (ram,0x0001404c4120)
    */

void FUN_1404c40ec(byte *param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined3 uVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  char cVar17;
  longlong in_RAX;
  uint *puVar13;
  byte *pbVar15;
  ulonglong uVar16;
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
  undefined1 auStack_8 [8];
  char *pcVar14;
  
  uVar22 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar21 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar23 = (byte)((ulonglong)param_2 >> 8);
  bVar19 = (byte)param_2;
  *(int *)(param_1 + in_RAX) = *(int *)(param_1 + in_RAX) + (int)param_2;
  puVar13 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'T');
  uVar12 = (uint)puVar13 | *puVar13;
  bVar9 = (char)uVar12 + 0x34;
  uVar8 = (undefined3)(uVar12 >> 8);
  bVar9 = bVar9 | *(byte *)(ulonglong)CONCAT31(uVar8,bVar9);
  uVar12 = CONCAT31(uVar8,bVar9 + 0x72);
  pbVar18 = (byte *)((ulonglong)uVar12 + 0x19);
  bVar2 = *pbVar18;
  bVar10 = *pbVar18;
  *pbVar18 = bVar10 + bVar23 + (0x8d < bVar9);
  uVar12 = uVar12 + 0x52060002 +
           (uint)(CARRY1(bVar2,bVar23) || CARRY1(bVar10 + bVar23,0x8d < bVar9));
  cVar20 = bVar23 + *(char *)(ulonglong)uVar12;
  uVar8 = (undefined3)(uVar12 >> 8);
  bVar10 = (byte)uVar12 & bVar19;
  pcVar14 = (char *)(ulonglong)CONCAT31(uVar8,bVar10);
  *pcVar14 = *pcVar14 + (char)((ulonglong)param_1 >> 8);
  *pcVar14 = *pcVar14 + bVar10;
  bVar2 = *param_1;
  bVar23 = (byte)unaff_EBX;
  *param_1 = *param_1 + bVar23;
  bVar10 = (bVar10 - 6) - CARRY1(bVar2,bVar23);
  pcVar14 = (char *)(ulonglong)CONCAT31(uVar8,bVar10);
  bVar2 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  bVar9 = (byte)param_1;
  cVar11 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar9;
  cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *unaff_RDI = *unaff_RDI << (bVar9 & 7) | *unaff_RDI >> 8 - (bVar9 & 7);
  bVar6 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar7 = (bVar9 & 0x1f) == 1;
  pbVar18 = param_1 + -1;
  cVar17 = (char)(uVar12 >> 8);
  if (pbVar18 == (byte *)0x0 || cVar3 == '\0') {
    if ((bVar7 || !SCARRY1(cVar11,bVar9)) &&
        (!bVar7 ||
        (!bVar6 && CARRY1(bVar2,bVar9) || bVar6 && (*unaff_RDI & 1) != 0) == (char)*unaff_RDI < '\0'
        )) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar19 = bVar19 + pcVar14[0x20];
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
    *pcVar14 = *pcVar14 + cVar17;
  }
  bVar10 = bVar10 & bVar19;
  pbVar15 = (byte *)(ulonglong)CONCAT31(uVar8,bVar10);
  *pbVar15 = *pbVar15 + cVar17;
  *pbVar15 = *pbVar15 + bVar10;
  *(int *)pbVar18 = *(int *)pbVar18 + unaff_EBX;
  uVar16 = (ulonglong)CONCAT31(uVar8,bVar10 | *pbVar15);
  puVar13 = (uint *)((longlong)pbVar18 * 2);
  uVar12 = *puVar13;
  *puVar13 = *puVar13 - unaff_ESI;
  puVar13 = (uint *)(pbVar18 + uVar16);
  uVar4 = *puVar13;
  uVar5 = *puVar13 - (uint)auStack_8;
  *puVar13 = uVar5 - (uVar12 < unaff_ESI);
  puVar13 = (uint *)(unaff_RDI + uVar16);
  uVar4 = (uint)(uVar4 < (uint)auStack_8 || uVar5 < (uVar12 < unaff_ESI));
  uVar12 = *puVar13;
  uVar5 = *puVar13 - CONCAT22(uVar21,CONCAT11(cVar20,bVar19));
  *puVar13 = uVar5 - uVar4;
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + uVar16);
  *piVar1 = (*piVar1 - unaff_ESI) -
            (uint)(uVar12 < CONCAT22(uVar21,CONCAT11(cVar20,bVar19)) || uVar5 < uVar4);
  *pbVar18 = *pbVar18 + bVar23;
  bVar19 = bVar19 ^ bRam00000001465e4323;
  *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
       *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
  if (*(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) != '\0') {
    *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
         *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
    pbVar18 = (byte *)(uVar16 ^ 0xe);
    bVar2 = *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19)));
    *(byte *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) =
         *(char *)CONCAT44(uVar22,CONCAT22(uVar21,CONCAT11(cVar20,bVar19))) + bVar19;
    *(uint *)unaff_RDI = (*(int *)unaff_RDI - unaff_EBX) - (uint)CARRY1(bVar2,bVar19);
    *pbVar18 = *pbVar18 | (byte)pbVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  TaskRegister(*(undefined2 *)CONCAT44(unaff_0000001c,unaff_EBX));
  pcVar14 = (char *)(uVar16 ^ 0xe);
  bVar2 = *unaff_RDI;
  bVar9 = (byte)pbVar18;
  bVar10 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar9;
  cVar11 = (char)pcVar14;
  if ((CARRY1(bVar2,bVar9)) || (pbVar18 = param_1 + -2, pbVar18 != (byte *)0x0 && *unaff_RDI != 0))
  {
    *pcVar14 = *pcVar14 + cVar11;
  }
  else {
    if (!SCARRY1(bVar10,bVar9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar14 = *pcVar14 + cVar11;
  }
  *pcVar14 = *pcVar14 + cVar11;
  cRam000000013f4c6e0a = cRam000000013f4c6e0a + (char)pbVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

