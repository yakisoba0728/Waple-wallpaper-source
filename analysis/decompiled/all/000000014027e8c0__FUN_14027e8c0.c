// Function: FUN_14027e8c0
// Addr: 14027e8c0
// Size: 1096 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14027e8c0(double *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,float *param_6,float param_7,float param_8,float param_9,
                       double param_10,double param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined8 in_XMM2_Qb;
  double dVar16;
  double dVar17;
  float fVar18;
  float local_128 [2];
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0 [24];
  
  fVar14 = (float)param_3;
  uVar7 = FUN_140285460(local_e0,(double)((param_9 - param_8) + param_7),
                        (double)((param_8 - param_7) - param_7),(double)param_7);
  fVar5 = DAT_140492790;
  uVar8 = 0;
  uVar9 = uVar7 & 0xffffffff;
  dVar13 = DAT_140492848;
  if (0 < (int)uVar7) {
    do {
      dVar1 = local_e0[uVar8];
      if ((DAT_1404927d8 < dVar1) && (dVar1 < DAT_140492840)) {
        local_118[2] = (double)param_5[1];
        local_118[3] = (double)param_4[1];
        local_f8 = (double)*param_5;
        local_e8 = (double)param_5[2];
        dVar3 = (double)param_6[1];
        dVar4 = (double)*param_6;
        local_120 = (double)param_4[2];
        local_f0 = (double)*param_4;
        dVar2 = (double)param_6[2];
        dVar16 = (dVar3 * dVar1 + local_118[2]) * dVar1 + local_118[3];
        dVar10 = (dVar4 * dVar1 + local_f8) * dVar1 + local_f0;
        dVar17 = dVar16;
        if (dVar16 <= dVar10) {
          dVar17 = dVar10;
        }
        if (dVar10 <= dVar16) {
          dVar16 = dVar10;
        }
        dVar10 = (dVar2 * dVar1 + local_e8) * dVar1 + local_120;
        if (dVar17 <= dVar10) {
          dVar10 = dVar17;
        }
        if (dVar10 <= dVar16) {
          dVar10 = dVar16;
        }
        fVar18 = (float)dVar10;
        if ((((fVar5 < param_2) && (fVar5 < fVar14)) && (fVar18 <= fVar5)) ||
           (((param_2 < fVar5 && (fVar14 < fVar5)) && (fVar5 <= fVar18)))) {
LAB_14027eae3:
          dVar16 = (dVar1 - _DAT_140492698) * *param_1;
          dVar17 = (double)fVar18;
          if (((double)param_2 - dVar16 <= dVar17) && (dVar17 <= (double)param_2 + dVar16)) {
            dVar16 = (dVar13 - dVar1) * *param_1;
            if (((double)fVar14 - dVar16 <= dVar17) && (dVar17 <= (double)fVar14 + dVar16)) {
              uVar7 = 0;
              goto LAB_14027eb5e;
            }
          }
          uVar7 = 3;
        }
        else {
          if (*(char *)(param_1 + 1) == '\0') {
            auVar11._8_4_ = (int)in_XMM2_Qb;
            auVar11._0_8_ = param_3;
            auVar11._12_4_ = (int)((ulonglong)in_XMM2_Qb >> 0x20);
            if (fVar14 <= param_2) {
              auVar11._0_4_ = param_2;
            }
            fVar15 = fVar14;
            if (param_2 <= fVar14) {
              fVar15 = param_2;
            }
            fVar12 = fVar18;
            if (auVar11._0_4_ <= fVar18) {
              fVar12 = auVar11._0_4_;
            }
            if (fVar12 <= fVar15) {
              fVar12 = fVar15;
            }
            if (fVar12 != fVar18) goto LAB_14027eae3;
          }
          uVar7 = 0;
        }
LAB_14027eb5e:
        if ((_DAT_140492698 < param_10) && (dVar13 = DAT_140492848, param_10 < DAT_140492848)) {
          local_118[0] = _DAT_140492fc0;
          local_118[1] = (double)_UNK_140492fc8;
          dVar16 = (dVar3 * param_10 + local_118[2]) * param_10 + local_118[3];
          dVar13 = (dVar2 * param_10 + local_e8) * param_10 + local_120;
          dVar10 = (dVar4 * param_10 + local_f8) * param_10 + local_f0;
          dVar17 = dVar16;
          if (dVar16 <= dVar10) {
            dVar17 = dVar10;
          }
          if (dVar10 <= dVar16) {
            dVar16 = dVar10;
          }
          local_118[dVar1 < param_10] = param_10;
          if (dVar17 <= dVar13) {
            dVar13 = dVar17;
          }
          if (dVar13 <= dVar16) {
            dVar13 = dVar16;
          }
          local_128[0] = param_2;
          local_128[1] = fVar14;
          local_128[dVar1 < param_10] = (float)dVar13;
          uVar6 = FUN_14027b730(param_1,local_118[0],local_118[1],dVar1,local_128[0],local_128[1],
                                fVar18);
          uVar7 = (ulonglong)(uVar6 | (uint)uVar7);
          dVar13 = DAT_140492848;
        }
        if ((_DAT_140492698 < param_11) && (dVar13 = DAT_140492848, param_11 < DAT_140492848)) {
          local_118[0] = _DAT_140492fc0;
          local_118[1] = (double)_UNK_140492fc8;
          dVar13 = (dVar2 * param_11 + local_e8) * param_11 + local_120;
          dVar2 = (dVar3 * param_11 + local_118[2]) * param_11 + local_118[3];
          dVar3 = (dVar4 * param_11 + local_f8) * param_11 + local_f0;
          local_118[dVar1 < param_11] = param_11;
          dVar4 = dVar2;
          if (dVar3 <= dVar2) {
            dVar4 = dVar3;
          }
          if (dVar2 <= dVar3) {
            dVar2 = dVar3;
          }
          if (dVar2 <= dVar13) {
            dVar13 = dVar2;
          }
          if (dVar13 <= dVar4) {
            dVar13 = dVar4;
          }
          local_128[0] = param_2;
          local_128[1] = fVar14;
          local_128[dVar1 < param_11] = (float)dVar13;
          uVar6 = FUN_14027b730(param_1,local_118[0],local_118[1],dVar1,local_128[0],local_128[1],
                                fVar18);
          uVar7 = (ulonglong)(uVar6 | (uint)uVar7);
          dVar13 = DAT_140492848;
        }
        if ((uVar7 & 2) != 0) {
          return CONCAT71((int7)(uVar7 >> 8),1);
        }
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)uVar9);
  }
  return uVar7 & 0xffffffffffffff00;
}

