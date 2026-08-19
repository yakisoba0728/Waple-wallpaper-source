// Function: FUN_140286130
// Addr: 140286130
// Size: 58 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140286130(longlong *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double local_58;
  double dStack_50;
  undefined1 auStack_48 [64];
  
  dVar5 = DAT_140492848;
  if (0.0 <= param_4) {
    if (DAT_140492848 < param_4) {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1,auStack_48,DAT_140492848);
      FUN_140281750(uVar3,&local_58,0);
      pdVar2 = (double *)(**(code **)(*param_1 + 0x20))(param_1,auStack_48,dVar5);
      if ((0.0 < (*param_3 - *pdVar2) * local_58 + (param_3[1] - pdVar2[1]) * dStack_50) &&
         (dVar5 = (*param_3 - *pdVar2) * dStack_50 - (param_3[1] - pdVar2[1]) * local_58,
         (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_1404930a4,
                          SUB84(dVar5,0) & _DAT_1404930a0) <=
         (double)CONCAT44((uint)((ulonglong)*param_2 >> 0x20) & _UNK_1404930a4,
                          SUB84(*param_2,0) & _DAT_1404930a0))) {
        *param_2 = dVar5;
        param_2[1] = 0.0;
      }
    }
  }
  else {
    pdVar2 = (double *)(**(code **)(*param_1 + 0x28))(param_1,&local_58,0);
    dVar5 = *pdVar2;
    dVar1 = pdVar2[1];
    dVar4 = dVar1 * dVar1 + dVar5 * dVar5;
    if (dVar4 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041f850(dVar4);
    }
    dVar4 = SQRT(dVar4);
    if (dVar4 == 0.0) {
      dVar5 = 0.0;
      dVar1 = DAT_140492848;
    }
    else {
      dVar5 = dVar5 / dVar4;
      dVar1 = dVar1 / dVar4;
    }
    pdVar2 = (double *)(**(code **)(*param_1 + 0x20))(param_1,&local_58,0);
    if (((*param_3 - *pdVar2) * dVar5 + (param_3[1] - pdVar2[1]) * dVar1 < 0.0) &&
       (dVar5 = dVar1 * (*param_3 - *pdVar2) - dVar5 * (param_3[1] - pdVar2[1]),
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_1404930a4,
                        SUB84(dVar5,0) & _DAT_1404930a0) <=
       (double)CONCAT44((uint)((ulonglong)*param_2 >> 0x20) & _UNK_1404930a4,
                        SUB84(*param_2,0) & _DAT_1404930a0))) {
      *param_2 = dVar5;
      param_2[1] = 0.0;
    }
  }
  return;
}

