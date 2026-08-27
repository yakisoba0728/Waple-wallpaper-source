// Function: FUN_1400802f0
// Addr: 1400802f0
// Size: 3574 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400802f0(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint auStack_1c8 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  uint local_148 [66];
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar3 = *(uint *)(param_1 + 0x58);
  uVar4 = *(uint *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 0x60);
  if ((DAT_1404dc008 < 2) ||
     ((local_188 <= param_2[3] + 0xc && (param_2 <= (undefined1 (*) [16])(local_158 + 0xc))))) {
    lVar6 = 0;
    do {
      uVar8 = *(uint *)(*param_2 + lVar6 * 4);
      *(uint *)(local_188 + lVar6 * 4) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
  }
  else {
    local_188 = pshufb(*param_2,_DAT_140492d50);
    local_168 = pshufb(param_2[2],_DAT_140492d50);
    local_178 = pshufb(param_2[1],_DAT_140492d50);
    local_158 = pshufb(param_2[3],_DAT_140492d50);
  }
  lVar6 = 0x10;
  do {
    uVar9 = auStack_1c8[lVar6 + 10];
    uVar19 = auStack_1c8[lVar6 + 9];
    uVar18 = auStack_1c8[lVar6 + 0xd];
    uVar8 = auStack_1c8[lVar6 + 4];
    uVar11 = auStack_1c8[lVar6 + 2] ^ auStack_1c8[lVar6] ^ auStack_1c8[lVar6 + 8] ^ uVar18;
    uVar15 = auStack_1c8[lVar6 + 3];
    uVar21 = auStack_1c8[lVar6 + 5];
    uVar14 = auStack_1c8[lVar6 + 0xb];
    uVar10 = auStack_1c8[lVar6 + 0xf];
    uVar20 = auStack_1c8[lVar6 + 7];
    uVar23 = auStack_1c8[lVar6 + 2] ^ uVar8 ^ uVar9 ^ uVar10;
    uVar16 = auStack_1c8[lVar6 + 6];
    uVar5 = auStack_1c8[lVar6 + 0xe];
    uVar7 = uVar15 ^ auStack_1c8[lVar6 + 1] ^ uVar19 ^ uVar5;
    uVar17 = auStack_1c8[lVar6 + 8];
    uVar22 = auStack_1c8[lVar6 + 8];
    uVar7 = uVar7 >> 0x1f | uVar7 << 1;
    *(uint *)(local_188 + lVar6 * 4 + 4) = uVar7;
    uVar12 = uVar11 >> 0x1f | uVar11 << 1;
    uVar11 = uVar23 >> 0x1f | uVar23 << 1;
    uVar15 = uVar15 ^ uVar21 ^ uVar14 ^ uVar12;
    uVar23 = uVar15 >> 0x1f | uVar15 << 1;
    uVar15 = uVar21 ^ uVar20 ^ uVar18 ^ uVar11;
    uVar14 = uVar15 >> 0x1f | uVar15 << 1;
    uVar15 = uVar17 ^ uVar9 ^ uVar14 ^ uVar12;
    uVar21 = uVar16 ^ uVar22 ^ uVar23 ^ uVar5;
    uVar17 = uVar15 >> 0x1f | uVar15 << 1;
    uVar22 = uVar21 >> 0x1f | uVar21 << 1;
    *(uint *)(local_188 + lVar6 * 4) = uVar12;
    uVar15 = auStack_1c8[lVar6 + 0xc];
    uVar16 = uVar8 ^ uVar16 ^ uVar15 ^ uVar7;
    *(uint *)(local_168 + lVar6 * 4) = uVar17;
    uVar21 = auStack_1c8[lVar6 + 0xb];
    uVar8 = uVar19 ^ uVar22 ^ uVar21 ^ uVar7;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    *(uint *)(local_168 + lVar6 * 4 + 4) = uVar8;
    uVar16 = uVar16 >> 0x1f | uVar16 << 1;
    *(uint *)(local_188 + lVar6 * 4 + 8) = uVar11;
    uVar19 = uVar20 ^ uVar19 ^ uVar16 ^ uVar10;
    *(uint *)(local_188 + lVar6 * 4 + 0xc) = uVar23;
    uVar20 = uVar19 >> 0x1f | uVar19 << 1;
    *(uint *)(local_178 + lVar6 * 4) = uVar16;
    *(uint *)(local_178 + lVar6 * 4 + 4) = uVar14;
    uVar11 = uVar20 ^ uVar9 ^ uVar15 ^ uVar11;
    *(uint *)(local_178 + lVar6 * 4 + 8) = uVar22;
    uVar9 = uVar11 >> 0x1f | uVar11 << 1;
    *(uint *)(local_168 + lVar6 * 4 + 8) = uVar9;
    *(uint *)(local_178 + lVar6 * 4 + 0xc) = uVar20;
    uVar23 = uVar17 ^ uVar21 ^ uVar18 ^ uVar23;
    uVar19 = uVar23 >> 0x1f | uVar23 << 1;
    *(uint *)(local_168 + lVar6 * 4 + 0xc) = uVar19;
    uVar8 = uVar8 ^ uVar15 ^ uVar16 ^ uVar5;
    uVar8 = uVar8 >> 0x1f | uVar8 << 1;
    *(uint *)(local_158 + lVar6 * 4) = uVar8;
    uVar12 = uVar19 ^ uVar22 ^ uVar5 ^ uVar12;
    uVar7 = uVar8 ^ uVar20 ^ uVar10 ^ uVar7;
    uVar10 = uVar9 ^ uVar14 ^ uVar18 ^ uVar10;
    local_148[lVar6 + -1] = uVar7 >> 0x1f | uVar7 << 1;
    local_148[lVar6 + -3] = uVar10 >> 0x1f | uVar10 << 1;
    local_148[lVar6 + -2] = uVar12 >> 0x1f | uVar12 << 1;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  uVar8 = iVar13 + 0x5a827999 +
          ((uVar4 ^ uVar3) & uVar2 ^ uVar4) + (uVar1 >> 0x1b | uVar1 << 5) + local_188._0_4_;
  uVar9 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar18 = uVar1 >> 2 | uVar1 << 0x1e;
  uVar19 = uVar4 + 0x5a827999 +
           ((uVar3 ^ uVar9) & uVar1 ^ uVar3) + (uVar8 >> 0x1b | uVar8 * 0x20) + local_188._4_4_;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar3 + 0x5a827999 +
          ((uVar9 ^ uVar18) & uVar8 ^ uVar9) + (uVar19 >> 0x1b | uVar19 * 0x20) + local_188._8_4_;
  uVar10 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar9 + 0x5a827999 +
           ((uVar21 ^ uVar18) & uVar19 ^ uVar18) + (uVar8 >> 0x1b | uVar8 * 0x20) + local_188._12_4_
  ;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar18 + 0x5a827999 +
          ((uVar21 ^ uVar10) & uVar8 ^ uVar21) + (uVar19 >> 0x1b | uVar19 * 0x20) + local_178._0_4_;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar21 = uVar21 + ((uVar10 ^ uVar9) & uVar19 ^ uVar10) +
                    (uVar8 >> 0x1b | uVar8 * 0x20) + local_178._4_4_ + 0x5a827999;
  uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar10 = uVar10 + ((uVar9 ^ uVar18) & uVar8 ^ uVar9) +
                    (uVar21 >> 0x1b | uVar21 * 0x20) + local_178._8_4_ + 0x5a827999;
  uVar14 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar9 = uVar9 + ((uVar18 ^ uVar15) & uVar21 ^ uVar18) +
                  (uVar10 >> 0x1b | uVar10 * 0x20) + local_178._12_4_ + 0x5a827999;
  uVar20 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar18 = uVar18 + ((uVar14 ^ uVar15) & uVar10 ^ uVar15) +
                    (uVar9 >> 0x1b | uVar9 * 0x20) + local_168._0_4_ + 0x5a827999;
  uVar8 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar15 = uVar15 + ((uVar14 ^ uVar20) & uVar9 ^ uVar14) +
                    (uVar18 >> 0x1b | uVar18 * 0x20) + local_168._4_4_ + 0x5a827999;
  uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar14 = uVar14 + ((uVar20 ^ uVar8) & uVar18 ^ uVar20) +
                    (uVar15 >> 0x1b | uVar15 * 0x20) + local_168._8_4_ + 0x5a827999;
  uVar9 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar20 = uVar20 + ((uVar8 ^ uVar19) & uVar15 ^ uVar8) +
                    (uVar14 >> 0x1b | uVar14 * 0x20) + local_168._12_4_ + 0x5a827999;
  uVar21 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar8 = ((uVar19 ^ uVar9) & uVar14 ^ uVar19) +
          (uVar20 >> 0x1b | uVar20 * 0x20) + local_158._0_4_ + 0x5a827999 + uVar8;
  uVar14 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar19 = uVar19 + ((uVar21 ^ uVar9) & uVar20 ^ uVar9) +
                    (uVar8 >> 0x1b | uVar8 * 0x20) + local_158._4_4_ + 0x5a827999;
  uVar18 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar9 = uVar9 + 0x5a827999 +
          ((uVar21 ^ uVar14) & uVar8 ^ uVar21) + (uVar19 >> 0x1b | uVar19 * 0x20) + local_158._8_4_;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar8 = uVar21 + 0x5a827999 +
          ((uVar14 ^ uVar18) & uVar19 ^ uVar14) + (uVar9 >> 0x1b | uVar9 * 0x20) + local_158._12_4_;
  uVar19 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar21 = uVar14 + 0x5a827999 +
           ((uVar18 ^ uVar15) & uVar9 ^ uVar18) + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0];
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar18 = ((uVar15 ^ uVar19) & uVar8 ^ uVar15) +
           (uVar21 >> 0x1b | uVar21 * 0x20) + local_148[1] + 0x5a827999 + uVar18;
  uVar14 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar8 = uVar15 + 0x5a827999 +
          ((uVar9 ^ uVar19) & uVar21 ^ uVar19) + (uVar18 >> 0x1b | uVar18 * 0x20) + local_148[2];
  uVar15 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar19 = ((uVar9 ^ uVar14) & uVar18 ^ uVar9) +
           (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[3] + 0x5a827999 + uVar19;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[4] + uVar9 +
          (uVar14 ^ uVar15 ^ uVar8) + 0x6ed9eba1;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar14 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[5] +
           (uVar15 ^ uVar21 ^ uVar19) + 0x6ed9eba1;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar15 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[6] +
          (uVar8 ^ uVar21 ^ uVar18) + 0x6ed9eba1;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar14 = uVar21 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[7] +
           (uVar9 ^ uVar19 ^ uVar18) + 0x6ed9eba1;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar18 + (uVar14 >> 0x1b | uVar14 * 0x20) + local_148[8] +
           (uVar9 ^ uVar15 ^ uVar8) + 0x6ed9eba1;
  uVar10 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar8 = uVar9 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[9] +
          (uVar15 ^ uVar21 ^ uVar14) + 0x6ed9eba1;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[10] +
           (uVar21 ^ uVar10 ^ uVar19) + 0x6ed9eba1;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0xb] +
          (uVar8 ^ uVar10 ^ uVar18) + 0x6ed9eba1;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar14 = uVar10 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0xc] +
           (uVar9 ^ uVar19 ^ uVar18) + 0x6ed9eba1;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar18 + (uVar14 >> 0x1b | uVar14 * 0x20) + local_148[0xd] +
           (uVar9 ^ uVar15 ^ uVar8) + 0x6ed9eba1;
  uVar10 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar8 = uVar9 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0xe] +
          (uVar15 ^ uVar21 ^ uVar14) + 0x6ed9eba1;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0xf] +
           (uVar21 ^ uVar10 ^ uVar19) + 0x6ed9eba1;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x10] +
          (uVar8 ^ uVar10 ^ uVar18) + 0x6ed9eba1;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar14 = uVar10 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x11] +
           (uVar9 ^ uVar19 ^ uVar18) + 0x6ed9eba1;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar18 + (uVar14 >> 0x1b | uVar14 * 0x20) + local_148[0x12] +
           (uVar9 ^ uVar15 ^ uVar8) + 0x6ed9eba1;
  uVar10 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar8 = (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x13] + uVar9 +
          (uVar15 ^ uVar21 ^ uVar14) + 0x6ed9eba1;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x14] +
           (uVar21 ^ uVar10 ^ uVar19) + 0x6ed9eba1;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x15] +
          (uVar8 ^ uVar10 ^ uVar18) + 0x6ed9eba1;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar10 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x16] +
           (uVar9 ^ uVar19 ^ uVar18) + 0x6ed9eba1;
  uVar14 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar18 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x17] +
          (uVar9 ^ uVar15 ^ uVar8) + 0x6ed9eba1;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar9 = uVar9 + (uVar8 >> 0x1b | uVar8 * 0x20) +
                  ((uVar14 | uVar19) & uVar15 | uVar14 & uVar19) + local_148[0x18] + -0x70e44324;
  uVar19 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar15 = uVar15 + (uVar9 >> 0x1b | uVar9 * 0x20) +
                    ((uVar18 | uVar8) & uVar14 | uVar18 & uVar8) + local_148[0x19] + -0x70e44324;
  uVar8 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar14 = uVar14 + (uVar15 >> 0x1b | uVar15 * 0x20) +
                    ((uVar18 | uVar19) & uVar9 | uVar18 & uVar19) + local_148[0x1a] + -0x70e44324;
  uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar18 = uVar18 + (uVar14 >> 0x1b | uVar14 * 0x20) +
                    ((uVar15 | uVar19) & uVar8 | uVar15 & uVar19) + local_148[0x1b] + -0x70e44324;
  uVar10 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar19 = uVar19 + (uVar18 >> 0x1b | uVar18 * 0x20) +
                    ((uVar14 | uVar21) & uVar8 | uVar14 & uVar21) + local_148[0x1c] + -0x70e44324;
  uVar20 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar8 = uVar8 + (uVar19 >> 0x1b | uVar19 * 0x20) +
                  ((uVar10 | uVar18) & uVar21 | uVar10 & uVar18) + local_148[0x1d] + -0x70e44324;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar21 = uVar21 + (uVar8 >> 0x1b | uVar8 * 0x20) +
                    ((uVar20 | uVar19) & uVar10 | uVar20 & uVar19) + local_148[0x1e] + -0x70e44324;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar10 = uVar10 + (uVar21 >> 0x1b | uVar21 * 0x20) +
                    ((uVar20 | uVar18) & uVar8 | uVar20 & uVar18) + local_148[0x1f] + -0x70e44324;
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar20 = uVar20 + (uVar10 >> 0x1b | uVar10 * 0x20) +
                    ((uVar21 | uVar18) & uVar9 | uVar21 & uVar18) + local_148[0x20] + -0x70e44324;
  uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar18 = uVar18 + (uVar20 >> 0x1b | uVar20 * 0x20) +
                    ((uVar10 | uVar15) & uVar9 | uVar10 & uVar15) + local_148[0x21] + -0x70e44324;
  uVar10 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar9 = uVar9 + (uVar18 >> 0x1b | uVar18 * 0x20) +
                  ((uVar14 | uVar20) & uVar15 | uVar14 & uVar20) + local_148[0x22] + -0x70e44324;
  uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar15 = uVar15 + (uVar9 >> 0x1b | uVar9 * 0x20) +
                    ((uVar10 | uVar18) & uVar14 | uVar10 & uVar18) + local_148[0x23] + -0x70e44324;
  uVar8 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar14 = uVar14 + (uVar15 >> 0x1b | uVar15 * 0x20) +
                    ((uVar10 | uVar19) & uVar9 | uVar10 & uVar19) + local_148[0x24] + -0x70e44324;
  uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar10 = uVar10 + (uVar14 >> 0x1b | uVar14 * 0x20) +
                    ((uVar15 | uVar19) & uVar8 | uVar15 & uVar19) + local_148[0x25] + -0x70e44324;
  uVar19 = uVar19 + (uVar10 >> 0x1b | uVar10 * 0x20) +
                    ((uVar14 | uVar21) & uVar8 | uVar14 & uVar21) + local_148[0x26] + -0x70e44324;
  uVar14 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar20 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar8 = uVar8 + (uVar19 >> 0x1b | uVar19 * 0x20) +
                  ((uVar14 | uVar10) & uVar21 | uVar14 & uVar10) + local_148[0x27] + -0x70e44324;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar21 = uVar21 + (uVar8 >> 0x1b | uVar8 * 0x20) +
                    ((uVar20 | uVar19) & uVar14 | uVar20 & uVar19) + local_148[0x28] + -0x70e44324;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar14 = uVar14 + (uVar21 >> 0x1b | uVar21 * 0x20) +
                    ((uVar20 | uVar18) & uVar8 | uVar20 & uVar18) + local_148[0x29] + -0x70e44324;
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar20 = uVar20 + (uVar14 >> 0x1b | uVar14 * 0x20) +
                    ((uVar21 | uVar18) & uVar9 | uVar21 & uVar18) + local_148[0x2a] + -0x70e44324;
  uVar21 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar18 = uVar18 + (uVar20 >> 0x1b | uVar20 * 0x20) +
                    ((uVar14 | uVar15) & uVar9 | uVar14 & uVar15) + local_148[0x2b] + -0x70e44324;
  uVar8 = (uVar18 >> 0x1b | uVar18 * 0x20) + local_148[0x2c] + uVar9 +
          (uVar15 ^ uVar21 ^ uVar20) + 0xca62c1d6;
  uVar14 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar18 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x2d] +
           (uVar21 ^ uVar14 ^ uVar18) + 0xca62c1d6;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar18 >> 0x1b | uVar18 * 0x20) + local_148[0x2e] +
          (uVar8 ^ uVar14 ^ uVar19) + 0xca62c1d6;
  uVar15 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar18 = uVar14 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x2f] +
           (uVar18 ^ uVar9 ^ uVar19) + 0xca62c1d6;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar19 + (uVar18 >> 0x1b | uVar18 * 0x20) + local_148[0x30] +
           (uVar8 ^ uVar9 ^ uVar15) + 0xca62c1d6;
  uVar14 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar8 = uVar9 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x31] +
          (uVar15 ^ uVar21 ^ uVar18) + 0xca62c1d6;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x32] +
           (uVar21 ^ uVar14 ^ uVar19) + 0xca62c1d6;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x33] +
          (uVar8 ^ uVar14 ^ uVar18) + 0xca62c1d6;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar14 = uVar14 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x34] +
           (uVar19 ^ uVar9 ^ uVar18) + 0xca62c1d6;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar18 + (uVar14 >> 0x1b | uVar14 * 0x20) + local_148[0x35] +
           (uVar8 ^ uVar9 ^ uVar15) + 0xca62c1d6;
  uVar10 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar8 = uVar9 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x36] +
          (uVar15 ^ uVar21 ^ uVar14) + 0xca62c1d6;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar15 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x37] +
           (uVar21 ^ uVar10 ^ uVar19) + 0xca62c1d6;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar21 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x38] +
          (uVar8 ^ uVar10 ^ uVar18) + 0xca62c1d6;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = uVar10 + (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x39] +
           (uVar19 ^ uVar9 ^ uVar18) + 0xca62c1d6;
  uVar21 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x3a] + uVar18 +
          (uVar8 ^ uVar9 ^ uVar15) + 0xca62c1d6;
  uVar14 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar19 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x3b] + uVar9 +
           (uVar15 ^ uVar21 ^ uVar19) + 0xca62c1d6;
  uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar8 = uVar15 + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x3c] +
          (uVar21 ^ uVar14 ^ uVar8) + 0xca62c1d6;
  uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x3d] + uVar21 +
           (uVar19 ^ uVar14 ^ uVar9) + 0xca62c1d6;
  iVar13 = (uVar8 ^ uVar18 ^ uVar9) + (uVar19 >> 0x1b | uVar19 * 0x20) + local_148[0x3e] + uVar14;
  uVar8 = iVar13 + 0xca62c1d6;
  *(uint *)(param_1 + 0x50) =
       (uVar8 >> 0x1b | uVar8 * 0x20) + local_148[0x3f] + uVar9 + (uVar19 ^ uVar18 ^ uVar15) +
       uVar1 + 0xca62c1d6;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + uVar18;
  *(uint *)(param_1 + 0x54) = uVar2 + 0xca62c1d6 + iVar13;
  *(uint *)(param_1 + 0x58) = uVar3 + (uVar19 >> 2 | uVar19 * 0x40000000);
  *(uint *)(param_1 + 0x5c) = uVar4 + uVar15;
  return;
}

