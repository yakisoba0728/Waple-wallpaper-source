// Function: FUN_14041b3b0
// Addr: 14041b3b0
// Size: 430 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041b3b0(float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  ulonglong uVar8;
  ulonglong in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar17._0_8_ = (double)param_1;
  auVar17._8_8_ = in_XMM0_Qb;
  dVar7 = ABS(auVar17._0_8_);
  auVar18 = auVar17;
  if ((longlong)auVar17._0_8_ < 0) {
    auVar18._0_8_ = (ulonglong)auVar17._0_8_ ^ DAT_140492fe0;
    auVar18._8_8_ = in_XMM0_Qb ^ _UNK_140492fe8;
  }
  dVar16 = auVar18._0_8_;
  if ((ulonglong)dVar7 < 0x3fdc000000000000) {
    dVar7 = 0.0;
  }
  else if ((ulonglong)dVar7 < 0x3fe6000000000000) {
    dVar16 = ((dVar16 + dVar16) - DAT_140492778) / (dVar16 + DAT_1404927b0);
    dVar7 = DAT_140471b70;
  }
  else if ((ulonglong)dVar7 < 0x3ff3000000000000) {
    dVar16 = (dVar16 - DAT_140492778) / (dVar16 + DAT_140492778);
    dVar7 = DAT_140471b78;
  }
  else if ((ulonglong)dVar7 < 0x4003800000000000) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = DAT_1404927a0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_140492778;
    auVar18 = vfmadd213sd_fma(auVar10,auVar18,auVar6);
    dVar16 = (dVar16 - DAT_1404927a0) / auVar18._0_8_;
    dVar7 = DAT_140471b88;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar7) {
      uVar8 = FUN_14041bd70(CONCAT44((int)((ulonglong)auVar17._0_8_ >> 0x20),param_1),0);
      return uVar8;
    }
    if (DAT_140471ba0 < dVar16) {
      if ((longlong)auVar17._0_8_ < 0) {
        FUN_1402de940(0x20);
        return (ulonglong)DAT_1404929bc;
      }
      FUN_1402de940(0x20);
      return (ulonglong)DAT_140492744;
    }
    dVar16 = DAT_1404929d0 / dVar16;
    dVar7 = DAT_140471b98;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = DAT_140471b50;
  dVar5 = dVar16 * dVar16;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_140471b58;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar5;
  auVar18 = vfmadd213sd_fma(auVar11,auVar13,auVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_140471b60;
  auVar18 = vfmadd213sd_fma(auVar18,auVar13,auVar2);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = DAT_140471b68;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = DAT_140471b90;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar5;
  auVar6 = vfmadd213sd_fma(auVar12,auVar14,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = DAT_140471b80;
  auVar6 = vfmadd213sd_fma(auVar6,auVar14,auVar4);
  dVar7 = dVar7 - ((auVar18._0_8_ * dVar16 * dVar5) / auVar6._0_8_ - dVar16);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulonglong)dVar7;
  if ((longlong)auVar17._0_8_ < 0) {
    auVar15._0_8_ = (ulonglong)dVar7 ^ DAT_140492fe0;
    auVar15._8_8_ = _UNK_140492fe8;
  }
  auVar9._0_4_ = (float)auVar15._0_8_;
  auVar9._4_12_ = auVar15._4_12_;
  return auVar9._0_8_;
}

