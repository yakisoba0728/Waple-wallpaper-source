// Function: FUN_14024f0e0
// Addr: 14024f0e0
// Size: 492 bytes


float * FUN_14024f0e0(float *param_1,float *param_2,float *param_3)

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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar17 = param_2[0xc];
  fVar18 = param_2[0xd];
  fVar19 = param_2[0xe];
  fVar20 = param_2[0xf];
  fVar21 = param_2[8];
  fVar22 = param_2[9];
  fVar23 = param_2[10];
  fVar24 = param_2[0xb];
  uVar31 = *(undefined8 *)param_2;
  uVar32 = *(undefined8 *)(param_2 + 2);
  fVar25 = param_2[1];
  fVar26 = param_2[2];
  fVar27 = param_2[3];
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_3[4];
  fVar5 = param_3[0xc];
  fVar6 = param_3[8];
  fVar7 = param_3[9];
  fVar8 = param_3[10];
  fVar9 = param_3[0xb];
  fVar10 = param_3[0xf];
  fVar11 = param_3[0xd];
  fVar12 = param_3[0xe];
  fVar13 = *param_3;
  fVar14 = param_3[1];
  fVar28 = param_2[5];
  fVar29 = param_2[6];
  fVar30 = param_2[7];
  fVar15 = param_3[2];
  local_d8 = (float)*(undefined8 *)(param_2 + 4);
  fStack_d4 = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fStack_d0 = (float)*(undefined8 *)(param_2 + 6);
  fStack_cc = (float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
  fVar16 = param_3[3];
  *param_1 = *param_2 * fVar13 + param_2[4] * fVar14 + fVar21 * fVar15 + fVar17 * fVar16;
  param_1[1] = fVar25 * fVar13 + fVar28 * fVar14 + fVar22 * fVar15 + fVar18 * fVar16;
  param_1[2] = fVar26 * fVar13 + fVar29 * fVar14 + fVar23 * fVar15 + fVar19 * fVar16;
  param_1[3] = fVar27 * fVar13 + fVar30 * fVar14 + fVar24 * fVar15 + fVar20 * fVar16;
  local_c8 = (float)uVar31;
  fStack_c4 = (float)((ulonglong)uVar31 >> 0x20);
  fStack_c0 = (float)uVar32;
  fStack_bc = (float)((ulonglong)uVar32 >> 0x20);
  param_1[4] = fVar4 * local_c8 + fVar1 * local_d8 + fVar2 * fVar21 + fVar3 * fVar17;
  param_1[5] = fVar4 * fStack_c4 + fVar1 * fStack_d4 + fVar2 * fVar22 + fVar3 * fVar18;
  param_1[6] = fVar4 * fStack_c0 + fVar1 * fStack_d0 + fVar2 * fVar23 + fVar3 * fVar19;
  param_1[7] = fVar4 * fStack_bc + fVar1 * fStack_cc + fVar2 * fVar24 + fVar3 * fVar20;
  param_1[8] = fVar6 * local_c8 + fVar7 * local_d8 + fVar8 * fVar21 + fVar9 * fVar17;
  param_1[9] = fVar6 * fStack_c4 + fVar7 * fStack_d4 + fVar8 * fVar22 + fVar9 * fVar18;
  param_1[10] = fVar6 * fStack_c0 + fVar7 * fStack_d0 + fVar8 * fVar23 + fVar9 * fVar19;
  param_1[0xb] = fVar6 * fStack_bc + fVar7 * fStack_cc + fVar8 * fVar24 + fVar9 * fVar20;
  param_1[0xc] = local_c8 * fVar5 + local_d8 * fVar11 + fVar21 * fVar12 + fVar17 * fVar10;
  param_1[0xd] = fStack_c4 * fVar5 + fStack_d4 * fVar11 + fVar22 * fVar12 + fVar18 * fVar10;
  param_1[0xe] = fStack_c0 * fVar5 + fStack_d0 * fVar11 + fVar23 * fVar12 + fVar19 * fVar10;
  param_1[0xf] = fStack_bc * fVar5 + fStack_cc * fVar11 + fVar24 * fVar12 + fVar20 * fVar10;
  return param_1;
}

