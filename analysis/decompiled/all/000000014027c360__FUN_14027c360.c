// Function: FUN_14027c360
// Addr: 14027c360
// Size: 1391 bytes


void FUN_14027c360(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  longlong local_178;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  double local_140;
  byte local_138;
  double local_130;
  byte local_128;
  double local_120;
  byte local_118;
  double local_110;
  byte local_108;
  double local_100;
  byte local_f8;
  double local_f0;
  byte local_e8;
  double local_e0;
  byte local_d8;
  double local_d0;
  byte local_c8;
  
  if (*(int *)((longlong)param_1 + 0x14) != *(int *)((longlong)param_2 + 0x14)) {
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_2 + 0x14);
    *param_1 = *param_1 + (longlong)((*(int *)((longlong)param_1 + 0xc) + -1) * (int)param_1[2]);
    *(int *)(param_1 + 2) = -(int)param_1[2];
  }
  dVar2 = (double)param_1[7];
  dVar20 = (double)param_1[3];
  dVar3 = (double)param_1[4];
  dVar4 = (double)param_1[9];
  dVar21 = dVar2 / dVar20;
  dVar19 = 0.0 / dVar3;
  dVar21 = dVar21 * dVar21;
  dVar19 = dVar21 + dVar19 * dVar19;
  if (dVar19 < 0.0) {
    dVar19 = (double)FUN_14041f780(dVar19);
  }
  else {
    dVar19 = SQRT(dVar19);
  }
  dVar20 = 0.0 / dVar20;
  dVar2 = dVar2 / dVar3;
  dVar2 = dVar2 * dVar2;
  dVar20 = dVar20 * dVar20 + dVar2;
  if (dVar20 < 0.0) {
    dVar20 = (double)FUN_14041f780(dVar20);
  }
  else {
    dVar20 = SQRT(dVar20);
  }
  dVar21 = dVar21 + dVar2;
  if (dVar21 < 0.0) {
    dVar21 = (double)FUN_14041f780(dVar21);
  }
  else {
    dVar21 = SQRT(dVar21);
  }
  iVar15 = 0;
  dVar21 = dVar21 * dVar4;
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    do {
      iVar17 = (int)param_2[1];
      if (0 < iVar17) {
        iVar13 = 0;
        iVar18 = 0;
        do {
          iVar5 = (int)param_2[2];
          lVar11 = *param_2;
          lVar16 = (longlong)iVar13;
          lVar6 = *param_1;
          lVar12 = (longlong)(iVar5 * iVar15);
          fVar22 = *(float *)(lVar11 + 4 + (iVar18 + lVar12) * 4);
          pfVar1 = (float *)(lVar11 + (iVar18 + lVar12) * 4);
          fVar23 = *pfVar1;
          fVar7 = fVar22;
          if (fVar22 <= fVar23) {
            fVar7 = fVar23;
          }
          if (fVar23 <= fVar22) {
            fVar22 = fVar23;
          }
          lVar10 = (longlong)(iVar15 * (int)param_1[2]);
          fVar23 = pfVar1[2];
          if (fVar7 <= pfVar1[2]) {
            fVar23 = fVar7;
          }
          bVar14 = *(byte *)(lVar10 + lVar16 + lVar6) >> 1 & 1;
          if (fVar23 <= fVar22) {
            fVar23 = fVar22;
          }
          if (iVar13 < 1) {
            local_160 = 0;
LAB_14027c5d0:
            local_168 = 0;
            if (0 < iVar15) {
              local_168 = lVar11 + ((longlong)(iVar5 * (iVar15 + -1)) + (longlong)iVar18) * 4;
              local_130 = dVar20 * dVar4;
              local_128 = bVar14;
              cVar8 = FUN_14027d8e0(&local_130,fVar23,pfVar1,local_168);
              if (cVar8 != '\0') goto LAB_14027c839;
            }
            local_158 = 0;
            if (iVar13 < iVar17 + -1) {
              local_158 = lVar11 + ((iVar18 + 3) + lVar12) * 4;
              local_120 = dVar19 * dVar4;
              local_118 = bVar14;
              cVar8 = FUN_14027d8e0(&local_120,fVar23,pfVar1,local_158);
              if (cVar8 != '\0') goto LAB_14027c839;
            }
            iVar9 = *(int *)((longlong)param_2 + 0xc) + -1;
            if (iVar15 < iVar9) {
              local_178 = lVar11 + ((longlong)(iVar5 * (iVar15 + 1)) + (longlong)iVar18) * 4;
              local_110 = dVar20 * dVar4;
              local_108 = bVar14;
              cVar8 = FUN_14027d8e0(&local_110,fVar23,pfVar1,local_178);
              if (cVar8 != '\0') goto LAB_14027c839;
            }
            else {
              local_178 = 0;
            }
            if (((((0 < iVar13) && (0 < iVar15)) &&
                 (local_100 = dVar21, local_f8 = bVar14,
                 cVar8 = FUN_14027da40(&local_100,fVar23,pfVar1,local_160,local_168,
                                       lVar11 + ((longlong)(iVar5 * (iVar15 + -1)) +
                                                (longlong)(iVar18 + -3)) * 4), cVar8 != '\0')) ||
                ((((iVar13 < iVar17 + -1 && (0 < iVar15)) &&
                  (local_f0 = dVar21, local_e8 = bVar14,
                  cVar8 = FUN_14027da40(&local_f0,fVar23,pfVar1,local_158,local_168,
                                        lVar11 + ((longlong)(iVar5 * (iVar15 + -1)) +
                                                 (longlong)(iVar18 + 3)) * 4), cVar8 != '\0')) ||
                 (((0 < iVar13 && (iVar15 < *(int *)((longlong)param_2 + 0xc) + -1)) &&
                  (local_e0 = dVar21, local_d8 = bVar14,
                  cVar8 = FUN_14027da40(&local_e0,fVar23,pfVar1,local_160,local_178,
                                        lVar11 + ((longlong)(iVar5 * (iVar15 + 1)) +
                                                 (longlong)(iVar18 + -3)) * 4), cVar8 != '\0'))))))
               || (((iVar13 < iVar17 + -1 && (iVar15 < iVar9)) &&
                   (local_d0 = dVar21, local_c8 = bVar14,
                   cVar8 = FUN_14027da40(&local_d0,fVar23,pfVar1,local_158,local_178,
                                         lVar11 + ((longlong)(iVar5 * (iVar15 + 1)) +
                                                  (longlong)(iVar18 + 3)) * 4), cVar8 != '\0'))))
            goto LAB_14027c839;
            bVar14 = 0;
          }
          else {
            local_160 = lVar11 + ((iVar18 + -3) + lVar12) * 4;
            local_140 = dVar19 * dVar4;
            local_138 = bVar14;
            cVar8 = FUN_14027d8e0(&local_140,fVar23,pfVar1,local_160);
            if (cVar8 == '\0') goto LAB_14027c5d0;
LAB_14027c839:
            bVar14 = 1;
          }
          iVar18 = iVar18 + 3;
          lVar11 = (longlong)iVar13;
          iVar13 = iVar13 + 1;
          *(byte *)(lVar10 + lVar16 + lVar6) = bVar14 | *(byte *)(lVar10 + lVar11 + *param_1);
          iVar17 = (int)param_2[1];
        } while (iVar13 < iVar17);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)((longlong)param_2 + 0xc));
  }
  return;
}

