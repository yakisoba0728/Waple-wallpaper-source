// Function: FUN_1400af890
// Addr: 1400af890
// Size: 939 bytes


char * FUN_1400af890(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  
  pcVar5 = (char *)0x0;
  puVar14 = (ushort *)0x0;
  uVar9 = 0;
  puVar10 = (ushort *)0x0;
  bVar15 = 0;
  bVar16 = 0;
  uVar17 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar1 = *param_2, lVar1 != 0)) {
    puVar14 = (ushort *)(param_2[3] + lVar1);
    puVar10 = (ushort *)(param_2[2] + lVar1);
  }
  iVar13 = *(int *)(param_1 + 0xf4);
  if (iVar13 == 0) {
switchD_1400af935_caseD_1:
    if ((longlong)puVar10 - (longlong)puVar14 < 2) {
      *(undefined8 *)(param_1 + 0xfdb0) = 0;
      iVar13 = 2;
switchD_1400af935_caseD_2:
      while (puVar14 != puVar10) {
        uVar11 = *(ulonglong *)(param_1 + 0xfdb0);
        uVar8 = uVar11 & 0xffffffffffffff;
        *(ulonglong *)(param_1 + 0xfdb0) = uVar8;
        bVar2 = (byte)(uVar11 >> 0x38);
        uVar4 = *puVar14;
        puVar14 = (ushort *)((longlong)puVar14 + 1);
        uVar8 = (ulonglong)(byte)uVar4 << (bVar2 & 0x3f) | uVar8;
        *(ulonglong *)(param_1 + 0xfdb0) = uVar8;
        if (bVar2 == 8) goto code_r0x0001400af95c;
        *(ulonglong *)(param_1 + 0xfdb0) = (ulonglong)(bVar2 + 8) << 0x38 | uVar8;
      }
    }
    else {
      uVar8 = (ulonglong)*puVar14;
      puVar14 = puVar14 + 1;
code_r0x0001400af95c:
      *(int *)(param_1 + 0x28) = (int)uVar8;
code_r0x0001400afa49:
      if ((longlong)puVar10 - (longlong)puVar14 < 2) {
        *(undefined8 *)(param_1 + 0xfdb0) = 0;
        iVar13 = 4;
        goto joined_r0x0001400afb26;
      }
      uVar8 = (ulonglong)*puVar14;
      puVar14 = puVar14 + 1;
LAB_1400afa61:
      *(int *)(param_1 + 0x2c) = (int)uVar8;
      iVar13 = 5;
switchD_1400af935_caseD_5:
      if (puVar14 != puVar10) {
        bVar15 = (byte)*puVar14;
        iVar13 = 6;
        puVar14 = (ushort *)((longlong)puVar14 + 1);
        goto switchD_1400af935_caseD_6;
      }
    }
    goto LAB_1400af9cd;
  }
  bVar15 = *(byte *)(param_1 + 0xfda0);
  bVar16 = *(byte *)(param_1 + 0xfda1);
  uVar17 = *(uint *)(param_1 + 0xfda4);
  uVar9 = *(uint *)(param_1 + 0xfda8);
  switch(iVar13) {
  case 1:
    goto switchD_1400af935_caseD_1;
  case 2:
    goto switchD_1400af935_caseD_2;
  case 3:
    goto code_r0x0001400afa49;
  case 4:
joined_r0x0001400afb26:
    while (puVar14 != puVar10) {
      uVar11 = *(ulonglong *)(param_1 + 0xfdb0);
      uVar8 = uVar11 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xfdb0) = uVar8;
      bVar2 = (byte)(uVar11 >> 0x38);
      uVar4 = *puVar14;
      puVar14 = (ushort *)((longlong)puVar14 + 1);
      uVar8 = (ulonglong)(byte)uVar4 << (bVar2 & 0x3f) | uVar8;
      *(ulonglong *)(param_1 + 0xfdb0) = uVar8;
      if (bVar2 == 8) goto LAB_1400afa61;
      *(ulonglong *)(param_1 + 0xfdb0) = (ulonglong)(bVar2 + 8) << 0x38 | uVar8;
    }
    break;
  case 5:
    goto switchD_1400af935_caseD_5;
  case 6:
switchD_1400af935_caseD_6:
    if (puVar14 != puVar10) {
      bVar16 = (byte)*puVar14;
      iVar13 = 7;
      puVar14 = (ushort *)((longlong)puVar14 + 1);
      goto switchD_1400af935_caseD_7;
    }
    break;
  case 7:
switchD_1400af935_caseD_7:
    if (puVar14 != puVar10) {
      puVar14 = (ushort *)((longlong)puVar14 + 1);
      uVar9 = 0;
      *(byte *)(param_1 + 0x4a) = bVar15 >> 7;
      if (-1 < (char)bVar15) goto LAB_1400afcb5;
      uVar17 = 1 << (bVar15 & 7) + 1;
      for (; uVar9 < uVar17; uVar9 = uVar9 + 1) {
switchD_1400af935_caseD_8:
        if ((longlong)puVar10 - (longlong)puVar14 < 3) {
          *(undefined8 *)(param_1 + 0xfdb0) = 0;
          iVar13 = 9;
switchD_1400af935_caseD_9:
          while( true ) {
            if (puVar14 == puVar10) goto LAB_1400af9cd;
            uVar7 = *(uint *)(param_1 + 0xfdb0);
            uVar11 = *(ulonglong *)(param_1 + 0xfdb0) & 0xffffffffffffff00;
            uVar12 = uVar7 & 0xff;
            *(ulonglong *)(param_1 + 0xfdb0) = uVar11;
            uVar4 = *puVar14;
            puVar14 = (ushort *)((longlong)puVar14 + 1);
            uVar11 = (ulonglong)(byte)uVar4 << (0x38U - (char)uVar7 & 0x3f) | uVar11;
            *(ulonglong *)(param_1 + 0xfdb0) = uVar11;
            if (uVar12 == 0x10) break;
            *(ulonglong *)(param_1 + 0xfdb0) = uVar12 + 8 | uVar11;
          }
          uVar7 = (uint)(uVar11 >> 0x28);
        }
        else {
          uVar7 = (uint)CONCAT21(CONCAT11((byte)*puVar14,*(byte *)((longlong)puVar14 + 1)),
                                 (byte)puVar14[1]);
          puVar14 = (ushort *)((longlong)puVar14 + 3);
        }
        uVar12 = uVar9 * 4;
        *(char *)((ulonglong)uVar12 + 0x1118 + param_1) = (char)uVar7;
        *(char *)((ulonglong)(uVar12 + 1) + 0x1118 + param_1) = (char)(uVar7 >> 8);
        *(char *)((ulonglong)(uVar12 + 2) + 0x1118 + param_1) = (char)(uVar7 >> 0x10);
        *(undefined1 *)((ulonglong)(uVar12 + 3) + 0x1118 + param_1) = 0xff;
      }
      if (*(char *)(param_1 + 0x42) != '\0') {
        if ((bVar16 == 0) || (uVar17 <= bVar16)) {
          *(undefined4 *)(param_1 + 0x54) = 0x4d;
        }
        else {
          uVar17 = (uint)bVar16 * 4;
          *(uint *)(param_1 + 0x54) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           ((ulonglong)(uVar17 + 3) + 0x1118 + param_1),
                                          *(undefined1 *)
                                           ((ulonglong)(uVar17 + 2) + 0x1118 + param_1)),
                                 *(undefined1 *)((ulonglong)(uVar17 + 1) + 0x1118 + param_1)),
                        *(undefined1 *)((ulonglong)uVar17 + 0x1118 + param_1));
        }
      }
      for (; uVar9 < 0x100; uVar9 = uVar9 + 1) {
LAB_1400afcb5:
        uVar17 = uVar9 * 4;
        *(undefined1 *)(param_1 + 0x1118 + (ulonglong)uVar17) = 0;
        *(undefined1 *)(param_1 + 0x1118 + (ulonglong)(uVar17 + 1)) = 0;
        *(undefined1 *)(param_1 + 0x1118 + (ulonglong)(uVar17 + 2)) = 0;
        *(undefined1 *)(param_1 + 0x1118 + (ulonglong)(uVar17 + 3)) = 0xff;
      }
      *(undefined4 *)(param_1 + 0xf4) = 0;
      goto LAB_1400afa02;
    }
    break;
  case 8:
    goto switchD_1400af935_caseD_8;
  case 9:
    goto switchD_1400af935_caseD_9;
  default:
    bVar3 = false;
    goto LAB_1400af9d9;
  }
LAB_1400af9cd:
  pcVar5 = "$base: short read";
  bVar3 = true;
LAB_1400af9d9:
  *(byte *)(param_1 + 0xfda0) = bVar15;
  *(byte *)(param_1 + 0xfda1) = bVar16;
  *(uint *)(param_1 + 0xfda4) = uVar17;
  iVar6 = 0;
  if (bVar3) {
    iVar6 = iVar13;
  }
  *(uint *)(param_1 + 0xfda8) = uVar9;
  *(int *)(param_1 + 0xf4) = iVar6;
LAB_1400afa02:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar14 - *param_2;
  }
  return pcVar5;
}

