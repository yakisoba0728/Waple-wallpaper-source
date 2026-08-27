// Function: FUN_14005f730
// Addr: 14005f730
// Size: 1589 bytes


float * FUN_14005f730(float *param_1,float *param_2)

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
  
  fVar7 = DAT_1404929b8;
  fVar1 = param_2[10];
  fVar16 = param_2[5];
  fVar19 = param_2[6];
  fVar2 = param_2[4];
  fVar3 = param_2[7];
  fVar4 = param_2[0xf];
  fVar5 = param_2[0xb];
  fVar6 = param_2[0xe];
  fVar15 = param_2[0xd];
  fVar18 = param_2[9];
  fVar17 = fVar1 * fVar4 - fVar6 * fVar5;
  fVar8 = fVar4 * fVar19 - fVar6 * fVar3;
  fVar9 = fVar5 * fVar19 - fVar1 * fVar3;
  fVar25 = fVar4 * fVar18 - fVar5 * fVar15;
  fVar10 = fVar4 * fVar16 - fVar3 * fVar15;
  fVar11 = fVar5 * fVar16 - fVar3 * fVar18;
  fVar14 = fVar6 * fVar18 - fVar1 * fVar15;
  fVar12 = fVar6 * fVar16 - fVar19 * fVar15;
  fVar22 = param_2[8];
  fVar13 = fVar1 * fVar16 - fVar19 * fVar18;
  fVar1 = param_2[0xc];
  fVar26 = fVar4 * fVar22 - fVar5 * fVar1;
  fVar20 = fVar4 * fVar2 - fVar3 * fVar1;
  fVar23 = fVar5 * fVar2 - fVar3 * fVar22;
  fVar21 = fVar6 * fVar22 - param_2[10] * fVar1;
  fVar27 = fVar6 * fVar2 - fVar19 * fVar1;
  fVar24 = param_2[10] * fVar2 - fVar19 * fVar22;
  fVar28 = fVar15 * fVar22 - fVar18 * fVar1;
  fVar4 = param_2[3];
  fVar29 = fVar15 * fVar2 - fVar16 * fVar1;
  fVar30 = fVar18 * fVar2 - fVar16 * fVar22;
  fVar1 = param_2[1];
  fVar5 = param_2[2];
  fVar15 = (fVar16 * fVar17 - fVar19 * fVar25) + fVar3 * fVar14;
  fVar6 = *param_2;
  fVar18 = (fVar2 * fVar25 - fVar16 * fVar26) + fVar3 * fVar28;
  fVar22 = ((fVar2 * fVar14 - fVar16 * fVar21) + fVar19 * fVar28) * DAT_1404929b8;
  fVar19 = ((fVar2 * fVar17 - fVar19 * fVar26) + fVar3 * fVar21) * DAT_1404929b8;
  fVar16 = DAT_140492704 / (fVar22 * fVar4 + fVar18 * fVar5 + fVar19 * fVar1 + fVar15 * fVar6);
  *param_1 = fVar16 * fVar15;
  param_1[1] = fVar16 * ((fVar1 * fVar17 - fVar5 * fVar25) + fVar4 * fVar14) * fVar7;
  param_1[2] = fVar16 * ((fVar1 * fVar8 - fVar5 * fVar10) + fVar4 * fVar12);
  param_1[3] = fVar16 * ((fVar1 * fVar9 - fVar5 * fVar11) + fVar4 * fVar13) * fVar7;
  param_1[4] = fVar16 * fVar19;
  param_1[5] = fVar16 * ((fVar6 * fVar17 - fVar5 * fVar26) + fVar4 * fVar21);
  param_1[6] = fVar16 * ((fVar6 * fVar8 - fVar5 * fVar20) + fVar4 * fVar27) * fVar7;
  param_1[7] = fVar16 * ((fVar6 * fVar9 - fVar5 * fVar23) + fVar4 * fVar24);
  param_1[8] = fVar16 * fVar18;
  param_1[9] = fVar16 * ((fVar6 * fVar25 - fVar1 * fVar26) + fVar4 * fVar28) * fVar7;
  param_1[10] = fVar16 * ((fVar6 * fVar10 - fVar1 * fVar20) + fVar4 * fVar29);
  param_1[0xb] = fVar16 * ((fVar6 * fVar11 - fVar1 * fVar23) + fVar30 * fVar4) * fVar7;
  param_1[0xc] = fVar16 * fVar22;
  param_1[0xd] = fVar16 * ((fVar6 * fVar14 - fVar1 * fVar21) + fVar5 * fVar28);
  param_1[0xe] = fVar16 * ((fVar6 * fVar12 - fVar1 * fVar27) + fVar5 * fVar29) * fVar7;
  param_1[0xf] = fVar16 * ((fVar6 * fVar13 - fVar1 * fVar24) + fVar30 * fVar5);
  return param_1;
}

