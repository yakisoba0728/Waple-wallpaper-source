// Function: FUN_14005eb80
// Addr: 14005eb80
// Size: 140 bytes


undefined8 * FUN_14005eb80(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)*param_2;
  fVar4 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_14041ad10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar2 = DAT_140492704 / fVar2;
  *(float *)(param_1 + 1) = fVar1 * fVar2;
  *param_1 = CONCAT44(fVar4 * fVar2,fVar3 * fVar2);
  return param_1;
}

