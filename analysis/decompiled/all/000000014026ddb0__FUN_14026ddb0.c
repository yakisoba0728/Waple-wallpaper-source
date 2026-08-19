// Function: FUN_14026ddb0
// Addr: 14026ddb0
// Size: 46 bytes


bool FUN_14026ddb0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = param_2[3];
  fVar3 = (float)*(undefined8 *)(param_1 + 4);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar10 = param_1[3];
  fVar15 = (float)*(undefined8 *)(param_2 + 4);
  fVar16 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar17 = fVar10 * fVar10 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar14 = fVar10 * fVar1 + fVar3 * fVar15 + fVar5 * fVar16;
  fVar18 = fVar1 * fVar1 + fVar15 * fVar15 + fVar16 * fVar16;
  fVar7 = fVar17 * fVar18 - fVar14 * fVar14;
  if (fVar7 != 0.0) {
    fVar12 = (float)*(undefined8 *)(param_1 + 1);
    fVar13 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    fVar2 = *param_2;
    fVar11 = *param_1 - fVar2;
    fVar4 = (float)*(undefined8 *)(param_2 + 1);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
    fVar9 = fVar12 - fVar4;
    fVar8 = fVar13 - fVar6;
    fVar10 = fVar10 * fVar11 + fVar3 * fVar9 + fVar5 * fVar8;
    fVar8 = fVar15 * fVar9 + fVar1 * fVar11 + fVar16 * fVar8;
    fVar17 = (fVar8 * fVar17 - fVar10 * fVar14) / fVar7;
    fVar10 = (fVar8 * fVar14 - fVar10 * fVar18) / fVar7;
    *param_3 = param_1[3] * fVar10 + *param_1;
    *(ulonglong *)(param_3 + 1) = CONCAT44(fVar13 + fVar5 * fVar10,fVar12 + fVar3 * fVar10);
    *param_4 = fVar1 * fVar17 + fVar2;
    *(ulonglong *)(param_4 + 1) = CONCAT44(fVar6 + fVar16 * fVar17,fVar4 + fVar15 * fVar17);
  }
  return fVar7 != 0.0;
}

