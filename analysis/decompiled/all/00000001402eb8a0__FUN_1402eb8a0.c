// Function: FUN_1402eb8a0
// Addr: 1402eb8a0
// Size: 1316 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1402eb8a0(void)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_ZMM0 [64];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
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
  double dVar37;
  
  dVar15 = in_ZMM0._0_8_;
  auVar16 = in_ZMM0._0_16_;
  if (DAT_1404e4fb0 == 0) {
    if ((double)((ulonglong)dVar15 & (ulonglong)DAT_140434a30) == DAT_140434a30) {
      if (dVar15 == DAT_140434a30) {
        return dVar15;
      }
      if (dVar15 != DAT_140434a20) {
        return (double)((ulonglong)dVar15 | _DAT_140434a50);
      }
    }
    else {
      dVar37 = (double)(int)(((ulonglong)dVar15 >> 0x34) - _DAT_140434a60);
      if (0.0 < dVar15) {
        dVar23 = (double)((ulonglong)dVar15 & (ulonglong)DAT_140434a80);
        dVar20 = dVar15;
        if (dVar37 == DAT_140434ba0) {
          dVar37 = (double)((ulonglong)dVar23 | (ulonglong)DAT_140434b10) - DAT_140434b10;
          dVar20 = (double)((ulonglong)dVar37 & (ulonglong)DAT_140434a80);
          dVar37 = (double)(int)((uint)((ulonglong)dVar37 >> 0x34) - _DAT_140434bb0);
          dVar23 = dVar20;
        }
        uVar13 = ((ulonglong)dVar20 & _DAT_140434a90) + ((ulonglong)dVar20 & _DAT_140434aa0) * 2;
        if ((double)((ulonglong)(dVar15 - DAT_140434b10) & _DAT_140434c00) < DAT_140434bc0) {
          dVar15 = dVar15 - DAT_140434b10;
          dVar37 = dVar15 / (DAT_140434b00 + dVar15);
          dVar20 = dVar37 + dVar37;
          dVar23 = dVar20 * dVar20;
          dVar24 = dVar23 * dVar20;
          dVar26 = (double)((ulonglong)dVar15 & (ulonglong)DAT_140434c50);
          dVar15 = (((DAT_140434c20 * dVar23 + DAT_140434c10) * dVar24 +
                    (DAT_140434c40 * dVar23 + DAT_140434c30) * dVar24 * dVar24 * dVar20) -
                   dVar15 * dVar37) + (dVar15 - dVar26);
          return dVar26 * DAT_140434ad0 + dVar15 * DAT_140434ad0 + dVar15 * DAT_140434ac0 +
                 dVar26 * DAT_140434ac0;
        }
        uVar14 = uVar13 >> 0x2c;
        dVar20 = ((double)(uVar13 | DAT_140434b20) - (double)((ulonglong)dVar23 | DAT_140434b20)) *
                 *(double *)(&DAT_140435ce0 + uVar14 * 8);
        dVar15 = dVar20 * dVar20;
        return *(double *)(&DAT_140434cc0 + uVar14 * 8) + DAT_140434ae0 * dVar37 +
               *(double *)(&DAT_1404354d0 + uVar14 * 8) +
               (DAT_140434af0 * dVar37 -
               ((DAT_140434b60 * dVar20 + _DAT_140434b50) * dVar15 + dVar20 +
               ((DAT_140434b90 * dVar20 + DAT_140434b80) * dVar20 + DAT_140434b70) * dVar15 * dVar15
               ) * DAT_140434ab0);
      }
      if (dVar15 == 0.0) {
        dVar15 = (double)FUN_1402ece80();
        return dVar15;
      }
    }
    dVar15 = (double)FUN_1402ece80();
    return dVar15;
  }
  auVar27 = vpsrlq_avx(auVar16,0x34);
  auVar36._8_8_ = _UNK_140434a68;
  auVar36._0_8_ = _DAT_140434a60;
  auVar36 = vpsubq_avx(auVar27,auVar36);
  auVar36 = vcvtdq2pd_avx(auVar36);
  auVar27._8_8_ = _UNK_140434a38;
  auVar27._0_8_ = DAT_140434a30;
  auVar27 = vpand_avx(auVar16,auVar27);
  if (auVar27._0_8_ == DAT_140434a30) {
    if (dVar15 != DAT_140434a30) {
      if (dVar15 == DAT_140434a20) goto LAB_1402ebdf0;
      dVar15 = (double)FUN_1402ece80();
    }
    return dVar15;
  }
  if (0.0 < dVar15) {
    auVar27 = vpand_avx(auVar16,_DAT_140434a80);
    if (auVar36._0_8_ == DAT_140434ba0) {
      auVar16._8_8_ = _UNK_140434b18;
      auVar16._0_8_ = DAT_140434b10;
      auVar16 = vpor_avx(auVar27,auVar16);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar16._0_8_ - DAT_140434b10;
      auVar36 = vpsrlq_avx(auVar28,0x34);
      auVar16 = vpand_avx(auVar28,_DAT_140434a80);
      auVar7._4_12_ = _UNK_140434bb4;
      auVar7._0_4_ = _DAT_140434bb0;
      auVar36 = vpsubd_avx(auVar36,auVar7);
      auVar36 = vcvtdq2pd_avx(auVar36);
      auVar27 = auVar16;
    }
    auVar8._8_8_ = _UNK_140434a98;
    auVar8._0_8_ = _DAT_140434a90;
    auVar7 = vpand_avx(auVar16,auVar8);
    auVar9._8_8_ = _UNK_140434aa8;
    auVar9._0_8_ = _DAT_140434aa0;
    auVar28 = vpand_avx(auVar16,auVar9);
    auVar28 = vpsllq_avx(auVar28,1);
    auVar7 = vpaddq_avx(auVar28,auVar7);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar15 - DAT_140434b10;
    auVar12._8_8_ = _UNK_140434c08;
    auVar12._0_8_ = _DAT_140434c00;
    auVar28 = vpand_avx(auVar30,auVar12);
    if (auVar28._0_8_ < DAT_140434bc0) {
      dVar20 = auVar16._0_8_ - DAT_140434b10;
      dVar23 = dVar20 / (DAT_140434b00 + dVar20);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = DAT_140434c20;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = DAT_140434c40;
      dVar15 = dVar23 + dVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_140434c10;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar15 * dVar15;
      auVar36 = vfmadd213sd_fma(auVar32,auVar25,auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_140434c30;
      auVar27 = vfmadd213sd_fma(auVar35,auVar25,auVar6);
      dVar37 = dVar15 * dVar15 * dVar15;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar20;
      auVar16 = vpand_avx(auVar19,_DAT_140434c50);
      dVar24 = auVar16._0_8_;
      dVar15 = ((auVar36._0_8_ * dVar37 + auVar27._0_8_ * dVar37 * dVar37 * dVar15) -
               dVar20 * dVar23) + (dVar20 - dVar24);
      return dVar24 * DAT_140434ad0 + dVar15 * DAT_140434ad0 + dVar15 * DAT_140434ac0 +
             dVar24 * DAT_140434ac0;
    }
    uVar13 = auVar7._0_8_ >> 0x2c;
    auVar10._8_8_ = _UNK_140434b28;
    auVar10._0_8_ = DAT_140434b20;
    auVar16 = vpor_avx(auVar27,auVar10);
    auVar11._8_8_ = _UNK_140434b28;
    auVar11._0_8_ = DAT_140434b20;
    auVar27 = vpor_avx(auVar7,auVar11);
    dVar15 = (auVar27._0_8_ - auVar16._0_8_) * *(double *)(&DAT_140435ce0 + uVar13 * 8);
    dVar37 = dVar15 * dVar15;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = DAT_140434b90;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = DAT_140434b60;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_140434b80;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar15;
    auVar16 = vfmadd213sd_fma(auVar29,auVar21,auVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_140434b20;
    auVar27 = vfmadd213sd_fma(auVar33,auVar21,auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_140434b70;
    auVar16 = vfmadd213sd_fma(auVar16,auVar21,auVar3);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar37;
    auVar27 = vfmadd231sd_fma(auVar21,auVar27,auVar17);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = dVar37 * dVar37;
    auVar16 = vfmadd231sd_fma(auVar27,auVar16,auVar31);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = DAT_140434af0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar16._0_8_ * DAT_140434ab0;
    auVar27 = vfmsub213sd_fma(auVar34,auVar36,auVar22);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_140434ae0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(&DAT_140434cc0 + uVar13 * 8);
    auVar16 = vfmadd231sd_fma(auVar18,auVar36,auVar4);
    return auVar16._0_8_ + *(double *)(&DAT_1404354d0 + uVar13 * 8) + auVar27._0_8_;
  }
  if (dVar15 == 0.0) {
    dVar15 = (double)FUN_1402ece80();
    return dVar15;
  }
LAB_1402ebdf0:
  dVar15 = (double)FUN_1402ece80();
  return dVar15;
}

