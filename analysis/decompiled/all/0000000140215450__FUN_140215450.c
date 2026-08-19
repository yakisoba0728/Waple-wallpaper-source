// Function: FUN_140215450
// Addr: 140215450
// Size: 94 bytes


float * FUN_140215450(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_1[3];
  fVar4 = param_2[2];
  fVar5 = param_1[1];
  fVar6 = param_2[1];
  fVar7 = param_2[3];
  fVar8 = param_1[2];
  *param_1 = ((fVar1 * fVar2 - fVar6 * fVar5) - fVar4 * fVar8) - fVar7 * fVar3;
  param_1[1] = (fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar8) - fVar3 * fVar4;
  param_1[2] = (fVar4 * fVar2 + fVar8 * fVar1 + fVar3 * fVar6) - fVar7 * fVar5;
  param_1[3] = (fVar7 * fVar2 + fVar3 * fVar1 + fVar4 * fVar5) - fVar8 * fVar6;
  return param_1;
}

