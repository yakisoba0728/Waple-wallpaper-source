// Function: FUN_14041c240
// Addr: 14041c240
// Size: 540 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041c240(ulonglong param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (float)param_1;
  uVar6 = (uint)(param_1 >> 0x20);
  fVar8 = 0.0;
  uVar2 = (uint)((param_1 & 0xffffffff) >> 0x17) & 0xff;
  if (0x7f800000 < (uint)ABS(fVar1)) {
    uVar3 = FUN_1402ecca0();
    return uVar3;
  }
  if (uVar2 < 0x65) {
    FUN_1402de940(0x20);
    return (ulonglong)DAT_140492744;
  }
  if (uVar2 < 0x7f) {
    fVar5 = fVar1;
    if ((int)fVar1 < 0) {
      fVar5 = (float)((uint)fVar1 ^ DAT_140492ff0);
      uVar6 = uVar6 ^ _UNK_140492ff4;
    }
    if (uVar2 < 0x7e) {
      fVar7 = fVar5 * fVar5;
    }
    else {
      fVar7 = (DAT_140492704 - fVar5) * DAT_1404926c0;
      uVar6 = 0;
      fVar8 = SQRT(fVar7);
      fVar5 = fVar8;
    }
    fVar9 = ((((DAT_14049315c - fVar7 * DAT_140493148) * fVar7 - DAT_14049314c) * fVar7 +
             DAT_140493150) * fVar7) / (DAT_140493158 - fVar7 * DAT_140493154);
    if (uVar2 < 0x7e) {
      return (ulonglong)
             (uint)(float)(DAT_140471b98 -
                          ((double)fVar1 - (DAT_1404930e0 - (double)(fVar9 * fVar1))));
    }
    if (-1 < (int)fVar1) {
      fVar1 = (float)((uint)fVar8 & 0xffff0000);
      fVar8 = (fVar7 - fVar1 * fVar1) / (fVar1 + fVar8);
      return CONCAT44(uVar6,(fVar5 + fVar5) * fVar9 + fVar8 + fVar8 + fVar1 + fVar1);
    }
    dVar4 = ((double)(fVar5 * fVar9) - DAT_1404930e0) + (double)fVar8;
    return (ulonglong)(uint)(float)(DAT_1404927d0 - (dVar4 + dVar4));
  }
  if (fVar1 == DAT_140492704) {
    return 0;
  }
  if (fVar1 != DAT_1404929b8) {
    uVar3 = FUN_1402ecb40("acosf",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
    return uVar3;
  }
  FUN_1402de940(0x20);
  return (ulonglong)DAT_140492834;
}

