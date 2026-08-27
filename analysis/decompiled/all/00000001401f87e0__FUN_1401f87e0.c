// Function: FUN_1401f87e0
// Addr: 1401f87e0
// Size: 143 bytes


float * FUN_1401f87e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_3[3];
  fVar4 = param_3[6];
  fVar5 = param_2[2];
  fVar6 = param_3[4];
  fVar7 = param_3[7];
  fVar8 = param_3[8];
  fVar9 = param_3[5];
  *param_1 = fVar1 * param_3[1] + fVar2 * *param_3 + fVar5 * param_3[2];
  param_1[1] = fVar2 * fVar3 + fVar1 * fVar6 + fVar5 * fVar9;
  param_1[2] = fVar2 * fVar4 + fVar1 * fVar7 + fVar5 * fVar8;
  return param_1;
}

