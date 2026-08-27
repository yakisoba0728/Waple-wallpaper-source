// Function: FUN_140216280
// Addr: 140216280
// Size: 362 bytes


float * FUN_140216280(float *param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  
  fVar4 = DAT_140492704;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[2] = 0.0;
  param_1[4] = 0.0;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[10] = 1.0;
  fVar9 = param_2[1];
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar11 = fVar2 * fVar2 + fVar9 * fVar9;
  fVar8 = fVar1 * fVar1 + fVar9 * fVar9;
  fVar6 = fVar1 * fVar3 + fVar9 * fVar2;
  fVar7 = fVar9 * fVar2 - fVar1 * fVar3;
  *param_1 = fVar4 - (fVar5 + fVar5);
  fVar5 = fVar9 * fVar1 - fVar2 * fVar3;
  fVar10 = fVar2 * fVar3 + fVar9 * fVar1;
  param_1[1] = fVar6 + fVar6;
  fVar6 = fVar9 * fVar3 + fVar2 * fVar1;
  fVar9 = fVar2 * fVar1 - fVar9 * fVar3;
  param_1[4] = fVar7 + fVar7;
  param_1[2] = fVar5 + fVar5;
  param_1[8] = fVar10 + fVar10;
  param_1[10] = fVar4 - (fVar11 + fVar11);
  param_1[5] = fVar4 - (fVar8 + fVar8);
  param_1[9] = fVar9 + fVar9;
  param_1[6] = fVar6 + fVar6;
  return param_1;
}

