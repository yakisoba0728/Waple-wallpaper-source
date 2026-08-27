// Function: FUN_14019d920
// Addr: 14019d920
// Size: 643 bytes


float * FUN_14019d920(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar2 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_14041ad10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar10 = DAT_140492704;
  fVar2 = DAT_140492704 / fVar2;
  fVar4 = fVar4 * fVar2;
  fVar6 = fVar6 * fVar2;
  fVar5 = fVar5 * fVar2;
  fVar7 = param_4[2] * fVar5 - param_4[1] * fVar6;
  fVar9 = *param_4 * fVar6 - param_4[2] * fVar4;
  fVar8 = param_4[1] * fVar4 - *param_4 * fVar5;
  fVar2 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_14041ad10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  uVar1 = DAT_140492ff0;
  fVar10 = fVar10 / fVar2;
  param_1[0xf] = 1.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  fVar7 = fVar7 * fVar10;
  fVar9 = fVar9 * fVar10;
  fVar8 = fVar8 * fVar10;
  *param_1 = fVar7;
  param_1[4] = fVar9;
  param_1[8] = fVar8;
  param_1[10] = (float)((uint)fVar6 ^ uVar1);
  fVar3 = fVar6 * fVar9 - fVar5 * fVar8;
  param_1[1] = fVar3;
  fVar10 = fVar4 * fVar8 - fVar6 * fVar7;
  param_1[5] = fVar10;
  fVar2 = fVar5 * fVar7 - fVar4 * fVar9;
  param_1[2] = (float)((uint)fVar4 ^ uVar1);
  param_1[6] = (float)((uint)fVar5 ^ uVar1);
  param_1[9] = fVar2;
  param_1[0xc] = (float)((uint)(fVar7 * *param_2 + fVar9 * param_2[1] + fVar8 * param_2[2]) ^ uVar1)
  ;
  param_1[0xd] = (float)((uint)(fVar3 * *param_2 + fVar10 * param_2[1] + fVar2 * param_2[2]) ^ uVar1
                        );
  param_1[0xe] = fVar4 * *param_2 + fVar5 * param_2[1] + fVar6 * param_2[2];
  return param_1;
}

