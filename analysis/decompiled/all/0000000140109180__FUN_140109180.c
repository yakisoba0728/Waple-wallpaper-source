// Function: FUN_140109180
// Addr: 140109180
// Size: 2333 bytes


void FUN_140109180(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  longlong param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res10;
  int local_res18;
  int local_res20;
  int local_f8;
  uint local_f0;
  
  fVar18 = DAT_140492704;
  fVar20 = DAT_14049268c;
  if ((param_4 == param_10) && (param_5 == param_11)) {
    iVar12 = 0;
    if (0 < param_11) {
      do {
        if (0 < param_10) {
          iVar11 = 0;
          do {
            iVar16 = iVar11 + (iVar12 + param_3) * param_6 + param_2;
            iVar7 = iVar11 + (iVar12 + param_9) * param_12 + param_8;
            iVar11 = iVar11 + 1;
            *(undefined4 *)(param_7 + iVar7 * 4) = *(undefined4 *)(param_1 + iVar16 * 4);
          } while (iVar11 < param_10);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < param_11);
    }
  }
  else if ((((param_11 < 5) || (param_10 < 5)) || (param_5 < 5)) ||
          (((param_4 < 5 || (param_5 <= param_11 * 2)) || (param_4 <= param_10 * 2)))) {
    if (0 < param_11) {
      local_res20 = 0;
      do {
        fVar20 = (float)FUN_14041a5c0();
        iVar12 = (int)fVar20;
        iVar11 = 0;
        fVar20 = (float)(param_5 + -1) * ((float)local_res20 / (float)param_11) - (float)iVar12;
        if (0 < param_10) {
          fVar22 = fVar18 - fVar20;
          iVar16 = (iVar12 + 1 + param_3) * param_6 + param_2;
          iVar12 = (iVar12 + param_3) * param_6 + param_2;
          lVar17 = param_7 + (param_9 * param_12 + param_8) * 4;
          do {
            fVar19 = (float)FUN_14041a5c0();
            iVar7 = (int)fVar19;
            lVar8 = (longlong)((iVar7 + iVar12) * 4);
            lVar10 = (longlong)((iVar7 + iVar12 + 1) * 4);
            fVar21 = (float)(param_4 + -1) * ((float)iVar11 / (float)param_10) - (float)iVar7;
            lVar13 = (longlong)((iVar7 + iVar16) * 4);
            lVar5 = (longlong)((iVar16 + 1 + iVar7) * 4);
            fVar19 = fVar18 - fVar21;
            lVar14 = (longlong)((local_res20 * param_12 + iVar11) * 4);
            *(char *)(lVar17 + lVar14) =
                 (char)(int)((fVar19 * (float)*(byte *)(param_1 + lVar8) +
                             (float)*(byte *)(param_1 + lVar10) * fVar21) * fVar22 +
                            (fVar19 * (float)*(byte *)(param_1 + lVar13) +
                            (float)*(byte *)(param_1 + lVar5) * fVar21) * fVar20);
            *(char *)(lVar17 + 1 + lVar14) =
                 (char)(int)(((float)*(byte *)(param_1 + 1 + lVar8) * fVar19 +
                             (float)*(byte *)(param_1 + 1 + lVar10) * fVar21) * fVar22 +
                            ((float)*(byte *)(param_1 + 1 + lVar13) * fVar19 +
                            (float)*(byte *)(param_1 + 1 + lVar5) * fVar21) * fVar20);
            bVar1 = *(byte *)(param_1 + 2 + lVar8);
            bVar2 = *(byte *)(param_1 + 2 + lVar10);
            iVar11 = iVar11 + 1;
            bVar3 = *(byte *)(param_1 + 2 + lVar13);
            bVar4 = *(byte *)(param_1 + 2 + lVar5);
            *(undefined1 *)(lVar17 + 3 + lVar14) = 0xff;
            *(char *)(lVar17 + 2 + lVar14) =
                 (char)(int)(((float)bVar1 * fVar19 + (float)bVar2 * fVar21) * fVar22 +
                            ((float)bVar3 * fVar19 + (float)bVar4 * fVar21) * fVar20);
          } while (iVar11 < param_10);
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 < param_11);
    }
  }
  else {
    lVar17 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    do {
      lVar5 = lVar17;
      local_f8 = param_6;
      if (param_4 <= param_10 * 2) break;
      param_4 = param_4 / 2;
      param_5 = param_5 / 2;
      lVar5 = thunk_FUN_14028af20((longlong)(param_4 * param_5 * 4));
      local_f0 = 0;
      if (0 < param_5 * 2) {
        do {
          uVar9 = 0;
          if (0 < param_4 * 2) {
            do {
              iVar12 = (uVar9 + (local_res18 + local_f0) * param_6 + local_res10) * 4;
              lVar8 = (longlong)iVar12;
              lVar15 = (longlong)iVar12;
              iVar12 = (uVar9 + (local_res18 + local_f0 + 1) * param_6 + local_res10) * 4;
              lVar13 = (longlong)iVar12;
              uVar6 = uVar9 >> 1;
              uVar9 = uVar9 + 2;
              lVar10 = (longlong)(int)((uVar6 + (local_f0 >> 1) * param_4) * 4);
              lVar14 = (longlong)iVar12;
              *(char *)(lVar5 + lVar10) =
                   (char)(int)((float)((uint)*(byte *)(param_1 + lVar13) +
                                       (uint)*(byte *)(lVar14 + 4 + param_1) +
                                       (uint)*(byte *)(lVar15 + 4 + param_1) +
                                      (uint)*(byte *)(param_1 + lVar8)) * fVar20);
              *(char *)(lVar5 + 1 + lVar10) =
                   (char)(int)((float)((uint)*(byte *)(param_1 + 1 + lVar13) +
                                       (uint)*(byte *)(lVar14 + 5 + param_1) +
                                       (uint)*(byte *)(lVar15 + 5 + param_1) +
                                      (uint)*(byte *)(param_1 + 1 + lVar8)) * fVar20);
              *(char *)(lVar5 + 2 + lVar10) =
                   (char)(int)((float)((uint)*(byte *)(param_1 + 2 + lVar13) +
                                       (uint)*(byte *)(lVar14 + 6 + param_1) +
                                       (uint)*(byte *)(lVar15 + 6 + param_1) +
                                      (uint)*(byte *)(param_1 + 2 + lVar8)) * fVar20);
            } while ((int)uVar9 < param_4 * 2);
          }
          local_f0 = local_f0 + 2;
        } while ((int)local_f0 < param_5 * 2);
      }
      local_res10 = 0;
      local_res18 = 0;
      thunk_FUN_14028af80(lVar17);
      lVar17 = lVar5;
      param_1 = lVar5;
      param_6 = param_4;
      local_f8 = param_4;
    } while (param_11 * 2 < param_5);
    fVar20 = DAT_140492704;
    local_res20 = 0;
    do {
      fVar18 = (float)FUN_14041a5c0();
      iVar11 = (int)fVar18;
      iVar16 = (iVar11 + 1) * local_f8;
      iVar12 = 0;
      lVar17 = param_7 + (param_9 * param_12 + param_8) * 4;
      fVar18 = (float)(param_5 + -1) * ((float)local_res20 / (float)param_11) - (float)iVar11;
      fVar22 = fVar20 - fVar18;
      do {
        fVar19 = (float)FUN_14041a5c0();
        iVar7 = (int)fVar19;
        lVar10 = (longlong)((iVar11 * local_f8 + iVar7) * 4);
        lVar13 = (longlong)((iVar7 + iVar11 * local_f8 + 1) * 4);
        fVar21 = (float)(param_4 + -1) * ((float)iVar12 / (float)param_10) - (float)iVar7;
        lVar14 = (longlong)((iVar16 + iVar7) * 4);
        lVar8 = (longlong)((iVar7 + 1 + iVar16) * 4);
        fVar19 = fVar20 - fVar21;
        lVar15 = (longlong)((iVar12 + local_res20 * param_12) * 4);
        *(char *)(lVar17 + lVar15) =
             (char)(int)((fVar19 * (float)*(byte *)(lVar10 + lVar5) +
                         (float)*(byte *)(lVar13 + lVar5) * fVar21) * fVar22 +
                        (fVar19 * (float)*(byte *)(lVar14 + lVar5) +
                        (float)*(byte *)(lVar8 + lVar5) * fVar21) * fVar18);
        *(char *)(lVar17 + 1 + lVar15) =
             (char)(int)(((float)*(byte *)(lVar10 + 1 + lVar5) * fVar19 +
                         (float)*(byte *)(lVar13 + 1 + lVar5) * fVar21) * fVar22 +
                        ((float)*(byte *)(lVar14 + 1 + lVar5) * fVar19 +
                        (float)*(byte *)(lVar8 + 1 + lVar5) * fVar21) * fVar18);
        bVar1 = *(byte *)(lVar10 + 2 + lVar5);
        bVar2 = *(byte *)(lVar13 + 2 + lVar5);
        iVar12 = iVar12 + 1;
        bVar3 = *(byte *)(lVar14 + 2 + lVar5);
        bVar4 = *(byte *)(lVar8 + 2 + lVar5);
        *(undefined1 *)(lVar17 + 3 + lVar15) = 0xff;
        *(char *)(lVar17 + 2 + lVar15) =
             (char)(int)(((float)bVar1 * fVar19 + (float)bVar2 * fVar21) * fVar22 +
                        ((float)bVar3 * fVar19 + (float)bVar4 * fVar21) * fVar18);
      } while (iVar12 < param_10);
      local_res20 = local_res20 + 1;
    } while (local_res20 < param_11);
    thunk_FUN_14028af80(param_1);
  }
  return;
}

