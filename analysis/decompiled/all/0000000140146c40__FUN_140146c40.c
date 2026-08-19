// Function: FUN_140146c40
// Addr: 140146c40
// Size: 69 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140146c40(undefined8 param_1,float *param_2,float *param_3)

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
  
  fVar7 = param_2[0xc] + param_2[4];
  fVar9 = param_2[0xd] + param_2[5];
  fVar10 = param_2[6] + param_2[0xe];
  fVar11 = param_2[7] + param_2[0xf];
  fVar5 = param_2[0xe] - param_2[6];
  fVar6 = param_2[0xf] - param_2[7];
  fVar12 = param_2[8] + *param_2;
  fVar13 = param_2[9] + param_2[1];
  fVar14 = param_2[10] + param_2[2];
  fVar15 = param_2[0xb] + param_2[3];
  fVar18 = *param_2 - param_2[8];
  fVar19 = param_2[1] - param_2[9];
  fVar20 = param_2[2] - param_2[10];
  fVar21 = param_2[3] - param_2[0xb];
  fVar3 = (float)((uint)DAT_1404930b0 ^ (uint)(param_2[4] - param_2[0xc]));
  fVar4 = (float)(DAT_1404930b0._4_4_ ^ (uint)(param_2[5] - param_2[0xd]));
  fVar16 = fVar12 + fVar7;
  fVar17 = fVar13 + fVar9;
  fVar1 = fVar18 - fVar4;
  fVar2 = fVar19 - fVar3;
  fVar12 = fVar12 - fVar7;
  fVar13 = fVar13 - fVar9;
  fVar18 = fVar18 + fVar4;
  fVar19 = fVar19 + fVar3;
  fVar8 = _UNK_1404839f0 * fVar14 - fVar15 * _UNK_140483a00;
  fVar14 = _UNK_1404839f4 * fVar15 - fVar14 * _UNK_140483a04;
  fVar15 = _UNK_1404839f8 * fVar20 - fVar21 * _UNK_140483a08;
  fVar20 = _UNK_1404839fc * fVar21 - fVar20 * _UNK_140483a0c;
  fVar3 = fVar11 * _UNK_140483a00 + _UNK_1404839f0 * fVar10;
  fVar4 = fVar10 * _UNK_140483a04 + _UNK_1404839f4 * fVar11;
  fVar7 = fVar6 * _UNK_140483a08 + _UNK_1404839f8 * fVar5;
  fVar5 = fVar5 * _UNK_140483a0c + _UNK_1404839fc * fVar6;
  fVar6 = fVar3 + fVar8;
  fVar9 = fVar4 + fVar14;
  fVar10 = fVar7 + fVar15;
  fVar11 = fVar5 + fVar20;
  fVar3 = (float)((uint)(fVar8 - fVar3) ^ (uint)DAT_1404930b0);
  fVar4 = (float)((uint)(fVar14 - fVar4) ^ DAT_1404930b0._4_4_);
  fVar7 = (float)((uint)(fVar15 - fVar7) ^ _UNK_1404930b8);
  fVar5 = (float)((uint)(fVar20 - fVar5) ^ _UNK_1404930bc);
  *param_3 = fVar6 + fVar16;
  param_3[1] = fVar9 + fVar17;
  param_3[2] = fVar10 + fVar1;
  param_3[3] = fVar11 + fVar2;
  param_3[8] = fVar16 - fVar6;
  param_3[9] = fVar17 - fVar9;
  param_3[10] = fVar1 - fVar10;
  param_3[0xb] = fVar2 - fVar11;
  param_3[4] = fVar12 - fVar4;
  param_3[5] = fVar13 - fVar3;
  param_3[6] = fVar18 - fVar5;
  param_3[7] = fVar19 - fVar7;
  param_3[0xc] = fVar4 + fVar12;
  param_3[0xd] = fVar3 + fVar13;
  param_3[0xe] = fVar5 + fVar18;
  param_3[0xf] = fVar7 + fVar19;
  return;
}

