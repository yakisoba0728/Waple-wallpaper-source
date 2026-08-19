// Function: FUN_140108cf0
// Addr: 140108cf0
// Size: 118 bytes


void FUN_140108cf0(int *param_1,int *param_2,int param_3,float *param_4,int *param_5,int *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  float fVar17;
  float fVar18;
  
  iVar6 = param_2[1];
  fVar7 = 0.0;
  fVar9 = 0.0;
  fVar14 = 0.0;
  iVar3 = *param_2;
  fVar18 = 0.0;
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[2] = iVar3;
  param_5[3] = iVar6;
  iVar6 = *param_1;
  iVar3 = param_1[1];
  param_6[0] = 0;
  param_6[1] = 0;
  param_6[2] = iVar6;
  param_6[3] = iVar3;
  fVar8 = DAT_1404927d4;
  fVar16 = (float)*param_2;
  fVar10 = (float)*param_1;
  fVar17 = (float)param_2[1];
  fVar11 = (float)param_1[1];
  if (param_3 == 1) {
    fVar8 = param_4[3];
    fVar15 = (DAT_1404927d4 - fVar8) + (DAT_1404927d4 - fVar8);
    if (fVar16 / fVar17 < fVar10 / fVar11) {
      fVar7 = (fVar16 - (fVar17 / fVar11) * fVar10) * DAT_140492790;
      fVar8 = fVar8 * fVar7;
      fVar7 = fVar15 * fVar7;
      fVar14 = fVar8 + fVar8;
      goto code_r0x000140109027;
    }
  }
  else {
    if (param_3 == 2) goto code_r0x000140109027;
    if (param_3 == 3) {
      fVar14 = (fVar16 - fVar10) * *param_4;
      fVar7 = (DAT_1404927d4 - *param_4) * (fVar16 - fVar10);
      fVar9 = (DAT_1404927d4 - param_4[1]) * (fVar17 - fVar11);
      fVar18 = (fVar17 - fVar11) * param_4[1];
      goto code_r0x000140109027;
    }
    if (param_3 == 4) {
      fVar15 = *param_4;
      fVar1 = param_4[1];
      fVar12 = DAT_1404927d4 - fVar15;
      fVar13 = DAT_1404927d4 - fVar1;
      fVar14 = fVar16 - fVar15 * (fVar16 + fVar10);
      fVar7 = fVar16 - fVar12 * (fVar16 + fVar10);
      fVar9 = fVar17 - fVar13 * (fVar17 + fVar11);
      fVar18 = fVar17 - fVar1 * (fVar17 + fVar11);
      fVar11 = (float)FUN_14041e420((DAT_1404927d4 - param_4[2]) + DAT_1404927d4);
      fVar10 = DAT_140492a80;
      if (DAT_140492a80 <= fVar11 - fVar8) {
        fVar10 = fVar11 - fVar8;
      }
      fVar8 = ((fVar17 - fVar18) - fVar9) * fVar10;
      fVar10 = ((fVar16 - fVar7) - fVar14) * fVar10;
      fVar18 = fVar18 - fVar1 * fVar8;
      fVar14 = fVar14 - fVar15 * fVar10;
      fVar9 = fVar9 - fVar8 * fVar13;
      fVar7 = fVar7 - fVar10 * fVar12;
      goto code_r0x000140109027;
    }
    fVar8 = param_4[3];
    fVar15 = (DAT_1404927d4 - fVar8) + (DAT_1404927d4 - fVar8);
    if (fVar10 / fVar11 < fVar16 / fVar17) {
      fVar14 = (fVar16 - (fVar17 / fVar11) * fVar10) * DAT_140492790;
      fVar8 = fVar8 * fVar14;
      fVar14 = fVar15 * fVar14;
      fVar7 = fVar8 + fVar8;
      goto code_r0x000140109027;
    }
  }
  fVar14 = 0.0;
  fVar7 = 0.0;
  fVar9 = (fVar17 - (fVar16 / fVar10) * fVar11) * DAT_140492790;
  fVar8 = fVar8 * fVar9;
  fVar9 = fVar15 * fVar9;
  fVar18 = fVar8 + fVar8;
code_r0x000140109027:
  iVar6 = 0;
  if (0.0 <= fVar14) {
    iVar3 = iVar6;
    if (0.0 < fVar14) {
      *param_5 = (int)((float)*param_5 + fVar14);
    }
  }
  else {
    iVar3 = (int)(fVar14 + 0.0);
  }
  if (0.0 <= fVar9) {
    iVar5 = iVar6;
    if (0.0 < fVar9) {
      param_5[1] = (int)((float)param_5[1] + fVar9);
    }
  }
  else {
    iVar5 = (int)(fVar9 + 0.0);
  }
  if (0.0 <= fVar7) {
    iVar4 = iVar6;
    if (0.0 < fVar7) {
      param_5[2] = (int)((float)param_5[2] - fVar7);
    }
  }
  else {
    iVar4 = (int)(0.0 - fVar7);
  }
  if (0.0 <= fVar18) {
    iVar2 = iVar6;
    if (0.0 < fVar18) {
      param_5[3] = (int)((float)param_5[3] - fVar18);
    }
  }
  else {
    iVar2 = (int)(0.0 - fVar18);
  }
  if (0.0 < (float)(iVar4 - iVar3)) {
    fVar8 = (float)*param_1 / ((float)(param_5[2] - *param_5) + (float)(iVar4 - iVar3));
    *param_6 = (int)((float)*param_6 - (float)iVar3 * fVar8);
    param_6[2] = (int)((float)param_6[2] - (float)iVar4 * fVar8);
  }
  if (0.0 < (float)(iVar2 - iVar5)) {
    fVar8 = (float)param_1[1] / ((float)(param_5[3] - param_5[1]) + (float)(iVar2 - iVar5));
    param_6[1] = (int)((float)param_6[1] - (float)iVar5 * fVar8);
    param_6[3] = (int)((float)param_6[3] - (float)iVar2 * fVar8);
  }
  if (param_5[2] == *param_5) {
    iVar3 = *param_5 + -1;
    iVar5 = param_5[2] + 1;
    param_5[2] = iVar5;
    if (iVar3 < 1) {
      iVar3 = iVar6;
    }
    *param_5 = iVar3;
    if (*param_2 <= iVar5) {
      iVar5 = *param_2;
    }
    param_5[2] = iVar5;
  }
  if (param_5[3] == param_5[1]) {
    iVar3 = param_5[1] + -1;
    iVar6 = param_5[3] + 1;
    param_5[3] = iVar6;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    param_5[1] = iVar3;
    if (param_2[1] <= iVar6) {
      iVar6 = param_2[1];
    }
    param_5[3] = iVar6;
  }
  return;
}

