// Function: FUN_14024fc40
// Addr: 14024fc40
// Size: 169 bytes


void FUN_14024fc40(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
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
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
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
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
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
  
  fVar5 = param_3[2];
  lVar22 = *(longlong *)(param_2 + 0x68);
  lVar23 = *(longlong *)(param_2 + 0x70);
  fVar6 = *param_7;
  lVar24 = *(longlong *)(param_2 + 0x78);
  lVar25 = *(longlong *)(param_2 + 0x80);
  fVar7 = *param_3;
  fVar8 = param_4[1];
  fVar9 = param_3[1];
  lVar26 = *(longlong *)(param_2 + 0x58);
  fVar10 = param_4[2];
  fVar11 = *param_4;
  lVar27 = *(longlong *)(param_2 + 0x60);
  fVar12 = param_7[1];
  fVar13 = param_5[1];
  fVar14 = *param_5;
  fVar15 = param_5[2];
  fVar16 = param_7[2];
  fVar17 = *param_6;
  fVar18 = param_6[1];
  fVar19 = param_6[2];
  fVar20 = param_7[3];
  uVar21 = *(uint *)(param_2 + 0xe8);
  uVar32 = 0;
  if (uVar21 != 0) {
    do {
      pfVar1 = (float *)(lVar26 + uVar32 * 4);
      fVar61 = *pfVar1;
      fVar62 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar64 = pfVar1[3];
      pfVar1 = (float *)(lVar27 + uVar32 * 4);
      fVar28 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar1 = (float *)(lVar22 + uVar32 * 4);
      fVar45 = *pfVar1;
      fVar46 = pfVar1[1];
      fVar47 = pfVar1[2];
      fVar48 = pfVar1[3];
      fVar81 = fVar28 * fVar9 + fVar61 * fVar7 + fVar45 * fVar5;
      fVar82 = fVar29 * fVar9 + fVar62 * fVar7 + fVar46 * fVar5;
      fVar83 = fVar30 * fVar9 + fVar63 * fVar7 + fVar47 * fVar5;
      fVar84 = fVar31 * fVar9 + fVar64 * fVar7 + fVar48 * fVar5;
      fVar73 = fVar28 * fVar8 + fVar61 * fVar11 + fVar45 * fVar10;
      fVar74 = fVar29 * fVar8 + fVar62 * fVar11 + fVar46 * fVar10;
      fVar75 = fVar30 * fVar8 + fVar63 * fVar11 + fVar47 * fVar10;
      fVar76 = fVar31 * fVar8 + fVar64 * fVar11 + fVar48 * fVar10;
      uVar33 = -(uint)(fVar73 < fVar12);
      uVar36 = -(uint)(fVar74 < fVar12);
      uVar39 = -(uint)(fVar75 < fVar12);
      uVar42 = -(uint)(fVar76 < fVar12);
      fVar69 = fVar28 * fVar13 + fVar61 * fVar14 + fVar45 * fVar15;
      fVar70 = fVar29 * fVar13 + fVar62 * fVar14 + fVar46 * fVar15;
      fVar71 = fVar30 * fVar13 + fVar63 * fVar14 + fVar47 * fVar15;
      fVar72 = fVar31 * fVar13 + fVar64 * fVar14 + fVar48 * fVar15;
      uVar34 = -(uint)(fVar69 < fVar16);
      uVar37 = -(uint)(fVar70 < fVar16);
      uVar40 = -(uint)(fVar71 < fVar16);
      uVar43 = -(uint)(fVar72 < fVar16);
      fVar61 = fVar28 * fVar18 + fVar61 * fVar17 + fVar45 * fVar19;
      fVar62 = fVar29 * fVar18 + fVar62 * fVar17 + fVar46 * fVar19;
      fVar63 = fVar30 * fVar18 + fVar63 * fVar17 + fVar47 * fVar19;
      fVar64 = fVar31 * fVar18 + fVar64 * fVar17 + fVar48 * fVar19;
      uVar35 = -(uint)(fVar61 < fVar20);
      uVar38 = -(uint)(fVar62 < fVar20);
      uVar41 = -(uint)(fVar63 < fVar20);
      uVar44 = -(uint)(fVar64 < fVar20);
      fVar77 = (float)(~uVar35 & (~uVar34 & (uVar33 & (uint)fVar11 | ~uVar33 & (uint)fVar7) |
                                 uVar34 & (uint)fVar14) | uVar35 & (uint)fVar17);
      fVar78 = (float)(~uVar38 & (~uVar37 & (uVar36 & (uint)fVar11 | ~uVar36 & (uint)fVar7) |
                                 uVar37 & (uint)fVar14) | uVar38 & (uint)fVar17);
      fVar79 = (float)(~uVar41 & (~uVar40 & (uVar39 & (uint)fVar11 | ~uVar39 & (uint)fVar7) |
                                 uVar40 & (uint)fVar14) | uVar41 & (uint)fVar17);
      fVar80 = (float)(~uVar44 & (~uVar43 & (uVar42 & (uint)fVar11 | ~uVar42 & (uint)fVar7) |
                                 uVar43 & (uint)fVar14) | uVar44 & (uint)fVar17);
      fVar65 = (float)(~uVar35 & (~uVar34 & (uVar33 & (uint)fVar8 | ~uVar33 & (uint)fVar9) |
                                 uVar34 & (uint)fVar13) | uVar35 & (uint)fVar18);
      fVar66 = (float)(~uVar38 & (~uVar37 & (uVar36 & (uint)fVar8 | ~uVar36 & (uint)fVar9) |
                                 uVar37 & (uint)fVar13) | uVar38 & (uint)fVar18);
      fVar67 = (float)(~uVar41 & (~uVar40 & (uVar39 & (uint)fVar8 | ~uVar39 & (uint)fVar9) |
                                 uVar40 & (uint)fVar13) | uVar41 & (uint)fVar18);
      fVar68 = (float)(~uVar44 & (~uVar43 & (uVar42 & (uint)fVar8 | ~uVar42 & (uint)fVar9) |
                                 uVar43 & (uint)fVar13) | uVar44 & (uint)fVar18);
      fVar53 = (float)(~uVar35 & (~uVar34 & (uVar33 & (uint)fVar10 | ~uVar33 & (uint)fVar5) |
                                 uVar34 & (uint)fVar15) | uVar35 & (uint)fVar19);
      fVar54 = (float)(~uVar38 & (~uVar37 & (uVar36 & (uint)fVar10 | ~uVar36 & (uint)fVar5) |
                                 uVar37 & (uint)fVar15) | uVar38 & (uint)fVar19);
      fVar55 = (float)(~uVar41 & (~uVar40 & (uVar39 & (uint)fVar10 | ~uVar39 & (uint)fVar5) |
                                 uVar40 & (uint)fVar15) | uVar41 & (uint)fVar19);
      fVar56 = (float)(~uVar44 & (~uVar43 & (uVar42 & (uint)fVar10 | ~uVar42 & (uint)fVar5) |
                                 uVar43 & (uint)fVar15) | uVar44 & (uint)fVar19);
      pfVar1 = (float *)(lVar24 + uVar32 * 4);
      pfVar2 = (float *)(lVar23 + uVar32 * 4);
      pfVar3 = (float *)(lVar25 + uVar32 * 4);
      uVar57 = -(uint)(((fVar81 < fVar6 || fVar73 < fVar12) || fVar69 < fVar16) || fVar61 < fVar20);
      uVar58 = -(uint)(((fVar82 < fVar6 || fVar74 < fVar12) || fVar70 < fVar16) || fVar62 < fVar20);
      uVar59 = -(uint)(((fVar83 < fVar6 || fVar75 < fVar12) || fVar71 < fVar16) || fVar63 < fVar20);
      uVar60 = -(uint)(((fVar84 < fVar6 || fVar76 < fVar12) || fVar72 < fVar16) || fVar64 < fVar20);
      fVar49 = fVar65 * *pfVar1 + fVar77 * *pfVar2 + fVar53 * *pfVar3;
      fVar50 = fVar66 * pfVar1[1] + fVar78 * pfVar2[1] + fVar54 * pfVar3[1];
      fVar51 = fVar67 * pfVar1[2] + fVar79 * pfVar2[2] + fVar55 * pfVar3[2];
      fVar52 = fVar68 * pfVar1[3] + fVar80 * pfVar2[3] + fVar56 * pfVar3[3];
      fVar45 = (float)(~uVar35 & (~uVar34 & (uVar33 & (uint)fVar73 | ~uVar33 & (uint)fVar81) |
                                 uVar34 & (uint)fVar69) | uVar35 & (uint)fVar61) -
               (float)(~uVar35 & (~uVar34 & (uVar33 & (uint)fVar12 | ~uVar33 & (uint)fVar6) |
                                 uVar34 & (uint)fVar16) | uVar35 & (uint)fVar20);
      fVar46 = (float)(~uVar38 & (~uVar37 & (uVar36 & (uint)fVar74 | ~uVar36 & (uint)fVar82) |
                                 uVar37 & (uint)fVar70) | uVar38 & (uint)fVar62) -
               (float)(~uVar38 & (~uVar37 & (uVar36 & (uint)fVar12 | ~uVar36 & (uint)fVar6) |
                                 uVar37 & (uint)fVar16) | uVar38 & (uint)fVar20);
      fVar47 = (float)(~uVar41 & (~uVar40 & (uVar39 & (uint)fVar75 | ~uVar39 & (uint)fVar83) |
                                 uVar40 & (uint)fVar71) | uVar41 & (uint)fVar63) -
               (float)(~uVar41 & (~uVar40 & (uVar39 & (uint)fVar12 | ~uVar39 & (uint)fVar6) |
                                 uVar40 & (uint)fVar16) | uVar41 & (uint)fVar20);
      fVar48 = (float)(~uVar44 & (~uVar43 & (uVar42 & (uint)fVar76 | ~uVar42 & (uint)fVar84) |
                                 uVar43 & (uint)fVar72) | uVar44 & (uint)fVar64) -
               (float)(~uVar44 & (~uVar43 & (uVar42 & (uint)fVar12 | ~uVar42 & (uint)fVar6) |
                                 uVar43 & (uint)fVar16) | uVar44 & (uint)fVar20);
      pfVar1 = (float *)(lVar26 + uVar32 * 4);
      fVar61 = pfVar1[1];
      fVar62 = pfVar1[2];
      fVar63 = pfVar1[3];
      pfVar2 = (float *)(lVar27 + uVar32 * 4);
      fVar64 = *pfVar2;
      fVar28 = pfVar2[1];
      fVar29 = pfVar2[2];
      fVar30 = pfVar2[3];
      puVar4 = (uint *)(lVar26 + uVar32 * 4);
      *puVar4 = (uint)(*pfVar1 - fVar45 * fVar77) & uVar57 | ~uVar57 & (uint)*pfVar1;
      puVar4[1] = (uint)(fVar61 - fVar46 * fVar78) & uVar58 | ~uVar58 & (uint)fVar61;
      puVar4[2] = (uint)(fVar62 - fVar47 * fVar79) & uVar59 | ~uVar59 & (uint)fVar62;
      puVar4[3] = (uint)(fVar63 - fVar48 * fVar80) & uVar60 | ~uVar60 & (uint)fVar63;
      pfVar1 = (float *)(lVar22 + uVar32 * 4);
      fVar61 = *pfVar1;
      fVar62 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar31 = pfVar1[3];
      puVar4 = (uint *)(lVar27 + uVar32 * 4);
      *puVar4 = (uint)(fVar64 - fVar45 * fVar65) & uVar57 | ~uVar57 & (uint)fVar64;
      puVar4[1] = (uint)(fVar28 - fVar46 * fVar66) & uVar58 | ~uVar58 & (uint)fVar28;
      puVar4[2] = (uint)(fVar29 - fVar47 * fVar67) & uVar59 | ~uVar59 & (uint)fVar29;
      puVar4[3] = (uint)(fVar30 - fVar48 * fVar68) & uVar60 | ~uVar60 & (uint)fVar30;
      pfVar1 = (float *)(lVar23 + uVar32 * 4);
      fVar64 = *pfVar1;
      fVar28 = pfVar1[1];
      fVar29 = pfVar1[2];
      fVar30 = pfVar1[3];
      puVar4 = (uint *)(lVar22 + uVar32 * 4);
      *puVar4 = (uint)(fVar61 - fVar45 * fVar53) & uVar57 | ~uVar57 & (uint)fVar61;
      puVar4[1] = (uint)(fVar62 - fVar46 * fVar54) & uVar58 | ~uVar58 & (uint)fVar62;
      puVar4[2] = (uint)(fVar63 - fVar47 * fVar55) & uVar59 | ~uVar59 & (uint)fVar63;
      puVar4[3] = (uint)(fVar31 - fVar48 * fVar56) & uVar60 | ~uVar60 & (uint)fVar31;
      pfVar1 = (float *)(lVar24 + uVar32 * 4);
      fVar61 = *pfVar1;
      fVar62 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar31 = pfVar1[3];
      puVar4 = (uint *)(lVar23 + uVar32 * 4);
      *puVar4 = (uint)(fVar64 - fVar49 * fVar77) & uVar57 | ~uVar57 & (uint)fVar64;
      puVar4[1] = (uint)(fVar28 - fVar50 * fVar78) & uVar58 | ~uVar58 & (uint)fVar28;
      puVar4[2] = (uint)(fVar29 - fVar51 * fVar79) & uVar59 | ~uVar59 & (uint)fVar29;
      puVar4[3] = (uint)(fVar30 - fVar52 * fVar80) & uVar60 | ~uVar60 & (uint)fVar30;
      puVar4 = (uint *)(lVar24 + uVar32 * 4);
      *puVar4 = (uint)(fVar61 - fVar49 * fVar65) & uVar57 | ~uVar57 & (uint)fVar61;
      puVar4[1] = (uint)(fVar62 - fVar50 * fVar66) & uVar58 | ~uVar58 & (uint)fVar62;
      puVar4[2] = (uint)(fVar63 - fVar51 * fVar67) & uVar59 | ~uVar59 & (uint)fVar63;
      puVar4[3] = (uint)(fVar31 - fVar52 * fVar68) & uVar60 | ~uVar60 & (uint)fVar31;
      pfVar1 = (float *)(lVar25 + uVar32 * 4);
      fVar61 = pfVar1[1];
      fVar62 = pfVar1[2];
      fVar63 = pfVar1[3];
      puVar4 = (uint *)(lVar25 + uVar32 * 4);
      *puVar4 = (uint)(*pfVar1 - fVar49 * fVar53) & uVar57 | ~uVar57 & (uint)*pfVar1;
      puVar4[1] = (uint)(fVar61 - fVar50 * fVar54) & uVar58 | ~uVar58 & (uint)fVar61;
      puVar4[2] = (uint)(fVar62 - fVar51 * fVar55) & uVar59 | ~uVar59 & (uint)fVar62;
      puVar4[3] = (uint)(fVar63 - fVar52 * fVar56) & uVar60 | ~uVar60 & (uint)fVar63;
      uVar33 = (int)uVar32 + 4;
      uVar32 = (ulonglong)uVar33;
    } while (uVar33 < uVar21);
  }
  return;
}

