// Function: FUN_140218e80
// Addr: 140218e80
// Size: 283 bytes


float * FUN_140218e80(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = param_2[8];
  fVar4 = param_2[4];
  fVar1 = *param_2;
  fVar8 = (fVar4 - fVar1) - fVar6;
  fVar7 = (fVar6 - fVar1) - fVar4;
  fVar5 = fVar1 + fVar4 + fVar6;
  fVar6 = (fVar1 - fVar4) - fVar6;
  fVar4 = fVar5;
  if (fVar5 < fVar6) {
    fVar4 = fVar6;
  }
  cVar3 = fVar5 < fVar6;
  if (fVar4 < fVar8) {
    cVar3 = '\x02';
    fVar4 = fVar8;
  }
  if (fVar4 < fVar7) {
    cVar3 = '\x03';
    fVar4 = fVar7;
  }
  fVar4 = fVar4 + DAT_1404927d4;
  if (fVar4 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar4);
  }
  fVar4 = SQRT(fVar4) * DAT_140492790;
  fVar6 = DAT_14049275c / fVar4;
  if (cVar3 == '\0') {
    fVar1 = param_2[5];
    fVar5 = param_2[7];
    fVar7 = param_2[6] - param_2[2];
    *param_1 = fVar4;
    param_1[1] = (fVar1 - fVar5) * fVar6;
    fVar4 = param_2[1] - param_2[3];
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 != '\x02') {
        if (cVar3 == '\x03') {
          fVar1 = param_2[1];
          fVar5 = param_2[3];
          fVar7 = param_2[6];
          fVar8 = param_2[2];
          param_1[3] = fVar4;
          *param_1 = (fVar1 - fVar5) * fVar6;
          fVar4 = param_2[7];
          fVar1 = param_2[5];
          param_1[1] = (fVar7 + fVar8) * fVar6;
          param_1[2] = (fVar4 + fVar1) * fVar6;
          return param_1;
        }
        pfVar2 = (float *)func_0x0001402cba34(L"false",
                                              L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\quaternion.inl"
                                              ,0x78);
        return pfVar2;
      }
      fVar1 = param_2[6];
      fVar5 = param_2[2];
      fVar7 = param_2[3];
      fVar8 = param_2[1];
      param_1[2] = fVar4;
      *param_1 = (fVar1 - fVar5) * fVar6;
      fVar4 = param_2[7] + param_2[5];
      param_1[1] = (fVar7 + fVar8) * fVar6;
      goto code_r0x000140219075;
    }
    fVar1 = param_2[5];
    fVar5 = param_2[7];
    fVar7 = param_2[3] + param_2[1];
    param_1[1] = fVar4;
    *param_1 = (fVar1 - fVar5) * fVar6;
    fVar4 = param_2[6] + param_2[2];
  }
  param_1[2] = fVar7 * fVar6;
code_r0x000140219075:
  param_1[3] = fVar4 * fVar6;
  return param_1;
}

