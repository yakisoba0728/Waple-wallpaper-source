// Function: FUN_14005fd70
// Addr: 14005fd70
// Size: 17 bytes


float * FUN_14005fd70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar4 * fVar1;
  param_1[2] = fVar5 * fVar2;
  param_1[3] = fVar6 * fVar3;
  return param_1;
}

