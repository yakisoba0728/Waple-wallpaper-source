// Function: FUN_140267f00
// Addr: 140267f00
// Size: 3168 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140267f00(float *param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
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
  float fVar24;
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
    fVar9 = DAT_140492704 - param_8;
    local_150 = DAT_140492704;
    local_144 = DAT_140492704;
    local_140 = 0.0;
    local_184 = 0.0;
    local_138 = 0.0;
    local_178 = DAT_140492704;
    local_174 = 0.0;
    local_13c = 0.0;
    local_180 = 0.0;
    local_134 = 0.0;
    local_170 = 0.0;
    local_16c = DAT_140492704;
    local_17c = 0.0;
    local_130 = 0.0;
    local_14c = 0.0;
    local_168 = 0.0;
    do {
      fVar2 = *(float *)(param_5 + (ulonglong)(param_6 + param_3) * 4);
      fVar4 = *(float *)(param_5 + (ulonglong)(param_3 + param_4 + param_6) * 4);
      fVar10 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 2 + param_3) * 4);
      fVar12 = *(float *)(param_5 + (ulonglong)(param_3 + param_6 + param_4 * 3) * 4);
      fVar16 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 4 + param_3) * 4);
      fVar1 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 5 + param_3) * 4);
      fVar3 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 6 + param_3) * 4);
      fVar6 = *(float *)(param_5 + (ulonglong)(param_7 + param_3) * 4);
      fVar7 = *(float *)(param_5 + (ulonglong)(param_3 + param_4 + param_7) * 4);
      fVar8 = *(float *)(param_5 + (ulonglong)(param_4 * 2 + param_7 + param_3) * 4);
      fVar17 = *(float *)(param_5 + (ulonglong)(param_4 * 3 + param_7 + param_3) * 4);
      fVar11 = *(float *)(param_5 + (ulonglong)(param_4 * 4 + param_7 + param_3) * 4);
      fVar22 = *(float *)(param_5 + (ulonglong)(param_4 * 5 + param_7 + param_3) * 4);
      fVar15 = *(float *)(param_5 + (ulonglong)(param_4 * 6 + param_7 + param_3) * 4);
      fVar5 = fVar3 * fVar15 + fVar1 * fVar22 + fVar16 * fVar11 + fVar12 * fVar17;
      if (fVar5 < 0.0) {
        fVar17 = (float)((uint)fVar17 ^ DAT_140492ff0);
        fVar11 = (float)((uint)fVar11 ^ DAT_140492ff0);
        fVar22 = (float)((uint)fVar22 ^ DAT_140492ff0);
        fVar15 = (float)((uint)fVar15 ^ DAT_140492ff0);
        fVar5 = (float)((uint)fVar5 ^ DAT_140492ff0);
      }
      if (fVar5 <= _DAT_140492700) {
        fVar5 = (float)FUN_14041c220(fVar5);
        fVar23 = (float)FUN_14041a9c0();
        fVar13 = (float)FUN_14041a9c0(fVar5 * param_8);
        fVar5 = (float)FUN_14041a9c0(fVar9 * fVar5);
        fVar17 = (fVar17 * fVar13 + fVar12 * fVar5) / fVar23;
        fVar12 = (fVar16 * fVar5 + fVar11 * fVar13) / fVar23;
        fVar16 = (fVar3 * fVar5 + fVar15 * fVar13) / fVar23;
        fVar23 = (fVar1 * fVar5 + fVar22 * fVar13) / fVar23;
      }
      else {
        fVar17 = fVar17 * param_8 + fVar12 * fVar9;
        fVar12 = fVar11 * param_8 + fVar16 * fVar9;
        fVar23 = fVar22 * param_8 + fVar1 * fVar9;
        fVar16 = fVar15 * param_8 + fVar3 * fVar9;
      }
      fVar3 = fVar16 * fVar16 + fVar12 * fVar12;
      fVar1 = fVar16 * fVar16 + fVar23 * fVar23;
      fVar11 = fVar23 * fVar23 + fVar12 * fVar12;
      fVar20 = DAT_140492704 - (fVar1 + fVar1);
      fVar15 = DAT_140492704 - (fVar3 + fVar3);
      fVar22 = fVar12 * fVar16 - fVar23 * fVar17;
      fVar24 = fVar23 * fVar17 + fVar12 * fVar16;
      fVar5 = fVar12 * fVar17 + fVar23 * fVar16;
      fVar14 = fVar23 * fVar16 - fVar12 * fVar17;
      fVar22 = fVar22 + fVar22;
      fVar13 = DAT_140492704 - (fVar11 + fVar11);
      fVar3 = fVar2 * fVar9 + fVar6 * param_8;
      fVar1 = fVar16 * fVar17 + fVar12 * fVar23;
      fVar18 = fVar12 * fVar23 - fVar16 * fVar17;
      fVar6 = fVar3 * 0.0;
      fVar1 = fVar1 + fVar1;
      fVar7 = fVar4 * fVar9 + fVar7 * param_8;
      fVar11 = fVar20 * 0.0;
      fVar24 = fVar24 + fVar24;
      fVar18 = fVar18 + fVar18;
      fVar5 = fVar5 + fVar5;
      fVar14 = fVar14 + fVar14;
      fVar4 = fVar22 * 0.0;
      fVar10 = fVar10 * fVar9 + fVar8 * param_8;
      fVar8 = fVar7 * 0.0;
      fVar2 = fVar1 * 0.0;
      fVar17 = fVar10 * 0.0;
      fVar16 = fVar11 + fVar2;
      fVar21 = fVar20 + fVar2 + fVar4 + fVar6;
      fVar12 = fVar5 * 0.0;
      fVar20 = fVar11 + fVar1 + fVar4 + fVar8;
      fVar2 = fVar16 + fVar22 + fVar17;
      fVar23 = fVar16 + fVar4 + 0.0;
      fVar4 = fVar15 * 0.0;
      fVar11 = fVar18 * 0.0;
      fVar16 = fVar11 + fVar4;
      fVar19 = fVar18 + fVar4 + fVar12 + fVar6;
      fVar4 = fVar14 * 0.0;
      fVar1 = fVar13 * 0.0;
      fVar18 = fVar11 + fVar15 + fVar12 + fVar8;
      fVar11 = fVar16 + fVar12 + 0.0;
      fVar15 = fVar24 * 0.0;
      fVar12 = fVar16 + fVar5 + fVar17;
      fVar22 = fVar15 + fVar4;
      fVar10 = fVar10 + 0.0;
      fVar7 = fVar7 + 0.0;
      fVar6 = fVar24 + fVar4 + fVar1 + fVar6;
      fVar3 = fVar3 + 0.0;
      fVar16 = fVar22 + fVar1 + 0.0;
      fVar17 = fVar22 + fVar13 + fVar17;
      fVar8 = fVar15 + fVar14 + fVar1 + fVar8;
      fVar1 = local_144 * fVar21 + local_140 * fVar19 + local_13c * fVar6 + local_184 * fVar3;
      fVar14 = local_144 * fVar20 + local_140 * fVar18 + local_13c * fVar8 + local_184 * fVar7;
      fVar4 = local_13c * fVar16;
      local_13c = local_144 * fVar2 + local_140 * fVar12 + local_13c * fVar17 + local_184 * fVar10;
      local_184 = local_144 * fVar23 + local_140 * fVar11 + fVar4 + local_184;
      fVar13 = local_138 * fVar21 + local_178 * fVar19 + local_174 * fVar6 + local_180 * fVar3;
      fVar5 = local_138 * fVar20 + local_178 * fVar18 + local_174 * fVar8 + local_180 * fVar7;
      fVar4 = local_174 * fVar16;
      local_174 = local_138 * fVar2 + local_178 * fVar12 + local_174 * fVar17 + local_180 * fVar10;
      local_180 = local_138 * fVar23 + local_178 * fVar11 + fVar4 + local_180;
      fVar15 = local_134 * fVar21 + local_170 * fVar19 + local_16c * fVar6 + local_17c * fVar3;
      fVar22 = local_134 * fVar20 + local_170 * fVar18 + local_16c * fVar8 + local_17c * fVar7;
      fVar4 = local_16c * fVar16;
      local_16c = local_134 * fVar2 + local_170 * fVar12 + local_16c * fVar17 + local_17c * fVar10;
      local_17c = local_134 * fVar23 + local_170 * fVar11 + fVar4 + local_17c;
      fVar4 = local_130 * fVar21 + local_14c * fVar19 + local_168 * fVar6 + local_150 * fVar3;
      fVar11 = local_14c * fVar11;
      fVar12 = local_14c * fVar12;
      local_14c = local_130 * fVar20 + local_14c * fVar18 + local_168 * fVar8 + local_150 * fVar7;
      fVar16 = local_168 * fVar16;
      local_168 = local_130 * fVar2 + fVar12 + local_168 * fVar17 + local_150 * fVar10;
      local_150 = local_130 * fVar23 + fVar11 + fVar16 + local_150;
      *param_1 = fVar1;
      param_1[1] = fVar14;
      param_1[2] = local_13c;
      param_1[3] = local_184;
      param_1[4] = fVar13;
      param_1[5] = fVar5;
      param_1[6] = local_174;
      param_1[7] = local_180;
      param_1[8] = fVar15;
      param_1[9] = fVar22;
      param_1[10] = local_16c;
      param_1[0xb] = local_17c;
      param_1[0xc] = fVar4;
      param_1[0xd] = local_14c;
      param_1[0xe] = local_168;
      param_1[0xf] = local_150;
      param_3 = *(uint *)(*(longlong *)(param_2 + 0x30) + 0x60 + (ulonglong)param_3 * 0xf0);
      local_178 = fVar5;
      local_170 = fVar22;
      local_144 = fVar1;
      local_140 = fVar14;
      local_138 = fVar13;
      local_134 = fVar15;
      local_130 = fVar4;
    } while (param_3 != 0xffffffff);
  }
  return param_1;
}

