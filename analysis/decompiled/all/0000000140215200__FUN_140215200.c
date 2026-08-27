// Function: FUN_140215200
// Addr: 140215200
// Size: 383 bytes


float * FUN_140215200(float *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  
  fVar4 = param_2[3];
  fVar11 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  param_1[3] = 0.0;
  fVar3 = DAT_140492704;
  fVar5 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar7 = fVar1 * fVar4 - fVar2 * fVar11;
  fVar12 = fVar2 * fVar11 + fVar1 * fVar4;
  fVar6 = fVar4 * fVar11 + fVar1 * fVar2;
  fVar9 = fVar1 * fVar2 - fVar4 * fVar11;
  fVar8 = fVar1 * fVar11 + fVar2 * fVar4;
  fVar10 = fVar4 * fVar4 + fVar1 * fVar1;
  fVar13 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar11 = fVar2 * fVar4 - fVar1 * fVar11;
  fVar4 = DAT_140492704 - (fVar5 + fVar5);
  param_1[1] = fVar6 + fVar6;
  param_1[2] = fVar7 + fVar7;
  *param_1 = fVar4;
  param_1[4] = fVar9 + fVar9;
  param_1[7] = 0.0;
  param_1[5] = fVar3 - (fVar10 + fVar10);
  param_1[6] = fVar8 + fVar8;
  param_1[8] = fVar12 + fVar12;
  param_1[9] = fVar11 + fVar11;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[10] = fVar3 - (fVar13 + fVar13);
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return param_1;
}

