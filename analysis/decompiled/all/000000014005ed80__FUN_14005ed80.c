// Function: FUN_14005ed80
// Addr: 14005ed80
// Size: 622 bytes


undefined8 * FUN_14005ed80(undefined8 *param_1,undefined8 *param_2,float *param_3)

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
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  float local_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  
  fVar21 = (float)param_2[4];
  fVar22 = (float)((ulonglong)param_2[4] >> 0x20);
  fVar1 = param_3[0xc];
  fVar19 = (float)*param_2;
  fVar20 = (float)((ulonglong)*param_2 >> 0x20);
  fVar17 = (float)param_2[6];
  fVar18 = (float)((ulonglong)param_2[6] >> 0x20);
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar6 = param_3[4];
  fVar7 = param_3[5];
  fVar8 = param_3[6];
  fVar9 = param_3[7];
  fVar10 = param_3[8];
  fVar11 = param_3[9];
  fVar12 = param_3[10];
  fVar13 = param_3[0xb];
  fVar14 = param_3[0xd];
  fVar15 = param_3[0xf];
  fVar16 = param_3[0xe];
  local_158 = (float)param_2[2];
  fStack_154 = (float)((ulonglong)param_2[2] >> 0x20);
  local_178 = (float)param_2[1];
  fStack_174 = (float)((ulonglong)param_2[1] >> 0x20);
  local_168 = (float)param_2[3];
  fStack_164 = (float)((ulonglong)param_2[3] >> 0x20);
  local_148 = (float)param_2[5];
  fStack_144 = (float)((ulonglong)param_2[5] >> 0x20);
  local_138 = (float)param_2[7];
  fStack_134 = (float)((ulonglong)param_2[7] >> 0x20);
  *param_1 = CONCAT44(fVar20 * fVar2 + fStack_154 * fVar3 + fVar22 * fVar4 + fVar18 * fVar5,
                      fVar19 * fVar2 + local_158 * fVar3 + fVar21 * fVar4 + fVar17 * fVar5);
  param_1[1] = CONCAT44(fStack_174 * fVar2 + fStack_164 * fVar3 + fStack_144 * fVar4 +
                        fStack_134 * fVar5,
                        local_178 * fVar2 + local_168 * fVar3 + local_148 * fVar4 +
                        local_138 * fVar5);
  param_1[2] = CONCAT44(fVar20 * fVar6 + fStack_154 * fVar7 + fVar22 * fVar8 + fVar18 * fVar9,
                        fVar19 * fVar6 + local_158 * fVar7 + fVar21 * fVar8 + fVar17 * fVar9);
  param_1[3] = CONCAT44(fStack_174 * fVar6 + fStack_164 * fVar7 + fStack_144 * fVar8 +
                        fStack_134 * fVar9,
                        local_178 * fVar6 + local_168 * fVar7 + local_148 * fVar8 +
                        local_138 * fVar9);
  param_1[4] = CONCAT44(fVar20 * fVar10 + fStack_154 * fVar11 + fVar22 * fVar12 + fVar18 * fVar13,
                        fVar19 * fVar10 + local_158 * fVar11 + fVar21 * fVar12 + fVar17 * fVar13);
  param_1[5] = CONCAT44(fStack_174 * fVar10 + fStack_164 * fVar11 + fStack_144 * fVar12 +
                        fStack_134 * fVar13,
                        local_178 * fVar10 + local_168 * fVar11 + local_148 * fVar12 +
                        local_138 * fVar13);
  param_1[6] = CONCAT44(fVar1 * fVar20 + fVar14 * fStack_154 + fVar22 * fVar16 + fVar18 * fVar15,
                        fVar1 * fVar19 + fVar14 * local_158 + fVar21 * fVar16 + fVar17 * fVar15);
  param_1[7] = CONCAT44(fVar1 * fStack_174 + fVar14 * fStack_164 + fStack_144 * fVar16 +
                        fStack_134 * fVar15,
                        fVar1 * local_178 + fVar14 * local_168 + local_148 * fVar16 +
                        local_138 * fVar15);
  return param_1;
}

