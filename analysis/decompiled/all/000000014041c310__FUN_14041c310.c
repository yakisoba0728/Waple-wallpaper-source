// Function: FUN_14041c310
// Addr: 14041c310
// Size: 203 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041c310(ulonglong param_1)

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
    uVar3 = FUN_1402ecd70();
    return uVar3;
  }
  if (uVar2 < 0x65) {
    FUN_1402dea10(0x20);
    return (ulonglong)DAT_140492814;
  }
  if (uVar2 < 0x7f) {
    fVar5 = fVar1;
    if ((int)fVar1 < 0) {
      fVar5 = (float)((uint)fVar1 ^ DAT_1404930c0);
      uVar6 = uVar6 ^ _UNK_1404930c4;
    }
    if (uVar2 < 0x7e) {
      fVar7 = fVar5 * fVar5;
    }
    else {
      fVar7 = (DAT_1404927d4 - fVar5) * DAT_140492790;
      uVar6 = 0;
      fVar8 = SQRT(fVar7);
      fVar5 = fVar8;
    }
    fVar9 = ((((_UNK_14049322c - fVar7 * _UNK_140493218) * fVar7 - _UNK_14049321c) * fVar7 +
             _UNK_140493220) * fVar7) / (_UNK_140493228 - fVar7 * _UNK_140493224);
    if (uVar2 < 0x7e) {
      return (ulonglong)
             (uint)(float)(_UNK_140471c68 -
                          ((double)fVar1 - (_UNK_1404931b0 - (double)(fVar9 * fVar1))));
    }
    if (-1 < (int)fVar1) {
      fVar1 = (float)((uint)fVar8 & 0xffff0000);
      fVar8 = (fVar7 - fVar1 * fVar1) / (fVar1 + fVar8);
      return CONCAT44(uVar6,(fVar5 + fVar5) * fVar9 + fVar8 + fVar8 + fVar1 + fVar1);
    }
    dVar4 = ((double)(fVar5 * fVar9) - _UNK_1404931b0) + (double)fVar8;
    return (ulonglong)(uint)(float)(_UNK_1404928a0 - (dVar4 + dVar4));
  }
  if (fVar1 == DAT_1404927d4) {
    return 0;
  }
  if (fVar1 != DAT_140492a88) {
    uVar3 = FUN_1402ecc10("acosf",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
    return uVar3;
  }
  FUN_1402dea10(0x20);
  return (ulonglong)DAT_140492904;
}

