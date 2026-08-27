// Function: FUN_1402863d0
// Addr: 1402863d0
// Size: 143 bytes


undefined1 (*) [16] FUN_1402863d0(longlong param_1,undefined1 (*param_2) [16],double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = DAT_140492778 - param_3;
  dVar3 = *(double *)(param_1 + 0x20) * dVar2 + *(double *)(param_1 + 0x30) * param_3;
  dVar4 = *(double *)(param_1 + 0x28) * dVar2 + *(double *)(param_1 + 0x38) * param_3;
  dVar4 = ((*(double *)(param_1 + 0x18) * dVar2 + *(double *)(param_1 + 0x28) * param_3) * dVar2 +
          dVar4 * param_3) * dVar2 +
          (dVar4 * dVar2 +
          (*(double *)(param_1 + 0x38) * dVar2 + *(double *)(param_1 + 0x48) * param_3) * param_3) *
          param_3;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = ((*(double *)(param_1 + 0x10) * dVar2 + *(double *)(param_1 + 0x20) * param_3) *
                  dVar2 + dVar3 * param_3) * dVar2 +
                 (dVar3 * dVar2 +
                 (*(double *)(param_1 + 0x30) * dVar2 + *(double *)(param_1 + 0x40) * param_3) *
                 param_3) * param_3;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_2 = auVar1;
  return param_2;
}

