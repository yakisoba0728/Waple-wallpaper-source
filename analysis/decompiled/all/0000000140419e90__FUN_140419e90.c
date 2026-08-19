// Function: FUN_140419e90
// Addr: 140419e90
// Size: 265 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140419e90(float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_1;
  dVar1 = ABS(dVar3);
  dVar4 = dVar3;
  if ((longlong)dVar3 < 0) {
    dVar4 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ DAT_1404930b0._4_4_,
                             SUB84(dVar3,0) ^ (uint)DAT_1404930b0);
  }
  if ((ulonglong)dVar1 < 0x3fdc000000000000) {
    dVar1 = 0.0;
  }
  else if ((ulonglong)dVar1 < 0x3fe6000000000000) {
    dVar4 = ((dVar4 + dVar4) - DAT_140492848) / (dVar4 + DAT_140492880);
    dVar1 = DAT_140471c40;
  }
  else if ((ulonglong)dVar1 < 0x3ff3000000000000) {
    dVar4 = (dVar4 - DAT_140492848) / (dVar4 + DAT_140492848);
    dVar1 = DAT_140471c48;
  }
  else if ((ulonglong)dVar1 < 0x4003800000000000) {
    dVar4 = (dVar4 - DAT_140492870) / (dVar4 * DAT_140492870 + DAT_140492848);
    dVar1 = DAT_140471c58;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar1) {
      return (float)((uint)param_1 | 0x400000);
    }
    if (_UNK_140471c70 < dVar4) {
      if ((longlong)dVar3 < 0) {
        FUN_1402dea10(0x20);
        return DAT_140492a8c;
      }
      FUN_1402dea10(0x20);
      return DAT_140492814;
    }
    dVar4 = DAT_140492aa0 / dVar4;
    dVar1 = _UNK_140471c68;
  }
  dVar2 = dVar4 * dVar4;
  dVar1 = dVar1 - ((((dVar2 * _UNK_140471c20 + _UNK_140471c28) * dVar2 + _UNK_140471c30) *
                   dVar4 * dVar2) /
                   ((dVar2 * _UNK_140471c38 + _UNK_140471c60) * dVar2 + _UNK_140471c50) - dVar4);
  if ((longlong)dVar3 < 0) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ DAT_1404930b0._4_4_,
                             SUB84(dVar1,0) ^ (uint)DAT_1404930b0);
  }
  return (float)dVar1;
}

