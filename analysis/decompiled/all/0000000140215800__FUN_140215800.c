// Function: FUN_140215800
// Addr: 140215800
// Size: 482 bytes


float * FUN_140215800(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = param_2[5];
  fVar10 = param_2[10];
  fVar1 = *param_2;
  fVar7 = param_2[1];
  fVar2 = param_2[2];
  fVar12 = (fVar13 - fVar1) - fVar10;
  fVar3 = param_2[4];
  fVar8 = (fVar10 - fVar1) - fVar13;
  fVar9 = fVar1 + fVar13 + fVar10;
  fVar4 = param_2[6];
  fVar10 = (fVar1 - fVar13) - fVar10;
  fVar13 = param_2[8];
  fVar1 = param_2[9];
  fVar11 = fVar9;
  if (fVar9 < fVar10) {
    fVar11 = fVar10;
  }
  cVar6 = fVar9 < fVar10;
  if (fVar11 < fVar12) {
    cVar6 = '\x02';
    fVar11 = fVar12;
  }
  if (fVar8 <= fVar11) {
    fVar11 = fVar11 + DAT_1404927d4;
    if (fVar11 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041ade0(fVar11);
    }
    fVar10 = SQRT(fVar11) * DAT_140492790;
    fVar11 = DAT_14049275c / fVar10;
    if (cVar6 == '\0') {
      fVar9 = fVar13 - fVar2;
      fVar12 = fVar4 - fVar1;
      fVar8 = (fVar7 - fVar3) * fVar11;
      fVar13 = fVar10;
      goto UNWIND_INFO_1402159f6_ExceptionHandler_2;
    }
    if (cVar6 == '\x01') {
      fVar8 = (fVar2 + fVar13) * fVar11;
      fVar7 = (fVar7 + fVar3) * fVar11;
      fVar13 = (fVar4 - fVar1) * fVar11;
      goto LAB_140215a04;
    }
    if (cVar6 != '\x02') {
      fVar8 = fVar10;
      if (cVar6 != '\x03') {
        pfVar5 = (float *)func_0x0001402cba34(L"false",
                                              L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\gtc\\quaternion.inl"
                                              ,0x78);
        return pfVar5;
      }
      goto LAB_1402158ec;
    }
    fVar12 = fVar7 + fVar3;
    fVar8 = (fVar4 + fVar1) * fVar11;
    fVar13 = (fVar13 - fVar2) * fVar11;
  }
  else {
    fVar8 = fVar8 + DAT_1404927d4;
    if (fVar8 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041ade0(fVar8);
    }
    fVar11 = DAT_14049275c / (SQRT(fVar8) * DAT_140492790);
    fVar8 = SQRT(fVar8) * DAT_140492790;
LAB_1402158ec:
    fVar9 = fVar4 + fVar1;
    fVar12 = fVar2 + fVar13;
    fVar13 = (fVar7 - fVar3) * fVar11;
UNWIND_INFO_1402159f6_ExceptionHandler_2:
    fVar10 = fVar9 * fVar11;
  }
  fVar7 = fVar10;
  fVar10 = fVar12 * fVar11;
LAB_140215a04:
  *param_1 = fVar13;
  param_1[1] = fVar10;
  param_1[2] = fVar7;
  param_1[3] = fVar8;
  return param_1;
}

