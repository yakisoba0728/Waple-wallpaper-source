// Function: FUN_140285460
// Addr: 140285460
// Size: 196 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140285460(double *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)param_3 >> 0x20);
  uVar2 = SUB84(param_3,0);
  if ((param_2 == 0.0) ||
     (dVar1 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) & _UNK_1404930a4,
                               SUB84(param_2,0) & _DAT_1404930a0) * _DAT_1404929a8,
     dVar1 <= (double)CONCAT44(uVar3 & _UNK_1404930a4,uVar2 & _DAT_1404930a0) &&
     (double)CONCAT44(uVar3 & _UNK_1404930a4,uVar2 & _DAT_1404930a0) != dVar1)) {
    if (param_3 == 0.0) {
      if (param_4 != 0.0) {
        return 0;
      }
      return 0xffffffff;
    }
    *param_1 = (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^ DAT_1404930b0._4_4_,
                                SUB84(param_4,0) ^ (uint)DAT_1404930b0) / param_3;
  }
  else {
    dVar1 = param_3 * param_3 - param_2 * _DAT_1404928a8 * param_4;
    if (0.0 < dVar1) {
      if (0.0 <= dVar1) {
        uVar2 = uVar2 ^ (uint)DAT_1404930b0;
        uVar3 = uVar3 ^ DAT_1404930b0._4_4_;
        *param_1 = (SQRT(dVar1) - param_3) / (param_2 + param_2);
        param_1[1] = ((double)CONCAT44(uVar3,uVar2) - SQRT(dVar1)) / (param_2 + param_2);
        return 2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14041f850();
    }
    if (dVar1 != 0.0) {
      return 0;
    }
    *param_1 = (double)CONCAT44(uVar3 ^ DAT_1404930b0._4_4_,uVar2 ^ (uint)DAT_1404930b0) /
               (param_2 + param_2);
  }
  return 1;
}

