// Function: FUN_14041a650
// Addr: 14041a650
// Size: 803 bytes


undefined8 FUN_14041a650(undefined8 param_1)

{
  float fVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_38 [2];
  undefined1 local_30 [48];
  
  fVar1 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_14041baa0();
    return uVar6;
  }
  dVar7 = (double)(float)param_1;
  dVar3 = ABS(dVar7);
  if ((uint)fVar1 < 0x3f490fdc) {
    if ((uint)fVar1 < 0x3c000000) {
      if ((uint)fVar1 < 0x39000000) {
        return param_1;
      }
      dVar7 = dVar7 - dVar7 * dVar7 * dVar7 * DAT_140471d40;
    }
    else {
      dVar3 = dVar7 * dVar7;
      dVar7 = dVar7 + ((DAT_1404720d8 * dVar3 + DAT_1404720d0) * dVar3 * dVar3 +
                      DAT_1404720c8 * dVar3 + DAT_1404720c0) * dVar7 * dVar3;
    }
    goto LAB_14041a9a6;
  }
  bVar5 = dVar7 != dVar3;
  if (bVar5) {
    dVar7 = 0.0 - dVar7;
  }
  if ((uint)fVar1 < 0x4b742400) {
    local_38[0] = (uint)(dVar7 * DAT_140471d20 + DAT_140471d10);
    dVar8 = (double)(int)local_38[0];
    dVar9 = dVar7 - DAT_140471d30 * dVar8;
    dVar7 = dVar9 - DAT_140471d50 * dVar8;
    uVar2 = (ulonglong)ABS(dVar7) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar7 = dVar9 - DAT_140471d60 * dVar8;
      dVar7 = dVar7 - (DAT_140471d70 * dVar8 - ((dVar9 - dVar7) - DAT_140471d60 * dVar8));
    }
    if (0x3f1 < uVar2) goto LAB_14041a8ce;
    if (uVar2 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar7 = DAT_140471cf0;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 - DAT_140471d40 * dVar7 * dVar7 * dVar7;
    }
    else {
      dVar7 = DAT_140471cf0 - dVar7 * dVar7 * DAT_140471d10;
    }
  }
  else {
    dVar7 = (double)__remainder_piby2d2f_forC(dVar7,local_30,local_38);
LAB_14041a8ce:
    dVar3 = dVar7 * dVar7;
    if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 + ((DAT_1404720d8 * dVar3 + DAT_1404720d0) * dVar3 * dVar3 +
                      DAT_1404720c8 * dVar3 + DAT_1404720c0) * dVar7 * dVar3;
    }
    else {
      dVar7 = DAT_140472090 * dVar3 + DAT_140471cf0 +
              ((DAT_1404720b0 * dVar3 + DAT_1404720a8) * dVar3 * dVar3 +
              DAT_1404720a0 * dVar3 + DAT_140472098) * dVar3 * dVar3;
    }
  }
  uVar4 = (uint)bVar5;
  if ((local_38[0] >> 1 & uVar4) == 0 && (~(local_38[0] >> 1) & ~uVar4 & 1) == 0) {
    dVar7 = 0.0 - dVar7;
  }
LAB_14041a9a6:
  return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
}

