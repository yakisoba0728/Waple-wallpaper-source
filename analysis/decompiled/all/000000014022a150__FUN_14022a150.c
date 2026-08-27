// Function: FUN_14022a150
// Addr: 14022a150
// Size: 520 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022a150(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 unaff_XMM8 [16];
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar48 [16];
  float fVar51;
  
  fVar5 = *(float *)(param_4 + 0x30);
  uVar14 = 0;
  fVar6 = *(float *)(param_4 + 0x34);
  fVar7 = *(float *)(param_4 + 0x38);
  if ((int)param_2[0x1d] != 0) {
    do {
      pfVar1 = (float *)(param_2[0x11] + uVar14 * 4);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar26 = pfVar1[3];
      pfVar1 = (float *)(param_2[0x12] + uVar14 * 4);
      fVar27 = *pfVar1;
      fVar28 = pfVar1[1];
      fVar29 = pfVar1[2];
      fVar30 = pfVar1[3];
      pfVar1 = (float *)(param_2[0x13] + uVar14 * 4);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(param_2[0xb] + uVar14 * 4);
      fVar39 = *pfVar1 - fVar23;
      fVar40 = pfVar1[1] - fVar24;
      fVar41 = pfVar1[2] - fVar25;
      fVar42 = pfVar1[3] - fVar26;
      pfVar1 = (float *)(param_2[0xc] + uVar14 * 4);
      fVar35 = *pfVar1 - fVar27;
      fVar36 = pfVar1[1] - fVar28;
      fVar37 = pfVar1[2] - fVar29;
      fVar38 = pfVar1[3] - fVar30;
      pfVar1 = (float *)(param_2[0xd] + uVar14 * 4);
      fVar31 = *pfVar1 - fVar8;
      fVar32 = pfVar1[1] - fVar9;
      fVar33 = pfVar1[2] - fVar10;
      fVar34 = pfVar1[3] - fVar11;
      auVar48._0_4_ = fVar31 * fVar31 + fVar35 * fVar35 + fVar39 * fVar39;
      auVar48._4_4_ = fVar32 * fVar32 + fVar36 * fVar36 + fVar40 * fVar40;
      auVar48._8_4_ = fVar33 * fVar33 + fVar37 * fVar37 + fVar41 * fVar41;
      auVar48._12_4_ = fVar34 * fVar34 + fVar38 * fVar38 + fVar42 * fVar42;
      unaff_XMM8 = sqrtps(unaff_XMM8,auVar48);
      fVar43 = unaff_XMM8._0_4_;
      fVar44 = unaff_XMM8._4_4_;
      fVar45 = unaff_XMM8._8_4_;
      fVar46 = unaff_XMM8._12_4_;
      auVar48 = rcpps(unaff_XMM9,unaff_XMM8);
      fVar47 = (float)(auVar48._0_4_ & -(uint)(0.0 < fVar43) |
                      ~-(uint)(0.0 < fVar43) & _DAT_140483640);
      fVar49 = (float)(auVar48._4_4_ & -(uint)(0.0 < fVar44) |
                      ~-(uint)(0.0 < fVar44) & _UNK_140483644);
      fVar50 = (float)(auVar48._8_4_ & -(uint)(0.0 < fVar45) |
                      ~-(uint)(0.0 < fVar45) & _UNK_140483648);
      fVar51 = (float)(auVar48._12_4_ & -(uint)(0.0 < fVar46) |
                      ~-(uint)(0.0 < fVar46) & _UNK_14048364c);
      unaff_XMM9._0_4_ = fVar47 * fVar31;
      unaff_XMM9._4_4_ = fVar49 * fVar32;
      unaff_XMM9._8_4_ = fVar50 * fVar33;
      unaff_XMM9._12_4_ = fVar51 * fVar34;
      fVar31 = (fVar7 - fVar8) * unaff_XMM9._0_4_ + (fVar6 - fVar27) * fVar47 * fVar35 +
               (fVar5 - fVar23) * fVar47 * fVar39;
      fVar32 = (fVar7 - fVar9) * unaff_XMM9._4_4_ + (fVar6 - fVar28) * fVar49 * fVar36 +
               (fVar5 - fVar24) * fVar49 * fVar40;
      fVar33 = (fVar7 - fVar10) * unaff_XMM9._8_4_ + (fVar6 - fVar29) * fVar50 * fVar37 +
               (fVar5 - fVar25) * fVar50 * fVar41;
      fVar34 = (fVar7 - fVar11) * unaff_XMM9._12_4_ + (fVar6 - fVar30) * fVar51 * fVar38 +
               (fVar5 - fVar26) * fVar51 * fVar42;
      fVar31 = (float)(-(uint)(0.0 <= fVar31) & (uint)fVar31);
      fVar32 = (float)(-(uint)(0.0 <= fVar32) & (uint)fVar32);
      fVar33 = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar33);
      fVar34 = (float)(-(uint)(0.0 <= fVar34) & (uint)fVar34);
      uVar15 = -(uint)(fVar31 <= fVar43);
      uVar17 = -(uint)(fVar32 <= fVar44);
      uVar19 = -(uint)(fVar33 <= fVar45);
      uVar21 = -(uint)(fVar34 <= fVar46);
      fVar31 = (float)(uVar15 & (uint)fVar31 | ~uVar15 & (uint)fVar43);
      fVar32 = (float)(uVar17 & (uint)fVar32 | ~uVar17 & (uint)fVar44);
      fVar33 = (float)(uVar19 & (uint)fVar33 | ~uVar19 & (uint)fVar45);
      fVar34 = (float)(uVar21 & (uint)fVar34 | ~uVar21 & (uint)fVar46);
      fVar39 = fVar5 - (fVar31 * fVar47 * fVar39 + fVar23);
      fVar40 = fVar5 - (fVar32 * fVar49 * fVar40 + fVar24);
      fVar41 = fVar5 - (fVar33 * fVar50 * fVar41 + fVar25);
      fVar42 = fVar5 - (fVar34 * fVar51 * fVar42 + fVar26);
      fVar27 = fVar6 - (fVar31 * fVar47 * fVar35 + fVar27);
      fVar28 = fVar6 - (fVar32 * fVar49 * fVar36 + fVar28);
      fVar29 = fVar6 - (fVar33 * fVar50 * fVar37 + fVar29);
      fVar30 = fVar6 - (fVar34 * fVar51 * fVar38 + fVar30);
      fVar23 = fVar7 - (fVar31 * unaff_XMM9._0_4_ + fVar8);
      fVar24 = fVar7 - (fVar32 * unaff_XMM9._4_4_ + fVar9);
      fVar25 = fVar7 - (fVar33 * unaff_XMM9._8_4_ + fVar10);
      fVar26 = fVar7 - (fVar34 * unaff_XMM9._12_4_ + fVar11);
      uVar16 = -(uint)(*(float *)(param_3 + 0x50) <
                      fVar23 * fVar23 + fVar27 * fVar27 + fVar39 * fVar39);
      uVar18 = -(uint)(*(float *)(param_3 + 0x54) <
                      fVar24 * fVar24 + fVar28 * fVar28 + fVar40 * fVar40);
      uVar20 = -(uint)(*(float *)(param_3 + 0x58) <
                      fVar25 * fVar25 + fVar29 * fVar29 + fVar41 * fVar41);
      uVar22 = -(uint)(*(float *)(param_3 + 0x5c) <
                      fVar26 * fVar26 + fVar30 * fVar30 + fVar42 * fVar42);
      puVar2 = (uint *)(param_2[1] + uVar14 * 4);
      uVar15 = puVar2[1];
      uVar17 = puVar2[2];
      uVar19 = puVar2[3];
      puVar3 = (uint *)(*param_2 + uVar14 * 4);
      uVar21 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar4 = (uint *)(*param_2 + uVar14 * 4);
      *puVar4 = ~uVar16 & *puVar2 | uVar16 & *puVar3;
      puVar4[1] = ~uVar18 & uVar15 | uVar18 & uVar21;
      puVar4[2] = ~uVar20 & uVar17 | uVar20 & uVar12;
      puVar4[3] = ~uVar22 & uVar19 | uVar22 & uVar13;
      uVar15 = (int)uVar14 + 4;
      uVar14 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(param_2 + 0x1d));
  }
  return;
}

