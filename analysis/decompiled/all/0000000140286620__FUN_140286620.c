// Function: FUN_140286620
// Addr: 140286620
// Size: 100 bytes


undefined1 (*) [16] FUN_140286620(longlong param_1,undefined1 (*param_2) [16],double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28);
  dVar3 = (dVar3 - (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18))) *
          (DAT_140492778 - param_3) +
          ((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x38)) - dVar3) * param_3;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = (dVar2 - (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10))) *
                 (DAT_140492778 - param_3) +
                 ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) - dVar2) * param_3;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar1;
  return param_2;
}

