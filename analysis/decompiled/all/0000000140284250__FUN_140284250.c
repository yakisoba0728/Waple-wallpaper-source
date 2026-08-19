// Function: FUN_140284250
// Addr: 140284250
// Size: 74 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140284250(undefined8 *param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = (*param_4 - *param_2) * (*param_4 - *param_2) +
          (param_4[1] - param_2[1]) * (param_4[1] - param_2[1]);
  if (dVar4 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(dVar4);
  }
  dVar4 = SQRT(dVar4) * DAT_140492850;
  if ((((double)CONCAT44((uint)((ulonglong)*param_1 >> 0x20) & _UNK_1404930a4,
                         (uint)*param_1 & _DAT_1404930a0) < param_2[2] - dVar4) &&
      (dVar1 = param_2[3],
      dVar4 <= (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & _UNK_1404930a4,
                                SUB84(dVar1,0) & _DAT_1404930a0))) &&
     (dVar2 = param_2[4],
     dVar4 <= (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & _UNK_1404930a4,
                               SUB84(dVar2,0) & _DAT_1404930a0))) {
    if (0.0 < dVar1) {
      dVar1 = param_2[5];
      if (0.0 <= dVar1) {
        bVar3 = (double)param_1[3] < dVar1 - dVar4;
      }
      else {
        bVar3 = dVar1 + dVar4 < (double)param_1[2];
      }
      if (!bVar3) {
        return 1;
      }
    }
    if (0.0 < dVar2) {
      dVar1 = param_2[6];
      if (0.0 <= dVar1) {
        bVar3 = (double)param_1[3] < dVar1 - dVar4;
      }
      else {
        bVar3 = dVar1 + dVar4 < (double)param_1[2];
      }
      if (!bVar3) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

