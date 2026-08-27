// Function: FUN_140254dc0
// Addr: 140254dc0
// Size: 635 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140254dc0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
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
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
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
  ulonglong uVar55;
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
  uint uVar69;
  float fVar70;
  uint uVar71;
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  
  uVar53 = _UNK_14048379c;
  uVar52 = _UNK_140483798;
  uVar51 = _UNK_140483794;
  uVar50 = _DAT_140483790;
  uVar6 = *(uint *)(param_2 + 0xe8);
  lVar7 = *(longlong *)(param_2 + 0x58);
  lVar8 = *(longlong *)(param_2 + 0x60);
  lVar9 = *(longlong *)(param_2 + 0x68);
  lVar10 = *(longlong *)(param_2 + 0x88);
  lVar11 = *(longlong *)(param_2 + 0x90);
  lVar12 = *(longlong *)(param_2 + 0x98);
  lVar13 = *(longlong *)(param_2 + 0x70);
  lVar14 = *(longlong *)(param_2 + 0x78);
  lVar15 = *(longlong *)(param_2 + 0x80);
  uVar55 = 0;
  fVar68 = *(float *)(param_1 + 0x20);
  fVar70 = *(float *)(param_1 + 0x24);
  fVar72 = *(float *)(param_1 + 0x28);
  fVar74 = *(float *)(param_1 + 0x2c);
  fVar16 = *(float *)(param_1 + 0x50);
  fVar17 = *(float *)(param_1 + 0x54);
  fVar18 = *(float *)(param_1 + 0x58);
  fVar19 = *(float *)(param_1 + 0x5c);
  fVar20 = *(float *)(param_1 + 0x60);
  fVar21 = *(float *)(param_1 + 100);
  fVar22 = *(float *)(param_1 + 0x68);
  fVar23 = *(float *)(param_1 + 0x6c);
  fVar24 = *(float *)(param_1 + 0x70);
  fVar25 = *(float *)(param_1 + 0x74);
  fVar26 = *(float *)(param_1 + 0x78);
  fVar27 = *(float *)(param_1 + 0x7c);
  if (uVar6 != 0) {
    do {
      pfVar1 = (float *)(lVar7 + uVar55 * 4);
      fVar28 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar1 = (float *)(lVar8 + uVar55 * 4);
      fVar32 = *pfVar1;
      fVar33 = pfVar1[1];
      fVar34 = pfVar1[2];
      fVar35 = pfVar1[3];
      pfVar1 = (float *)(lVar9 + uVar55 * 4);
      fVar36 = *pfVar1;
      fVar37 = pfVar1[1];
      fVar38 = pfVar1[2];
      fVar39 = pfVar1[3];
      fVar60 = fVar28 - fVar68;
      fVar61 = fVar29 - fVar70;
      fVar62 = fVar30 - fVar72;
      fVar63 = fVar31 - fVar74;
      pfVar1 = (float *)(lVar11 + uVar55 * 4);
      fVar64 = fVar32 - *(float *)(param_1 + 0x30);
      fVar65 = fVar33 - *(float *)(param_1 + 0x34);
      fVar66 = fVar34 - *(float *)(param_1 + 0x38);
      fVar67 = fVar35 - *(float *)(param_1 + 0x3c);
      fVar56 = fVar36 - *(float *)(param_1 + 0x40);
      fVar57 = fVar37 - *(float *)(param_1 + 0x44);
      fVar58 = fVar38 - *(float *)(param_1 + 0x48);
      fVar59 = fVar39 - *(float *)(param_1 + 0x4c);
      pfVar5 = (float *)(lVar10 + uVar55 * 4);
      fVar76 = fVar64 * fVar20 + fVar60 * fVar16 + fVar56 * fVar24;
      fVar78 = fVar65 * fVar21 + fVar61 * fVar17 + fVar57 * fVar25;
      fVar80 = fVar66 * fVar22 + fVar62 * fVar18 + fVar58 * fVar26;
      fVar82 = fVar67 * fVar23 + fVar63 * fVar19 + fVar59 * fVar27;
      pfVar2 = (float *)(lVar12 + uVar55 * 4);
      fVar77 = fVar76 * _DAT_140492e70;
      fVar79 = fVar78 * _UNK_140492e74;
      fVar81 = fVar80 * _UNK_140492e78;
      fVar83 = fVar82 * _UNK_140492e7c;
      uVar69 = -(uint)(((0.0 < (*pfVar1 - *(float *)(param_1 + 0x30)) * fVar20 +
                               (*pfVar5 - fVar68) * fVar16 +
                               (*pfVar2 - *(float *)(param_1 + 0x40)) * fVar24 && fVar76 <= 0.0) &&
                       (float)((uint)(fVar64 * *(float *)(param_1 + 0x90) +
                                      fVar60 * *(float *)(param_1 + 0x80) +
                                     fVar56 * *(float *)(param_1 + 0xa0)) & uVar50) <
                       *(float *)(param_1 + 0xb0)) &&
                      (float)((uint)(fVar64 * *(float *)(param_1 + 0xd0) +
                                     fVar60 * *(float *)(param_1 + 0xc0) +
                                    fVar56 * *(float *)(param_1 + 0xe0)) & uVar50) <
                      *(float *)(param_1 + 0xf0));
      uVar71 = -(uint)(((0.0 < (pfVar1[1] - *(float *)(param_1 + 0x34)) * fVar21 +
                               (pfVar5[1] - fVar70) * fVar17 +
                               (pfVar2[1] - *(float *)(param_1 + 0x44)) * fVar25 && fVar78 <= 0.0)
                       && (float)((uint)(fVar65 * *(float *)(param_1 + 0x94) +
                                         fVar61 * *(float *)(param_1 + 0x84) +
                                        fVar57 * *(float *)(param_1 + 0xa4)) & uVar51) <
                          *(float *)(param_1 + 0xb4)) &&
                      (float)((uint)(fVar65 * *(float *)(param_1 + 0xd4) +
                                     fVar61 * *(float *)(param_1 + 0xc4) +
                                    fVar57 * *(float *)(param_1 + 0xe4)) & uVar51) <
                      *(float *)(param_1 + 0xf4));
      uVar73 = -(uint)(((0.0 < (pfVar1[2] - *(float *)(param_1 + 0x38)) * fVar22 +
                               (pfVar5[2] - fVar72) * fVar18 +
                               (pfVar2[2] - *(float *)(param_1 + 0x48)) * fVar26 && fVar80 <= 0.0)
                       && (float)((uint)(fVar66 * *(float *)(param_1 + 0x98) +
                                         fVar62 * *(float *)(param_1 + 0x88) +
                                        fVar58 * *(float *)(param_1 + 0xa8)) & uVar52) <
                          *(float *)(param_1 + 0xb8)) &&
                      (float)((uint)(fVar66 * *(float *)(param_1 + 0xd8) +
                                     fVar62 * *(float *)(param_1 + 200) +
                                    fVar58 * *(float *)(param_1 + 0xe8)) & uVar52) <
                      *(float *)(param_1 + 0xf8));
      uVar75 = -(uint)(((0.0 < (pfVar1[3] - *(float *)(param_1 + 0x3c)) * fVar23 +
                               (pfVar5[3] - fVar74) * fVar19 +
                               (pfVar2[3] - *(float *)(param_1 + 0x4c)) * fVar27 && fVar82 <= 0.0)
                       && (float)((uint)(fVar67 * *(float *)(param_1 + 0x9c) +
                                         fVar63 * *(float *)(param_1 + 0x8c) +
                                        fVar59 * *(float *)(param_1 + 0xac)) & uVar53) <
                          *(float *)(param_1 + 0xbc)) &&
                      (float)((uint)(fVar67 * *(float *)(param_1 + 0xdc) +
                                     fVar63 * *(float *)(param_1 + 0xcc) +
                                    fVar59 * *(float *)(param_1 + 0xec)) & uVar53) <
                      *(float *)(param_1 + 0xfc));
      puVar3 = (uint *)(lVar7 + uVar55 * 4);
      *puVar3 = (uint)(fVar28 - fVar77 * fVar16) & uVar69 | ~uVar69 & (uint)fVar28;
      puVar3[1] = (uint)(fVar29 - fVar79 * fVar17) & uVar71 | ~uVar71 & (uint)fVar29;
      puVar3[2] = (uint)(fVar30 - fVar81 * fVar18) & uVar73 | ~uVar73 & (uint)fVar30;
      puVar3[3] = (uint)(fVar31 - fVar83 * fVar19) & uVar75 | ~uVar75 & (uint)fVar31;
      puVar3 = (uint *)(lVar8 + uVar55 * 4);
      *puVar3 = (uint)(fVar32 - fVar77 * fVar20) & uVar69 | ~uVar69 & (uint)fVar32;
      puVar3[1] = (uint)(fVar33 - fVar79 * fVar21) & uVar71 | ~uVar71 & (uint)fVar33;
      puVar3[2] = (uint)(fVar34 - fVar81 * fVar22) & uVar73 | ~uVar73 & (uint)fVar34;
      puVar3[3] = (uint)(fVar35 - fVar83 * fVar23) & uVar75 | ~uVar75 & (uint)fVar35;
      puVar3 = (uint *)(lVar9 + uVar55 * 4);
      *puVar3 = (uint)(fVar36 - fVar77 * fVar24) & uVar69 | ~uVar69 & (uint)fVar36;
      puVar3[1] = (uint)(fVar37 - fVar79 * fVar25) & uVar71 | ~uVar71 & (uint)fVar37;
      puVar3[2] = (uint)(fVar38 - fVar81 * fVar26) & uVar73 | ~uVar73 & (uint)fVar38;
      puVar3[3] = (uint)(fVar39 - fVar83 * fVar27) & uVar75 | ~uVar75 & (uint)fVar39;
      puVar3 = (uint *)(lVar13 + uVar55 * 4);
      uVar54 = *puVar3;
      uVar40 = puVar3[1];
      uVar41 = puVar3[2];
      uVar42 = puVar3[3];
      puVar3 = (uint *)(lVar15 + uVar55 * 4);
      uVar43 = puVar3[1];
      uVar44 = puVar3[2];
      uVar45 = puVar3[3];
      puVar4 = (uint *)(lVar14 + uVar55 * 4);
      uVar46 = *puVar4;
      uVar47 = puVar4[1];
      uVar48 = puVar4[2];
      uVar49 = puVar4[3];
      puVar4 = (uint *)(lVar15 + uVar55 * 4);
      *puVar4 = ~uVar69 & *puVar3;
      puVar4[1] = ~uVar71 & uVar43;
      puVar4[2] = ~uVar73 & uVar44;
      puVar4[3] = ~uVar75 & uVar45;
      fVar68 = *(float *)(param_1 + 0x20);
      fVar70 = *(float *)(param_1 + 0x24);
      fVar72 = *(float *)(param_1 + 0x28);
      fVar74 = *(float *)(param_1 + 0x2c);
      puVar3 = (uint *)(lVar14 + uVar55 * 4);
      *puVar3 = ~uVar69 & uVar46;
      puVar3[1] = ~uVar71 & uVar47;
      puVar3[2] = ~uVar73 & uVar48;
      puVar3[3] = ~uVar75 & uVar49;
      puVar3 = (uint *)(lVar13 + uVar55 * 4);
      *puVar3 = ~uVar69 & uVar54;
      puVar3[1] = ~uVar71 & uVar40;
      puVar3[2] = ~uVar73 & uVar41;
      puVar3[3] = ~uVar75 & uVar42;
      uVar54 = (int)uVar55 + 4;
      uVar55 = (ulonglong)uVar54;
    } while (uVar54 < uVar6);
  }
  return;
}

