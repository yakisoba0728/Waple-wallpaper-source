// Function: FUN_1403bc590
// Addr: 1403bc590
// Size: 659 bytes


int * FUN_1403bc590(longlong param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  longlong lVar25;
  
  lVar25 = param_1 + 4;
  uVar24 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar21 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar21 == 0) {
    return param_2;
  }
  do {
    pcVar23 = (char *)&DAT_1404e4ff0;
    cVar13 = FUN_1403f8980(param_2,param_2[1] + 1,1,0);
    if (cVar13 == '\0') {
      lVar19 = 4;
      puVar11 = &DAT_14045dde0;
      puVar12 = &DAT_1404e4ff0;
      do {
        puVar17 = puVar12;
        puVar14 = puVar11;
        uVar7 = puVar14[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        *puVar17 = *puVar14;
        puVar17[1] = uVar7;
        uVar7 = puVar14[4];
        uVar10 = puVar14[5];
        puVar17[2] = uVar8;
        puVar17[3] = uVar9;
        uVar8 = puVar14[6];
        uVar9 = puVar14[7];
        puVar17[4] = uVar7;
        puVar17[5] = uVar10;
        uVar7 = puVar14[8];
        uVar10 = puVar14[9];
        puVar17[6] = uVar8;
        puVar17[7] = uVar9;
        uVar8 = puVar14[10];
        uVar9 = puVar14[0xb];
        puVar17[8] = uVar7;
        puVar17[9] = uVar10;
        uVar7 = puVar14[0xc];
        uVar10 = puVar14[0xd];
        puVar17[10] = uVar8;
        puVar17[0xb] = uVar9;
        uVar8 = puVar14[0xe];
        uVar9 = puVar14[0xf];
        puVar17[0xc] = uVar7;
        puVar17[0xd] = uVar10;
        puVar17[0xe] = uVar8;
        puVar17[0xf] = uVar9;
        lVar19 = lVar19 + -1;
        puVar11 = puVar14 + 0x10;
        puVar12 = puVar17 + 0x10;
      } while (lVar19 != 0);
      uVar7 = puVar14[0x11];
      uVar8 = puVar14[0x12];
      uVar9 = puVar14[0x13];
      puVar17[0x10] = puVar14[0x10];
      puVar17[0x11] = uVar7;
      uVar7 = puVar14[0x14];
      uVar10 = puVar14[0x15];
      puVar17[0x12] = uVar8;
      puVar17[0x13] = uVar9;
      uVar8 = puVar14[0x16];
      uVar9 = puVar14[0x17];
      puVar17[0x14] = uVar7;
      puVar17[0x15] = uVar10;
      uVar3 = *(undefined4 *)(puVar14 + 0x18);
      uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc4);
      uVar5 = *(undefined4 *)(puVar14 + 0x19);
      uVar6 = *(undefined4 *)((longlong)puVar14 + 0xcc);
      puVar17[0x16] = uVar8;
      puVar17[0x17] = uVar9;
      uVar7 = puVar14[0x1a];
      uVar8 = puVar14[0x1b];
      *(undefined4 *)(puVar17 + 0x18) = uVar3;
      *(undefined4 *)((longlong)puVar17 + 0xc4) = uVar4;
      *(undefined4 *)(puVar17 + 0x19) = uVar5;
      *(undefined4 *)((longlong)puVar17 + 0xcc) = uVar6;
      puVar17[0x1a] = uVar7;
      puVar17[0x1b] = uVar8;
    }
    else {
      pcVar23 = (char *)((ulonglong)(param_2[1] - 1) * 0x260 + *(longlong *)(param_2 + 2));
    }
    if (*param_2 < 0) {
      return param_2;
    }
    cVar13 = *(char *)(lVar25 + 4);
    if (cVar13 == '\0') {
      uVar1 = *(undefined1 *)(lVar25 + 6);
      uVar2 = *(undefined1 *)(lVar25 + 7);
      for (pbVar20 = (byte *)(lVar25 + 0xe);
          pbVar20 != (byte *)(lVar25 + ((ulonglong)CONCAT11(uVar1,uVar2) * 3 + 7) * 2);
          pbVar20 = pbVar20 + 6) {
        if (*pcVar23 != '\0') {
          uVar22 = (uint)*pbVar20 * 0x100 + (uint)pbVar20[1];
          pcVar23[4] = -1;
          pcVar23[5] = -1;
          pcVar23[6] = -1;
          pcVar23[7] = -1;
          puVar15 = (undefined4 *)FUN_1403ed630(pcVar23,uVar22,1);
          if (puVar15 != (undefined4 *)0x0) {
            uVar18 = (ulonglong)(uVar22 >> 6 & 7);
            *(ulonglong *)(puVar15 + uVar18 * 2 + 2) =
                 *(ulonglong *)(puVar15 + uVar18 * 2 + 2) | 1L << (ulonglong)(uVar22 & 0x3f);
            *puVar15 = 0xffffffff;
          }
        }
        if (pcVar23[0x30] != '\0') {
          uVar22 = (uint)pbVar20[2] * 0x100 + (uint)pbVar20[3];
          pcVar23[0x34] = -1;
          pcVar23[0x35] = -1;
          pcVar23[0x36] = -1;
          pcVar23[0x37] = -1;
          puVar15 = (undefined4 *)FUN_1403ed630(pcVar23 + 0x30,uVar22,1);
          if (puVar15 != (undefined4 *)0x0) {
            uVar18 = (ulonglong)(uVar22 >> 6 & 7);
            *(ulonglong *)(puVar15 + uVar18 * 2 + 2) =
                 *(ulonglong *)(puVar15 + uVar18 * 2 + 2) | 1L << (ulonglong)(uVar22 & 0x3f);
            *puVar15 = 0xffffffff;
          }
        }
      }
    }
    else if (cVar13 == '\x01') {
      func_0x000140371410(lVar25 + 6,pcVar23,param_3);
    }
    else if (cVar13 == '\x02') {
      func_0x00014036fca0((ulonglong)*(byte *)(lVar25 + 8) * 0x100 +
                          (ulonglong)*(byte *)(lVar25 + 9) + lVar25,pcVar23,param_3);
      func_0x00014036fca0((ulonglong)*(byte *)(lVar25 + 0xb) +
                          (ulonglong)*(byte *)(lVar25 + 10) * 0x100 + lVar25,pcVar23 + 0x30,param_3)
      ;
    }
    else if ((cVar13 == '\x03') &&
            ((uint)*(byte *)(lVar25 + 6) * 0x100 + (uint)*(byte *)(lVar25 + 7) != 0)) {
      func_0x0001403a3420(pcVar23,0,param_3 + -1);
      func_0x0001403a3420(pcVar23 + 0x30,0,param_3 + -1);
    }
    for (pcVar16 = pcVar23 + 0x60; pcVar16 != pcVar23 + 0x260; pcVar16 = pcVar16 + 2) {
      pcVar16[0] = -1;
      pcVar16[1] = -1;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + (ulonglong)*(byte *)(lVar25 + 3) + (ulonglong)*(byte *)(lVar25 + 2) * 0x100;
  } while (uVar24 < uVar21);
  return param_2;
}

