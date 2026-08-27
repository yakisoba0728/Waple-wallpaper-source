// Function: FUN_1401460b0
// Addr: 1401460b0
// Size: 548 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401460b0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,int param_5
                  )

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  uVar8 = _UNK_140492fec;
  uVar7 = _UNK_140492fe8;
  uVar6 = DAT_140492fe0._4_4_;
  uVar5 = (uint)DAT_140492fe0;
  uVar29 = _UNK_140492b9c;
  uVar28 = _UNK_140492b98;
  uVar27 = _UNK_140492b94;
  uVar26 = _DAT_140492b90;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  pfVar9 = (float *)(param_3 + *param_4 * 4);
  pfVar10 = (float *)(param_3 + param_4[1] * 4);
  fVar32 = *pfVar10 + *pfVar9;
  fVar33 = pfVar10[1] + pfVar9[1];
  fVar34 = pfVar10[2] + pfVar9[2];
  fVar35 = pfVar10[3] + pfVar9[3];
  fVar36 = *pfVar9 - *pfVar10;
  fVar37 = pfVar9[1] - pfVar10[1];
  fVar38 = pfVar9[2] - pfVar10[2];
  fVar39 = pfVar9[3] - pfVar10[3];
  pfVar9 = (float *)(param_3 + param_4[2] * 4);
  pfVar10 = (float *)(param_3 + param_4[3] * 4);
  fVar12 = *pfVar10 + *pfVar9;
  fVar13 = pfVar10[1] + pfVar9[1];
  fVar14 = pfVar10[2] + pfVar9[2];
  fVar15 = pfVar10[3] + pfVar9[3];
  uVar16 = (uint)DAT_140492fe0;
  uVar18 = DAT_140492fe0._4_4_;
  uVar20 = _UNK_140492fe8;
  uVar22 = _UNK_140492fec;
  if (param_5 != 0) {
    uVar16 = _DAT_140492b90;
    uVar18 = _UNK_140492b94;
    uVar20 = _UNK_140492b98;
    uVar22 = _UNK_140492b9c;
  }
  fVar30 = fVar12 + fVar32;
  fVar31 = fVar13 + fVar33;
  fVar17 = (float)(uVar16 ^ (uint)(*pfVar9 - *pfVar10));
  fVar19 = (float)(uVar18 ^ (uint)(pfVar9[1] - pfVar10[1]));
  fVar21 = (float)(uVar20 ^ (uint)(pfVar9[2] - pfVar10[2]));
  fVar23 = (float)(uVar22 ^ (uint)(pfVar9[3] - pfVar10[3]));
  fVar32 = fVar32 - fVar12;
  fVar33 = fVar33 - fVar13;
  fVar12 = fVar36 - fVar19;
  fVar13 = fVar37 - fVar17;
  fVar19 = fVar19 + fVar36;
  fVar17 = fVar17 + fVar37;
  pfVar9 = (float *)(param_3 + param_4[4] * 4);
  pfVar10 = (float *)(param_3 + param_4[5] * 4);
  fVar48 = *pfVar10 + *pfVar9;
  fVar49 = pfVar10[1] + pfVar9[1];
  fVar50 = pfVar10[2] + pfVar9[2];
  fVar51 = pfVar10[3] + pfVar9[3];
  fVar36 = *pfVar9 - *pfVar10;
  fVar37 = pfVar9[1] - pfVar10[1];
  pfVar1 = (float *)(param_3 + param_4[6] * 4);
  pfVar2 = (float *)(param_3 + param_4[7] * 4);
  fVar40 = *pfVar2 + *pfVar1;
  fVar41 = pfVar2[1] + pfVar1[1];
  fVar42 = pfVar2[2] + pfVar1[2];
  fVar43 = pfVar2[3] + pfVar1[3];
  fVar44 = *pfVar1 - *pfVar2;
  fVar45 = pfVar1[1] - pfVar2[1];
  fVar46 = pfVar1[2] - pfVar2[2];
  fVar47 = pfVar1[3] - pfVar2[3];
  uVar16 = _UNK_140492fe8;
  uVar18 = _UNK_140492fec;
  if (param_5 != 0) {
    uVar16 = _UNK_140492b98;
    uVar18 = _UNK_140492b9c;
  }
  fVar24 = (float)(uVar16 ^ (uint)(pfVar9[2] - pfVar10[2]));
  fVar25 = (float)(uVar18 ^ (uint)(pfVar9[3] - pfVar10[3]));
  pfVar9 = (float *)(param_1 + lVar4 * 4);
  *pfVar9 = fVar14 + fVar34;
  pfVar9[1] = fVar15 + fVar35;
  pfVar9[2] = fVar38 - fVar23;
  pfVar9[3] = fVar39 - fVar21;
  pfVar9 = (float *)(param_1 + 0x10 + lVar4 * 4);
  *pfVar9 = fVar34 - fVar14;
  pfVar9[1] = fVar35 - fVar15;
  pfVar9[2] = fVar23 + fVar38;
  pfVar9[3] = fVar21 + fVar39;
  pfVar9 = (float *)&DAT_140483910;
  bVar11 = param_5 != 0;
  if (bVar11) {
    pfVar9 = (float *)&DAT_1404839b0;
  }
  pfVar10 = (float *)(param_1 + 0x20 + lVar4 * 4);
  *pfVar10 = fVar42 + fVar50;
  pfVar10[1] = fVar43 + fVar51;
  pfVar10[2] = fVar46 - fVar25;
  pfVar10[3] = fVar47 - fVar24;
  pfVar10 = (float *)(param_1 + 0x30 + lVar4 * 4);
  *pfVar10 = fVar42 - fVar50;
  pfVar10[1] = fVar43 - fVar51;
  pfVar10[2] = fVar25 + fVar46;
  pfVar10[3] = fVar24 + fVar47;
  pfVar10 = (float *)&DAT_140483900;
  if (bVar11) {
    pfVar10 = (float *)&DAT_1404839a0;
  }
  fVar21 = *pfVar10 * fVar48 - fVar49 * *pfVar9;
  fVar23 = pfVar10[1] * fVar49 - fVar48 * pfVar9[1];
  fVar42 = pfVar10[2] * fVar36 - fVar37 * pfVar9[2];
  fVar43 = pfVar10[3] * fVar37 - fVar36 * pfVar9[3];
  fVar14 = fVar41 * *pfVar9 + *pfVar10 * fVar40;
  fVar15 = fVar40 * pfVar9[1] + pfVar10[1] * fVar41;
  fVar34 = fVar45 * pfVar9[2] + pfVar10[2] * fVar44;
  fVar35 = fVar44 * pfVar9[3] + pfVar10[3] * fVar45;
  fVar36 = fVar14 + fVar21;
  fVar37 = fVar15 + fVar23;
  fVar38 = fVar34 + fVar42;
  fVar39 = fVar35 + fVar43;
  if (!bVar11) {
    uVar26 = uVar5;
    uVar27 = uVar6;
    uVar28 = uVar7;
    uVar29 = uVar8;
  }
  fVar14 = (float)(uVar26 ^ (uint)(fVar21 - fVar14));
  fVar15 = (float)(uVar27 ^ (uint)(fVar23 - fVar15));
  fVar34 = (float)(uVar28 ^ (uint)(fVar42 - fVar34));
  fVar35 = (float)(uVar29 ^ (uint)(fVar43 - fVar35));
  pfVar9 = (float *)(param_1 + lVar3 * 4);
  *pfVar9 = fVar36 + fVar30;
  pfVar9[1] = fVar37 + fVar31;
  pfVar9[2] = fVar38 + fVar12;
  pfVar9[3] = fVar39 + fVar13;
  pfVar9 = (float *)(param_1 + 0x10 + lVar3 * 4);
  *pfVar9 = fVar32 - fVar15;
  pfVar9[1] = fVar33 - fVar14;
  pfVar9[2] = fVar19 - fVar35;
  pfVar9[3] = fVar17 - fVar34;
  pfVar9 = (float *)(param_1 + 0x20 + lVar3 * 4);
  *pfVar9 = fVar30 - fVar36;
  pfVar9[1] = fVar31 - fVar37;
  pfVar9[2] = fVar12 - fVar38;
  pfVar9[3] = fVar13 - fVar39;
  pfVar9 = (float *)(param_1 + 0x30 + lVar3 * 4);
  *pfVar9 = fVar15 + fVar32;
  pfVar9[1] = fVar14 + fVar33;
  pfVar9[2] = fVar35 + fVar19;
  pfVar9[3] = fVar34 + fVar17;
  return;
}

