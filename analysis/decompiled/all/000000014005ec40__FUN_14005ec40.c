// Function: FUN_14005ec40
// Addr: 14005ec40
// Size: 107 bytes


float * FUN_14005ec40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[2];
  fVar2 = param_2[2];
  fVar3 = param_2[1];
  fVar4 = *param_2;
  fVar5 = param_3[1];
  fVar6 = *param_3;
  *param_1 = fVar1 * fVar3 - fVar5 * fVar2;
  param_1[2] = fVar5 * fVar4 - fVar3 * fVar6;
  param_1[1] = fVar2 * fVar6 - fVar1 * fVar4;
  return param_1;
}

