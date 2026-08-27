// Function: FUN_140215730
// Addr: 140215730
// Size: 590 bytes


float * FUN_140215730(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = DAT_140492704;
  fVar7 = param_2[5];
  fVar11 = param_2[10];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar12 = (fVar7 - fVar1) - fVar11;
  fVar4 = param_2[4];
  fVar8 = (fVar11 - fVar1) - fVar7;
  fVar10 = fVar1 + fVar7 + fVar11;
  fVar5 = param_2[6];
  fVar11 = (fVar1 - fVar7) - fVar11;
  fVar7 = param_2[8];
  fVar1 = param_2[9];
  fVar9 = fVar10;
  if (fVar10 < fVar11) {
    fVar9 = fVar11;
  }
  cVar6 = fVar10 < fVar11;
  if (fVar9 < fVar12) {
    cVar6 = '\x02';
    fVar9 = fVar12;
  }
  if (fVar8 <= fVar9) {
    fVar9 = fVar9 + DAT_140492704;
    if (fVar9 < 0.0) {
      fVar9 = (float)FUN_14041ad10(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    fVar9 = fVar9 * DAT_1404926c0;
    fVar11 = DAT_14049268c / fVar9;
    if (cVar6 == '\0') {
      fVar10 = fVar7 - fVar3;
      fVar12 = fVar5 - fVar1;
      fVar8 = (fVar2 - fVar4) * fVar11;
      fVar13 = fVar9;
      goto LAB_14021592c;
    }
    if (cVar6 == '\x01') {
      fVar8 = (fVar3 + fVar7) * fVar11;
      fVar7 = (fVar2 + fVar4) * fVar11;
      fVar13 = (fVar5 - fVar1) * fVar11;
      goto LAB_140215934;
    }
    if (cVar6 != '\x02') {
      fVar8 = fVar9;
      if (cVar6 != '\x03') {
        FID_conflict__assert
                  (L"false",L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\quaternion.inl",
                   0x78);
        fVar8 = 0.0;
        fVar7 = 0.0;
        fVar9 = 0.0;
        goto LAB_140215934;
      }
      goto LAB_14021581c;
    }
    fVar12 = fVar2 + fVar4;
    fVar8 = (fVar5 + fVar1) * fVar11;
    fVar13 = (fVar7 - fVar3) * fVar11;
    fVar7 = fVar9;
  }
  else {
    fVar8 = fVar8 + DAT_140492704;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_14041ad10(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar11 = DAT_14049268c / (fVar8 * DAT_1404926c0);
    fVar8 = fVar8 * DAT_1404926c0;
LAB_14021581c:
    fVar10 = fVar5 + fVar1;
    fVar12 = fVar3 + fVar7;
    fVar13 = (fVar2 - fVar4) * fVar11;
LAB_14021592c:
    fVar7 = fVar10 * fVar11;
  }
  fVar9 = fVar12 * fVar11;
LAB_140215934:
  *param_1 = fVar13;
  param_1[1] = fVar9;
  param_1[2] = fVar7;
  param_1[3] = fVar8;
  return param_1;
}

