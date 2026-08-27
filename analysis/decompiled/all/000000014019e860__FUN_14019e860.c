// Function: FUN_14019e860
// Addr: 14019e860
// Size: 46 bytes


float * FUN_14019e860(float *param_1,float *param_2)

{
  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  return param_1;
}

