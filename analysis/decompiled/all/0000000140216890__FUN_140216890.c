// Function: FUN_140216890
// Addr: 140216890
// Size: 369 bytes


float * FUN_140216890(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = param_2[2];
  fVar8 = *param_2;
  fVar4 = param_3[1];
  fVar1 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = *param_3;
  fVar2 = fVar8 * fVar6 + fVar1 * fVar4 + fVar3 * fVar5;
  if (fVar2 < DAT_1404927d0) {
    if (fVar2 < DAT_140492a84) {
      fVar2 = fVar3 * 0.0;
      fVar6 = fVar8 * 0.0;
      fVar8 = fVar8 - fVar2;
      fVar4 = fVar2 - fVar1;
      fVar5 = fVar1 * 0.0 - fVar6;
      if (fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5 < DAT_1404926b0) {
        fVar4 = fVar2 - fVar1 * 0.0;
        fVar8 = fVar6 - fVar3;
        fVar5 = fVar1 - fVar6;
      }
      fVar3 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar3 < 0.0) {
                    /* WARNING: Subroutine does not return */
        FUN_14041ade0(fVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_14041aa90(DAT_140492814);
    }
    fVar2 = fVar2 + DAT_1404927d4 + fVar2 + DAT_1404927d4;
    if (fVar2 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041ade0(fVar2);
    }
    fVar7 = DAT_1404927d4 / SQRT(fVar2);
    *param_1 = SQRT(fVar2) * DAT_140492790;
    param_1[1] = (fVar5 * fVar1 - fVar3 * fVar4) * fVar7;
    param_1[2] = (fVar3 * fVar6 - fVar5 * fVar8) * fVar7;
    param_1[3] = (fVar4 * fVar8 - fVar1 * fVar6) * fVar7;
  }
  else {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  return param_1;
}

