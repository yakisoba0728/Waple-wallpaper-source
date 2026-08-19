// Function: FUN_14024f150
// Addr: 14024f150
// Size: 86 bytes


float * FUN_14024f150(float *param_1,float *param_2,float *param_3)

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
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_3[3];
  fVar2 = param_3[2];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  fVar7 = param_2[0xb];
  fVar8 = param_2[0xd];
  fVar9 = param_2[0xe];
  fVar10 = param_2[0xf];
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  fVar3 = param_3[1];
  fVar4 = *param_3;
  *param_1 = *param_2 * fVar4 + param_2[4] * fVar3 + param_2[8] * fVar2 + param_2[0xc] * fVar1;
  param_1[1] = fVar11 * fVar4 + fVar14 * fVar3 + fVar5 * fVar2 + fVar8 * fVar1;
  param_1[2] = fVar12 * fVar4 + fVar15 * fVar3 + fVar6 * fVar2 + fVar9 * fVar1;
  param_1[3] = fVar13 * fVar4 + fVar16 * fVar3 + fVar7 * fVar2 + fVar10 * fVar1;
  return param_1;
}

