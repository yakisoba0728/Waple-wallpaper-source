// Function: FUN_1404202b0
// Addr: 1404202b0
// Size: 1932 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1404202b0(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  double dVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_ZMM1 [64];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  lVar18 = 0;
  lVar17 = 0;
  dVar21 = in_ZMM1._0_8_;
  uVar19 = (uint)((ulonglong)param_1 >> 0x20);
  uVar15 = uVar19 >> 0x14;
  uVar11 = in_ZMM1._4_4_;
  uVar20 = uVar11 >> 0x14;
  dVar38 = param_1;
  if ((0x7fd < uVar15 - 1) || (0x7f < (uVar20 & 0x7ff) - 0x3be)) {
    uVar14 = (longlong)dVar21 * 2;
    if (0xffdffffffffffffe < uVar14 - 1) {
      if ((uVar14 == 0) || (dVar38 = dVar21, param_1 == 1.0)) {
        if (((ulonglong)dVar38 ^ 0x8000000000000) * 2 < 0xfff0000000000001) {
          return DAT_140492778;
        }
      }
      else {
        uVar16 = (longlong)param_1 * 2;
        if ((uVar16 < 0xffe0000000000001) && (uVar14 < 0xffe0000000000001)) {
          if (uVar16 == 0x7fe0000000000000) {
            return DAT_140492778;
          }
          if ((uint)(uVar16 < 0x7fe0000000000000) == (uVar11 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar21 * dVar21;
        }
      }
      return param_1 + dVar21;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar38 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar15 = uVar11 >> 0x14 & 0x7ff, lVar18 = lVar17, uVar15 - 0x3ff < 0x35)) &&
          (uVar14 = 1L << ((ulonglong)(0x433 - uVar15) & 0x3f),
          ((ulonglong)dVar21 & uVar14 - 1) == 0)) && (((ulonglong)dVar21 & uVar14) != 0)) {
        dVar38 = (double)((ulonglong)dVar38 ^ DAT_140492fe0);
        lVar18 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar21 & 0x8000000000000000) == 0) {
          return dVar38;
        }
        dVar21 = (double)FUN_140420ab0(lVar18);
        return dVar21;
      }
      if (((ulonglong)dVar21 & 0x8000000000000000) == 0) {
        return dVar38;
      }
      return DAT_140492778 / dVar38;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar15 = uVar11 >> 0x14 & 0x7ff;
      if (uVar15 < 0x3ff) {
LAB_140420584:
        dVar21 = (double)FUN_140420b10();
        return dVar21;
      }
      if (uVar15 < 0x434) {
        uVar14 = 1L << ((ulonglong)(0x433 - uVar15) & 0x3f);
        if (((ulonglong)dVar21 & uVar14 - 1) != 0) goto LAB_140420584;
        iVar12 = 2 - (uint)((uVar14 & (ulonglong)dVar21) != 0);
      }
      else {
        iVar12 = 2;
      }
      dVar38 = ABS(param_1);
      uVar15 = uVar19 >> 0x14 & 0x7ff;
      lVar18 = 0x80000;
      if (iVar12 != 1) {
        lVar18 = 0;
      }
    }
    if (0x7f < (uVar20 & 0x7ff) - 0x3be) {
      if (dVar38 == 1.0) {
        return DAT_140492778;
      }
      if ((uVar20 & 0x7ff) < 0x3be) {
        if (0x3ff0000000000000 < (ulonglong)dVar38) {
          return dVar21 + DAT_140492778;
        }
        return DAT_140492778 - dVar21;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar38 == uVar20 < 0x800) {
        dVar21 = (double)FUN_140420b50();
        return dVar21;
      }
      dVar21 = (double)FUN_140420ba0(0);
      return dVar21;
    }
    if (uVar15 == 0) {
      dVar38 = (double)((longlong)ABS(param_1 * DAT_140494060) + 0xfcc0000000000000);
    }
  }
  if (dVar21 != 1.0) {
    if (dVar38 == 1.0) {
      auVar39._8_8_ = 0;
      auVar39._0_8_ = DAT_140492778;
      auVar42._0_8_ = -(ulonglong)(lVar18 == 0);
      auVar42._8_8_ = 0xffffffffffffffff;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = DAT_1404929d0;
      auVar22 = vblendvpd_avx(auVar22,auVar39,auVar42);
      param_1 = auVar22._0_8_;
    }
    else {
      auVar34._8_8_ = 0;
      auVar34._0_8_ = DAT_140496b40;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = DAT_140496b18;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = DAT_140496b10;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = DAT_1404929d0;
      uVar15 = (uint)((longlong)dVar38 + 0xc0196aab00000000U >> 0x20);
      lVar17 = (ulonglong)(uVar15 >> 0xd & 0x7f) * 0x20;
      auVar56._0_8_ = (double)((int)uVar15 >> 0x14);
      auVar56._8_8_ = 0;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = *(ulonglong *)(&DAT_140496b58 + lVar17);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(&DAT_140496b68 + lVar17);
      auVar22 = vfmadd213sd_fma(auVar53,auVar56,auVar1);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(&DAT_140496b70 + lVar17);
      auVar39 = vfmadd213sd_fma(auVar40,auVar56,auVar2);
      auVar23._8_8_ = 0;
      auVar23._0_8_ =
           (longlong)dVar38 - ((longlong)dVar38 + 0xc0196aab00000000U & 0xfff0000000000000);
      auVar42 = vfmadd213sd_fma(auVar55,auVar23,auVar57);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = DAT_140496b38;
      auVar1 = vfmadd213sd_fma(auVar34,auVar42,auVar3);
      dVar54 = auVar42._0_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = DAT_140496b30;
      dVar50 = dVar54 * DAT_140496b20 * dVar54;
      dVar38 = auVar22._0_8_ + dVar54;
      dVar13 = dVar50 + dVar38;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = DAT_140496b28;
      auVar2 = vfmadd213sd_fma(auVar42,auVar24,auVar4);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = DAT_140496b50;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_140496b48;
      auVar3 = vfmadd213sd_fma(auVar25,auVar42,auVar5);
      auVar46._8_8_ = 0;
      auVar46._0_8_ = dVar50;
      auVar1 = vfmadd231sd_fma(auVar1,auVar46,auVar3);
      auVar26._0_8_ = (ulonglong)dVar50 ^ DAT_140492fe0;
      auVar26._8_8_ = _UNK_140492fe8;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar54 * DAT_140496b20;
      auVar42 = vfmadd213sd_fma(auVar43,auVar42,auVar26);
      auVar1 = vfmadd231sd_fma(auVar2,auVar46,auVar1);
      auVar47._8_8_ = 0;
      auVar47._0_8_ =
           auVar42._0_8_ + auVar39._0_8_ + (auVar22._0_8_ - dVar38) + dVar54 +
           (dVar38 - dVar13) + dVar50;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = dVar50 * dVar54;
      auVar39 = vfmadd231sd_fma(auVar47,auVar51,auVar1);
      dVar38 = auVar39._0_8_ + dVar13;
      dVar21 = dVar38 * dVar21;
      auVar27._0_8_ = (ulonglong)dVar21 ^ DAT_140492fe0;
      auVar27._8_8_ = _UNK_140492fe8;
      uVar19 = (uint)((ulonglong)dVar21 >> 0x34) & 0x7ff;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = dVar38;
      auVar22 = vfmadd213sd_fma(in_ZMM1._0_16_,auVar35,auVar27);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = (dVar13 - dVar38) + auVar39._0_8_;
      auVar22 = vfmadd231sd_fma(auVar22,in_ZMM1._0_16_,auVar36);
      uVar15 = uVar19;
      if (0x3e < uVar19 - 0x3c9) {
        if (0x7fffffff < uVar19 - 0x3c9) {
          if ((int)lVar18 == 0) {
            return dVar21 + DAT_140492778;
          }
          return (double)((ulonglong)(dVar21 + DAT_140492778) ^ DAT_140492fe0);
        }
        uVar15 = 0;
        if (0x408 < uVar19) {
          if (((ulonglong)dVar21 & 0x8000000000000000) != 0) {
            dVar21 = (double)FUN_140420ba0();
            return dVar21;
          }
          dVar21 = (double)FUN_140420b50(lVar18);
          return dVar21;
        }
      }
      auVar28._8_8_ = 0;
      auVar28._0_8_ = DAT_140495aa0;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = dVar21;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_140495aa8;
      auVar39 = vfmadd213sd_fma(auVar44,auVar28,auVar6);
      uVar16 = auVar39._0_8_ >> 0x10;
      auVar29._0_8_ = (double)auVar39._2_4_;
      auVar29._8_8_ = SUB168(ZEXT816(0),4);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = DAT_140495ab0;
      auVar39 = vfmadd231sd_fma(auVar44,auVar29,auVar7);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = DAT_140495ab8;
      auVar39 = vfmadd231sd_fma(auVar39,auVar29,auVar8);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = DAT_140495ad8;
      dVar21 = auVar39._0_8_ + auVar22._0_8_;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = DAT_140495ac8;
      dVar38 = dVar21 * dVar21;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = dVar21;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = DAT_140495ac0;
      auVar22 = vfmadd213sd_fma(auVar48,auVar37,auVar9);
      uVar14 = (lVar18 + uVar16 << 0x2c) + *(longlong *)(&DAT_140495b18 + (uVar16 & 0xff) * 0x10);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = DAT_140495ad0;
      auVar39 = vfmadd213sd_fma(auVar48,auVar30,auVar10);
      auVar45._8_8_ = 0;
      auVar45._0_8_ = dVar38;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = dVar21 + *(double *)(&DAT_140495b10 + (uVar16 & 0xff) * 0x10);
      auVar22 = vfmadd231sd_fma(auVar52,auVar45,auVar22);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar38 * dVar38;
      auVar22 = vfmadd231sd_fma(auVar22,auVar31,auVar39);
      if (uVar15 == 0) {
        if ((uVar16 & 0x80000000) == 0) {
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar14 + 0xc0f0000000000000;
          auVar22 = vfmadd231sd_fma(auVar32,auVar22,auVar32);
          param_1 = (double)FUN_140420a40(auVar22._0_8_ * DAT_140494068);
        }
        else {
          auVar49._8_8_ = 0;
          auVar49._0_8_ = DAT_140492778;
          dVar13 = (double)(uVar14 + 0x3fe0000000000000);
          dVar38 = dVar13 * auVar22._0_8_;
          dVar21 = dVar13 + dVar38;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = dVar21;
          auVar22 = vandpd_avx(auVar41,_DAT_140492fd0);
          if (auVar22._0_8_ < DAT_140492778) {
            auVar22 = vcmpsd_avx(auVar41,ZEXT816(0) << 0x40,1);
            auVar22 = vblendvpd_avx(auVar49,auVar57,auVar22);
            dVar50 = auVar22._0_8_;
            dVar21 = ((dVar13 - dVar21) + dVar38 + (dVar50 - (dVar50 + dVar21)) + dVar21 +
                     dVar50 + dVar21) - dVar50;
            if (dVar21 == 0.0) {
              dVar21 = (double)((ulonglong)dVar13 & 0x8000000000000000);
            }
          }
          param_1 = (double)FUN_140420a80(dVar21 * DAT_140471a50);
        }
      }
      else {
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar14;
        auVar22 = vfmadd231sd_fma(auVar33,auVar33,auVar22);
        param_1 = auVar22._0_8_;
      }
    }
  }
  return param_1;
}

