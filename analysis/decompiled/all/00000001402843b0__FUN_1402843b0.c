// Function: FUN_1402843b0
// Addr: 1402843b0
// Size: 200 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402843b0(double *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  
  dVar3 = *param_1;
  iVar1 = -1;
  if (0.0 < dVar3) {
    iVar1 = 1;
  }
  dVar5 = (*param_2 - param_1[6]) * (*param_2 - param_1[6]) +
          (param_2[1] - param_1[7]) * (param_2[1] - param_1[7]);
  if (dVar5 < 0.0) {
    dVar5 = (double)FUN_14041f780(SUB84(dVar5,0));
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  dVar5 = dVar5 * DAT_140492780;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  dVar3 = dVar5 * (double)iVar1 + dVar3;
  *param_1 = dVar3;
  uVar2 = SUB84(dVar3,0) & _DAT_140492fd0;
  uVar4 = (uint)((ulonglong)dVar3 >> 0x20) & _UNK_140492fd4;
  param_1[3] = (double)CONCAT44(uVar4,uVar2);
  param_1[2] = (double)CONCAT44(uVar4 ^ DAT_140492fe0._4_4_,uVar2 ^ (uint)DAT_140492fe0);
  dVar3 = param_2[1];
  param_1[6] = *param_2;
  param_1[7] = dVar3;
  return;
}

