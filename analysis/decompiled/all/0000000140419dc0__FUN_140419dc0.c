// Function: FUN_140419dc0
// Addr: 140419dc0
// Size: 473 bytes


ulonglong FUN_140419dc0(float param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)param_1;
  dVar1 = ABS(dVar4);
  dVar5 = dVar4;
  if ((longlong)dVar4 < 0) {
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ DAT_140492fe0._4_4_,
                             SUB84(dVar4,0) ^ (uint)DAT_140492fe0);
  }
  if ((ulonglong)dVar1 < 0x3fdc000000000000) {
    dVar1 = 0.0;
  }
  else if ((ulonglong)dVar1 < 0x3fe6000000000000) {
    dVar5 = ((dVar5 + dVar5) - DAT_140492778) / (dVar5 + DAT_1404927b0);
    dVar1 = DAT_140471b70;
  }
  else if ((ulonglong)dVar1 < 0x3ff3000000000000) {
    dVar5 = (dVar5 - DAT_140492778) / (dVar5 + DAT_140492778);
    dVar1 = DAT_140471b78;
  }
  else if ((ulonglong)dVar1 < 0x4003800000000000) {
    dVar5 = (dVar5 - DAT_1404927a0) / (dVar5 * DAT_1404927a0 + DAT_140492778);
    dVar1 = DAT_140471b88;
  }
  else {
    if (0x7ff0000000000000 < (ulonglong)dVar1) {
      uVar2 = FUN_1402ecca0(param_1);
      return uVar2;
    }
    if (DAT_140471ba0 < dVar5) {
      if ((longlong)dVar4 < 0) {
        FUN_1402de940(0x20);
        return (ulonglong)DAT_1404929bc;
      }
      FUN_1402de940(0x20);
      return (ulonglong)DAT_140492744;
    }
    dVar5 = DAT_1404929d0 / dVar5;
    dVar1 = DAT_140471b98;
  }
  dVar3 = dVar5 * dVar5;
  dVar1 = dVar1 - ((((dVar3 * DAT_140471b50 + DAT_140471b58) * dVar3 + DAT_140471b60) *
                   dVar5 * dVar3) /
                   ((dVar3 * DAT_140471b68 + DAT_140471b90) * dVar3 + DAT_140471b80) - dVar5);
  if ((longlong)dVar4 < 0) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ DAT_140492fe0._4_4_,
                             SUB84(dVar1,0) ^ (uint)DAT_140492fe0);
  }
  return (ulonglong)(uint)(float)dVar1;
}

