// Function: FUN_14019d9c0
// Addr: 14019d9c0
// Size: 46 bytes


float * FUN_14019d9c0(float *param_1,float *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  return param_1;
}

