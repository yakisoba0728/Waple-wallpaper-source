// Function: FUN_1400fb570
// Addr: 1400fb570
// Size: 452 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1400fb570(longlong param_1,float *param_2,uint param_3,float param_4,float *param_5,
                     float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [184];
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar25 = *param_6;
  fVar26 = param_6[1];
  fVar27 = param_6[2];
  fVar28 = param_6[3];
  fVar29 = *param_7;
  fVar30 = param_7[1];
  fVar31 = param_7[2];
  fVar32 = param_7[3];
  fVar33 = *param_5;
  fVar34 = param_5[1];
  fVar35 = param_5[2];
  fVar36 = param_5[3];
  local_108 = fVar29;
  fStack_104 = fVar30;
  fStack_100 = fVar31;
  fStack_fc = fVar32;
  local_f8 = fVar25;
  fStack_f4 = fVar26;
  fStack_f0 = fVar27;
  fStack_ec = fVar28;
  local_e8 = fVar33;
  fStack_e4 = fVar34;
  fStack_e0 = fVar35;
  fStack_dc = fVar36;
  pfVar12 = (float *)FUN_1400fb820(param_1,local_d8,&local_e8,&local_f8,&local_108);
  iVar11 = _UNK_1404930dc;
  iVar10 = _UNK_1404930d8;
  iVar9 = _UNK_1404930d4;
  iVar8 = _DAT_1404930d0;
  fVar7 = _UNK_140492e3c;
  fVar6 = _UNK_140492e38;
  fVar5 = _UNK_140492e34;
  fVar4 = _DAT_140492e30;
  uVar13 = 1;
  fVar14 = *pfVar12;
  fVar15 = pfVar12[1];
  fVar16 = pfVar12[2];
  fVar17 = pfVar12[3];
  fVar18 = fVar14 * param_4;
  fVar19 = fVar15 * param_4;
  fVar20 = fVar16 * param_4;
  fVar21 = fVar17 * param_4;
  fVar22 = param_4;
  fVar23 = param_4;
  fVar24 = param_4;
  if (1 < param_3) {
    do {
      fVar25 = fVar25 * fVar1;
      fVar26 = fVar26 * fVar1;
      fVar27 = fVar27 * fVar1;
      fVar28 = fVar28 * fVar1;
      fVar29 = fVar29 * fVar1;
      fVar30 = fVar30 * fVar1;
      fVar31 = fVar31 * fVar1;
      fVar32 = fVar32 * fVar1;
      fVar33 = (float)((int)fVar33 - iVar8);
      fVar34 = (float)((int)fVar34 - iVar9);
      fVar35 = (float)((int)fVar35 - iVar10);
      fVar36 = (float)((int)fVar36 - iVar11);
      param_4 = param_4 * (((fVar4 + fVar14) * _DAT_140492dd0 - fVar4) * fVar3 + fVar4) * fVar2;
      fVar22 = fVar22 * (((fVar5 + fVar15) * _UNK_140492dd4 - fVar5) * fVar3 + fVar5) * fVar2;
      fVar23 = fVar23 * (((fVar6 + fVar16) * _UNK_140492dd8 - fVar6) * fVar3 + fVar6) * fVar2;
      fVar24 = fVar24 * (((fVar7 + fVar17) * _UNK_140492ddc - fVar7) * fVar3 + fVar7) * fVar2;
      local_108 = fVar33;
      fStack_104 = fVar34;
      fStack_100 = fVar35;
      fStack_fc = fVar36;
      local_f8 = fVar25;
      fStack_f4 = fVar26;
      fStack_f0 = fVar27;
      fStack_ec = fVar28;
      local_e8 = fVar29;
      fStack_e4 = fVar30;
      fStack_e0 = fVar31;
      fStack_dc = fVar32;
      pfVar12 = (float *)FUN_1400fb820(param_1,local_d8,&local_108,&local_f8,&local_e8);
      uVar13 = uVar13 + 1;
      fVar14 = *pfVar12;
      fVar15 = pfVar12[1];
      fVar16 = pfVar12[2];
      fVar17 = pfVar12[3];
      fVar18 = fVar18 + fVar14 * param_4;
      fVar19 = fVar19 + fVar15 * fVar22;
      fVar20 = fVar20 + fVar16 * fVar23;
      fVar21 = fVar21 + fVar17 * fVar24;
    } while (uVar13 < param_3);
  }
  *param_2 = fVar18;
  param_2[1] = fVar19;
  param_2[2] = fVar20;
  param_2[3] = fVar21;
  return param_2;
}

