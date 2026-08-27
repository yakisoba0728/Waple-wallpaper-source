// Function: FUN_14019d470
// Addr: 14019d470
// Size: 98 bytes


float * FUN_14019d470(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  fVar10 = param_2[0xb];
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xf];
  *param_1 = *param_2 * fVar1 + param_2[4] * fVar2 + param_2[8] * fVar3 + param_2[0xc] * fVar4;
  param_1[1] = fVar11 * fVar1 + fVar5 * fVar2 + fVar8 * fVar3 + fVar14 * fVar4;
  param_1[2] = fVar12 * fVar1 + fVar6 * fVar2 + fVar9 * fVar3 + fVar15 * fVar4;
  param_1[3] = fVar13 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar16 * fVar4;
  return param_1;
}

