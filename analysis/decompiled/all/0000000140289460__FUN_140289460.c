// Function: FUN_140289460
// Addr: 140289460
// Size: 272 bytes


void FUN_140289460(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x30) - dVar1;
  dVar2 = *(double *)(param_1 + 0x28);
  dVar9 = *(double *)(param_1 + 0x10) - dVar1;
  dVar5 = *(double *)(param_1 + 0x38) - dVar2;
  dVar4 = *(double *)(param_1 + 0x18) - dVar2;
  dVar3 = (dVar6 * (param_2[1] - *(double *)(param_1 + 0x38)) -
          dVar5 * (*param_2 - *(double *)(param_1 + 0x30))) / (dVar6 * dVar4 - dVar5 * dVar9);
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar9 = dVar1 + dVar9 * dVar3;
  *(double *)(param_1 + 0x20) = dVar9;
  *(double *)(param_1 + 0x28) = dVar4 * dVar3 + dVar2;
  *(double *)(param_1 + 0x30) = dVar7;
  *(double *)(param_1 + 0x38) = dVar8;
  if ((dVar7 - dVar9) * dVar6 + (dVar8 - *(double *)(param_1 + 0x28)) * dVar5 < 0.0) {
    *(double *)(param_1 + 0x20) = dVar1;
    *(double *)(param_1 + 0x28) = dVar2;
  }
  return;
}

