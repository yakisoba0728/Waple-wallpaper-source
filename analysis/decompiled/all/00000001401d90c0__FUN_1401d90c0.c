// Function: FUN_1401d90c0
// Addr: 1401d90c0
// Size: 49 bytes


float * FUN_1401d90c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_3;
  if (*param_3 <= *param_2) {
    fVar1 = *param_2;
  }
  fVar2 = param_3[1];
  if (param_3[1] <= param_2[1]) {
    fVar2 = param_2[1];
  }
  *param_1 = fVar1;
  fVar1 = param_3[2];
  if (param_3[2] <= param_2[2]) {
    fVar1 = param_2[2];
  }
  param_1[1] = fVar2;
  param_1[2] = fVar1;
  return param_1;
}

