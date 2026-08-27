// Function: FUN_140217ac0
// Addr: 140217ac0
// Size: 142 bytes


float * FUN_140217ac0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_14041ad10(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if (fVar5 <= 0.0) {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return param_1;
  }
  fVar5 = DAT_140492704 / fVar5;
  *param_1 = fVar1 * fVar5;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar5;
  param_1[3] = fVar4 * fVar5;
  return param_1;
}

