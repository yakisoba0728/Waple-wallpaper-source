// Function: FUN_1403eca10
// Addr: 1403eca10
// Size: 300 bytes


void FUN_1403eca10(float *param_1,float *param_2,char param_3)

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
  float *pfVar13;
  float *pfVar14;
  
  pfVar14 = param_2;
  pfVar13 = param_1;
  if (param_3 != '\0') {
    pfVar14 = param_1;
    pfVar13 = param_2;
  }
  fVar1 = *pfVar13;
  fVar2 = pfVar13[1];
  fVar3 = pfVar13[3];
  fVar4 = pfVar14[4];
  fVar5 = pfVar14[5];
  fVar6 = pfVar13[2];
  fVar7 = pfVar14[2];
  fVar8 = *pfVar14;
  fVar9 = pfVar14[1];
  fVar10 = pfVar14[3];
  fVar11 = pfVar13[5];
  fVar12 = pfVar13[4];
  *param_1 = fVar9 * fVar6 + fVar8 * fVar1;
  param_1[1] = fVar3 * fVar9 + fVar2 * fVar8;
  param_1[2] = fVar10 * fVar6 + fVar7 * fVar1;
  param_1[3] = fVar10 * fVar3 + fVar7 * fVar2;
  param_1[4] = fVar5 * fVar6 + fVar4 * fVar1 + fVar12;
  param_1[5] = fVar5 * fVar3 + fVar4 * fVar2 + fVar11;
  return;
}

