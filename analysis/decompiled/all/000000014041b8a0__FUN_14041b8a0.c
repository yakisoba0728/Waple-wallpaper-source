// Function: FUN_14041b8a0
// Addr: 14041b8a0
// Size: 119 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14041b8a0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar8._8_8_ = _UNK_140472048;
  auVar8._0_8_ = DAT_140472040;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_140472020;
  auVar1 = vfmadd132sd_fma(in_ZMM0._0_16_,_DAT_140472060,auVar1);
  dVar6 = auVar1._0_8_ - (double)DAT_140472060;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = DAT_140472030;
  auVar2 = vfnmadd132sd_fma(auVar9,in_ZMM0._0_16_,auVar2);
  dVar5 = dVar6 * DAT_140472040;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar6;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar5;
  auVar1 = vfmsub213sd_fma(auVar10,auVar8,auVar11);
  dVar7 = auVar2._0_8_ - dVar5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = DAT_140472040;
  auVar3 = vfnmadd231sd_fma(auVar2,auVar10,auVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = DAT_140472050;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = ((dVar7 - auVar3._0_8_) + ((auVar2._0_8_ - dVar7) - dVar5)) - auVar1._0_8_;
  vfnmadd132sd_fma(auVar10,auVar12,auVar4);
  return (int)dVar6 & 3;
}

