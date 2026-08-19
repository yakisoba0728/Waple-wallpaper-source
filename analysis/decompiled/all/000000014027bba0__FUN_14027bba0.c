// Function: FUN_14027bba0
// Addr: 14027bba0
// Size: 532 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027bba0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (*(int *)((longlong)param_1 + 0x14) != *(int *)((longlong)param_2 + 0x14)) {
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_2 + 0x14);
    *param_1 = *param_1 + (longlong)((*(int *)((longlong)param_1 + 0xc) + -1) * (int)param_1[2]);
    *(int *)(param_1 + 2) = -(int)param_1[2];
  }
  uVar5 = _DAT_140493090;
  dVar4 = DAT_140492850;
  fVar3 = DAT_140492790;
  dVar18 = ((double)param_1[7] / (double)param_1[3]) * ((double)param_1[7] / (double)param_1[3]) +
           (0.0 / (double)param_1[4]) * (0.0 / (double)param_1[4]);
  if (dVar18 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar18);
  }
  iVar11 = 0;
  iVar14 = *(int *)((longlong)param_2 + 0xc);
  dVar18 = SQRT(dVar18) * DAT_140492850;
  if (0 < iVar14) {
    do {
      iVar14 = 0;
      pfVar10 = (float *)(*param_2 + (longlong)(iVar11 * (int)param_2[2]) * 4);
      pfVar9 = pfVar10;
      if (0 < (int)param_2[1] + -1) {
        do {
          pfVar8 = pfVar9 + 3;
          fVar28 = pfVar9[4];
          fVar21 = pfVar10[1];
          fVar16 = *pfVar10;
          fVar25 = fVar21;
          if (fVar21 <= fVar16) {
            fVar25 = fVar16;
          }
          fVar22 = pfVar10[2];
          fVar20 = fVar21;
          if (fVar16 <= fVar21) {
            fVar20 = fVar16;
          }
          fVar23 = fVar22;
          if (fVar25 <= fVar22) {
            fVar23 = fVar25;
          }
          fVar25 = *pfVar8;
          if (fVar23 <= fVar20) {
            fVar23 = fVar20;
          }
          fVar20 = fVar28;
          if (fVar28 <= fVar25) {
            fVar20 = fVar25;
          }
          if (fVar25 <= fVar28) {
            fVar28 = fVar25;
          }
          fVar25 = pfVar9[5];
          if (fVar20 <= pfVar9[5]) {
            fVar25 = fVar20;
          }
          if (fVar25 <= fVar28) {
            fVar25 = fVar28;
          }
          if ((float)((uint)(fVar25 - fVar3) & uVar5) + (float)((uint)(fVar23 - fVar3) & uVar5) <
              (float)dVar18) {
            bVar6 = FUN_14027ba10(pfVar10,pfVar8,2);
            uVar13 = (uint)bVar6 * 2;
            bVar6 = FUN_14027ba10();
            uVar13 = (uVar13 | bVar6) * 2;
            bVar6 = FUN_14027ba10(pfVar10);
            uVar13 = uVar13 | bVar6;
            if ((((uVar13 & 1) == 0) || (fVar16 == fVar23)) &&
               (((uVar13 & 2) == 0 || (fVar21 == fVar23)))) {
              uVar7 = uVar13 & 4;
              if (uVar7 == 0) {
                uVar7 = 0;
              }
              else if (fVar22 != fVar23) goto LAB_14027bdb2;
            }
            else {
LAB_14027bdb2:
              pbVar1 = (byte *)(*param_1 + (longlong)(iVar11 * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
              uVar7 = uVar13 & 4;
            }
            if ((((uVar13 & 1) != 0) && (*pfVar8 != fVar25)) ||
               ((((uVar13 & 2) != 0 && (pfVar8[1] != fVar25)) ||
                ((uVar7 != 0 && (pfVar8[2] != fVar25)))))) {
              pbVar1 = (byte *)(*param_1 + 1 +
                               (longlong)(iVar11 * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
            }
          }
          pfVar10 = pfVar10 + 3;
          iVar14 = iVar14 + 1;
          pfVar9 = pfVar8;
        } while (iVar14 < (int)param_2[1] + -1);
      }
      iVar14 = *(int *)((longlong)param_2 + 0xc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar14);
  }
  dVar18 = (0.0 / (double)param_1[3]) * (0.0 / (double)param_1[3]) +
           ((double)param_1[7] / (double)param_1[4]) * ((double)param_1[7] / (double)param_1[4]);
  if (dVar18 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar18);
  }
  iVar11 = 0;
  if (0 < iVar14 + -1) {
    do {
      iVar14 = 0;
      pfVar10 = (float *)(*param_2 + (longlong)((int)param_2[2] * iVar11) * 4);
      pfVar9 = (float *)(*param_2 + (longlong)((iVar11 + 1) * (int)param_2[2]) * 4);
      if (0 < (int)param_2[1]) {
        do {
          fVar28 = pfVar10[1];
          fVar21 = *pfVar10;
          fVar16 = pfVar9[1];
          fVar25 = fVar28;
          if (fVar28 <= fVar21) {
            fVar25 = fVar21;
          }
          fVar22 = pfVar10[2];
          fVar20 = fVar28;
          if (fVar21 <= fVar28) {
            fVar20 = fVar21;
          }
          fVar23 = fVar22;
          if (fVar25 <= fVar22) {
            fVar23 = fVar25;
          }
          if (fVar23 <= fVar20) {
            fVar23 = fVar20;
          }
          fVar25 = *pfVar9;
          fVar20 = fVar16;
          if (fVar16 <= fVar25) {
            fVar20 = fVar25;
          }
          if (fVar25 <= fVar16) {
            fVar16 = fVar25;
          }
          fVar25 = pfVar9[2];
          if (fVar20 <= pfVar9[2]) {
            fVar25 = fVar20;
          }
          if (fVar25 <= fVar16) {
            fVar25 = fVar16;
          }
          fVar16 = (float)((uint)(fVar23 - fVar3) & uVar5) + (float)((uint)(fVar25 - fVar3) & uVar5)
          ;
          if (fVar16 < (float)(SQRT(dVar18) * dVar4)) {
            bVar6 = FUN_14027ba10(pfVar10,fVar16,2);
            uVar13 = (uint)bVar6 * 2;
            bVar6 = FUN_14027ba10();
            uVar13 = (uVar13 | bVar6) * 2;
            bVar6 = FUN_14027ba10(pfVar10);
            uVar13 = uVar13 | bVar6;
            if ((((uVar13 & 1) == 0) || (fVar21 == fVar23)) &&
               (((uVar13 & 2) == 0 || (fVar28 == fVar23)))) {
              uVar7 = uVar13 & 4;
              if (uVar7 == 0) {
                uVar7 = 0;
              }
              else if (fVar22 != fVar23) goto code_r0x00014027bfb2;
            }
            else {
code_r0x00014027bfb2:
              pbVar1 = (byte *)(*param_1 + (longlong)(iVar11 * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
              uVar7 = uVar13 & 4;
            }
            if (((((uVar13 & 1) != 0) && (*pfVar9 != fVar25)) ||
                (((uVar13 & 2) != 0 && (pfVar9[1] != fVar25)))) ||
               ((uVar7 != 0 && (pfVar9[2] != fVar25)))) {
              pbVar1 = (byte *)(*param_1 +
                               (longlong)((iVar11 + 1) * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
            }
          }
          pfVar10 = pfVar10 + 3;
          pfVar9 = pfVar9 + 3;
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)param_2[1]);
      }
      iVar14 = *(int *)((longlong)param_2 + 0xc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar14 + -1);
  }
  dVar19 = (double)param_1[7] / (double)param_1[3];
  dVar18 = (double)param_1[7] / (double)param_1[4];
  dVar18 = dVar19 * dVar19 + dVar18 * dVar18;
  if (dVar18 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar18);
  }
  iVar11 = 0;
  fVar28 = (float)(SQRT(dVar18) * dVar4);
  if (0 < iVar14 + -1) {
    do {
      iVar14 = 0;
      pfVar10 = (float *)(*param_2 + (longlong)((int)param_2[2] * iVar11) * 4);
      pfVar9 = (float *)(*param_2 + (longlong)((iVar11 + 1) * (int)param_2[2]) * 4);
      pfVar8 = pfVar9;
      pfVar2 = pfVar10;
      if (0 < (int)param_2[1] + -1) {
        do {
          pfVar15 = pfVar2 + 3;
          pfVar12 = pfVar8 + 3;
          fVar21 = pfVar2[4];
          fVar16 = pfVar10[1];
          fVar25 = *pfVar10;
          fVar22 = pfVar9[1];
          fVar20 = fVar16;
          if (fVar16 <= fVar25) {
            fVar20 = fVar25;
          }
          fVar23 = pfVar10[2];
          fVar17 = fVar16;
          if (fVar25 <= fVar16) {
            fVar17 = fVar25;
          }
          fVar24 = fVar23;
          if (fVar20 <= fVar23) {
            fVar24 = fVar20;
          }
          if (fVar24 <= fVar17) {
            fVar24 = fVar17;
          }
          fVar20 = *pfVar15;
          fVar17 = fVar21;
          if (fVar21 <= fVar20) {
            fVar17 = fVar20;
          }
          if (fVar20 <= fVar21) {
            fVar21 = fVar20;
          }
          fVar20 = *pfVar9;
          fVar26 = pfVar2[5];
          if (fVar17 <= pfVar2[5]) {
            fVar26 = fVar17;
          }
          fVar17 = fVar22;
          if (fVar22 <= fVar20) {
            fVar17 = fVar20;
          }
          if (fVar20 <= fVar22) {
            fVar22 = fVar20;
          }
          fVar20 = *pfVar12;
          if (fVar26 <= fVar21) {
            fVar26 = fVar21;
          }
          fVar21 = pfVar8[4];
          fVar27 = pfVar9[2];
          if (fVar17 <= pfVar9[2]) {
            fVar27 = fVar17;
          }
          fVar17 = fVar21;
          if (fVar21 <= fVar20) {
            fVar17 = fVar20;
          }
          if (fVar20 <= fVar21) {
            fVar21 = fVar20;
          }
          if (fVar27 <= fVar22) {
            fVar27 = fVar22;
          }
          fVar22 = pfVar8[5];
          if (fVar17 <= pfVar8[5]) {
            fVar22 = fVar17;
          }
          if (fVar22 <= fVar21) {
            fVar22 = fVar21;
          }
          if ((float)((uint)(fVar24 - fVar3) & uVar5) + (float)((uint)(fVar22 - fVar3) & uVar5) <
              fVar28) {
            bVar6 = FUN_14027ba10(pfVar10,pfVar12,2);
            uVar13 = (uint)bVar6 * 2;
            bVar6 = FUN_14027ba10();
            uVar13 = (uVar13 | bVar6) * 2;
            bVar6 = FUN_14027ba10(pfVar10);
            uVar13 = uVar13 | bVar6;
            if ((((uVar13 & 1) == 0) || (fVar25 == fVar24)) &&
               (((uVar13 & 2) == 0 || (fVar16 == fVar24)))) {
              uVar7 = uVar13 & 4;
              if (uVar7 == 0) {
                uVar7 = 0;
              }
              else if (fVar23 != fVar24) goto code_r0x00014027c20e;
            }
            else {
code_r0x00014027c20e:
              pbVar1 = (byte *)(*param_1 + (longlong)(iVar11 * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
              uVar7 = uVar13 & 4;
            }
            if (((((uVar13 & 1) != 0) && (*pfVar12 != fVar22)) ||
                (((uVar13 & 2) != 0 && (pfVar8[4] != fVar22)))) ||
               ((uVar7 != 0 && (pfVar8[5] != fVar22)))) {
              pbVar1 = (byte *)(*param_1 + 1 +
                               (longlong)((iVar11 + 1) * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
            }
          }
          if ((float)((uint)(fVar26 - fVar3) & uVar5) + (float)((uint)(fVar27 - fVar3) & uVar5) <
              fVar28) {
            bVar6 = FUN_14027ba10(pfVar15,pfVar9,2);
            uVar13 = (uint)bVar6 * 2;
            bVar6 = FUN_14027ba10();
            uVar13 = (uVar13 | bVar6) * 2;
            bVar6 = FUN_14027ba10(pfVar15);
            uVar13 = uVar13 | bVar6;
            if ((((uVar13 & 1) == 0) || (*pfVar15 == fVar26)) &&
               (((uVar13 & 2) == 0 || (pfVar15[1] == fVar26)))) {
              uVar7 = uVar13 & 4;
              if (uVar7 == 0) {
                uVar7 = 0;
              }
              else if (pfVar15[2] != fVar26) goto code_r0x00014027c31d;
            }
            else {
code_r0x00014027c31d:
              pbVar1 = (byte *)(*param_1 + 1 +
                               (longlong)(iVar11 * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
              uVar7 = uVar13 & 4;
            }
            if ((((uVar13 & 1) != 0) && (*pfVar9 != fVar27)) ||
               ((((uVar13 & 2) != 0 && (pfVar9[1] != fVar27)) ||
                ((uVar7 != 0 && (pfVar9[2] != fVar27)))))) {
              pbVar1 = (byte *)(*param_1 +
                               (longlong)((iVar11 + 1) * (int)param_1[2]) + (longlong)iVar14);
              *pbVar1 = *pbVar1 | 2;
            }
          }
          pfVar10 = pfVar10 + 3;
          pfVar9 = pfVar9 + 3;
          iVar14 = iVar14 + 1;
          pfVar8 = pfVar12;
          pfVar2 = pfVar15;
        } while (iVar14 < (int)param_2[1] + -1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)((longlong)param_2 + 0xc) + -1);
  }
  return;
}

