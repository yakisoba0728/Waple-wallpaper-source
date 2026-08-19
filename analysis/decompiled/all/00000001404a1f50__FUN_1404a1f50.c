// Function: FUN_1404a1f50
// Addr: 1404a1f50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1f50(byte *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined3 uVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  longlong in_RAX;
  undefined7 uVar12;
  uint *puVar10;
  byte *pbVar11;
  byte bVar13;
  char cVar17;
  int *piVar14;
  byte bVar18;
  byte *pbVar15;
  byte *pbVar16;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  byte bVar19;
  
  cVar17 = (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + cVar17;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(in_RAX + unaff_RBX) = *(char *)(in_RAX + unaff_RBX) + cVar17;
  *(char *)(in_RAX + -0x60) = *(char *)(in_RAX + -0x60) + (char)in_RAX;
  piVar14 = (int *)(ulonglong)(uint)((int)in_RAX >> 0x1f);
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar9 = (int)CONCAT71(uVar12,cRam0521004a1e080004 + *(char *)CONCAT71(uVar12,cRam0521004a1e080004)
                       ) + 0x50000674;
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  puVar10 = (uint *)(ulonglong)uVar9;
  *(undefined4 *)(&stack0x49e0c800 + (longlong)puVar10) = 0;
  *puVar10 = *puVar10 & uVar9;
  uVar6 = (undefined3)(uVar9 >> 8);
  bVar8 = (char)uVar9 + (char)*puVar10;
  bVar18 = (char)((ulonglong)in_RAX >> 0x18) >> 7;
  puVar2[CONCAT31(uVar6,bVar8)] = puVar2[CONCAT31(uVar6,bVar8)] + bVar18;
  pbVar16 = unaff_RSI + 2;
  unaff_RDI[1] = *puVar2;
  *(undefined4 *)(&stack0x49e0c7f8 + CONCAT31(uVar6,bVar8)) = 0;
  *piVar14 = *piVar14 + (int)param_1;
  pbVar11 = (byte *)(ulonglong)CONCAT31(uVar6,bVar8);
  bVar3 = param_1[(longlong)piVar14];
  sVar7 = (short)((ulonglong)in_RAX >> 0x10) >> 0xf;
  pbVar15 = (byte *)(ulonglong)CONCAT22(sVar7,CONCAT11(bVar18 | bVar3,bVar18));
  bVar19 = *pbVar15;
  bVar13 = (byte)param_1;
  bVar1 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar13;
  *pbVar16 = *pbVar16 << (bVar13 & 7) | *pbVar16 >> 8 - (bVar13 & 7);
  bVar4 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar5 = (bVar13 & 0x1f) == 1;
  if ((bVar5 || !SCARRY1(bVar1,bVar13)) &&
      (!bVar5 ||
      (!bVar4 && CARRY1(bVar19,bVar13) || bVar4 && (*pbVar16 & 1) != 0) == (char)*pbVar16 < '\0')) {
    *pbVar15 = *pbVar15 | bVar8;
    bVar19 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar13;
    pbVar11[in_FS_OFFSET] = pbVar11[in_FS_OFFSET] + bVar8 + CARRY1(bVar19,bVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar19 = (bVar18 | bVar3) + *pbVar11;
  pbVar16 = (byte *)(ulonglong)CONCAT22(sVar7,CONCAT11(bVar19,bVar18));
  *(int *)pbVar11 = *(int *)pbVar11 + (int)param_1;
  *pbVar16 = *pbVar16 | bVar19;
  bVar19 = (byte)(uVar9 >> 8);
  *param_1 = *param_1 ^ bVar19;
  uVar9 = CONCAT31(uVar6,(bVar8 + 0x70 | *(byte *)(ulonglong)CONCAT31(uVar6,bVar8 + 0x70)) ^ bVar19)
  ;
  *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 | uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

