// Function: FUN_14024f660
// Addr: 14024f660
// Size: 1283 bytes


void FUN_14024f660(float *param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  ulonglong uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
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
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  
  fVar3 = param_3[2];
  fVar4 = param_4[1];
  uVar19 = *(uint *)(param_2 + 0xe8);
  fVar5 = param_4[2];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = *param_4;
  fVar9 = *param_5;
  fVar10 = *param_7;
  fVar11 = param_7[1];
  fVar12 = param_5[1];
  fVar13 = param_5[2];
  fVar14 = param_7[2];
  fVar15 = *param_6;
  fVar16 = param_6[1];
  fVar17 = param_6[2];
  fVar18 = param_7[3];
  if (uVar19 != 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
    lVar21 = *(longlong *)(param_2 + 0x60);
    lVar22 = *(longlong *)(param_2 + 0x70);
    lVar23 = *(longlong *)(param_2 + 0x80);
    lVar24 = *(longlong *)(param_2 + 0x78);
    lVar25 = *(longlong *)(param_2 + 0x68);
    uVar46 = 0;
    do {
      pfVar1 = (float *)(lVar21 + uVar46 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(lVar25 + uVar46 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(lVar20 + uVar46 * 4);
      fVar34 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      fVar83 = fVar26 * fVar7 + fVar34 * fVar6 + fVar30 * fVar3;
      fVar84 = fVar27 * fVar7 + fVar35 * fVar6 + fVar31 * fVar3;
      fVar85 = fVar28 * fVar7 + fVar36 * fVar6 + fVar32 * fVar3;
      fVar86 = fVar29 * fVar7 + fVar37 * fVar6 + fVar33 * fVar3;
      fVar75 = fVar26 * fVar4 + fVar34 * fVar8 + fVar30 * fVar5;
      fVar76 = fVar27 * fVar4 + fVar35 * fVar8 + fVar31 * fVar5;
      fVar77 = fVar28 * fVar4 + fVar36 * fVar8 + fVar32 * fVar5;
      fVar78 = fVar29 * fVar4 + fVar37 * fVar8 + fVar33 * fVar5;
      uVar47 = -(uint)(fVar75 < fVar11);
      uVar50 = -(uint)(fVar76 < fVar11);
      uVar53 = -(uint)(fVar77 < fVar11);
      uVar56 = -(uint)(fVar78 < fVar11);
      fVar63 = fVar26 * fVar12 + fVar34 * fVar9 + fVar30 * fVar13;
      fVar64 = fVar27 * fVar12 + fVar35 * fVar9 + fVar31 * fVar13;
      fVar65 = fVar28 * fVar12 + fVar36 * fVar9 + fVar32 * fVar13;
      fVar66 = fVar29 * fVar12 + fVar37 * fVar9 + fVar33 * fVar13;
      uVar48 = -(uint)(fVar63 < fVar14);
      uVar51 = -(uint)(fVar64 < fVar14);
      uVar54 = -(uint)(fVar65 < fVar14);
      uVar57 = -(uint)(fVar66 < fVar14);
      fVar59 = fVar26 * fVar16 + fVar34 * fVar15 + fVar30 * fVar17;
      fVar60 = fVar27 * fVar16 + fVar35 * fVar15 + fVar31 * fVar17;
      fVar61 = fVar28 * fVar16 + fVar36 * fVar15 + fVar32 * fVar17;
      fVar62 = fVar29 * fVar16 + fVar37 * fVar15 + fVar33 * fVar17;
      uVar49 = -(uint)(fVar59 < fVar18);
      uVar52 = -(uint)(fVar60 < fVar18);
      uVar55 = -(uint)(fVar61 < fVar18);
      uVar58 = -(uint)(fVar62 < fVar18);
      fVar87 = (float)(~uVar49 & (~uVar48 & (uVar47 & (uint)fVar8 | ~uVar47 & (uint)fVar6) |
                                 uVar48 & (uint)fVar9) | uVar49 & (uint)fVar15);
      fVar88 = (float)(~uVar52 & (~uVar51 & (uVar50 & (uint)fVar8 | ~uVar50 & (uint)fVar6) |
                                 uVar51 & (uint)fVar9) | uVar52 & (uint)fVar15);
      fVar89 = (float)(~uVar55 & (~uVar54 & (uVar53 & (uint)fVar8 | ~uVar53 & (uint)fVar6) |
                                 uVar54 & (uint)fVar9) | uVar55 & (uint)fVar15);
      fVar90 = (float)(~uVar58 & (~uVar57 & (uVar56 & (uint)fVar8 | ~uVar56 & (uint)fVar6) |
                                 uVar57 & (uint)fVar9) | uVar58 & (uint)fVar15);
      fVar79 = (float)(~uVar49 & (~uVar48 & (uVar47 & (uint)fVar4 | ~uVar47 & (uint)fVar7) |
                                 uVar48 & (uint)fVar12) | uVar49 & (uint)fVar16);
      fVar80 = (float)(~uVar52 & (~uVar51 & (uVar50 & (uint)fVar4 | ~uVar50 & (uint)fVar7) |
                                 uVar51 & (uint)fVar12) | uVar52 & (uint)fVar16);
      fVar81 = (float)(~uVar55 & (~uVar54 & (uVar53 & (uint)fVar4 | ~uVar53 & (uint)fVar7) |
                                 uVar54 & (uint)fVar12) | uVar55 & (uint)fVar16);
      fVar82 = (float)(~uVar58 & (~uVar57 & (uVar56 & (uint)fVar4 | ~uVar56 & (uint)fVar7) |
                                 uVar57 & (uint)fVar12) | uVar58 & (uint)fVar16);
      fVar67 = (float)(~uVar49 & (~uVar48 & (uVar47 & (uint)fVar5 | ~uVar47 & (uint)fVar3) |
                                 uVar48 & (uint)fVar13) | uVar49 & (uint)fVar17);
      fVar68 = (float)(~uVar52 & (~uVar51 & (uVar50 & (uint)fVar5 | ~uVar50 & (uint)fVar3) |
                                 uVar51 & (uint)fVar13) | uVar52 & (uint)fVar17);
      fVar69 = (float)(~uVar55 & (~uVar54 & (uVar53 & (uint)fVar5 | ~uVar53 & (uint)fVar3) |
                                 uVar54 & (uint)fVar13) | uVar55 & (uint)fVar17);
      fVar70 = (float)(~uVar58 & (~uVar57 & (uVar56 & (uint)fVar5 | ~uVar56 & (uint)fVar3) |
                                 uVar57 & (uint)fVar13) | uVar58 & (uint)fVar17);
      uVar71 = -(uint)(((fVar83 < fVar10 || fVar75 < fVar11) || fVar63 < fVar14) || fVar59 < fVar18)
      ;
      uVar72 = -(uint)(((fVar84 < fVar10 || fVar76 < fVar11) || fVar64 < fVar14) || fVar60 < fVar18)
      ;
      uVar73 = -(uint)(((fVar85 < fVar10 || fVar77 < fVar11) || fVar65 < fVar14) || fVar61 < fVar18)
      ;
      uVar74 = -(uint)(((fVar86 < fVar10 || fVar78 < fVar11) || fVar66 < fVar14) || fVar62 < fVar18)
      ;
      pfVar1 = (float *)(lVar24 + uVar46 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(lVar23 + uVar46 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(lVar22 + uVar46 * 4);
      fVar38 = *pfVar1;
      fVar39 = pfVar1[1];
      fVar40 = pfVar1[2];
      fVar41 = pfVar1[3];
      pfVar1 = (float *)(lVar21 + uVar46 * 4);
      fVar42 = *pfVar1;
      fVar43 = pfVar1[1];
      fVar44 = pfVar1[2];
      fVar45 = pfVar1[3];
      fVar59 = (float)(~uVar49 & (~uVar48 & (uVar47 & (uint)fVar75 | ~uVar47 & (uint)fVar83) |
                                 uVar48 & (uint)fVar63) | uVar49 & (uint)fVar59) -
               (float)(~uVar49 & (~uVar48 & (uVar47 & (uint)fVar11 | ~uVar47 & (uint)fVar10) |
                                 uVar48 & (uint)fVar14) | uVar49 & (uint)fVar18);
      fVar60 = (float)(~uVar52 & (~uVar51 & (uVar50 & (uint)fVar76 | ~uVar50 & (uint)fVar84) |
                                 uVar51 & (uint)fVar64) | uVar52 & (uint)fVar60) -
               (float)(~uVar52 & (~uVar51 & (uVar50 & (uint)fVar11 | ~uVar50 & (uint)fVar10) |
                                 uVar51 & (uint)fVar14) | uVar52 & (uint)fVar18);
      fVar61 = (float)(~uVar55 & (~uVar54 & (uVar53 & (uint)fVar77 | ~uVar53 & (uint)fVar85) |
                                 uVar54 & (uint)fVar65) | uVar55 & (uint)fVar61) -
               (float)(~uVar55 & (~uVar54 & (uVar53 & (uint)fVar11 | ~uVar53 & (uint)fVar10) |
                                 uVar54 & (uint)fVar14) | uVar55 & (uint)fVar18);
      fVar62 = (float)(~uVar58 & (~uVar57 & (uVar56 & (uint)fVar78 | ~uVar56 & (uint)fVar86) |
                                 uVar57 & (uint)fVar66) | uVar58 & (uint)fVar62) -
               (float)(~uVar58 & (~uVar57 & (uVar56 & (uint)fVar11 | ~uVar56 & (uint)fVar10) |
                                 uVar57 & (uint)fVar14) | uVar58 & (uint)fVar18);
      fVar63 = (fVar79 * fVar26 + fVar87 * fVar38 + fVar67 * fVar30) * *param_1;
      fVar64 = (fVar80 * fVar27 + fVar88 * fVar39 + fVar68 * fVar31) * param_1[1];
      fVar65 = (fVar81 * fVar28 + fVar89 * fVar40 + fVar69 * fVar32) * param_1[2];
      fVar66 = (fVar82 * fVar29 + fVar90 * fVar41 + fVar70 * fVar33) * param_1[3];
      puVar2 = (uint *)(lVar20 + uVar46 * 4);
      *puVar2 = (uint)(fVar34 - fVar59 * fVar87) & uVar71 | ~uVar71 & (uint)fVar34;
      puVar2[1] = (uint)(fVar35 - fVar60 * fVar88) & uVar72 | ~uVar72 & (uint)fVar35;
      puVar2[2] = (uint)(fVar36 - fVar61 * fVar89) & uVar73 | ~uVar73 & (uint)fVar36;
      puVar2[3] = (uint)(fVar37 - fVar62 * fVar90) & uVar74 | ~uVar74 & (uint)fVar37;
      pfVar1 = (float *)(lVar25 + uVar46 * 4);
      fVar34 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      puVar2 = (uint *)(lVar21 + uVar46 * 4);
      *puVar2 = (uint)(fVar42 - fVar59 * fVar79) & uVar71 | ~uVar71 & (uint)fVar42;
      puVar2[1] = (uint)(fVar43 - fVar60 * fVar80) & uVar72 | ~uVar72 & (uint)fVar43;
      puVar2[2] = (uint)(fVar44 - fVar61 * fVar81) & uVar73 | ~uVar73 & (uint)fVar44;
      puVar2[3] = (uint)(fVar45 - fVar62 * fVar82) & uVar74 | ~uVar74 & (uint)fVar45;
      puVar2 = (uint *)(lVar25 + uVar46 * 4);
      *puVar2 = (uint)(fVar34 - fVar59 * fVar67) & uVar71 | ~uVar71 & (uint)fVar34;
      puVar2[1] = (uint)(fVar35 - fVar60 * fVar68) & uVar72 | ~uVar72 & (uint)fVar35;
      puVar2[2] = (uint)(fVar36 - fVar61 * fVar69) & uVar73 | ~uVar73 & (uint)fVar36;
      puVar2[3] = (uint)(fVar37 - fVar62 * fVar70) & uVar74 | ~uVar74 & (uint)fVar37;
      puVar2 = (uint *)(lVar22 + uVar46 * 4);
      *puVar2 = (uint)(fVar63 * fVar87 + fVar38) & uVar71 | ~uVar71 & (uint)fVar38;
      puVar2[1] = (uint)(fVar64 * fVar88 + fVar39) & uVar72 | ~uVar72 & (uint)fVar39;
      puVar2[2] = (uint)(fVar65 * fVar89 + fVar40) & uVar73 | ~uVar73 & (uint)fVar40;
      puVar2[3] = (uint)(fVar66 * fVar90 + fVar41) & uVar74 | ~uVar74 & (uint)fVar41;
      puVar2 = (uint *)(lVar24 + uVar46 * 4);
      *puVar2 = (uint)(fVar63 * fVar79 + fVar26) & uVar71 | ~uVar71 & (uint)fVar26;
      puVar2[1] = (uint)(fVar64 * fVar80 + fVar27) & uVar72 | ~uVar72 & (uint)fVar27;
      puVar2[2] = (uint)(fVar65 * fVar81 + fVar28) & uVar73 | ~uVar73 & (uint)fVar28;
      puVar2[3] = (uint)(fVar66 * fVar82 + fVar29) & uVar74 | ~uVar74 & (uint)fVar29;
      puVar2 = (uint *)(lVar23 + uVar46 * 4);
      *puVar2 = (uint)(fVar63 * fVar67 + fVar30) & uVar71 | ~uVar71 & (uint)fVar30;
      puVar2[1] = (uint)(fVar64 * fVar68 + fVar31) & uVar72 | ~uVar72 & (uint)fVar31;
      puVar2[2] = (uint)(fVar65 * fVar69 + fVar32) & uVar73 | ~uVar73 & (uint)fVar32;
      puVar2[3] = (uint)(fVar66 * fVar70 + fVar33) & uVar74 | ~uVar74 & (uint)fVar33;
      uVar47 = (int)uVar46 + 4;
      uVar46 = (ulonglong)uVar47;
    } while (uVar47 < uVar19);
  }
  return;
}

