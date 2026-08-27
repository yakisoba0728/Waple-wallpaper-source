// Function: FUN_14019d540
// Addr: 14019d540
// Size: 36 bytes


undefined8 * FUN_14019d540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = *(float *)(param_3 + 1);
  *param_1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) + (float)((ulonglong)*param_3 >> 0x20),
                      (float)*param_2 + (float)*param_3);
  *(float *)(param_1 + 1) = fVar1 + fVar2;
  return param_1;
}

