// Function: FUN_14041b480
// Addr: 14041b480
// Size: 222 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041b480(float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  ulonglong in_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar16._0_8_ = (double)param_1;
  auVar16._8_8_ = in_XMM0_Qb;
  dVar7 = ABS(auVar16._0_8_);
  auVar17 = auVar16;
  if ((longlong)auVar16._0_8_ < 0) {
    auVar17._0_8_ = (ulonglong)auVar16._0_8_ ^ DAT_1404930b0;
    auVar17._8_8_ = in_XMM0_Qb ^ _UNK_1404930b8;
  }
  dVar15 = auVar17._0_8_;
  if ((ulonglong)dVar7 < 0x3fdc000000000000) {
    dVar7 = 0.0;
  }
  else if ((ulonglong)dVar7 < 0x3fe6000000000000) {
    dVar15 = ((dVar15 + dVar15) - DAT_140492848) / (dVar15 + DAT_140492880);
    dVar7 = DAT_140471c40;
  }
  else if ((ulonglong)dVar7 < 0x3ff3000000000000) {
    dVar15 = (dVar15 - DAT_140492848) / (dVar15 + DAT_140492848);
    dVar7 = DAT_140471c48;
  }
  else if ((ulonglong)dVar7 < 0x4003800000000000) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = DAT_140492870;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = DAT_140492848;
    auVar17 = vfmadd213sd_fma(auVar9,auVar17,auVar6);
    dVar15 = (dVar15 - DAT_140492870) / auVar17._0_8_;
    dVar7 = DAT_140471c58;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar7) {
      return (ulonglong)((uint)param_1 | 0x400000);
    }
    if (_UNK_140471c70 < dVar15) {
      if ((longlong)auVar16._0_8_ < 0) {
        FUN_1402dea10(0x20,0);
        return (ulonglong)DAT_140492a8c;
      }
      FUN_1402dea10(0x20,0);
      return (ulonglong)DAT_140492814;
    }
    dVar15 = DAT_140492aa0 / dVar15;
    dVar7 = _UNK_140471c68;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = _UNK_140471c20;
  dVar5 = dVar15 * dVar15;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = _UNK_140471c28;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar5;
  auVar17 = vfmadd213sd_fma(auVar10,auVar12,auVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _UNK_140471c30;
  auVar17 = vfmadd213sd_fma(auVar17,auVar12,auVar2);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = _UNK_140471c38;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _UNK_140471c60;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar5;
  auVar6 = vfmadd213sd_fma(auVar11,auVar13,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = _UNK_140471c50;
  auVar6 = vfmadd213sd_fma(auVar6,auVar13,auVar4);
  dVar7 = dVar7 - ((auVar17._0_8_ * dVar15 * dVar5) / auVar6._0_8_ - dVar15);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulonglong)dVar7;
  if ((longlong)auVar16._0_8_ < 0) {
    auVar14._0_8_ = (ulonglong)dVar7 ^ DAT_1404930b0;
    auVar14._8_8_ = _UNK_1404930b8;
  }
  auVar8._0_4_ = (float)auVar14._0_8_;
  auVar8._4_12_ = auVar14._4_12_;
  return auVar8._0_8_;
}

