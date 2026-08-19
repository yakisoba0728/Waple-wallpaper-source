// Function: FUN_14041fd90
// Addr: 14041fd90
// Size: 634 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041fd90(float param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [12];
  uint uVar7;
  double dVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  ulonglong uVar12;
  undefined8 in_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar36 [64];
  undefined1 auVar39 [64];
  
  auVar37._0_8_ = (double)param_2;
  auVar37._8_8_ = in_XMM1_Qb;
  auVar39 = ZEXT1664(auVar37);
  auVar33._0_8_ = (double)param_1;
  auVar33._8_8_ = in_XMM0_Qb;
  auVar36 = ZEXT1664(auVar33);
  iVar9 = ((uint)((ulonglong)auVar33._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar37._0_8_ >> 0x34) & 0x7ff);
  dVar11 = ABS(auVar37._0_8_);
  dVar8 = ABS(auVar33._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar11) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar8)) {
    auVar6._4_8_ = SUB128(ZEXT812(0),4);
    auVar6._0_4_ = param_2;
    uVar12 = FUN_14041be40(0,auVar6._0_8_,0);
    return uVar12;
  }
  if (dVar8 == 0.0) {
    if (-1 < (longlong)auVar37._0_8_) {
      auVar13._4_12_ = auVar33._4_12_;
      auVar13._0_4_ = param_1;
      return auVar13._0_8_;
    }
LAB_14041fe39:
    FUN_1402dea10(0x20);
    if ((longlong)auVar33._0_8_ < 0) {
      uVar12 = (ulonglong)DAT_140492ad0;
    }
    else {
      uVar12 = (ulonglong)DAT_140492904;
    }
  }
  else {
    auVar35 = auVar33;
    auVar15 = auVar37;
    if (dVar11 == 0.0) {
      FUN_1402dea10();
      auVar15 = auVar39._0_16_;
      auVar35 = auVar36._0_16_;
      if (-1 < (longlong)auVar33._0_8_) goto LAB_14041fe8b;
    }
    else {
LAB_14041fe8b:
      if (iVar9 < 0x1b) {
        dVar32 = auVar35._0_8_;
        dVar24 = auVar15._0_8_;
        if ((iVar9 < -0xd) && (-1 < (longlong)auVar37._0_8_)) {
          if (-0x97 < iVar9) {
            if (iVar9 < -0x7e) {
              dVar24 = (dVar32 * 1.2676506002282294e+30) / dVar24;
              uVar12 = (ulonglong)ABS(dVar24) >> 0x34;
              uVar7 = (uint)((ulonglong)ABS(dVar24) >> 0x34);
              if (uVar7 < 0x65) {
                if ((int)(0x65 - uVar7) < 0x37) {
                  uVar12 = ((ulonglong)dVar24 & 0x1fffffffffffff | 0x10000000000000) >>
                           (100 - uVar12 & 0x3f);
                  uVar12 = (uVar12 >> 1) + (ulonglong)((uint)uVar12 & 1);
                }
                else {
                  uVar12 = 0;
                }
              }
              else {
                uVar12 = uVar12 - 100 << 0x34 | (ulonglong)dVar24 & 0xfffffffffffff;
              }
              uVar10 = (ulonglong)dVar24 & 0x8000000000000000 | uVar12;
              auVar36 = ZEXT864(uVar10);
              auVar34._8_8_ = 0;
              auVar34._0_8_ = uVar10;
              if ((uVar12 & 0x7ff0000000000000) == 0) {
                FUN_1402dea10(0x30);
                auVar34 = auVar36._0_16_;
              }
              auVar14._0_4_ = (float)auVar34._0_8_;
              auVar14._4_12_ = auVar34._4_12_;
              return auVar14._0_8_;
            }
            auVar15._0_8_ = dVar32 / dVar24;
            auVar15._8_8_ = auVar35._8_8_;
            auVar16._0_4_ = (float)auVar15._0_8_;
            auVar16._4_12_ = auVar15._4_12_;
            return auVar16._0_8_;
          }
          FUN_1402dea10(0x30);
          if ((longlong)auVar33._0_8_ < 0) {
            return (ulonglong)DAT_140492a70;
          }
          return 0;
        }
        if ((-0x1b < iVar9) || (-1 < (longlong)auVar37._0_8_)) {
          if ((dVar8 != INFINITY) || (dVar11 != INFINITY)) {
            auVar38 = auVar15;
            if ((longlong)auVar37._0_8_ < 0) {
              auVar38._0_8_ = (ulonglong)dVar24 ^ DAT_1404930b0;
              auVar38._8_8_ = auVar15._8_8_;
            }
            if ((longlong)auVar33._0_8_ < 0) {
              auVar35._0_8_ = (ulonglong)dVar32 ^ DAT_1404930b0;
            }
            bVar5 = auVar38._0_8_ < auVar35._0_8_;
            auVar25._0_8_ = -(ulonglong)!bVar5;
            auVar25._8_8_ = 0xffffffffffffffff;
            auVar15 = vblendvpd_avx(auVar38,auVar35,auVar25);
            auVar26._0_8_ = -(ulonglong)!bVar5;
            auVar26._8_8_ = 0xffffffffffffffff;
            auVar35 = vblendvpd_avx(auVar35,auVar38,auVar26);
            dVar8 = auVar35._0_8_;
            auVar27._0_8_ = auVar15._0_8_ / dVar8;
            auVar27._8_8_ = auVar15._8_8_;
            if (auVar27._0_8_ <= _DAT_1404939c0) {
              if (_UNK_1404939b8 <= auVar27._0_8_) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = _UNK_1404939c8;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = _UNK_1404939d0;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = auVar27._0_8_ * auVar27._0_8_;
                auVar35 = vfnmadd213sd_fma(auVar23,auVar18,auVar3);
                auVar4._8_8_ = 0;
                auVar4._0_8_ = _UNK_1404939e0;
                auVar35 = vfnmadd213sd_fma(auVar35,auVar18,auVar4);
                auVar19._8_8_ = 0;
                auVar19._0_8_ = auVar27._0_8_ * auVar27._0_8_ * auVar27._0_8_;
                auVar27 = vfnmadd231sd_fma(auVar27,auVar19,auVar35);
              }
            }
            else {
              auVar31._8_8_ = 0;
              auVar31._0_8_ = DAT_1404939f0;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = DAT_140492828;
              auVar35 = vfmadd213sd_fma(auVar31,auVar27,auVar1);
              auVar21._0_8_ = (double)(uint)(int)auVar35._0_8_;
              auVar21._8_8_ = SUB648(ZEXT6064((undefined1  [60])0x0),4);
              auVar28._8_8_ = 0;
              auVar28._0_8_ = dVar8 * auVar21._0_8_;
              auVar16 = vfmsub231sd_fma(auVar28,auVar15,auVar31);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = dVar8 * DAT_1404939f0;
              auVar15 = vfmadd231sd_fma(auVar17,auVar15,auVar21);
              dVar8 = auVar16._0_8_ / auVar15._0_8_;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = _UNK_1404939d8;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = dVar8 * dVar8 * dVar8;
              auVar29._8_8_ = 0;
              auVar29._0_8_ =
                   dVar8 + *(double *)(&UNK_140494b20 + (ulonglong)((int)auVar35._0_8_ - 0x10) * 8);
              auVar27 = vfnmadd231sd_fma(auVar29,auVar22,auVar2);
            }
            if (bVar5) {
              dVar8 = auVar27._0_8_;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = _UNK_140471c68 - dVar8;
            }
            if ((longlong)auVar37._0_8_ < 0) {
              dVar8 = auVar27._0_8_;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = _UNK_1404928a0 - dVar8;
            }
            auVar30 = auVar27;
            if ((longlong)auVar33._0_8_ < 0) {
              auVar30._0_8_ = auVar27._0_8_ ^ DAT_1404930b0;
              auVar30._8_8_ = auVar27._8_8_;
            }
            auVar20._0_4_ = (float)auVar30._0_8_;
            auVar20._4_12_ = auVar30._4_12_;
            return auVar20._0_8_;
          }
          FUN_1402dea10(0x20);
          if (-1 < (longlong)auVar37._0_8_) {
            if ((longlong)auVar33._0_8_ < 0) {
              return (ulonglong)DAT_1404939f8;
            }
            return (ulonglong)DAT_1404927b0;
          }
          if ((longlong)auVar33._0_8_ < 0) {
            return (ulonglong)DAT_1404939fc;
          }
          return (ulonglong)DAT_1404939e8;
        }
        goto LAB_14041fe39;
      }
      FUN_1402dea10(0x20);
      if (-1 < (longlong)auVar33._0_8_) {
        return (ulonglong)DAT_140492814;
      }
    }
    uVar12 = (ulonglong)DAT_140492a8c;
  }
  return uVar12;
}

