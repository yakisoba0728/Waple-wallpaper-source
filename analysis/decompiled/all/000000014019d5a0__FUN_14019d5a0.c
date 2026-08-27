// Function: FUN_14019d5a0
// Addr: 14019d5a0
// Size: 838 bytes


ulonglong FUN_14019d5a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                       float *param_6,float *param_7)

{
  byte bVar1;
  bool bVar2;
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
  
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar11 = *param_4 - fVar5;
  fVar12 = param_4[1] - fVar4;
  bVar1 = 1;
  fVar8 = param_5[1] - fVar4;
  fVar6 = param_3[2];
  fVar10 = param_5[2] - fVar6;
  fVar3 = *param_5 - fVar5;
  fVar13 = param_4[2] - fVar6;
  fVar15 = param_2[1] * fVar10 - param_2[2] * fVar8;
  fVar14 = param_2[2] * fVar3 - *param_2 * fVar10;
  fVar7 = *param_2 * fVar8 - param_2[1] * fVar3;
  fVar9 = fVar15 * fVar11 + fVar14 * fVar12 + fVar7 * fVar13;
  if (fVar9 <= DAT_1404925e0) {
    if (DAT_1404929a4 <= fVar9) {
      param_6[0] = 0.0;
      param_6[1] = 0.0;
      *param_7 = -1.0;
      return (ulonglong)param_7 & 0xffffffffffffff00;
    }
    fVar5 = *param_1 - fVar5;
    fVar4 = param_1[1] - fVar4;
    fVar6 = param_1[2] - fVar6;
    fVar7 = fVar4 * fVar14 + fVar5 * fVar15 + fVar7 * fVar6;
    *param_6 = fVar7;
    if ((0.0 < fVar7) || (fVar7 < fVar9)) {
      bVar1 = 0;
    }
    fVar14 = fVar4 * fVar13 - fVar12 * fVar6;
    fVar6 = fVar11 * fVar6 - fVar5 * fVar13;
    fVar5 = fVar5 * fVar12 - fVar4 * fVar11;
    fVar4 = fVar6 * param_2[1] + fVar14 * *param_2 + fVar5 * param_2[2];
    param_6[1] = fVar4;
    if (fVar4 <= 0.0) {
      bVar2 = fVar9 < fVar4;
      goto LAB_14019d83f;
    }
  }
  else {
    fVar5 = *param_1 - fVar5;
    fVar4 = param_1[1] - fVar4;
    fVar6 = param_1[2] - fVar6;
    fVar7 = fVar5 * fVar15 + fVar4 * fVar14 + fVar6 * fVar7;
    *param_6 = fVar7;
    if ((fVar7 < 0.0) || (fVar9 < fVar7)) {
      bVar1 = 0;
    }
    fVar14 = fVar4 * fVar13 - fVar6 * fVar12;
    fVar6 = fVar6 * fVar11 - fVar5 * fVar13;
    fVar5 = fVar5 * fVar12 - fVar4 * fVar11;
    fVar4 = fVar6 * param_2[1] + fVar14 * *param_2 + fVar5 * param_2[2];
    param_6[1] = fVar4;
    if (0.0 <= fVar4) {
      bVar2 = fVar4 < fVar9;
LAB_14019d83f:
      if (bVar2 || fVar4 == fVar9) goto LAB_14019d843;
    }
  }
  bVar1 = 0;
LAB_14019d843:
  fVar9 = DAT_140492704 / fVar9;
  *param_6 = fVar7 * fVar9;
  param_6[1] = fVar4 * fVar9;
  *param_7 = (fVar8 * fVar6 + fVar14 * fVar3 + fVar10 * fVar5) * fVar9;
  return (ulonglong)bVar1;
}

