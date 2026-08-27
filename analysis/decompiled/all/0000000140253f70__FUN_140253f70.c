// Function: FUN_140253f70
// Addr: 140253f70
// Size: 795 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140253f70(float *param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
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
  float fVar71;
  uint uVar72;
  float fVar73;
  uint uVar74;
  float fVar75;
  uint uVar76;
  float fVar77;
  uint uVar78;
  
  uVar4 = *(uint *)(param_2 + 0xe8);
  if (uVar4 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x58);
    lVar6 = *(longlong *)(param_2 + 0x60);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = *(longlong *)(param_2 + 0x70);
    lVar9 = *(longlong *)(param_2 + 0x88);
    lVar10 = *(longlong *)(param_2 + 0x80);
    lVar11 = *(longlong *)(param_2 + 0x78);
    lVar12 = *(longlong *)(param_2 + 0x90);
    lVar13 = *(longlong *)(param_2 + 0x98);
    uVar46 = 0;
    fVar71 = param_1[0x18];
    fVar73 = param_1[0x19];
    fVar75 = param_1[0x1a];
    fVar77 = param_1[0x1b];
    fVar14 = param_1[0x14];
    fVar15 = param_1[0x15];
    fVar16 = param_1[0x16];
    fVar17 = param_1[0x17];
    do {
      pfVar1 = (float *)(lVar5 + uVar46 * 4);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar1 = (float *)(lVar6 + uVar46 * 4);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      fVar55 = fVar18 - param_1[8];
      fVar56 = fVar19 - param_1[9];
      fVar57 = fVar20 - param_1[10];
      fVar58 = fVar21 - param_1[0xb];
      pfVar1 = (float *)(lVar7 + uVar46 * 4);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      fVar59 = fVar22 - param_1[0xc];
      fVar60 = fVar23 - param_1[0xd];
      fVar61 = fVar24 - param_1[0xe];
      fVar62 = fVar25 - param_1[0xf];
      pfVar1 = (float *)(lVar12 + uVar46 * 4);
      fVar51 = fVar26 - param_1[0x10];
      fVar52 = fVar27 - param_1[0x11];
      fVar53 = fVar28 - param_1[0x12];
      fVar54 = fVar29 - param_1[0x13];
      pfVar2 = (float *)(lVar8 + uVar46 * 4);
      fVar30 = *pfVar2;
      fVar31 = pfVar2[1];
      fVar32 = pfVar2[2];
      fVar33 = pfVar2[3];
      pfVar2 = (float *)(lVar11 + uVar46 * 4);
      fVar34 = *pfVar2;
      fVar35 = pfVar2[1];
      fVar36 = pfVar2[2];
      fVar37 = pfVar2[3];
      pfVar2 = (float *)(lVar10 + uVar46 * 4);
      fVar38 = *pfVar2;
      fVar39 = pfVar2[1];
      fVar40 = pfVar2[2];
      fVar41 = pfVar2[3];
      fVar47 = (*pfVar1 - param_1[0xc]) * fVar71;
      fVar48 = (pfVar1[1] - param_1[0xd]) * fVar73;
      fVar49 = (pfVar1[2] - param_1[0xe]) * fVar75;
      fVar50 = (pfVar1[3] - param_1[0xf]) * fVar77;
      pfVar2 = (float *)(lVar9 + uVar46 * 4);
      fVar63 = fVar59 * fVar71 + fVar55 * fVar14 + fVar51 * param_1[0x1c];
      fVar65 = fVar60 * fVar73 + fVar56 * fVar15 + fVar52 * param_1[0x1d];
      fVar67 = fVar61 * fVar75 + fVar57 * fVar16 + fVar53 * param_1[0x1e];
      fVar69 = fVar62 * fVar77 + fVar58 * fVar17 + fVar54 * param_1[0x1f];
      pfVar1 = (float *)(lVar13 + uVar46 * 4);
      fVar64 = fVar63 * _DAT_140492e70;
      fVar66 = fVar65 * _UNK_140492e74;
      fVar68 = fVar67 * _UNK_140492e78;
      fVar70 = fVar69 * _UNK_140492e7c;
      fVar42 = param_1[0x1c];
      fVar43 = param_1[0x1d];
      fVar44 = param_1[0x1e];
      fVar45 = param_1[0x1f];
      fVar71 = param_1[0x18];
      fVar73 = param_1[0x19];
      fVar75 = param_1[0x1a];
      fVar77 = param_1[0x1b];
      uVar72 = -(uint)(((0.0 < fVar47 + (*pfVar2 - param_1[8]) * fVar14 +
                               (*pfVar1 - param_1[0x10]) * param_1[0x1c] && fVar63 <= 0.0) &&
                       (float)((uint)(fVar59 * param_1[0x24] + fVar55 * param_1[0x20] +
                                     fVar51 * param_1[0x28]) & _DAT_140483790) < param_1[0x2c]) &&
                      (float)((uint)(fVar59 * param_1[0x34] + fVar55 * param_1[0x30] +
                                    fVar51 * param_1[0x38]) & _DAT_140483790) < param_1[0x3c]);
      uVar74 = -(uint)(((0.0 < fVar48 + (pfVar2[1] - param_1[9]) * fVar15 +
                               (pfVar1[1] - param_1[0x11]) * param_1[0x1d] && fVar65 <= 0.0) &&
                       (float)((uint)(fVar60 * param_1[0x25] + fVar56 * param_1[0x21] +
                                     fVar52 * param_1[0x29]) & _UNK_140483794) < param_1[0x2d]) &&
                      (float)((uint)(fVar60 * param_1[0x35] + fVar56 * param_1[0x31] +
                                    fVar52 * param_1[0x39]) & _UNK_140483794) < param_1[0x3d]);
      uVar76 = -(uint)(((0.0 < fVar49 + (pfVar2[2] - param_1[10]) * fVar16 +
                               (pfVar1[2] - param_1[0x12]) * param_1[0x1e] && fVar67 <= 0.0) &&
                       (float)((uint)(fVar61 * param_1[0x26] + fVar57 * param_1[0x22] +
                                     fVar53 * param_1[0x2a]) & _UNK_140483798) < param_1[0x2e]) &&
                      (float)((uint)(fVar61 * param_1[0x36] + fVar57 * param_1[0x32] +
                                    fVar53 * param_1[0x3a]) & _UNK_140483798) < param_1[0x3e]);
      uVar78 = -(uint)(((0.0 < fVar50 + (pfVar2[3] - param_1[0xb]) * fVar17 +
                               (pfVar1[3] - param_1[0x13]) * param_1[0x1f] && fVar69 <= 0.0) &&
                       (float)((uint)(fVar62 * param_1[0x27] + fVar58 * param_1[0x23] +
                                     fVar54 * param_1[0x2b]) & _UNK_14048379c) < param_1[0x2f]) &&
                      (float)((uint)(fVar62 * param_1[0x37] + fVar58 * param_1[0x33] +
                                    fVar54 * param_1[0x3b]) & _UNK_14048379c) < param_1[0x3f]);
      fVar47 = (fVar34 * fVar71 + fVar30 * fVar14 + fVar38 * fVar42) * *param_1;
      fVar48 = (fVar35 * fVar73 + fVar31 * fVar15 + fVar39 * fVar43) * param_1[1];
      fVar49 = (fVar36 * fVar75 + fVar32 * fVar16 + fVar40 * fVar44) * param_1[2];
      fVar50 = (fVar37 * fVar77 + fVar33 * fVar17 + fVar41 * fVar45) * param_1[3];
      puVar3 = (uint *)(lVar5 + uVar46 * 4);
      *puVar3 = (uint)(fVar18 - fVar64 * fVar14) & uVar72 | ~uVar72 & (uint)fVar18;
      puVar3[1] = (uint)(fVar19 - fVar66 * fVar15) & uVar74 | ~uVar74 & (uint)fVar19;
      puVar3[2] = (uint)(fVar20 - fVar68 * fVar16) & uVar76 | ~uVar76 & (uint)fVar20;
      puVar3[3] = (uint)(fVar21 - fVar70 * fVar17) & uVar78 | ~uVar78 & (uint)fVar21;
      puVar3 = (uint *)(lVar6 + uVar46 * 4);
      *puVar3 = (uint)(fVar22 - fVar64 * fVar71) & uVar72 | ~uVar72 & (uint)fVar22;
      puVar3[1] = (uint)(fVar23 - fVar66 * fVar73) & uVar74 | ~uVar74 & (uint)fVar23;
      puVar3[2] = (uint)(fVar24 - fVar68 * fVar75) & uVar76 | ~uVar76 & (uint)fVar24;
      puVar3[3] = (uint)(fVar25 - fVar70 * fVar77) & uVar78 | ~uVar78 & (uint)fVar25;
      puVar3 = (uint *)(lVar7 + uVar46 * 4);
      *puVar3 = (uint)(fVar26 - fVar64 * fVar42) & uVar72 | ~uVar72 & (uint)fVar26;
      puVar3[1] = (uint)(fVar27 - fVar66 * fVar43) & uVar74 | ~uVar74 & (uint)fVar27;
      puVar3[2] = (uint)(fVar28 - fVar68 * fVar44) & uVar76 | ~uVar76 & (uint)fVar28;
      puVar3[3] = (uint)(fVar29 - fVar70 * fVar45) & uVar78 | ~uVar78 & (uint)fVar29;
      puVar3 = (uint *)(lVar8 + uVar46 * 4);
      *puVar3 = (uint)(fVar47 * fVar14 + fVar30) & uVar72 | ~uVar72 & (uint)fVar30;
      puVar3[1] = (uint)(fVar48 * fVar15 + fVar31) & uVar74 | ~uVar74 & (uint)fVar31;
      puVar3[2] = (uint)(fVar49 * fVar16 + fVar32) & uVar76 | ~uVar76 & (uint)fVar32;
      puVar3[3] = (uint)(fVar50 * fVar17 + fVar33) & uVar78 | ~uVar78 & (uint)fVar33;
      puVar3 = (uint *)(lVar11 + uVar46 * 4);
      *puVar3 = (uint)(fVar47 * fVar71 + fVar34) & uVar72 | ~uVar72 & (uint)fVar34;
      puVar3[1] = (uint)(fVar48 * fVar73 + fVar35) & uVar74 | ~uVar74 & (uint)fVar35;
      puVar3[2] = (uint)(fVar49 * fVar75 + fVar36) & uVar76 | ~uVar76 & (uint)fVar36;
      puVar3[3] = (uint)(fVar50 * fVar77 + fVar37) & uVar78 | ~uVar78 & (uint)fVar37;
      puVar3 = (uint *)(lVar10 + uVar46 * 4);
      *puVar3 = (uint)(fVar47 * fVar42 + fVar38) & uVar72 | ~uVar72 & (uint)fVar38;
      puVar3[1] = (uint)(fVar48 * fVar43 + fVar39) & uVar74 | ~uVar74 & (uint)fVar39;
      puVar3[2] = (uint)(fVar49 * fVar44 + fVar40) & uVar76 | ~uVar76 & (uint)fVar40;
      puVar3[3] = (uint)(fVar50 * fVar45 + fVar41) & uVar78 | ~uVar78 & (uint)fVar41;
      uVar72 = (int)uVar46 + 4;
      uVar46 = (ulonglong)uVar72;
    } while (uVar72 < uVar4);
  }
  return;
}

