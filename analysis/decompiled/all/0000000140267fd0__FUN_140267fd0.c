// Function: FUN_140267fd0
// Addr: 140267fd0
// Size: 2747 bytes


float * FUN_140267fd0(float *param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
                     int param_6,int param_7,float param_8)

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
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_150;
  float local_14c;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  if (param_3 != 0xffffffff) {
    param_6 = param_4 * 10 * param_6;
    param_7 = param_4 * 10 * param_7;
    fVar4 = DAT_1404927d4 - param_8;
    local_150 = DAT_1404927d4;
    local_144 = DAT_1404927d4;
    local_140 = 0.0;
    local_184 = 0.0;
    local_138 = 0.0;
    local_178 = DAT_1404927d4;
    local_174 = 0.0;
    local_13c = 0.0;
    local_180 = 0.0;
    local_134 = 0.0;
    local_170 = 0.0;
    local_16c = DAT_1404927d4;
    local_17c = 0.0;
    local_130 = 0.0;
    local_14c = 0.0;
    local_168 = 0.0;
    do {
      fVar1 = *(float *)(param_5 + (ulonglong)(param_3 + param_6 + param_4 * 3) * 4);
      fVar2 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 4 + param_3) * 4);
      fVar5 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 5 + param_3) * 4);
      fVar12 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 6 + param_3) * 4);
      fVar14 = *(float *)(param_5 + (ulonglong)(param_4 * 3 + param_7 + param_3) * 4);
      fVar8 = *(float *)(param_5 + (ulonglong)(param_4 * 4 + param_7 + param_3) * 4);
      fVar21 = *(float *)(param_5 + (ulonglong)(param_4 * 5 + param_7 + param_3) * 4);
      fVar11 = *(float *)(param_5 + (ulonglong)(param_4 * 6 + param_7 + param_3) * 4);
      fVar3 = fVar12 * fVar11 + fVar5 * fVar21 + fVar2 * fVar8 + fVar1 * fVar14;
      if (fVar3 < 0.0) {
        fVar14 = (float)((uint)fVar14 ^ DAT_1404930c0);
        fVar8 = (float)((uint)fVar8 ^ DAT_1404930c0);
        fVar21 = (float)((uint)fVar21 ^ DAT_1404930c0);
        fVar11 = (float)((uint)fVar11 ^ DAT_1404930c0);
        fVar3 = (float)((uint)fVar3 ^ DAT_1404930c0);
      }
      if (fVar3 <= DAT_1404927d0) {
        FUN_14041c2f0(fVar3);
                    /* WARNING: Subroutine does not return */
        FUN_14041aa90();
      }
      fVar15 = fVar14 * param_8 + fVar1 * fVar4;
      fVar3 = fVar8 * param_8 + fVar2 * fVar4;
      fVar22 = fVar21 * param_8 + fVar5 * fVar4;
      fVar12 = fVar11 * param_8 + fVar12 * fVar4;
      fVar2 = fVar12 * fVar12 + fVar3 * fVar3;
      fVar1 = fVar12 * fVar12 + fVar22 * fVar22;
      fVar5 = fVar22 * fVar22 + fVar3 * fVar3;
      fVar19 = DAT_1404927d4 - (fVar1 + fVar1);
      fVar6 = DAT_1404927d4 - (fVar2 + fVar2);
      fVar8 = fVar3 * fVar12 - fVar22 * fVar15;
      fVar23 = fVar22 * fVar15 + fVar3 * fVar12;
      fVar7 = fVar3 * fVar15 + fVar22 * fVar12;
      fVar10 = fVar22 * fVar12 - fVar3 * fVar15;
      fVar8 = fVar8 + fVar8;
      fVar9 = DAT_1404927d4 - (fVar5 + fVar5);
      fVar21 = *(float *)(param_5 + (ulonglong)(param_6 + param_3) * 4) * fVar4 +
               *(float *)(param_5 + (ulonglong)(param_7 + param_3) * 4) * param_8;
      fVar14 = fVar12 * fVar15 + fVar3 * fVar22;
      fVar17 = fVar3 * fVar22 - fVar12 * fVar15;
      fVar11 = fVar21 * 0.0;
      fVar14 = fVar14 + fVar14;
      fVar3 = *(float *)(param_5 + (ulonglong)(param_3 + param_4 + param_6) * 4) * fVar4 +
              *(float *)(param_5 + (ulonglong)(param_3 + param_4 + param_7) * 4) * param_8;
      fVar16 = fVar19 * 0.0;
      fVar23 = fVar23 + fVar23;
      fVar17 = fVar17 + fVar17;
      fVar7 = fVar7 + fVar7;
      fVar10 = fVar10 + fVar10;
      fVar2 = fVar8 * 0.0;
      fVar5 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 2 + param_3) * 4) * fVar4 +
              *(float *)(param_5 + (ulonglong)(param_4 * 2 + param_7 + param_3) * 4) * param_8;
      fVar15 = fVar3 * 0.0;
      fVar1 = fVar14 * 0.0;
      fVar22 = fVar5 * 0.0;
      fVar13 = fVar16 + fVar1;
      fVar20 = fVar19 + fVar1 + fVar2 + fVar11;
      fVar12 = fVar7 * 0.0;
      fVar19 = fVar16 + fVar14 + fVar2 + fVar15;
      fVar1 = fVar13 + fVar8 + fVar22;
      fVar13 = fVar13 + fVar2 + 0.0;
      fVar2 = fVar6 * 0.0;
      fVar16 = fVar17 * 0.0;
      fVar14 = fVar16 + fVar2;
      fVar18 = fVar17 + fVar2 + fVar12 + fVar11;
      fVar2 = fVar10 * 0.0;
      fVar8 = fVar9 * 0.0;
      fVar16 = fVar16 + fVar6 + fVar12 + fVar15;
      fVar6 = fVar14 + fVar12 + 0.0;
      fVar17 = fVar23 * 0.0;
      fVar12 = fVar14 + fVar7 + fVar22;
      fVar7 = fVar17 + fVar2;
      fVar5 = fVar5 + 0.0;
      fVar3 = fVar3 + 0.0;
      fVar11 = fVar23 + fVar2 + fVar8 + fVar11;
      fVar21 = fVar21 + 0.0;
      fVar14 = fVar7 + fVar8 + 0.0;
      fVar22 = fVar7 + fVar9 + fVar22;
      fVar15 = fVar17 + fVar10 + fVar8 + fVar15;
      fVar8 = local_144 * fVar20 + local_140 * fVar18 + local_13c * fVar11 + local_184 * fVar21;
      fVar23 = local_144 * fVar19 + local_140 * fVar16 + local_13c * fVar15 + local_184 * fVar3;
      fVar2 = local_13c * fVar14;
      local_13c = local_144 * fVar1 + local_140 * fVar12 + local_13c * fVar22 + local_184 * fVar5;
      local_184 = local_144 * fVar13 + local_140 * fVar6 + fVar2 + local_184;
      fVar17 = local_138 * fVar20 + local_178 * fVar18 + local_174 * fVar11 + local_180 * fVar21;
      fVar10 = local_138 * fVar19 + local_178 * fVar16 + local_174 * fVar15 + local_180 * fVar3;
      fVar2 = local_174 * fVar14;
      local_174 = local_138 * fVar1 + local_178 * fVar12 + local_174 * fVar22 + local_180 * fVar5;
      local_180 = local_138 * fVar13 + local_178 * fVar6 + fVar2 + local_180;
      fVar9 = local_134 * fVar20 + local_170 * fVar18 + local_16c * fVar11 + local_17c * fVar21;
      fVar7 = local_134 * fVar19 + local_170 * fVar16 + local_16c * fVar15 + local_17c * fVar3;
      fVar2 = local_16c * fVar14;
      local_16c = local_134 * fVar1 + local_170 * fVar12 + local_16c * fVar22 + local_17c * fVar5;
      local_17c = local_134 * fVar13 + local_170 * fVar6 + fVar2 + local_17c;
      fVar2 = local_130 * fVar20 + local_14c * fVar18 + local_168 * fVar11 + local_150 * fVar21;
      fVar6 = local_14c * fVar6;
      fVar12 = local_14c * fVar12;
      local_14c = local_130 * fVar19 + local_14c * fVar16 + local_168 * fVar15 + local_150 * fVar3;
      fVar14 = local_168 * fVar14;
      local_168 = local_130 * fVar1 + fVar12 + local_168 * fVar22 + local_150 * fVar5;
      local_150 = local_130 * fVar13 + fVar6 + fVar14 + local_150;
      *param_1 = fVar8;
      param_1[1] = fVar23;
      param_1[2] = local_13c;
      param_1[3] = local_184;
      param_1[4] = fVar17;
      param_1[5] = fVar10;
      param_1[6] = local_174;
      param_1[7] = local_180;
      param_1[8] = fVar9;
      param_1[9] = fVar7;
      param_1[10] = local_16c;
      param_1[0xb] = local_17c;
      param_1[0xc] = fVar2;
      param_1[0xd] = local_14c;
      param_1[0xe] = local_168;
      param_1[0xf] = local_150;
      param_3 = *(uint *)(*(longlong *)(param_2 + 0x30) + 0x60 + (ulonglong)param_3 * 0xf0);
      local_178 = fVar10;
      local_170 = fVar7;
      local_144 = fVar8;
      local_140 = fVar23;
      local_138 = fVar17;
      local_134 = fVar9;
      local_130 = fVar2;
    } while (param_3 != 0xffffffff);
  }
  return param_1;
}

