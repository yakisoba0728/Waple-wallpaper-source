// Function: FUN_140250070
// Addr: 140250070
// Size: 1184 bytes


void FUN_140250070(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  uint *puVar2;
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
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
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
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = *param_4;
  fVar6 = *param_7;
  fVar7 = param_4[1];
  lVar20 = *(longlong *)(param_2 + 0x68);
  lVar21 = *(longlong *)(param_2 + 0x70);
  lVar22 = *(longlong *)(param_2 + 0x78);
  lVar23 = *(longlong *)(param_2 + 0x80);
  fVar8 = param_4[2];
  lVar24 = *(longlong *)(param_2 + 0x60);
  fVar9 = param_7[1];
  fVar10 = *param_3;
  lVar25 = *(longlong *)(param_2 + 0x58);
  fVar11 = param_5[1];
  fVar12 = *param_5;
  fVar13 = param_5[2];
  fVar14 = param_7[2];
  fVar15 = *param_6;
  fVar16 = param_6[1];
  fVar17 = param_6[2];
  fVar18 = param_7[3];
  uVar19 = *(uint *)(param_2 + 0xe8);
  uVar42 = 0;
  if (uVar19 != 0) {
    do {
      pfVar1 = (float *)(lVar24 + uVar42 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(lVar25 + uVar42 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(lVar20 + uVar42 * 4);
      fVar34 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      fVar67 = fVar26 * fVar3 + fVar30 * fVar10 + fVar34 * fVar4;
      fVar68 = fVar27 * fVar3 + fVar31 * fVar10 + fVar35 * fVar4;
      fVar69 = fVar28 * fVar3 + fVar32 * fVar10 + fVar36 * fVar4;
      fVar70 = fVar29 * fVar3 + fVar33 * fVar10 + fVar37 * fVar4;
      fVar63 = fVar26 * fVar7 + fVar30 * fVar5 + fVar34 * fVar8;
      fVar64 = fVar27 * fVar7 + fVar31 * fVar5 + fVar35 * fVar8;
      fVar65 = fVar28 * fVar7 + fVar32 * fVar5 + fVar36 * fVar8;
      fVar66 = fVar29 * fVar7 + fVar33 * fVar5 + fVar37 * fVar8;
      fVar59 = fVar26 * fVar11 + fVar30 * fVar12 + fVar34 * fVar13;
      fVar60 = fVar27 * fVar11 + fVar31 * fVar12 + fVar35 * fVar13;
      fVar61 = fVar28 * fVar11 + fVar32 * fVar12 + fVar36 * fVar13;
      fVar62 = fVar29 * fVar11 + fVar33 * fVar12 + fVar37 * fVar13;
      uVar43 = -(uint)(fVar63 < fVar9);
      uVar46 = -(uint)(fVar64 < fVar9);
      uVar49 = -(uint)(fVar65 < fVar9);
      uVar52 = -(uint)(fVar66 < fVar9);
      uVar44 = -(uint)(fVar59 < fVar14);
      uVar47 = -(uint)(fVar60 < fVar14);
      uVar50 = -(uint)(fVar61 < fVar14);
      uVar53 = -(uint)(fVar62 < fVar14);
      fVar55 = fVar26 * fVar16 + fVar30 * fVar15 + fVar34 * fVar17;
      fVar56 = fVar27 * fVar16 + fVar31 * fVar15 + fVar35 * fVar17;
      fVar57 = fVar28 * fVar16 + fVar32 * fVar15 + fVar36 * fVar17;
      fVar58 = fVar29 * fVar16 + fVar33 * fVar15 + fVar37 * fVar17;
      uVar45 = -(uint)(fVar55 < fVar18);
      uVar48 = -(uint)(fVar56 < fVar18);
      uVar51 = -(uint)(fVar57 < fVar18);
      uVar54 = -(uint)(fVar58 < fVar18);
      uVar71 = -(uint)(((fVar67 < fVar6 || fVar63 < fVar9) || fVar59 < fVar14) || fVar55 < fVar18);
      uVar72 = -(uint)(((fVar68 < fVar6 || fVar64 < fVar9) || fVar60 < fVar14) || fVar56 < fVar18);
      uVar73 = -(uint)(((fVar69 < fVar6 || fVar65 < fVar9) || fVar61 < fVar14) || fVar57 < fVar18);
      uVar74 = -(uint)(((fVar70 < fVar6 || fVar66 < fVar9) || fVar62 < fVar14) || fVar58 < fVar18);
      fVar55 = (float)(~uVar45 & (~uVar44 & (uVar43 & (uint)fVar63 | ~uVar43 & (uint)fVar67) |
                                 uVar44 & (uint)fVar59) | uVar45 & (uint)fVar55) -
               (float)(~uVar45 & (~uVar44 & (uVar43 & (uint)fVar9 | ~uVar43 & (uint)fVar6) |
                                 uVar44 & (uint)fVar14) | uVar45 & (uint)fVar18);
      fVar56 = (float)(~uVar48 & (~uVar47 & (uVar46 & (uint)fVar64 | ~uVar46 & (uint)fVar68) |
                                 uVar47 & (uint)fVar60) | uVar48 & (uint)fVar56) -
               (float)(~uVar48 & (~uVar47 & (uVar46 & (uint)fVar9 | ~uVar46 & (uint)fVar6) |
                                 uVar47 & (uint)fVar14) | uVar48 & (uint)fVar18);
      fVar57 = (float)(~uVar51 & (~uVar50 & (uVar49 & (uint)fVar65 | ~uVar49 & (uint)fVar69) |
                                 uVar50 & (uint)fVar61) | uVar51 & (uint)fVar57) -
               (float)(~uVar51 & (~uVar50 & (uVar49 & (uint)fVar9 | ~uVar49 & (uint)fVar6) |
                                 uVar50 & (uint)fVar14) | uVar51 & (uint)fVar18);
      fVar58 = (float)(~uVar54 & (~uVar53 & (uVar52 & (uint)fVar66 | ~uVar52 & (uint)fVar70) |
                                 uVar53 & (uint)fVar62) | uVar54 & (uint)fVar58) -
               (float)(~uVar54 & (~uVar53 & (uVar52 & (uint)fVar9 | ~uVar52 & (uint)fVar6) |
                                 uVar53 & (uint)fVar14) | uVar54 & (uint)fVar18);
      puVar2 = (uint *)(lVar25 + uVar42 * 4);
      *puVar2 = (uint)(fVar30 - (float)(~uVar45 & (~uVar44 & (uVar43 & (uint)fVar5 |
                                                             ~uVar43 & (uint)fVar10) |
                                                  uVar44 & (uint)fVar12) | uVar45 & (uint)fVar15) *
                                fVar55) & uVar71 | ~uVar71 & (uint)fVar30;
      puVar2[1] = (uint)(fVar31 - (float)(~uVar48 & (~uVar47 & (uVar46 & (uint)fVar5 |
                                                               ~uVar46 & (uint)fVar10) |
                                                    uVar47 & (uint)fVar12) | uVar48 & (uint)fVar15)
                                  * fVar56) & uVar72 | ~uVar72 & (uint)fVar31;
      puVar2[2] = (uint)(fVar32 - (float)(~uVar51 & (~uVar50 & (uVar49 & (uint)fVar5 |
                                                               ~uVar49 & (uint)fVar10) |
                                                    uVar50 & (uint)fVar12) | uVar51 & (uint)fVar15)
                                  * fVar57) & uVar73 | ~uVar73 & (uint)fVar32;
      puVar2[3] = (uint)(fVar33 - (float)(~uVar54 & (~uVar53 & (uVar52 & (uint)fVar5 |
                                                               ~uVar52 & (uint)fVar10) |
                                                    uVar53 & (uint)fVar12) | uVar54 & (uint)fVar15)
                                  * fVar58) & uVar74 | ~uVar74 & (uint)fVar33;
      puVar2 = (uint *)(lVar24 + uVar42 * 4);
      *puVar2 = (uint)(fVar26 - (float)(~uVar45 & (~uVar44 & (uVar43 & (uint)fVar7 |
                                                             ~uVar43 & (uint)fVar3) |
                                                  uVar44 & (uint)fVar11) | uVar45 & (uint)fVar16) *
                                fVar55) & uVar71 | ~uVar71 & (uint)fVar26;
      puVar2[1] = (uint)(fVar27 - (float)(~uVar48 & (~uVar47 & (uVar46 & (uint)fVar7 |
                                                               ~uVar46 & (uint)fVar3) |
                                                    uVar47 & (uint)fVar11) | uVar48 & (uint)fVar16)
                                  * fVar56) & uVar72 | ~uVar72 & (uint)fVar27;
      puVar2[2] = (uint)(fVar28 - (float)(~uVar51 & (~uVar50 & (uVar49 & (uint)fVar7 |
                                                               ~uVar49 & (uint)fVar3) |
                                                    uVar50 & (uint)fVar11) | uVar51 & (uint)fVar16)
                                  * fVar57) & uVar73 | ~uVar73 & (uint)fVar28;
      puVar2[3] = (uint)(fVar29 - (float)(~uVar54 & (~uVar53 & (uVar52 & (uint)fVar7 |
                                                               ~uVar52 & (uint)fVar3) |
                                                    uVar53 & (uint)fVar11) | uVar54 & (uint)fVar16)
                                  * fVar58) & uVar74 | ~uVar74 & (uint)fVar29;
      puVar2 = (uint *)(lVar21 + uVar42 * 4);
      uVar41 = *puVar2;
      uVar38 = puVar2[1];
      uVar39 = puVar2[2];
      uVar40 = puVar2[3];
      puVar2 = (uint *)(lVar20 + uVar42 * 4);
      *puVar2 = (uint)(fVar34 - (float)(~uVar45 & (~uVar44 & (uVar43 & (uint)fVar8 |
                                                             ~uVar43 & (uint)fVar4) |
                                                  uVar44 & (uint)fVar13) | uVar45 & (uint)fVar17) *
                                fVar55) & uVar71 | ~uVar71 & (uint)fVar34;
      puVar2[1] = (uint)(fVar35 - (float)(~uVar48 & (~uVar47 & (uVar46 & (uint)fVar8 |
                                                               ~uVar46 & (uint)fVar4) |
                                                    uVar47 & (uint)fVar13) | uVar48 & (uint)fVar17)
                                  * fVar56) & uVar72 | ~uVar72 & (uint)fVar35;
      puVar2[2] = (uint)(fVar36 - (float)(~uVar51 & (~uVar50 & (uVar49 & (uint)fVar8 |
                                                               ~uVar49 & (uint)fVar4) |
                                                    uVar50 & (uint)fVar13) | uVar51 & (uint)fVar17)
                                  * fVar57) & uVar73 | ~uVar73 & (uint)fVar36;
      puVar2[3] = (uint)(fVar37 - (float)(~uVar54 & (~uVar53 & (uVar52 & (uint)fVar8 |
                                                               ~uVar52 & (uint)fVar4) |
                                                    uVar53 & (uint)fVar13) | uVar54 & (uint)fVar17)
                                  * fVar58) & uVar74 | ~uVar74 & (uint)fVar37;
      puVar2 = (uint *)(lVar23 + uVar42 * 4);
      uVar43 = *puVar2;
      uVar44 = puVar2[1];
      uVar45 = puVar2[2];
      uVar46 = puVar2[3];
      puVar2 = (uint *)(lVar22 + uVar42 * 4);
      uVar47 = *puVar2;
      uVar48 = puVar2[1];
      uVar49 = puVar2[2];
      uVar50 = puVar2[3];
      puVar2 = (uint *)(lVar21 + uVar42 * 4);
      *puVar2 = ~uVar71 & uVar41;
      puVar2[1] = ~uVar72 & uVar38;
      puVar2[2] = ~uVar73 & uVar39;
      puVar2[3] = ~uVar74 & uVar40;
      puVar2 = (uint *)(lVar23 + uVar42 * 4);
      *puVar2 = ~uVar71 & uVar43;
      puVar2[1] = ~uVar72 & uVar44;
      puVar2[2] = ~uVar73 & uVar45;
      puVar2[3] = ~uVar74 & uVar46;
      puVar2 = (uint *)(lVar22 + uVar42 * 4);
      *puVar2 = ~uVar71 & uVar47;
      puVar2[1] = ~uVar72 & uVar48;
      puVar2[2] = ~uVar73 & uVar49;
      puVar2[3] = ~uVar74 & uVar50;
      uVar41 = (int)uVar42 + 4;
      uVar42 = (ulonglong)uVar41;
    } while (uVar41 < uVar19);
  }
  return;
}

