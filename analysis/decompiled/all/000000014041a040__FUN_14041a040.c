// Function: FUN_14041a040
// Addr: 14041a040
// Size: 631 bytes


undefined8 FUN_14041a040(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 in_RCX;
  ulonglong uVar3;
  double dVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_14041b940(in_RCX,param_2,0);
    return uVar5;
  }
  auVar6._0_8_ = (double)param_1;
  auVar6._8_8_ = in_XMM0_Qb;
  dVar4 = ABS(auVar6._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar2 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar2 = (uint)(dVar4 * DAT_140471bd0 + DAT_140471bc0);
    dVar8 = (double)(int)uVar2;
    dVar10 = dVar4 - DAT_140471c00 * dVar8;
    dVar9 = dVar10 - DAT_140471c10 * dVar8;
    uVar3 = (ulonglong)ABS(dVar9) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar9 = dVar10 - DAT_140471c20 * dVar8;
      dVar9 = dVar9 - (DAT_140471c30 * dVar8 - ((dVar10 - dVar9) - DAT_140471c20 * dVar8));
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    if (uVar3 < 0x3f2) {
      if (uVar3 < 0x3df) {
        if ((uVar2 & 1) == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = DAT_140471bb0;
        }
      }
      else if ((uVar2 & 1) == 0) {
        auVar6._0_8_ = DAT_140471bb0 - dVar9 * dVar9 * DAT_140471bc0;
        auVar6._8_8_ = 0;
      }
      else {
        auVar6._0_8_ = dVar9 - DAT_140471be0 * dVar9 * dVar9 * dVar9;
        auVar6._8_8_ = 0;
      }
      goto LAB_14041a2b4;
    }
  }
  else {
    uVar2 = FUN_14041b560(dVar4,auVar6._0_8_,1,param_4,auVar6._0_8_);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar4 = auVar6._0_8_;
  dVar9 = dVar4 * dVar4;
  if ((uVar2 & 1) == 0) {
    auVar6._0_8_ = DAT_140472090 * dVar9 + DAT_140471bb0 +
                   ((DAT_1404720b0 * dVar9 + DAT_1404720a8) * dVar9 * dVar9 +
                   DAT_1404720a0 * dVar9 + DAT_140472098) * dVar9 * dVar9;
    auVar6._8_8_ = 0;
  }
  else {
    auVar6._0_8_ = dVar4 + ((DAT_1404720d8 * dVar9 + DAT_1404720d0) * dVar9 * dVar9 +
                           DAT_1404720c8 * dVar9 + DAT_1404720c0) * dVar4 * dVar9;
  }
LAB_14041a2b4:
  if ((uVar2 + 1 & 2) != 0) {
    dVar4 = auVar6._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 0.0 - dVar4;
  }
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_;
  return auVar7._0_8_;
}

