// Function: FUN_14027f3f0
// Addr: 14027f3f0
// Size: 2101 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14027f3f0(double *param_1,float param_2,undefined8 param_3,float *param_4,
                       float *param_5,float *param_6,float param_7,float param_8,float param_9,
                       double param_10,double param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  float local_138 [2];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110 [4];
  double local_f0 [19];
  
  uVar38 = (undefined4)((ulonglong)param_3 >> 0x20);
  auVar24._0_4_ = (float)param_3;
  dVar9 = (double)FUN_140285460(local_f0,(double)((param_9 - param_8) + param_7),
                                (double)((param_8 - param_7) - param_7),(double)param_7);
  iVar16 = 0;
  iVar7 = SUB84(dVar9,0);
  if (0 < iVar7) {
    do {
      dVar9 = (double)(longlong)iVar16;
      dVar21 = local_f0[(longlong)dVar9];
      if ((DAT_1404927d8 < dVar21) && (dVar21 < DAT_140492840)) {
        local_130 = (double)param_5[1];
        local_128 = (double)param_4[1];
        local_120 = (double)*param_5;
        dVar33 = (double)param_6[1];
        dVar31 = (double)*param_6;
        dVar30 = (double)param_6[2];
        local_118 = (double)*param_4;
        dVar34 = (double)param_5[2];
        dVar9 = (dVar33 * dVar21 + local_130) * dVar21 + local_128;
        dVar40 = (double)param_4[2];
        dVar19 = (dVar31 * dVar21 + local_120) * dVar21 + local_118;
        dVar26 = dVar9;
        if (dVar9 <= dVar19) {
          dVar26 = dVar19;
        }
        if (dVar19 <= dVar9) {
          dVar9 = dVar19;
        }
        dVar19 = (dVar30 * dVar21 + dVar34) * dVar21 + dVar40;
        if (dVar26 <= dVar19) {
          dVar19 = dVar26;
        }
        if (dVar19 <= dVar9) {
          dVar19 = dVar9;
        }
        fVar36 = (float)dVar19;
        if ((((DAT_140492790 < param_2) && (DAT_140492790 < auVar24._0_4_)) &&
            (fVar36 <= DAT_140492790)) ||
           (((param_2 < DAT_140492790 && (auVar24._0_4_ < DAT_140492790)) &&
            (DAT_140492790 <= fVar36)))) {
LAB_14027f618:
          dVar9 = (dVar21 - 0.0) * *param_1;
          dVar26 = (double)fVar36;
          if (((double)param_2 - dVar9 <= dVar26) && (dVar26 <= (double)param_2 + dVar9)) {
            dVar9 = (DAT_140492848 - dVar21) * *param_1;
            if (((double)auVar24._0_4_ - dVar9 <= dVar26) &&
               (dVar26 <= (double)auVar24._0_4_ + dVar9)) {
              dVar9 = 4.94065645841247e-324;
              goto LAB_14027f68e;
            }
          }
          dVar9 = 1.48219693752374e-323;
        }
        else {
          if (*(char *)(param_1 + 1) == '\0') {
            auVar22._4_4_ = uVar38;
            auVar22._0_4_ = auVar24._0_4_;
            auVar22._8_4_ = in_XMM2_Dc;
            auVar22._12_4_ = in_XMM2_Dd;
            auVar24._4_4_ = uVar38;
            auVar24._8_4_ = in_XMM2_Dc;
            auVar24._12_4_ = in_XMM2_Dd;
            if (auVar24._0_4_ <= param_2) {
              auVar22._0_4_ = param_2;
            }
            auVar25 = auVar24;
            if (param_2 <= auVar24._0_4_) {
              auVar25._4_12_ = auVar24._4_12_;
              auVar25._0_4_ = param_2;
            }
            fVar23 = fVar36;
            if (auVar22._0_4_ <= fVar36) {
              fVar23 = auVar22._0_4_;
            }
            if (fVar23 <= auVar25._0_4_) {
              fVar23 = auVar25._0_4_;
            }
            if (fVar23 != fVar36) goto LAB_14027f618;
          }
          dVar9 = 0.0;
        }
LAB_14027f68e:
        if ((0.0 < param_10) && (param_10 < DAT_140492848)) {
          local_110[0] = _DAT_140492fc0;
          local_110[1] = (double)_UNK_140492fc8;
          dVar26 = (dVar30 * param_10 + dVar34) * param_10 + dVar40;
          dVar27 = (dVar33 * param_10 + local_130) * param_10 + local_128;
          local_110[dVar21 < param_10] = param_10;
          dVar20 = (dVar31 * param_10 + local_120) * param_10 + local_118;
          dVar19 = dVar27;
          if (dVar27 <= dVar20) {
            dVar19 = dVar20;
          }
          if (dVar20 <= dVar27) {
            dVar27 = dVar20;
          }
          if (dVar19 <= dVar26) {
            dVar26 = dVar19;
          }
          if (dVar26 <= dVar27) {
            dVar26 = dVar27;
          }
          local_138[0] = param_2;
          local_138[1] = auVar24._0_4_;
          local_138[dVar21 < param_10] = (float)dVar26;
          uVar8 = FUN_14027b730(param_1,local_110[0],local_110[1],dVar21,local_138[0],local_138[1],
                                fVar36);
          dVar9 = (double)(ulonglong)(uVar8 | SUB84(dVar9,0));
        }
        if ((0.0 < param_11) && (param_11 < DAT_140492848)) {
          local_110[0] = _DAT_140492fc0;
          local_110[1] = (double)_UNK_140492fc8;
          dVar40 = (dVar30 * param_11 + dVar34) * param_11 + dVar40;
          dVar34 = (dVar33 * param_11 + local_130) * param_11 + local_128;
          dVar31 = (dVar31 * param_11 + local_120) * param_11 + local_118;
          dVar26 = dVar34;
          if (dVar31 <= dVar34) {
            dVar26 = dVar31;
          }
          local_110[dVar21 < param_11] = param_11;
          if (dVar34 <= dVar31) {
            dVar34 = dVar31;
          }
          if (dVar34 <= dVar40) {
            dVar40 = dVar34;
          }
          if (dVar40 <= dVar26) {
            dVar40 = dVar26;
          }
          local_138[0] = param_2;
          local_138[1] = auVar24._0_4_;
          local_138[dVar21 < param_11] = (float)dVar40;
          uVar8 = FUN_14027b730(param_1,local_110[0],local_110[1],dVar21,local_138[0],local_138[1],
                                fVar36);
          dVar9 = (double)(ulonglong)(uVar8 | SUB84(dVar9,0));
        }
        if (((ulonglong)dVar9 & 1) != 0) {
          if (((ulonglong)dVar9 & 2) != 0) {
LAB_14027fcf1:
            return CONCAT71((int7)((ulonglong)dVar9 >> 8),1);
          }
          pdVar5 = (double *)param_1[2];
          local_118 = dVar21 * param_1[3];
          dVar21 = dVar21 * param_1[4];
          iVar15 = *(int *)(pdVar5 + 0x13);
          dVar31 = local_118 + pdVar5[2];
          dVar34 = dVar21 + pdVar5[3];
          dVar9 = (double)iVar15;
          if ((dVar31 < 0.0) || (dVar9 < dVar31)) {
            dVar31 = (double)(0.0 < dVar31) * dVar9;
          }
          iVar4 = *(int *)((longlong)pdVar5 + 0x9c);
          dVar9 = (double)iVar4;
          if ((dVar34 < 0.0) || (dVar9 < dVar34)) {
            dVar34 = (double)(0.0 < dVar34) * dVar9;
          }
          dVar31 = dVar31 - DAT_140492828;
          dVar34 = dVar34 - DAT_140492828;
          dVar9 = (double)FUN_14041a5d0();
          iVar13 = (int)dVar9;
          dVar9 = (double)FUN_14041a5d0();
          iVar17 = iVar13 + 1;
          iVar15 = iVar15 + -1;
          iVar11 = (int)dVar9;
          iVar1 = iVar11 + 1;
          if (((iVar13 < 0) || (iVar18 = iVar13, iVar15 < iVar13)) && (iVar18 = 0, 0 < iVar13)) {
            iVar18 = iVar15;
          }
          if (((iVar17 < 0) || (iVar14 = iVar17, iVar15 < iVar17)) && (iVar14 = 0, 0 < iVar17)) {
            iVar14 = iVar15;
          }
          iVar4 = iVar4 + -1;
          if (((iVar11 < 0) || (iVar15 = iVar11, iVar4 < iVar11)) && (iVar15 = 0, 0 < iVar11)) {
            iVar15 = iVar4;
          }
          if (((iVar1 < 0) || (iVar17 = iVar1, iVar4 < iVar1)) && (iVar17 = 0, 0 < iVar1)) {
            iVar17 = iVar4;
          }
          dVar9 = pdVar5[0x12];
          dVar31 = dVar31 - (double)iVar13;
          dVar34 = dVar34 - (double)iVar11;
          lVar12 = (longlong)(*(int *)(pdVar5 + 0x14) * iVar15);
          dVar26 = DAT_140492848 - dVar31;
          dVar40 = DAT_140492848 - dVar34;
          lVar10 = (longlong)(*(int *)(pdVar5 + 0x14) * iVar17);
          lVar2 = lVar12 + iVar14 * 3;
          lVar12 = lVar12 + iVar18 * 3;
          lVar3 = lVar10 + iVar14 * 3;
          lVar10 = lVar10 + iVar18 * 3;
          fVar41 = (float)((double)(float)((double)*(float *)((longlong)dVar9 + lVar2 * 4) * dVar31
                                          + (double)*(float *)((longlong)dVar9 + lVar12 * 4) *
                                            dVar26) * dVar40 +
                          (double)(float)((double)*(float *)((longlong)dVar9 + lVar3 * 4) * dVar31 +
                                         (double)*(float *)((longlong)dVar9 + lVar10 * 4) * dVar26)
                          * dVar34);
          fVar39 = (float)((double)(float)((double)*(float *)((longlong)dVar9 + 4 + lVar2 * 4) *
                                           dVar31 + (double)*(float *)((longlong)dVar9 + 4 +
                                                                      lVar12 * 4) * dVar26) * dVar40
                          + (double)(float)((double)*(float *)((longlong)dVar9 + 4 + lVar3 * 4) *
                                            dVar31 + (double)*(float *)((longlong)dVar9 + 4 +
                                                                       lVar10 * 4) * dVar26) *
                            dVar34);
          pfVar6 = (float *)pdVar5[4];
          fVar36 = pfVar6[2];
          local_110[3] = dVar21 * pdVar5[0x18] + pdVar5[1];
          fVar23 = *pfVar6;
          fVar37 = (float)((double)(float)((double)*(float *)((longlong)dVar9 + 8 + lVar2 * 4) *
                                           dVar31 + (double)*(float *)((longlong)dVar9 + 8 +
                                                                      lVar12 * 4) * dVar26) * dVar40
                          + (double)(float)((double)*(float *)((longlong)dVar9 + 8 + lVar3 * 4) *
                                            dVar31 + (double)*(float *)((longlong)dVar9 + 8 +
                                                                       lVar10 * 4) * dVar26) *
                            dVar34);
          fVar32 = pfVar6[1];
          local_110[2] = local_118 * pdVar5[0x17] + *pdVar5;
          dVar9 = (DAT_140492848 -
                  (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_1404930a4,
                                   SUB84(dVar21,0) & _DAT_1404930a0)) *
                  (DAT_140492848 -
                  (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) & _UNK_1404930a4,
                                   SUB84(local_118,0) & _DAT_1404930a0));
          fVar29 = fVar32;
          if (fVar23 <= fVar32) {
            fVar29 = fVar23;
          }
          fVar28 = fVar32;
          if (fVar32 <= fVar23) {
            fVar28 = fVar23;
          }
          fVar35 = fVar36;
          if (fVar28 <= fVar36) {
            fVar35 = fVar28;
          }
          if (fVar35 <= fVar29) {
            fVar35 = fVar29;
          }
          fVar29 = (float)((double)(fVar35 - fVar23) * dVar9 + (double)fVar41);
          fVar32 = (float)((double)(fVar35 - fVar32) * dVar9 + (double)fVar39);
          dVar21 = (double)func_0x000140280fb0(pdVar5 + 6,local_110 + 2);
          fVar23 = fVar39;
          if (fVar39 <= fVar41) {
            fVar23 = fVar41;
          }
          if (fVar41 <= fVar39) {
            fVar39 = fVar41;
          }
          fVar41 = fVar32;
          if (fVar32 <= fVar29) {
            fVar41 = fVar29;
          }
          if (fVar29 <= fVar32) {
            fVar32 = fVar29;
          }
          fVar28 = (float)((dVar21 + pdVar5[0x16]) * pdVar5[0x15]);
          fVar29 = fVar37;
          if (fVar23 <= fVar37) {
            fVar29 = fVar23;
          }
          if (fVar29 <= fVar39) {
            fVar29 = fVar39;
          }
          fVar36 = (float)((double)(fVar35 - fVar36) * dVar9 + (double)fVar37);
          if (fVar41 <= fVar36) {
            fVar36 = fVar41;
          }
          if (fVar36 <= fVar32) {
            fVar36 = fVar32;
          }
          dVar9 = param_1[2];
          if ((double)(float)((uint)(fVar36 - fVar28) & (uint)_DAT_140493090) *
              *(double *)((longlong)dVar9 + 200) <
              (double)(float)((uint)(fVar29 - fVar28) & (uint)_DAT_140493090)) goto LAB_14027fcf1;
          uVar38 = 0;
          in_XMM2_Dc = 0;
          in_XMM2_Dd = 0;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar7);
  }
  return (ulonglong)dVar9 & 0xffffffffffffff00;
}

