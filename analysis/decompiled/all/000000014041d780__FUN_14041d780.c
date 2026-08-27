// Function: FUN_14041d780
// Addr: 14041d780
// Size: 432 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041d780(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  uVar5 = in_XMM0._0_8_;
  fVar1 = in_XMM0._0_4_;
  if ((uint)ABS(fVar1) < 0x7f800000) {
    if (0.0 < fVar1) {
      uVar2 = (uint)fVar1 & 0x7fffff;
      uVar3 = (uint)ABS(fVar1) >> 0x17;
      if (uVar3 == 0) {
        fVar8 = (float)(uVar2 | 0x3f800000) - DAT_140493f20;
        uVar2 = (uint)fVar8 & 0x7fffff;
        iVar4 = ((uint)fVar8 >> 0x17) - _DAT_140493fb0;
      }
      else {
        iVar4 = uVar3 - 0x7f;
      }
      auVar7._4_12_ = in_XMM0._4_12_;
      if (DAT_14049404c <= (float)((uint)(fVar1 - DAT_140493f20) & _DAT_140493f80)) {
        uVar3 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
        uVar5 = (ulonglong)uVar3;
        fVar1 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
                *(float *)(&DAT_140495880 + uVar5 * 4);
        auVar6._4_12_ = DAT_140494000._4_12_;
        auVar6._0_4_ = (float)DAT_140494000 * (float)iVar4 + *(float *)(&DAT_140495460 + uVar5 * 4)
                       + (_DAT_140494010 * (float)iVar4 -
                         (fVar1 + (fVar1 * _DAT_140494030 + DAT_140494040) * fVar1 * fVar1)) +
                         *(float *)(&DAT_140495670 + uVar5 * 4);
        return auVar6._0_8_;
      }
      fVar1 = fVar1 - DAT_140493f20;
      fVar8 = fVar1 / (_DAT_140493f30 + fVar1);
      fVar9 = fVar8 + fVar8;
      auVar7._0_4_ = fVar1 + ((fVar9 * fVar9 * _DAT_140493ff0 + DAT_140493fe0) *
                              fVar9 * fVar9 * fVar9 - fVar1 * fVar8);
      return auVar7._0_8_;
    }
    if (fVar1 == 0.0) {
      uVar5 = FUN_1402ece70(param_1,param_2,DAT_140494050);
      return uVar5;
    }
LAB_14041d90a:
    uVar5 = FUN_1402ece70(param_1,param_2,DAT_140494054);
    return uVar5;
  }
  if (fVar1 != INFINITY) {
    if (fVar1 == -INFINITY) goto LAB_14041d90a;
    uVar5 = (ulonglong)((uint)fVar1 | 0x400000);
  }
  return uVar5;
}

