// Function: FUN_14041d420
// Addr: 14041d420
// Size: 850 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14041d420(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar4 = (double)FUN_1402ecc80();
      return dVar4;
    }
    if (-1 < (longlong)param_1) {
      return param_1;
    }
  }
  else {
    if (ABS(param_1) == 0.0) {
      dVar4 = (double)FUN_1402eca00(&DAT_140493eb8,0x1a,0xfff0000000000000,2,4,0x22,param_1,0,1);
      return dVar4;
    }
    if (-1 < (longlong)param_1) {
      if ((longlong)param_1 + 0xc011f05600000000U < 0x2f88200000001) {
        param_1 = param_1 - DAT_140492778;
        dVar4 = (double)((ulonglong)param_1 & 0xffffffff00000000);
        dVar6 = param_1 / (param_1 + DAT_1404927b0);
        dVar7 = dVar6 + dVar6;
        dVar5 = dVar7 * dVar7;
        dVar5 = ((((dVar5 * _DAT_140493ed0 + _DAT_140493ed8) * dVar5 + _DAT_140493ef8) * dVar5 +
                 _DAT_140493f00) * dVar5 * dVar7 - dVar6 * param_1) + (param_1 - dVar4);
        return dVar5 * _DAT_140493ec8 + dVar4 * _DAT_140493ec8 + dVar5 * _DAT_140493f10 +
               dVar4 * _DAT_140493f10;
      }
      if ((ulonglong)param_1 < 0x10000000000000) {
        iVar3 = 0x3c;
        param_1 = (double)((ulonglong)param_1 | 0x3d0000000000000) - _DAT_140493ec0;
      }
      else {
        iVar3 = 0;
      }
      uVar1 = (uint)((ulonglong)param_1 >> 0x20);
      uVar2 = (uVar1 >> 0xe & 0x3f | 0x40) + (uVar1 >> 0xd & 1);
      dVar5 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3fe0000000000000) -
              (double)uVar2 * _DAT_140493ee8;
      dVar5 = dVar5 / (dVar5 * DAT_140492758 + (double)uVar2 * _DAT_140493ee8);
      dVar4 = dVar5 * dVar5;
      dVar4 = ((dVar4 * _DAT_140493ee0 + _DAT_140493ef0) * dVar4 + _DAT_140493f08) * dVar4 * dVar5 +
              dVar5 + *(double *)(&DAT_140493ab0 + (ulonglong)uVar2 * 8);
      return (double)(int)(((uVar1 >> 0x14 & 0x7ff) - iVar3) + -0x3ff) +
             *(double *)(&DAT_1404938a0 + (ulonglong)uVar2 * 8) * _DAT_140493f10 +
             dVar4 * _DAT_140493ec8 +
             *(double *)(&DAT_1404938a0 + (ulonglong)uVar2 * 8) * _DAT_140493ec8 +
             dVar4 * _DAT_140493f10;
    }
  }
  dVar4 = (double)FUN_1402eca00(&DAT_140493eb8,0x1a,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar4;
}

