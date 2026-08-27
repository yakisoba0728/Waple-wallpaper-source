// Function: FUN_140214eb0
// Addr: 140214eb0
// Size: 196 bytes


float * FUN_140214eb0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar6 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar5 = (float)(0x5f375a86 - ((uint)fVar6 >> 1));
  fVar5 = (DAT_140492740 - fVar6 * DAT_1404926c0 * fVar5 * fVar5) * fVar5;
  param_1[2] = fVar3 * fVar5;
  param_1[3] = fVar4 * fVar5;
  *param_1 = fVar1 * fVar5;
  param_1[1] = fVar2 * fVar5;
  return param_1;
}

