// Function: FUN_140267650
// Addr: 140267650
// Size: 189 bytes


float * FUN_140267650(float *param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
                     int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
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
  float fStackX_8;
  float fStackX_18;
  float fStackX_20;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
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
    fStack_130 = DAT_1404927d4;
    fStack_108 = DAT_1404927d4;
    fStack_12c = 0.0;
    fStack_148 = 0.0;
    fStackX_18 = 0.0;
    fStack_104 = 0.0;
    fStack_128 = DAT_1404927d4;
    fStack_124 = 0.0;
    fStackX_20 = 0.0;
    fStack_100 = 0.0;
    fStack_144 = 0.0;
    fStack_140 = DAT_1404927d4;
    fStackX_8 = 0.0;
    fStack_fc = 0.0;
    fStack_120 = 0.0;
    fStack_13c = 0.0;
    do {
      fVar21 = *(float *)(param_5 + (ulonglong)(param_4 * 3 + param_6 + param_3) * 4);
      fVar5 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 4 + param_3) * 4);
      uVar1 = (ulonglong)(param_3 + param_4 + param_6);
      fVar16 = *(float *)(param_5 + (ulonglong)(param_3 + param_4 * 5 + param_6) * 4);
      uVar2 = (ulonglong)(param_6 + param_4 * 2 + param_3);
      fVar12 = *(float *)(param_5 + (ulonglong)(param_6 + param_4 * 6 + param_3) * 4);
      fVar3 = fVar12 * fVar12 + fVar16 * fVar16;
      fVar20 = fVar12 * fVar5 + fVar16 * fVar21;
      fVar11 = fVar12 * fVar5 - fVar16 * fVar21;
      fVar20 = fVar20 + fVar20;
      fVar11 = fVar11 + fVar11;
      fVar17 = DAT_1404927d4 - (fVar3 + fVar3);
      fVar13 = fVar16 * fVar5 + fVar12 * fVar21;
      fVar23 = fVar16 * fVar5 - fVar12 * fVar21;
      fVar4 = fVar11 * 0.0;
      fVar7 = *(float *)(param_5 + (ulonglong)(param_6 + param_3) * 4) * 0.0;
      fVar13 = fVar13 + fVar13;
      fVar23 = fVar23 + fVar23;
      fVar6 = fVar12 * fVar12 + fVar5 * fVar5;
      fVar9 = fVar16 * fVar16 + fVar5 * fVar5;
      fVar8 = *(float *)(param_5 + uVar1 * 4) * 0.0;
      fVar3 = fVar13 * 0.0;
      fVar14 = DAT_1404927d4 - (fVar6 + fVar6);
      fVar6 = fVar12 * fVar16 + fVar5 * fVar21;
      fVar15 = fVar12 * fVar16 - fVar5 * fVar21;
      fVar10 = DAT_1404927d4 - (fVar9 + fVar9);
      fVar21 = fVar17 * 0.0;
      fVar9 = *(float *)(param_5 + uVar2 * 4) * 0.0;
      fVar6 = fVar6 + fVar6;
      fVar16 = fVar21 + fVar3;
      fVar15 = fVar15 + fVar15;
      fVar18 = fVar17 + fVar3 + fVar4 + fVar7;
      fVar22 = fVar21 + fVar13 + fVar4 + fVar8;
      fVar19 = fVar16 + fVar11 + fVar9;
      fVar5 = fVar6 * 0.0;
      fVar21 = fVar14 * 0.0;
      fVar17 = fVar16 + fVar4 + 0.0;
      fVar3 = fVar23 * 0.0;
      fVar12 = fVar3 + fVar21;
      fVar24 = fVar23 + fVar21 + fVar5 + fVar7;
      fVar21 = fVar15 * 0.0;
      fVar16 = fVar10 * 0.0;
      fVar23 = fVar3 + fVar14 + fVar5 + fVar8;
      fVar11 = fVar12 + fVar5 + 0.0;
      fVar12 = fVar12 + fVar6 + fVar9;
      fVar4 = fVar20 * 0.0;
      fVar3 = fVar4 + fVar21;
      fVar5 = *(float *)(param_5 + uVar2 * 4) + 0.0;
      fVar13 = *(float *)(param_5 + (ulonglong)(param_6 + param_3) * 4) + 0.0;
      fVar7 = fVar20 + fVar21 + fVar16 + fVar7;
      fVar8 = fVar4 + fVar15 + fVar16 + fVar8;
      fVar6 = fVar3 + fVar16 + 0.0;
      fVar9 = fVar3 + fVar10 + fVar9;
      fVar4 = *(float *)(param_5 + uVar1 * 4) + 0.0;
      fVar3 = fVar24 * fStack_12c + fVar18 * fStack_108 + fVar7 * fStack_148 + fVar13 * fStackX_18;
      fVar21 = fVar12 * fStack_12c;
      fVar16 = fVar11 * fStack_12c;
      fStack_12c = fVar22 * fStack_108 + fVar23 * fStack_12c + fVar8 * fStack_148 +
                   fVar4 * fStackX_18;
      fVar20 = fVar19 * fStack_108 + fVar21 + fVar9 * fStack_148 + fVar5 * fStackX_18;
      fStackX_18 = fVar17 * fStack_108 + fVar16 + fVar6 * fStack_148 + fStackX_18;
      fVar15 = fStack_104 * fVar18 + fStack_128 * fVar24 + fStack_124 * fVar7 + fStackX_20 * fVar13;
      fVar14 = fStack_104 * fVar22 + fStack_128 * fVar23 + fStack_124 * fVar8 + fStackX_20 * fVar4;
      fVar21 = fStack_124 * fVar6;
      fStack_124 = fStack_104 * fVar19 + fStack_128 * fVar12 + fStack_124 * fVar9 +
                   fStackX_20 * fVar5;
      fStackX_20 = fStack_104 * fVar17 + fStack_128 * fVar11 + fVar21 + fStackX_20;
      fVar10 = fStack_100 * fVar18 + fStack_144 * fVar24 + fStack_140 * fVar7 + fStackX_8 * fVar13;
      fVar16 = fStack_100 * fVar22 + fStack_144 * fVar23 + fStack_140 * fVar8 + fStackX_8 * fVar4;
      fVar21 = fStack_140 * fVar6;
      fStack_140 = fStack_100 * fVar19 + fStack_144 * fVar12 + fStack_140 * fVar9 +
                   fStackX_8 * fVar5;
      fStackX_8 = fStack_100 * fVar17 + fStack_144 * fVar11 + fVar21 + fStackX_8;
      fVar21 = fStack_fc * fVar18 + fStack_120 * fVar24 + fStack_13c * fVar7 + fStack_130 * fVar13;
      fVar5 = fStack_130 * fVar5;
      fVar11 = fStack_120 * fVar11;
      fVar12 = fStack_120 * fVar12;
      fStack_120 = fStack_fc * fVar22 + fStack_120 * fVar23 + fStack_13c * fVar8 +
                   fStack_130 * fVar4;
      fStack_130 = fStack_fc * fVar17 + fVar11 + fStack_13c * fVar6 + fStack_130;
      fStack_13c = fStack_fc * fVar19 + fVar12 + fStack_13c * fVar9 + fVar5;
      *param_1 = fVar3;
      param_1[1] = fStack_12c;
      param_1[2] = fVar20;
      param_1[3] = fStackX_18;
      param_1[4] = fVar15;
      param_1[5] = fVar14;
      param_1[6] = fStack_124;
      param_1[7] = fStackX_20;
      param_1[8] = fVar10;
      param_1[9] = fVar16;
      param_1[10] = fStack_140;
      param_1[0xb] = fStackX_8;
      param_1[0xc] = fVar21;
      param_1[0xd] = fStack_120;
      param_1[0xe] = fStack_13c;
      param_1[0xf] = fStack_130;
      param_3 = *(uint *)(*(longlong *)(param_2 + 0x30) + 0x60 + (ulonglong)param_3 * 0xf0);
      fStack_148 = fVar20;
      fStack_144 = fVar16;
      fStack_128 = fVar14;
      fStack_108 = fVar3;
      fStack_104 = fVar15;
      fStack_100 = fVar10;
      fStack_fc = fVar21;
    } while (param_3 != 0xffffffff);
  }
  return param_1;
}

