// Function: FUN_140284480
// Addr: 140284480
// Size: 61 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140284480(double *param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  iVar1 = -1;
  if (0.0 < *param_1) {
    iVar1 = 1;
  }
  dVar4 = (*param_2 - param_1[6]) * (*param_2 - param_1[6]) +
          (param_2[1] - param_1[7]) * (param_2[1] - param_1[7]);
  if (0.0 <= dVar4) {
    dVar4 = SQRT(dVar4) * DAT_140492850;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    dVar4 = dVar4 * (double)iVar1 + *param_1;
    *param_1 = dVar4;
    uVar2 = SUB84(dVar4,0) & _DAT_1404930a0;
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_1404930a4;
    param_1[3] = (double)CONCAT44(uVar3,uVar2);
    param_1[2] = (double)CONCAT44(uVar3 ^ DAT_1404930b0._4_4_,uVar2 ^ (uint)DAT_1404930b0);
    dVar4 = param_2[1];
    param_1[6] = *param_2;
    param_1[7] = dVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041f850(SUB84(dVar4,0));
}

