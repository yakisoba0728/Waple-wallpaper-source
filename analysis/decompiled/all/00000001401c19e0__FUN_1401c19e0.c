// Function: FUN_1401c19e0
// Addr: 1401c19e0
// Size: 644 bytes


void FUN_1401c19e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = DAT_140492704;
  fVar1 = 0.0;
  fVar2 = *param_1;
  if (((fVar2 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) {
    param_1[1] = 0.0;
    fVar2 = 0.0;
    param_1[2] = 1.0;
  }
  else {
    fVar5 = (float)*(undefined8 *)(param_1 + 1);
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    fVar6 = fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar6 < 0.0) {
      fVar6 = (float)FUN_14041ad10(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    fVar6 = fVar3 / fVar6;
    fVar2 = fVar2 * fVar6;
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar4 * fVar6,fVar5 * fVar6);
  }
  *param_1 = fVar2;
  if ((fVar2 == 0.0) && (param_1[1] == 0.0)) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    fVar4 = 0.0;
    param_2[2] = 0.0;
  }
  else {
    fVar6 = param_1[1] - param_1[2] * 0.0;
    fVar5 = param_1[2] * 0.0 - fVar2;
    fVar1 = fVar2 * 0.0 - param_1[1] * 0.0;
    fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1;
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_14041ad10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar3 / fVar2;
    *param_2 = fVar6 * fVar2;
    param_2[1] = fVar5 * fVar2;
    param_2[2] = fVar1 * fVar2;
    fVar4 = param_1[1] * fVar1 - param_1[2] * fVar5;
    fVar7 = param_1[2] * fVar6 - *param_1 * fVar1;
    fVar1 = *param_1 * fVar5 - param_1[1] * fVar6;
    fVar2 = fVar7 * fVar7 + fVar4 * fVar4 + fVar1 * fVar1;
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_14041ad10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar3 / fVar2;
    fVar3 = fVar7 * fVar2;
    fVar1 = fVar1 * fVar2;
    fVar4 = fVar4 * fVar2;
  }
  *param_3 = fVar4;
  param_3[1] = fVar3;
  param_3[2] = fVar1;
  return;
}

