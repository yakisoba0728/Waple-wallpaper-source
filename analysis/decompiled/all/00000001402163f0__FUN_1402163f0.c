// Function: FUN_1402163f0
// Addr: 1402163f0
// Size: 478 bytes


undefined8 * FUN_1402163f0(undefined8 *param_1,undefined8 *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = *(float *)(param_2 + 1);
  fVar4 = param_3[1];
  fVar5 = *(float *)((longlong)param_2 + 0x14);
  fVar6 = param_3[3];
  fVar17 = (float)*param_2;
  fVar18 = (float)((ulonglong)*param_2 >> 0x20);
  fVar15 = (float)*(undefined8 *)((longlong)param_2 + 0xc);
  fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
  fVar13 = (float)param_2[3];
  fVar14 = (float)((ulonglong)param_2[3] >> 0x20);
  fVar7 = *(float *)(param_2 + 4);
  fVar8 = param_3[4];
  fVar9 = param_3[5];
  fVar10 = param_3[6];
  fVar11 = param_3[7];
  fVar12 = param_3[8];
  *param_1 = CONCAT44(fVar4 * fVar16 + fVar1 * fVar18 + fVar2 * fVar14,
                      fVar4 * fVar15 + fVar1 * fVar17 + fVar2 * fVar13);
  *(float *)(param_1 + 1) = fVar4 * fVar5 + fVar1 * fVar3 + fVar2 * fVar7;
  *(ulonglong *)((longlong)param_1 + 0xc) =
       CONCAT44(fVar8 * fVar16 + fVar6 * fVar18 + fVar9 * fVar14,
                fVar8 * fVar15 + fVar6 * fVar17 + fVar9 * fVar13);
  *(float *)((longlong)param_1 + 0x14) = fVar8 * fVar5 + fVar6 * fVar3 + fVar9 * fVar7;
  param_1[3] = CONCAT44(fVar11 * fVar16 + fVar10 * fVar18 + fVar12 * fVar14,
                        fVar11 * fVar15 + fVar10 * fVar17 + fVar12 * fVar13);
  *(float *)(param_1 + 4) = fVar11 * fVar5 + fVar10 * fVar3 + fVar12 * fVar7;
  return param_1;
}

