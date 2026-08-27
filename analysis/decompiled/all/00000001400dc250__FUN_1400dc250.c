// Function: FUN_1400dc250
// Addr: 1400dc250
// Size: 139 bytes


undefined8 * FUN_1400dc250(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)*param_2;
  fVar5 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  fVar4 = fVar3 * fVar3 + fVar5 * fVar5 + fVar1 * fVar1;
  fVar2 = (float)(0x5f375a86 - ((uint)fVar4 >> 1));
  fVar2 = (DAT_140492740 - fVar4 * DAT_1404926c0 * fVar2 * fVar2) * fVar2;
  *(float *)(param_1 + 1) = fVar1 * fVar2;
  *param_1 = CONCAT44(fVar5 * fVar2,fVar3 * fVar2);
  return param_1;
}

