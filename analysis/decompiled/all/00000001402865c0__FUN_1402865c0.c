// Function: FUN_1402865c0
// Addr: 1402865c0
// Size: 19 bytes


undefined1 (*) [16] FUN_1402865c0(longlong param_1,undefined1 (*param_2) [16],double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar9 = DAT_140492848 - param_3;
  dVar8 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar2 = ((dVar8 - *(double *)(param_1 + 0x10)) * dVar9 + (dVar7 - dVar8) * param_3) * dVar9 +
          ((dVar7 - dVar8) * dVar9 + (*(double *)(param_1 + 0x40) - dVar7) * param_3) * param_3;
  dVar9 = ((dVar6 - *(double *)(param_1 + 0x18)) * dVar9 + (dVar4 - dVar6) * param_3) * dVar9 +
          ((dVar4 - dVar6) * dVar9 + (*(double *)(param_1 + 0x48) - dVar4) * param_3) * param_3;
  if ((dVar2 == 0.0) && (dVar9 == 0.0)) {
    if (param_3 == 0.0) {
      dVar4 = dVar4 - *(double *)(param_1 + 0x18);
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar7 - *(double *)(param_1 + 0x10);
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *param_2 = auVar3;
      return param_2;
    }
    if (param_3 == DAT_140492848) {
      dVar6 = *(double *)(param_1 + 0x48) - dVar6;
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = *(double *)(param_1 + 0x40) - dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *param_2 = auVar5;
      return param_2;
    }
  }
  auVar1._8_4_ = SUB84(dVar9,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_2 = auVar1;
  return param_2;
}

