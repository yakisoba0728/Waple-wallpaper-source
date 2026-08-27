// Function: FUN_14041bf80
// Addr: 14041bf80
// Size: 671 bytes


double FUN_14041bf80(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar5;
  double dVar4;
  double dVar6;
  double dVar7;
  
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  dVar4 = 0.0;
  uVar3 = uVar5 >> 0x14 & 0x7ff;
  if (0x7ff0000000000000 < (ulonglong)ABS(param_1)) {
    dVar4 = (double)FUN_1402ecc80();
    return dVar4;
  }
  if (uVar3 < 0x3c7) {
    FUN_1402de940(0x20);
    return DAT_140471b98;
  }
  if (uVar3 < 0x3ff) {
    dVar6 = param_1;
    if ((longlong)param_1 < 0) {
      dVar6 = (double)CONCAT44(uVar5 ^ DAT_140492fe0._4_4_,SUB84(param_1,0) ^ (uint)DAT_140492fe0);
    }
    if (uVar3 < 0x3fe) {
      dVar7 = dVar6 * dVar6;
    }
    else {
      dVar7 = (DAT_140492778 - dVar6) * DAT_140492758;
      dVar6 = SQRT(dVar7);
      dVar4 = dVar6;
    }
    dVar1 = ((((((dVar7 * DAT_1404930e8 + DAT_1404930f0) * dVar7 - DAT_1404930f8) * dVar7 +
               DAT_140493110) * dVar7 - DAT_140493118) * dVar7 + DAT_140493108) * dVar7) /
            ((((dVar7 * DAT_140493100 - DAT_140493120) * dVar7 + DAT_140493130) * dVar7 -
             DAT_140493138) * dVar7 + DAT_140493128);
    if (uVar3 < 0x3fe) {
      return DAT_140471b98 - (param_1 - (DAT_1404930e0 - dVar1 * param_1));
    }
    if (-1 < (longlong)param_1) {
      dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
      dVar4 = (dVar7 - dVar2 * dVar2) / ((double)((ulonglong)dVar4 & 0xffffffff00000000) + dVar4);
      return (dVar6 + dVar6) * dVar1 + dVar4 + dVar4 + dVar2 + dVar2;
    }
    dVar4 = (dVar6 * dVar1 - DAT_1404930e0) + dVar4;
    return DAT_1404927d0 - (dVar4 + dVar4);
  }
  if (param_1 == DAT_140492778) {
    return 0.0;
  }
  if (param_1 != DAT_1404929d0) {
    dVar4 = (double)FUN_1402eca00(&DAT_140430524,0xd,0xfff8000000000000,1,8,0x21,param_1,0,1);
    return dVar4;
  }
  FUN_1402de940(0x20);
  return DAT_1404927d0;
}

