// Function: FUN_1401e2500
// Addr: 1401e2500
// Size: 773 bytes


undefined8 *
FUN_1401e2500(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  
  fVar4 = (float)FUN_14041a2e0(param_3);
  fVar5 = (float)FUN_14041a9c0(param_3);
  fVar8 = param_4[1];
  fVar15 = *param_4;
  fVar11 = param_4[2];
  fVar7 = fVar15 * fVar15 + fVar8 * fVar8 + fVar11 * fVar11;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_14041ad10(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  uVar1 = param_2[5];
  fVar6 = DAT_140492704 - fVar4;
  uVar2 = param_2[3];
  fVar7 = DAT_140492704 / fVar7;
  fVar8 = fVar8 * fVar7;
  fVar11 = fVar11 * fVar7;
  fVar15 = fVar15 * fVar7;
  fVar14 = fVar8 * fVar6;
  fVar7 = fVar15 * fVar6;
  fVar12 = fVar15 * fVar7 + fVar4;
  fVar10 = fVar8 * fVar7 + fVar11 * fVar5;
  uVar3 = param_2[1];
  fVar7 = fVar11 * fVar7 - fVar8 * fVar5;
  fVar13 = fVar15 * fVar14 - fVar11 * fVar5;
  fVar6 = fVar11 * fVar6;
  fVar9 = fVar11 * fVar14 + fVar15 * fVar5;
  *param_1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar12 +
                      (float)((ulonglong)param_2[2] >> 0x20) * fVar10 +
                      (float)((ulonglong)param_2[4] >> 0x20) * fVar7,
                      (float)*param_2 * fVar12 + (float)param_2[2] * fVar10 +
                      (float)param_2[4] * fVar7);
  param_1[1] = CONCAT44((float)((ulonglong)uVar3 >> 0x20) * fVar12 +
                        (float)((ulonglong)uVar2 >> 0x20) * fVar10 +
                        (float)((ulonglong)uVar1 >> 0x20) * fVar7,
                        (float)uVar3 * fVar12 + (float)uVar2 * fVar10 + (float)uVar1 * fVar7);
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  uVar3 = param_2[5];
  fVar7 = fVar8 * fVar14 + fVar4;
  param_1[2] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar13 +
                        (float)((ulonglong)param_2[2] >> 0x20) * fVar7 +
                        (float)((ulonglong)param_2[4] >> 0x20) * fVar9,
                        (float)*param_2 * fVar13 + (float)param_2[2] * fVar7 +
                        (float)param_2[4] * fVar9);
  param_1[3] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar13 +
                        (float)((ulonglong)uVar1 >> 0x20) * fVar7 +
                        (float)((ulonglong)uVar3 >> 0x20) * fVar9,
                        (float)uVar2 * fVar13 + (float)uVar1 * fVar7 + (float)uVar3 * fVar9);
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  uVar3 = param_2[5];
  fVar7 = fVar15 * fVar6 + fVar8 * fVar5;
  fVar8 = fVar8 * fVar6 - fVar15 * fVar5;
  fVar4 = fVar11 * fVar6 + fVar4;
  param_1[4] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar7 +
                        (float)((ulonglong)param_2[2] >> 0x20) * fVar8 +
                        (float)((ulonglong)param_2[4] >> 0x20) * fVar4,
                        (float)*param_2 * fVar7 + (float)param_2[2] * fVar8 +
                        (float)param_2[4] * fVar4);
  param_1[5] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar7 +
                        (float)((ulonglong)uVar1 >> 0x20) * fVar8 +
                        (float)((ulonglong)uVar3 >> 0x20) * fVar4,
                        (float)uVar2 * fVar7 + (float)uVar1 * fVar8 + (float)uVar3 * fVar4);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  return param_1;
}

