// Function: FUN_1401e23d0
// Addr: 1401e23d0
// Size: 224 bytes


void FUN_1401e23d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = FUN_14041c460(param_1[1],*param_1);
  uVar6 = param_1[2] ^ DAT_140492ff0;
  fVar2 = (float)param_1[6] * (float)param_1[6] + (float)param_1[10] * (float)param_1[10];
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_14041ad10();
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  uVar3 = FUN_14041c460(uVar6,fVar2);
  fVar2 = (float)FUN_14041a9c0(uVar1);
  fVar4 = (float)FUN_14041a2e0(uVar1);
  uVar5 = FUN_14041c460(fVar2 * (float)param_1[8] - fVar4 * (float)param_1[9],
                        fVar4 * (float)param_1[5] - fVar2 * (float)param_1[4]);
  *param_2 = uVar1;
  *param_3 = uVar3;
  *param_4 = uVar5;
  return;
}

