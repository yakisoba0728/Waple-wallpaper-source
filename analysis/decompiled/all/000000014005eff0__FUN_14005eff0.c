// Function: FUN_14005eff0
// Addr: 14005eff0
// Size: 117 bytes


undefined8 * FUN_14005eff0(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *param_3;
  uVar2 = param_2[1];
  *param_1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar1,(float)*param_2 * fVar1);
  param_1[1] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
  fVar1 = param_3[1];
  uVar2 = param_2[3];
  param_1[2] = CONCAT44((float)((ulonglong)param_2[2] >> 0x20) * fVar1,(float)param_2[2] * fVar1);
  param_1[3] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
  fVar1 = param_3[2];
  uVar2 = param_2[5];
  param_1[4] = CONCAT44((float)((ulonglong)param_2[4] >> 0x20) * fVar1,(float)param_2[4] * fVar1);
  param_1[5] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  return param_1;
}

