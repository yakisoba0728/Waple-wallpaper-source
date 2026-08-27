// Function: FUN_140218db0
// Addr: 140218db0
// Size: 529 bytes


float * FUN_140218db0(float *param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_2[8];
  fVar3 = param_2[4];
  fVar1 = *param_2;
  fVar7 = (fVar3 - fVar1) - fVar5;
  fVar6 = (fVar5 - fVar1) - fVar3;
  fVar4 = fVar1 + fVar3 + fVar5;
  fVar5 = (fVar1 - fVar3) - fVar5;
  fVar3 = fVar4;
  if (fVar4 < fVar5) {
    fVar3 = fVar5;
  }
  cVar2 = fVar4 < fVar5;
  if (fVar3 < fVar7) {
    cVar2 = '\x02';
    fVar3 = fVar7;
  }
  if (fVar3 < fVar6) {
    cVar2 = '\x03';
    fVar3 = fVar6;
  }
  fVar3 = fVar3 + DAT_140492704;
  if (fVar3 < 0.0) {
    fVar3 = (float)FUN_14041ad10(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  fVar3 = fVar3 * DAT_1404926c0;
  fVar5 = DAT_14049268c / fVar3;
  if (cVar2 == '\0') {
    fVar1 = param_2[5];
    fVar4 = param_2[7];
    fVar6 = param_2[6] - param_2[2];
    *param_1 = fVar3;
    param_1[1] = (fVar1 - fVar4) * fVar5;
    fVar3 = param_2[1] - param_2[3];
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\x02') {
        if (cVar2 == '\x03') {
          fVar1 = param_2[1];
          fVar4 = param_2[3];
          fVar6 = param_2[6];
          fVar7 = param_2[2];
          param_1[3] = fVar3;
          *param_1 = (fVar1 - fVar4) * fVar5;
          fVar3 = param_2[7];
          fVar1 = param_2[5];
          param_1[1] = (fVar6 + fVar7) * fVar5;
          param_1[2] = (fVar3 + fVar1) * fVar5;
          return param_1;
        }
        FID_conflict__assert
                  (L"false",L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\quaternion.inl",
                   0x78);
        param_1[0] = 1.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        return param_1;
      }
      fVar1 = param_2[6];
      fVar4 = param_2[2];
      fVar6 = param_2[3];
      fVar7 = param_2[1];
      param_1[2] = fVar3;
      *param_1 = (fVar1 - fVar4) * fVar5;
      fVar3 = param_2[7] + param_2[5];
      param_1[1] = (fVar6 + fVar7) * fVar5;
      goto LAB_140218fa5;
    }
    fVar1 = param_2[5];
    fVar4 = param_2[7];
    fVar6 = param_2[3] + param_2[1];
    param_1[1] = fVar3;
    *param_1 = (fVar1 - fVar4) * fVar5;
    fVar3 = param_2[6] + param_2[2];
  }
  param_1[2] = fVar6 * fVar5;
LAB_140218fa5:
  param_1[3] = fVar3 * fVar5;
  return param_1;
}

