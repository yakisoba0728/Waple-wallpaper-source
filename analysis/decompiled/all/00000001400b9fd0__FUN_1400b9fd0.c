// Function: FUN_1400b9fd0
// Addr: 1400b9fd0
// Size: 997 bytes


char * FUN_1400b9fd0(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ushort *puVar17;
  uint uVar18;
  ushort *puVar19;
  
  pcVar8 = (char *)0x0;
  uVar13 = 0;
  uVar18 = 0;
  bVar5 = false;
  pcVar7 = (char *)0x0;
  puVar12 = (ushort *)pcVar8;
  puVar17 = (ushort *)pcVar8;
  if ((param_2 != (longlong *)0x0) &&
     (lVar4 = *param_2, puVar12 = (ushort *)0x0, puVar17 = (ushort *)0x0, lVar4 != 0)) {
    puVar17 = (ushort *)(param_2[3] + lVar4);
    puVar12 = (ushort *)(param_2[2] + lVar4);
  }
  iVar15 = *(int *)(param_1 + 0x174);
  if (iVar15 == 0) {
    cVar1 = *(char *)(param_1 + 0x61);
    if (cVar1 == '\0') {
      *(undefined **)(param_1 + 0x198) = &DAT_1400bd4c0;
      uVar9 = 0x81008888;
      if (8 < *(byte *)(param_1 + 0x60)) {
        uVar9 = 0x8100bbbb;
      }
      *(undefined4 *)(param_1 + 0x88) = uVar9;
      *(undefined4 *)(param_1 + 0x8c) = uVar9;
      if (*(int *)(param_1 + 0x7c) == 2) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        uVar18 = uVar13;
        goto switchD_1400ba04f_caseD_1;
      }
    }
    else if (cVar1 == '\x02') {
      *(undefined **)(param_1 + 0x198) = &DAT_1400bd4c0;
      uVar9 = 0x81008888;
      if (8 < *(byte *)(param_1 + 0x60)) {
        uVar9 = 0x8100bbbb;
      }
      *(undefined4 *)(param_1 + 0x88) = uVar9;
      *(undefined4 *)(param_1 + 0x8c) = uVar9;
      if (*(int *)(param_1 + 0x7c) == 6) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        uVar13 = uVar18;
        goto switchD_1400ba04f_caseD_3;
      }
    }
    else if (cVar1 == '\x03') {
      uVar13 = *(uint *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x88) = 0x81040008;
      *(undefined4 *)(param_1 + 0x8c) = 0x81040008;
      if (uVar13 < 0x101) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        puVar19 = (ushort *)pcVar8;
        goto LAB_1400ba390;
      }
    }
    pcVar7 = "#png: bad chunk";
    goto LAB_1400ba3ca;
  }
  uVar18 = *(uint *)(param_1 + 0xae18);
  puVar19 = (ushort *)(ulonglong)uVar18;
  uVar13 = *(uint *)(param_1 + 0xae1c);
  switch(iVar15) {
  case 1:
switchD_1400ba04f_caseD_1:
    if (1 < (longlong)puVar12 - (longlong)puVar17) {
      uVar16 = (ulonglong)(ushort)(*puVar17 >> 8 | *puVar17 << 8);
      puVar17 = puVar17 + 1;
LAB_1400ba158:
      bVar2 = *(byte *)(param_1 + 0x60);
      uVar18 = (uint)uVar16;
      if (bVar2 < 2) {
        uVar11 = 0xff000000;
        uVar16 = (ulonglong)(uVar18 & 1) * 0xffffff;
      }
      else if (bVar2 < 3) {
        uVar11 = 0xff000000;
        uVar16 = (ulonglong)(uVar18 & 3) * 0x555555;
      }
      else if (bVar2 < 5) {
        uVar11 = 0xff000000;
        uVar16 = (ulonglong)(uVar18 & 0xf) * 0x111111;
      }
      else if (bVar2 < 9) {
        uVar16 = (uVar16 & 0xff) * 0x10101;
        uVar11 = 0xff000000;
      }
      else {
        uVar16 = uVar16 * 0x100010001;
        uVar11 = 0xffff000000000000;
      }
      *(ulonglong *)(param_1 + 0x80) = uVar16 | uVar11;
LAB_1400ba1db:
      *(undefined4 *)(param_1 + 0x174) = 0;
      pcVar7 = pcVar8;
      goto LAB_1400ba3ca;
    }
    *(undefined8 *)(param_1 + 0xae20) = 0;
    iVar15 = 2;
  case 2:
    while (puVar17 != puVar12) {
      uVar3 = *(uint *)(param_1 + 0xae20);
      uVar16 = *(ulonglong *)(param_1 + 0xae20) & 0xffffffffffffff00;
      uVar14 = uVar3 & 0xff;
      *(ulonglong *)(param_1 + 0xae20) = uVar16;
      uVar6 = *puVar17;
      puVar17 = (ushort *)((longlong)puVar17 + 1);
      uVar16 = (ulonglong)(byte)uVar6 << (0x38U - (char)uVar3 & 0x3f) | uVar16;
      *(ulonglong *)(param_1 + 0xae20) = uVar16;
      if (uVar14 == 8) {
        uVar16 = uVar16 >> 0x30;
        goto LAB_1400ba158;
      }
      *(ulonglong *)(param_1 + 0xae20) = uVar14 + 8 | uVar16;
    }
    break;
  case 3:
switchD_1400ba04f_caseD_3:
    if (5 < (longlong)puVar12 - (longlong)puVar17) {
      uVar16 = (ulonglong)
               CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((byte)*puVar17,
                                                            *(byte *)((longlong)puVar17 + 1)),
                                                   (byte)puVar17[1]),
                                          *(byte *)((longlong)puVar17 + 3)),(byte)puVar17[2]),
                        *(byte *)((longlong)puVar17 + 5));
      puVar17 = puVar17 + 3;
LAB_1400ba2ef:
      if (*(byte *)(param_1 + 0x60) < 9) {
        *(ulonglong *)(param_1 + 0x80) =
             ((uVar16 & 0xff00000000 | 0xff0000000000) >> 8 | (ulonglong)((uint)uVar16 & 0xff0000))
             >> 8 | uVar16 & 0xff;
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
      else {
        *(ulonglong *)(param_1 + 0x80) = uVar16 | 0xffff000000000000;
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
      goto LAB_1400ba3ca;
    }
    *(undefined8 *)(param_1 + 0xae20) = 0;
    iVar15 = 4;
  case 4:
    while (puVar17 != puVar12) {
      uVar3 = *(uint *)(param_1 + 0xae20);
      uVar16 = *(ulonglong *)(param_1 + 0xae20) & 0xffffffffffffff00;
      uVar14 = uVar3 & 0xff;
      *(ulonglong *)(param_1 + 0xae20) = uVar16;
      uVar6 = *puVar17;
      puVar17 = (ushort *)((longlong)puVar17 + 1);
      uVar16 = (ulonglong)(byte)uVar6 << (0x38U - (char)uVar3 & 0x3f) | uVar16;
      *(ulonglong *)(param_1 + 0xae20) = uVar16;
      if (uVar14 == 0x28) {
        uVar16 = uVar16 >> 0x10;
        goto LAB_1400ba2ef;
      }
      *(ulonglong *)(param_1 + 0xae20) = uVar14 + 8 | uVar16;
    }
    break;
  case 5:
    while (uVar18 = (uint)puVar19, puVar17 != puVar12) {
      uVar6 = *puVar17;
      puVar17 = (ushort *)((longlong)puVar17 + 1);
      *(byte *)((ulonglong)(uVar18 * 4 + 3) + 0xa9b8 + param_1) = (byte)uVar6;
      puVar19 = (ushort *)(ulonglong)(uVar18 + 1);
LAB_1400ba390:
      if (uVar13 <= (uint)puVar19) goto LAB_1400ba1db;
      iVar15 = 5;
    }
    break;
  default:
    goto switchD_1400ba04f_default;
  }
  bVar5 = true;
  pcVar8 = "$base: short read";
switchD_1400ba04f_default:
  *(uint *)(param_1 + 0xae18) = uVar18;
  *(uint *)(param_1 + 0xae1c) = uVar13;
  iVar10 = 0;
  if (bVar5) {
    iVar10 = iVar15;
  }
  *(int *)(param_1 + 0x174) = iVar10;
  pcVar7 = pcVar8;
LAB_1400ba3ca:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar17 - *param_2;
  }
  return pcVar7;
}

