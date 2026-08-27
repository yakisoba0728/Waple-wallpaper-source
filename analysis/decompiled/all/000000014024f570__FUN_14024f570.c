// Function: FUN_14024f570
// Addr: 14024f570
// Size: 104 bytes


float * FUN_14024f570(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = (float)FUN_14041a5c0(fVar1);
  *param_1 = fVar1 - fVar2;
  fVar1 = param_2[1];
  fVar2 = (float)FUN_14041a5c0(fVar1);
  param_1[1] = fVar1 - fVar2;
  fVar1 = param_2[2];
  fVar2 = (float)FUN_14041a5c0(fVar1);
  param_1[2] = fVar1 - fVar2;
  return param_1;
}

