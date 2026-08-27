// Function: FUN_14019e5e0
// Addr: 14019e5e0
// Size: 127 bytes


float * FUN_14019e5e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2[3] * param_2[3] + param_2[2] * param_2[2] +
          param_2[1] * param_2[1] + *param_2 * *param_2;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_14041ad10(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar4 = DAT_140492704 / fVar4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 * fVar4;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar4;
  param_1[3] = fVar3 * fVar4;
  return param_1;
}

