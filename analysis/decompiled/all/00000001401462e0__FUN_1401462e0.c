// Function: FUN_1401462e0
// Addr: 1401462e0
// Size: 519 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401462e0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,int param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
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
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
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
  float fVar52;
  float fVar53;
  
  uVar8 = _UNK_140492fec;
  uVar7 = _UNK_140492fe8;
  uVar6 = DAT_140492fe0._4_4_;
  uVar5 = (uint)DAT_140492fe0;
  uVar29 = _UNK_140492b9c;
  uVar28 = _UNK_140492b98;
  uVar27 = _UNK_140492b94;
  uVar26 = _DAT_140492b90;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  pfVar9 = (float *)(param_3 + *param_4 * 4);
  pfVar10 = (float *)(param_3 + param_4[1] * 4);
  fVar32 = *pfVar10 + *pfVar9;
  fVar33 = pfVar10[1] + pfVar9[1];
  fVar34 = pfVar10[2] + pfVar9[2];
  fVar36 = pfVar10[3] + pfVar9[3];
  fVar38 = *pfVar9 - *pfVar10;
  fVar40 = pfVar9[1] - pfVar10[1];
  fVar42 = pfVar9[2] - pfVar10[2];
  fVar44 = pfVar9[3] - pfVar10[3];
  pfVar9 = (float *)(param_3 + param_4[2] * 4);
  pfVar10 = (float *)(param_3 + param_4[3] * 4);
  fVar46 = *pfVar10 + *pfVar9;
  fVar48 = pfVar10[1] + pfVar9[1];
  fVar50 = pfVar9[2] + pfVar10[2];
  fVar52 = pfVar9[3] + pfVar10[3];
  fVar30 = pfVar10[2] - pfVar9[2];
  fVar31 = pfVar10[3] - pfVar9[3];
  uVar16 = (uint)DAT_140492fe0;
  uVar18 = DAT_140492fe0._4_4_;
  if (param_5 != 0) {
    uVar16 = _DAT_140492b90;
    uVar18 = _UNK_140492b94;
  }
  fVar17 = (float)(uVar16 ^ (uint)(*pfVar9 - *pfVar10));
  fVar19 = (float)(uVar18 ^ (uint)(pfVar9[1] - pfVar10[1]));
  pfVar9 = (float *)(param_3 + param_4[6] * 4);
  pfVar10 = (float *)(param_3 + param_4[7] * 4);
  fVar47 = *pfVar10 + *pfVar9;
  fVar49 = pfVar10[1] + pfVar9[1];
  fVar51 = pfVar10[2] + pfVar9[2];
  fVar53 = pfVar10[3] + pfVar9[3];
  fVar39 = *pfVar9 - *pfVar10;
  fVar41 = pfVar9[1] - pfVar10[1];
  fVar43 = pfVar9[2] - pfVar10[2];
  fVar45 = pfVar9[3] - pfVar10[3];
  pfVar9 = (float *)(param_3 + param_4[4] * 4);
  fVar20 = *pfVar9;
  fVar21 = pfVar9[1];
  fVar23 = pfVar9[2];
  fVar25 = pfVar9[3];
  pfVar9 = (float *)(param_3 + param_4[5] * 4);
  fVar35 = *pfVar9;
  fVar37 = pfVar9[1];
  fVar3 = pfVar9[2];
  fVar4 = pfVar9[3];
  fVar12 = fVar35 + fVar20;
  fVar13 = fVar37 + fVar21;
  fVar14 = fVar3 + fVar23;
  fVar15 = fVar4 + fVar25;
  uVar16 = (uint)DAT_140492fe0;
  uVar18 = DAT_140492fe0._4_4_;
  uVar22 = _UNK_140492fe8;
  uVar24 = _UNK_140492fec;
  if (param_5 != 0) {
    uVar16 = _DAT_140492b90;
    uVar18 = _UNK_140492b94;
    uVar22 = _UNK_140492b98;
    uVar24 = _UNK_140492b9c;
  }
  pfVar9 = (float *)(param_1 + lVar1 * 4);
  *pfVar9 = fVar32 + fVar46;
  pfVar9[1] = fVar33 + fVar48;
  pfVar9[2] = fVar38 - fVar19;
  pfVar9[3] = fVar40 - fVar17;
  fVar20 = (float)(uVar16 ^ (uint)(fVar20 - fVar35));
  fVar21 = (float)(uVar18 ^ (uint)(fVar21 - fVar37));
  fVar23 = (float)(uVar22 ^ (uint)(fVar23 - fVar3));
  fVar25 = (float)(uVar24 ^ (uint)(fVar25 - fVar4));
  pfVar9 = (float *)(param_1 + 0x10 + lVar1 * 4);
  *pfVar9 = fVar32 - fVar46;
  pfVar9[1] = fVar33 - fVar48;
  pfVar9[2] = fVar19 + fVar38;
  pfVar9[3] = fVar17 + fVar40;
  fVar38 = fVar14 + fVar51;
  fVar40 = fVar15 + fVar53;
  fVar51 = fVar51 - fVar14;
  fVar53 = fVar53 - fVar15;
  bVar11 = param_5 != 0;
  fVar32 = fVar43 - fVar25;
  fVar33 = fVar45 - fVar23;
  fVar25 = fVar25 + fVar43;
  fVar23 = fVar23 + fVar45;
  pfVar9 = (float *)&DAT_140483910;
  if (bVar11) {
    pfVar9 = (float *)&DAT_1404839b0;
  }
  pfVar10 = (float *)(param_1 + 0x20 + lVar1 * 4);
  *pfVar10 = fVar12 + fVar47;
  pfVar10[1] = fVar13 + fVar49;
  pfVar10[2] = fVar39 - fVar21;
  pfVar10[3] = fVar41 - fVar20;
  pfVar10 = (float *)(param_1 + 0x30 + lVar1 * 4);
  *pfVar10 = fVar47 - fVar12;
  pfVar10[1] = fVar49 - fVar13;
  pfVar10[2] = fVar21 + fVar39;
  pfVar10[3] = fVar20 + fVar41;
  pfVar10 = (float *)&DAT_140483900;
  if (bVar11) {
    pfVar10 = (float *)&DAT_1404839a0;
  }
  fVar20 = *pfVar10 * fVar34 - fVar36 * *pfVar9;
  fVar21 = pfVar10[1] * fVar36 - fVar34 * pfVar9[1];
  fVar35 = pfVar10[2] * fVar42 - fVar44 * pfVar9[2];
  fVar37 = pfVar10[3] * fVar44 - fVar42 * pfVar9[3];
  fVar34 = fVar52 * *pfVar9 + *pfVar10 * fVar50;
  fVar36 = fVar50 * pfVar9[1] + pfVar10[1] * fVar52;
  fVar42 = fVar31 * pfVar9[2] + pfVar10[2] * fVar30;
  fVar30 = fVar30 * pfVar9[3] + pfVar10[3] * fVar31;
  fVar31 = fVar34 + fVar20;
  fVar44 = fVar36 + fVar21;
  fVar46 = fVar42 + fVar35;
  fVar48 = fVar30 + fVar37;
  if (!bVar11) {
    uVar26 = uVar5;
    uVar27 = uVar6;
    uVar28 = uVar7;
    uVar29 = uVar8;
  }
  fVar34 = (float)(uVar26 ^ (uint)(fVar20 - fVar34));
  fVar36 = (float)(uVar27 ^ (uint)(fVar21 - fVar36));
  fVar42 = (float)(uVar28 ^ (uint)(fVar35 - fVar42));
  fVar30 = (float)(uVar29 ^ (uint)(fVar37 - fVar30));
  pfVar9 = (float *)(param_1 + lVar2 * 4);
  *pfVar9 = fVar31 + fVar38;
  pfVar9[1] = fVar44 + fVar40;
  pfVar9[2] = fVar46 + fVar32;
  pfVar9[3] = fVar48 + fVar33;
  pfVar9 = (float *)(param_1 + 0x10 + lVar2 * 4);
  *pfVar9 = fVar51 - fVar36;
  pfVar9[1] = fVar53 - fVar34;
  pfVar9[2] = fVar25 - fVar30;
  pfVar9[3] = fVar23 - fVar42;
  pfVar9 = (float *)(param_1 + 0x20 + lVar2 * 4);
  *pfVar9 = fVar38 - fVar31;
  pfVar9[1] = fVar40 - fVar44;
  pfVar9[2] = fVar32 - fVar46;
  pfVar9[3] = fVar33 - fVar48;
  pfVar9 = (float *)(param_1 + 0x30 + lVar2 * 4);
  *pfVar9 = fVar36 + fVar51;
  pfVar9[1] = fVar34 + fVar53;
  pfVar9[2] = fVar30 + fVar25;
  pfVar9[3] = fVar42 + fVar23;
  return;
}

