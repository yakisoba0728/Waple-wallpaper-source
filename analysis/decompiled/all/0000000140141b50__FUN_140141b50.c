// Function: FUN_140141b50
// Addr: 140141b50
// Size: 11737 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140141b50(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint auStack_10c [51];
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar3 = *(uint *)(param_1 + 0x54);
  uVar4 = *(uint *)(param_1 + 0x60);
  uVar24 = *(uint *)(param_1 + 100);
  uVar23 = *(uint *)(param_1 + 0x68);
  iVar25 = *(int *)(param_1 + 0x6c);
  if ((DAT_1404dc0d8 < 2) ||
     ((local_148 <= param_2[3] + 0xc && (param_2 <= (undefined1 (*) [16])auStack_10c)))) {
    lVar19 = 0;
    do {
      uVar31 = *(uint *)(*param_2 + lVar19 * 4);
      *(uint *)(local_148 + lVar19 * 4) =
           uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x10);
  }
  else {
    local_148 = pshufb(*param_2,_DAT_140492e20);
    local_128 = pshufb(param_2[2],_DAT_140492e20);
    local_138 = pshufb(param_2[1],_DAT_140492e20);
    auVar50 = pshufb(param_2[3],_DAT_140492e20);
    local_118 = auVar50._0_4_;
    uStack_114 = auVar50._4_4_;
    uStack_110 = auVar50._8_4_;
    auStack_10c[0] = auVar50._12_4_;
  }
  iVar25 = iVar25 + (~uVar4 & uVar23 ^ uVar24 & uVar4) +
                    local_148._0_4_ +
                    ((uVar4 >> 0xb | uVar4 << 0x15) ^ (uVar4 >> 6 | uVar4 << 0x1a) ^
                    (uVar4 >> 0x19 | uVar4 << 7));
  iVar21 = iVar6 + iVar25;
  uVar31 = iVar21 + 0x428a2f98;
  iVar46 = ((uVar1 >> 0xd | uVar1 << 0x13) ^ (uVar1 >> 0x16 | uVar1 << 10) ^
           (uVar1 >> 2 | uVar1 << 0x1e)) + ((uVar3 | uVar1) & uVar2 | uVar3 & uVar1);
  uVar22 = iVar25 + 0x428a2f98 + iVar46;
  iVar26 = (~uVar31 & uVar24 ^ uVar31 & uVar4) +
           local_148._4_4_ +
           ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000) ^
           (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar23;
  uVar40 = iVar26 + uVar2 + 0x71374491;
  iVar42 = ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
           (uVar22 >> 2 | uVar22 * 0x40000000)) + ((uVar22 | uVar1) & uVar3 | uVar22 & uVar1);
  uVar34 = iVar26 + 0x71374491 + iVar42;
  iVar27 = (~uVar40 & uVar4 ^ uVar40 & uVar31) +
           local_148._8_4_ +
           ((uVar40 >> 0xb | uVar40 * 0x200000) ^ (uVar40 >> 6 | uVar40 * 0x4000000) ^
           (uVar40 >> 0x19 | uVar40 * 0x80)) + uVar24;
  iVar7 = iVar27 + uVar3;
  uVar23 = iVar7 + 0xb5c0fbcf;
  iVar5 = iVar27 + ((uVar34 >> 0xd | uVar34 * 0x80000) ^ (uVar34 >> 0x16 | uVar34 * 0x400) ^
                   (uVar34 >> 2 | uVar34 * 0x40000000)) +
          ((uVar34 | uVar22) & uVar1 | uVar34 & uVar22);
  uVar3 = iVar5 + 0xb5c0fbcf;
  iVar28 = (0x4a3f0430U - iVar7 & uVar31 ^ uVar40 & uVar23) +
           local_148._12_4_ +
           ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
           (uVar23 >> 0x19 | uVar23 * 0x80)) + uVar4;
  iVar27 = iVar28 + uVar1;
  uVar31 = iVar27 + 0xe9b5dba5;
  iVar44 = ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^
           (uVar3 >> 2 | uVar3 * 0x40000000)) + ((uVar34 | uVar3) & uVar22 | uVar34 & uVar3);
  uVar22 = iVar28 + -0x164a245b + iVar44;
  iVar20 = ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000) ^
           (uVar31 >> 0x19 | uVar31 * 0x80)) + local_138._0_4_ +
           (0x164a245aU - iVar27 & uVar40 ^ uVar31 & uVar23);
  iVar46 = iVar6 + iVar25 * 2 + iVar20 + iVar46;
  uVar4 = iVar46 + 0xbe6b218b;
  iVar6 = ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
          (uVar22 >> 2 | uVar22 * 0x40000000)) + ((uVar22 | uVar3) & uVar34 | uVar22 & uVar3) +
          iVar21 + iVar20;
  uVar24 = iVar6 + 0x7be0f1f3;
  iVar25 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + local_138._4_4_ +
           (0x4194de74U - iVar46 & uVar23 ^ uVar4 & uVar31);
  iVar42 = uVar2 + iVar26 * 2 + iVar25 + iVar42;
  uVar23 = iVar42 + 0x3c5f9b13;
  iVar25 = ((uVar24 >> 0x16 | uVar24 * 0x400) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar24 | uVar22) & uVar3 | uVar24 & uVar22) +
           iVar26 + uVar2 + iVar25;
  uVar2 = iVar25 + 0xcb285682;
  iVar29 = (~uVar23 & uVar31 ^ uVar23 & uVar4) +
           iVar7 + ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
                   (uVar23 >> 0x19 | uVar23 * 0x80)) + local_138._8_4_;
  iVar32 = iVar5 + iVar29;
  uVar34 = iVar32 + 0xfdc17a42;
  iVar20 = (uVar22 & (uVar2 | uVar24) | uVar2 & uVar24) +
           ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^
           (uVar2 >> 2 | uVar2 * 0x40000000));
  uVar31 = iVar29 + 0x48007e73 + iVar20;
  iVar21 = ((uVar34 >> 0xb | uVar34 * 0x200000) ^ (uVar34 >> 6 | uVar34 * 0x4000000) ^
           (uVar34 >> 0x19 | uVar34 * 0x80)) + local_138._12_4_ +
           (0x23e85bdU - iVar32 & uVar4 ^ uVar34 & uVar23);
  iVar28 = uVar1 + iVar28 * 2 + iVar44 + iVar21;
  uVar22 = iVar28 + 0x7e88161f;
  iVar21 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar31 | uVar2) & uVar24 | uVar31 & uVar2) +
           iVar27 + iVar21;
  uVar3 = iVar21 + 0x94d23a7a;
  iVar46 = (0x164a245aU - (iVar28 + -0x6b2dc586) & uVar23 ^ uVar22 & uVar34) +
           local_128._0_4_ +
           ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000) ^
           (uVar22 >> 0x19 | uVar22 * 0x80)) + iVar46;
  uVar4 = iVar6 + iVar46 + 0x1253be16;
  iVar26 = ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^
           (uVar3 >> 2 | uVar3 * 0x40000000)) + ((uVar3 | uVar31) & uVar2 | uVar3 & uVar31);
  uVar40 = iVar46 + -0x698d33dd + iVar26;
  iVar42 = (~uVar4 & uVar34 ^ uVar4 & uVar22) +
           local_128._4_4_ +
           ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + iVar42;
  iVar25 = iVar25 + iVar42;
  uVar2 = iVar25 + 0x1a0b4c96;
  iVar7 = iVar42 + ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
                   (uVar40 >> 2 | uVar40 * 0x40000000)) +
          ((uVar40 | uVar3) & uVar31 | uVar40 & uVar3);
  uVar24 = iVar7 + 0x4ee2f614;
  iVar27 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
           (uVar2 >> 0x19 | uVar2 * 0x80)) + local_128._8_4_ + (~uVar2 & uVar22 ^ uVar2 & uVar4);
  iVar20 = iVar5 + iVar29 * 2 + iVar27 + iVar20;
  uVar23 = iVar20 + 0x69f37e73;
  iVar27 = ((uVar24 >> 0x16 | uVar24 * 0x400) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
           (uVar24 >> 2 | iVar7 * 0x40000000)) + ((uVar24 | uVar40) & uVar3 | uVar24 & uVar40) +
           iVar32 + iVar27;
  uVar3 = iVar27 + 0x21f30000;
  iVar28 = (~uVar23 & uVar4 ^ uVar2 & uVar23) +
           local_128._12_4_ +
           ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
           (uVar23 >> 0x19 | uVar23 * 0x80)) + iVar28;
  uVar4 = iVar21 + iVar28 + 0x6866ce5c;
  iVar32 = ((uVar3 >> 0xd | iVar27 * 0x80000) ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^
           (uVar3 >> 2 | iVar27 * 0x40000000)) + ((uVar24 | uVar3) & uVar40 | uVar24 & uVar3);
  uVar22 = iVar28 + -0x2c6b6c1e + iVar32;
  iVar5 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
          (uVar4 >> 0x19 | uVar4 * 0x80)) + local_118 + (~uVar4 & uVar2 ^ uVar4 & uVar23);
  iVar26 = iVar6 + iVar46 * 2 + iVar5 + iVar26;
  uVar2 = iVar26 + 0x1b84e7ad;
  iVar6 = ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
          (uVar22 >> 2 | uVar22 * 0x40000000)) + ((uVar22 | uVar3) & uVar24 | uVar22 & uVar3) +
          iVar6 + iVar46 + iVar5;
  uVar24 = iVar6 + 0x85121b8a;
  iVar29 = (~uVar2 & uVar23 ^ uVar2 & uVar4) +
           ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
           (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar25 + uStack_114;
  iVar46 = iVar7 + iVar29;
  uVar23 = iVar46 + 0xe9ccf4a8;
  iVar42 = ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar24 | uVar22) & uVar3 | uVar24 & uVar22);
  uVar31 = iVar29 + -0x6516016c + iVar42;
  iVar20 = (0x16330b57U - iVar46 & uVar4 ^ uVar23 & uVar2) +
           uStack_110 +
           ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
           (uVar23 >> 0x19 | uVar23 * 0x80)) + iVar20;
  uVar3 = iVar27 + iVar20 + 0x27c2851a;
  iVar25 = (uVar31 & uVar24 | (uVar31 | uVar24) & uVar22) +
           ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
           (uVar31 >> 2 | uVar31 * 0x40000000));
  uVar22 = iVar20 + 0x5cf851a + iVar25;
  iVar5 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
          (uVar3 >> 0x19 | uVar3 * 0x80)) + auStack_10c[0] + (~uVar3 & uVar2 ^ uVar3 & uVar23);
  iVar49 = iVar21 + iVar32 + iVar28 * 2 + iVar5;
  uVar2 = iVar49 + 0xfd9753b2;
  iVar21 = ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
           (uVar22 >> 2 | uVar22 * 0x40000000)) + ((uVar22 | uVar31) & uVar24 | uVar22 & uVar31) +
           iVar21 + iVar28 + iVar5;
  uVar4 = iVar21 + 0x2a02bfd0;
  uVar33 = ((uStack_110 >> 0x11 | uStack_110 << 0xf) ^ (uStack_110 >> 0x13 | uStack_110 << 0xd) ^
           uStack_110 >> 10) +
           local_148._0_4_ +
           (((uint)local_148._4_4_ >> 7 | local_148._4_4_ << 0x19) ^
            ((uint)local_148._4_4_ >> 0x12 | local_148._4_4_ << 0xe) ^ (uint)local_148._4_4_ >> 3) +
           local_128._4_4_;
  uVar34 = local_128._8_4_ +
           ((auStack_10c[0] >> 0x11 | auStack_10c[0] << 0xf) ^
            (auStack_10c[0] >> 0x13 | auStack_10c[0] << 0xd) ^ auStack_10c[0] >> 10) +
           (((uint)local_148._8_4_ >> 0x12 | local_148._8_4_ << 0xe) ^
            ((uint)local_148._8_4_ >> 7 | local_148._8_4_ << 0x19) ^ (uint)local_148._8_4_ >> 3) +
           local_148._4_4_;
  uVar40 = local_128._12_4_ +
           ((uVar33 >> 0x11 | uVar33 * 0x8000) ^ (uVar33 >> 0x13 | uVar33 * 0x2000) ^ uVar33 >> 10)
           + (((uint)local_148._12_4_ >> 0x12 | local_148._12_4_ << 0xe) ^
              ((uint)local_148._12_4_ >> 7 | local_148._12_4_ << 0x19) ^ (uint)local_148._12_4_ >> 3
             ) + local_148._8_4_;
  uVar8 = local_118 +
          ((uVar34 >> 0x11 | uVar34 * 0x8000) ^ (uVar34 >> 0x13 | uVar34 * 0x2000) ^ uVar34 >> 10) +
          (((uint)local_138._0_4_ >> 0x12 | local_138._0_4_ << 0xe) ^
           ((uint)local_138._0_4_ >> 7 | local_138._0_4_ << 0x19) ^ (uint)local_138._0_4_ >> 3) +
          local_148._12_4_;
  uVar9 = uStack_114 +
          ((uVar40 >> 0x11 | uVar40 * 0x8000) ^ (uVar40 >> 0x13 | uVar40 * 0x2000) ^ uVar40 >> 10) +
          (((uint)local_138._4_4_ >> 0x12 | local_138._4_4_ << 0xe) ^
           ((uint)local_138._4_4_ >> 7 | local_138._4_4_ << 0x19) ^ (uint)local_138._4_4_ >> 3) +
          local_138._0_4_;
  uVar35 = local_138._4_4_ +
           (((uint)local_138._8_4_ >> 7 | local_138._8_4_ << 0x19) ^
            ((uint)local_138._8_4_ >> 0x12 | local_138._8_4_ << 0xe) ^ (uint)local_138._8_4_ >> 3) +
           ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^ uVar8 >> 10) +
           uStack_110;
  uVar10 = local_138._8_4_ +
           (((uint)local_138._12_4_ >> 7 | local_138._12_4_ << 0x19) ^
            ((uint)local_138._12_4_ >> 0x12 | local_138._12_4_ << 0xe) ^ (uint)local_138._12_4_ >> 3
           ) + ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^ uVar9 >> 10) +
           auStack_10c[0];
  uVar11 = local_138._12_4_ +
           (((uint)local_128._0_4_ >> 7 | local_128._0_4_ << 0x19) ^
            ((uint)local_128._0_4_ >> 0x12 | local_128._0_4_ << 0xe) ^ (uint)local_128._0_4_ >> 3) +
           ((uVar35 >> 0x11 | uVar35 * 0x8000) ^ (uVar35 >> 0x13 | uVar35 * 0x2000) ^ uVar35 >> 10)
           + uVar33;
  iVar26 = (0x268ac4dU - iVar49 & uVar23 ^ uVar3 & uVar2) +
           uVar33 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar26;
  iVar6 = iVar6 + iVar26;
  uVar24 = iVar6 + 0x85326cf8;
  iVar5 = iVar26 + ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^
                   (uVar4 >> 2 | iVar21 * 0x40000000)) +
          ((uVar22 | uVar4) & uVar31 | uVar22 & uVar4);
  uVar23 = iVar5 + 0x20516e;
  iVar26 = ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000) ^
           (uVar24 >> 0x19 | uVar24 * 0x80)) + uVar34 +
           (0x7acd9307U - iVar6 & uVar3 ^ uVar24 & uVar2);
  iVar42 = iVar7 + iVar29 * 2 + iVar26 + iVar42;
  uVar3 = iVar42 + 0x74753ac2;
  iVar7 = ((uVar23 >> 0x16 | uVar23 * 0x400) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
          (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar23 | uVar4) & uVar22 | uVar23 & uVar4) +
          iVar46 + iVar26;
  uVar31 = iVar7 + 0xd98b3c2e;
  iVar26 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
           (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar40 + (~uVar3 & uVar2 ^ uVar24 & uVar3);
  iVar25 = iVar25 + iVar27 + iVar20 * 2 + iVar26;
  uVar2 = iVar25 + 0x3d53a7fa;
  iVar27 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar23 | uVar31) & uVar4 | uVar23 & uVar31) +
           iVar27 + iVar20 + iVar26;
  uVar4 = iVar27 + 0x378422e0;
  iVar49 = iVar49 + (~uVar2 & uVar24 ^ uVar2 & uVar3) +
                    uVar8 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                            (uVar2 >> 0x19 | uVar2 * 0x80));
  uVar24 = iVar21 + iVar49 + 0x4ba6b54e;
  iVar44 = ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^
           (uVar4 >> 2 | iVar27 * 0x40000000)) + ((uVar4 | uVar31) & uVar23 | uVar4 & uVar31);
  uVar23 = iVar49 + 0x21a3f57e + iVar44;
  iVar36 = (uVar3 & ~uVar24 ^ uVar24 & uVar2) +
           iVar6 + ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000) ^
                   (uVar24 >> 0x19 | uVar24 * 0x80)) + uVar9;
  iVar6 = iVar5 + iVar36;
  uVar3 = iVar6 + 0xb33bead5;
  iVar32 = ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar23 | uVar4) & uVar31 | uVar23 & uVar4);
  uVar31 = iVar36 + -0x4ce46699 + iVar32;
  iVar42 = (uVar2 & 0x4cc4152aU - iVar6 ^ uVar3 & uVar24) +
           uVar35 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80)) + iVar42;
  iVar20 = iVar7 + iVar42;
  uVar2 = iVar20 + 0x9874fb9a;
  iVar26 = (uVar31 & uVar23 | (uVar31 | uVar23) & uVar4) +
           ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
           (uVar31 >> 2 | uVar31 * 0x40000000));
  uVar22 = iVar42 + iVar26 + -0x41164094;
  iVar25 = (uVar24 & 0x678b0465U - iVar20 ^ uVar2 & uVar3) +
           uVar10 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar25;
  iVar28 = iVar27 + iVar25;
  uVar4 = iVar28 + 0xd18874b6;
  iVar29 = (uVar22 & uVar31 | (uVar22 | uVar31) & uVar23) +
           ((uVar22 >> 0xd | uVar22 * 0x80000) ^ (uVar22 >> 0x16 | uVar22 * 0x400) ^
           (uVar22 >> 2 | uVar22 * 0x40000000));
  uVar23 = iVar25 + -0x65fbae2a + iVar29;
  iVar46 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar11 + (0x2e778b49U - iVar28 & uVar3 ^ uVar4 & uVar2)
  ;
  iVar44 = iVar21 + iVar44 + iVar49 * 2 + iVar46;
  uVar3 = iVar44 + 0xe44433a6;
  iVar49 = ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar23 | uVar22) & uVar31 | uVar23 & uVar22) +
           iVar46 + iVar21 + iVar49;
  uVar31 = iVar49 + 0xc2a03e28;
  uVar12 = uVar34 + (((uint)local_128._4_4_ >> 0x12 | local_128._4_4_ << 0xe) ^
                     ((uint)local_128._4_4_ >> 7 | local_128._4_4_ << 0x19) ^
                    (uint)local_128._4_4_ >> 3) +
                    local_128._0_4_ +
                    ((uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^
                    uVar10 >> 10);
  uVar13 = uVar40 + (((uint)local_128._8_4_ >> 0x12 | local_128._8_4_ << 0xe) ^
                     ((uint)local_128._8_4_ >> 7 | local_128._8_4_ << 0x19) ^
                    (uint)local_128._8_4_ >> 3) +
                    local_128._4_4_ +
                    ((uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000) ^
                    uVar11 >> 10);
  uVar14 = uVar8 + ((uVar12 >> 0x11 | uVar12 * 0x8000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000) ^
                   uVar12 >> 10) +
                   local_128._8_4_ +
                   (((uint)local_128._12_4_ >> 0x12 | local_128._12_4_ << 0xe) ^
                    ((uint)local_128._12_4_ >> 7 | local_128._12_4_ << 0x19) ^
                   (uint)local_128._12_4_ >> 3);
  uVar15 = uVar9 + ((local_118 >> 0x12 | local_118 << 0xe) ^ (local_118 >> 7 | local_118 << 0x19) ^
                   local_118 >> 3) +
                   local_128._12_4_ +
                   ((uVar13 >> 0x11 | uVar13 * 0x8000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000) ^
                   uVar13 >> 10);
  uVar16 = uVar35 + ((uStack_114 >> 0x12 | uStack_114 << 0xe) ^
                     (uStack_114 >> 7 | uStack_114 << 0x19) ^ uStack_114 >> 3) +
                    local_118 +
                    ((uVar14 >> 0x11 | uVar14 * 0x8000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000) ^
                    uVar14 >> 10);
  uVar17 = uVar10 + ((uStack_110 >> 0x12 | uStack_110 << 0xe) ^
                     (uStack_110 >> 7 | uStack_110 << 0x19) ^ uStack_110 >> 3) +
                    uStack_114 +
                    ((uVar15 >> 0x11 | uVar15 * 0x8000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000) ^
                    uVar15 >> 10);
  uVar18 = uStack_110 +
           ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10)
           + ((auStack_10c[0] >> 0x12 | auStack_10c[0] << 0xe) ^
              (auStack_10c[0] >> 7 | auStack_10c[0] << 0x19) ^ auStack_10c[0] >> 3) + uVar11;
  uVar37 = ((uVar33 >> 0x12 | uVar33 * 0x4000) ^ (uVar33 >> 7 | uVar33 * 0x2000000) ^ uVar33 >> 3) +
           auStack_10c[0] +
           ((uVar17 >> 0x11 | uVar17 * 0x8000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000) ^ uVar17 >> 10)
           + uVar12;
  iVar21 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
           (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar12 + (0x1bbbcc59U - iVar44 & uVar2 ^ uVar4 & uVar3)
  ;
  iVar46 = iVar5 + iVar36 * 2 + iVar32 + iVar21;
  uVar2 = iVar46 + 0xfe95d58e;
  iVar6 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
          (uVar31 >> 2 | iVar49 * 0x40000000)) + ((uVar23 | uVar31) & uVar22 | uVar23 & uVar31) +
          iVar6 + iVar21;
  uVar24 = iVar6 + 0x4b7a3c27;
  iVar21 = (0x16a2a71U - iVar46 & uVar4 ^ uVar2 & uVar3) +
           uVar13 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80));
  iVar26 = iVar26 + iVar42 * 2 + iVar7 + iVar21;
  uVar4 = iVar26 - 0x6f7e8d;
  iVar21 = ((uVar24 >> 0x16 | uVar24 * 0x400) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar24 | uVar31) & uVar23 | uVar24 & uVar31) +
           iVar20 + iVar21;
  uVar23 = iVar21 + 0x40a6c207;
  iVar7 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
          (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar14 + (0x6f7e8cU - iVar26 & uVar3 ^ uVar2 & uVar4);
  iVar29 = iVar29 + iVar27 + iVar25 * 2 + iVar7;
  uVar3 = iVar29 + 0x1b8fee54;
  iVar25 = ((uVar23 >> 0x16 | uVar23 * 0x400) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar24 | uVar23) & uVar31 | uVar24 & uVar23) +
           iVar28 + iVar7;
  uVar31 = iVar25 + 0x818b9c7e;
  iVar44 = (~uVar3 & uVar2 ^ uVar4 & uVar3) +
           uVar15 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80)) + iVar44;
  uVar22 = iVar49 + iVar44 + 0x663df195;
  iVar27 = ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
           (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar23 | uVar31) & uVar24 | uVar23 & uVar31);
  uVar24 = iVar44 + -0x5c624c93 + iVar27;
  iVar46 = (uVar4 & ~uVar22 ^ uVar3 & uVar22) +
           uVar16 + ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000) ^
                    (uVar22 >> 0x19 | uVar22 * 0x80)) + iVar46;
  uVar2 = iVar6 + iVar46 + 0x10f01da8;
  iVar7 = (uVar31 & uVar24 | (uVar31 | uVar24) & uVar23) +
          ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
          (uVar24 >> 2 | uVar24 * 0x40000000));
  uVar23 = iVar46 + iVar7 + -0x3a8a1e7f;
  iVar26 = (uVar3 & ~uVar2 ^ uVar22 & uVar2) +
           uVar17 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar26;
  uVar3 = iVar21 + iVar26 + 0x15ded4c1;
  iVar5 = (uVar24 & uVar23 | (uVar24 | uVar23) & uVar31) +
          ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
          (uVar23 >> 2 | uVar23 * 0x40000000));
  uVar41 = iVar26 + iVar5 + -0x2ac7ed46;
  iVar29 = (uVar22 & ~uVar3 ^ uVar2 & uVar3) +
           uVar18 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80)) + iVar29;
  iVar32 = iVar25 + iVar29;
  uVar4 = iVar32 + 0xa3e5ee23;
  iVar42 = (uVar23 & uVar41 | (uVar23 | uVar41) & uVar24) +
           ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
           (uVar41 >> 2 | uVar41 * 0x40000000));
  uVar24 = iVar29 + 0x225a51a5 + iVar42;
  iVar20 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar37 + (0x5c1a11dcU - iVar32 & uVar2 ^ uVar3 & uVar4)
  ;
  iVar27 = iVar49 + iVar44 * 2 + iVar20 + iVar27;
  uVar2 = iVar27 + 0x1e04ce69;
  iVar28 = ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar41 | uVar24) & uVar23 | uVar41 & uVar24) +
           iVar20 + iVar49 + iVar44;
  uVar31 = iVar28 + 0x7a671afc;
  uVar45 = ((uVar34 >> 0x12 | uVar34 * 0x4000) ^ (uVar34 >> 7 | uVar34 * 0x2000000) ^ uVar34 >> 3) +
           uVar33 + ((uVar18 >> 0x13 | uVar18 * 0x2000) ^ (uVar18 >> 0x11 | uVar18 * 0x8000) ^
                    uVar18 >> 10) + uVar13;
  uVar30 = uVar34 + ((uVar37 >> 0x13 | uVar37 * 0x2000) ^ (uVar37 >> 0x11 | uVar37 * 0x8000) ^
                    uVar37 >> 10) +
           ((uVar40 >> 0x12 | uVar40 * 0x4000) ^ (uVar40 >> 7 | uVar40 * 0x2000000) ^ uVar40 >> 3) +
           uVar14;
  uVar34 = uVar15 + ((uVar45 >> 0x13 | uVar45 * 0x2000) ^ (uVar45 >> 0x11 | uVar45 * 0x8000) ^
                    uVar45 >> 10) +
                    uVar40 + ((uVar8 >> 0x12 | uVar8 * 0x4000) ^ (uVar8 >> 7 | uVar8 * 0x2000000) ^
                             uVar8 >> 3);
  uVar40 = uVar16 + ((uVar9 >> 0x12 | uVar9 * 0x4000) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^
                    uVar9 >> 3) +
                    uVar8 + ((uVar30 >> 0x13 | uVar30 * 0x2000) ^ (uVar30 >> 0x11 | uVar30 * 0x8000)
                            ^ uVar30 >> 10);
  uVar8 = uVar17 + ((uVar35 >> 0x12 | uVar35 * 0x4000) ^ (uVar35 >> 7 | uVar35 * 0x2000000) ^
                   uVar35 >> 3) +
                   uVar9 + ((uVar34 >> 0x13 | uVar34 * 0x2000) ^ (uVar34 >> 0x11 | uVar34 * 0x8000)
                           ^ uVar34 >> 10);
  uVar38 = uVar18 + ((uVar10 >> 0x12 | uVar10 * 0x4000) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^
                    uVar10 >> 3) +
                    uVar35 + ((uVar40 >> 0x13 | uVar40 * 0x2000) ^
                              (uVar40 >> 0x11 | uVar40 * 0x8000) ^ uVar40 >> 10);
  uVar9 = uVar10 + ((uVar8 >> 0x13 | uVar8 * 0x2000) ^ (uVar8 >> 0x11 | uVar8 * 0x8000) ^
                   uVar8 >> 10) +
          ((uVar11 >> 0x12 | uVar11 * 0x4000) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) +
          uVar37;
  uVar10 = uVar11 + ((uVar38 >> 0x13 | uVar38 * 0x2000) ^ (uVar38 >> 0x11 | uVar38 * 0x8000) ^
                    uVar38 >> 10) +
           ((uVar12 >> 0x12 | uVar12 * 0x4000) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3) +
           uVar45;
  iVar20 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
           (uVar2 >> 0x19 | uVar2 * 0x80)) + uVar45 + (~uVar2 & uVar3 ^ uVar4 & uVar2);
  iVar7 = iVar7 + iVar6 + iVar46 * 2 + iVar20;
  uVar3 = iVar7 + 0xfe1d09ae;
  iVar20 = ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
           (uVar31 >> 2 | iVar28 * 0x40000000)) + ((uVar24 | uVar31) & uVar41 | uVar24 & uVar31) +
           iVar6 + iVar46 + iVar20;
  uVar4 = iVar20 + 0x38a7282d;
  iVar6 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
          (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar30 +
          (0x1e2f651U - iVar7 & iVar32 + 0xa3e5ee23U ^ uVar3 & uVar2);
  iVar5 = iVar5 + iVar21 + iVar26 * 2 + iVar6;
  uVar2 = iVar5 + 0x193208b3;
  iVar6 = ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^
          (uVar4 >> 2 | uVar4 * 0x40000000)) + ((uVar4 | uVar31) & uVar24 | uVar4 & uVar31) +
          iVar21 + iVar26 + iVar6;
  uVar24 = iVar6 + 0x43f9f5f9;
  iVar21 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
           (uVar2 >> 0x19 | uVar2 * 0x80)) + uVar34 +
           (~uVar2 & iVar27 + 0x1e04ce69U ^ uVar3 & uVar2);
  iVar42 = iVar42 + iVar25 + iVar29 * 2 + iVar21;
  uVar23 = iVar42 + 0x136cadc4;
  iVar25 = ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar4 | uVar24) & uVar31 | uVar4 & uVar24) +
           iVar32 + iVar21;
  uVar31 = iVar25 + 0xf1125c1f;
  iVar27 = (~uVar23 & uVar3 ^ uVar23 & uVar2) +
           uVar40 + ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
                    (uVar23 >> 0x19 | uVar23 * 0x80)) + iVar27;
  iVar28 = iVar28 + iVar27;
  uVar22 = iVar28 + 0xeba3f678;
  iVar21 = iVar27 + ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
                    (uVar31 >> 2 | uVar31 * 0x40000000)) +
           ((uVar31 | uVar24) & uVar4 | uVar31 & uVar24);
  uVar3 = iVar21 + 0x713cdb7c;
  iVar7 = (0x145c0987U - iVar28 & uVar2 ^ uVar23 & uVar22) +
          uVar8 + ((uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 6 | uVar22 * 0x4000000) ^
                  (uVar22 >> 0x19 | uVar22 * 0x80)) + iVar7;
  iVar20 = iVar20 + iVar7;
  uVar2 = iVar20 + 0x9bcea52f;
  iVar7 = iVar7 + ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^
                  (uVar3 >> 2 | iVar21 * 0x40000000)) + ((uVar31 | uVar3) & uVar24 | uVar31 & uVar3)
  ;
  uVar4 = iVar7 + 0x63277d02;
  iVar5 = (0x64315ad0U - iVar20 & uVar23 ^ uVar22 & uVar2) +
          uVar38 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                   (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar5;
  iVar6 = iVar5 + iVar6;
  uVar23 = iVar6 + 0xd3960967;
  iVar27 = iVar5 + ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^
                   (uVar4 >> 2 | uVar4 * 0x40000000)) + ((uVar3 | uVar4) & uVar31 | uVar3 & uVar4);
  uVar24 = iVar27 + 0x8f9c136e;
  iVar5 = (0x2c69f698U - iVar6 & uVar22 ^ uVar2 & uVar23) +
          iVar42 + ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
                   (uVar23 >> 0x19 | uVar23 * 0x80)) + uVar9;
  iVar25 = iVar25 + iVar5;
  uVar31 = iVar25 + 0x8641d311;
  iVar5 = iVar5 + ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
                  (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar4 | uVar24) & uVar3 | uVar4 & uVar24)
  ;
  uVar3 = iVar5 + 0x952f76f2;
  iVar29 = (0x79be2ceeU - iVar25 & uVar2 ^ uVar23 & uVar31) +
           iVar28 + ((uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000) ^
                    (uVar31 >> 0x19 | uVar31 * 0x80)) + uVar10;
  iVar46 = iVar21 + iVar29;
  uVar2 = iVar46 + 0xef52fe79;
  iVar42 = (uVar24 & uVar3 | (uVar24 | uVar3) & uVar4) +
           ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 0x16 | uVar3 * 0x400) ^
           (uVar3 >> 2 | uVar3 * 0x40000000));
  uVar43 = iVar29 + 0x7e1622fd + iVar42;
  uVar35 = ((uVar13 >> 0x12 | uVar13 * 0x4000) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^ uVar13 >> 3) +
           uVar12 + ((uVar9 >> 0x11 | uVar9 * 0x8000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000) ^
                    uVar9 >> 10) + uVar30;
  uVar33 = ((uVar14 >> 0x12 | uVar14 * 0x4000) ^ (uVar14 >> 7 | uVar14 * 0x2000000) ^ uVar14 >> 3) +
           uVar13 + ((uVar10 >> 0x11 | uVar10 * 0x8000) ^ (uVar10 >> 0x13 | uVar10 * 0x2000) ^
                    uVar10 >> 10) + uVar34;
  uVar41 = ((uVar35 >> 0x11 | uVar35 * 0x8000) ^ (uVar35 >> 0x13 | uVar35 * 0x2000) ^ uVar35 >> 10)
           + uVar14 + ((uVar15 >> 0x12 | uVar15 * 0x4000) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^
                      uVar15 >> 3) + uVar40;
  uVar47 = (uVar16 >> 3 ^ (uVar16 >> 0x12 | uVar16 * 0x4000) ^ (uVar16 >> 7 | uVar16 * 0x2000000)) +
           uVar15 + ((uVar33 >> 0x11 | uVar33 * 0x8000) ^ (uVar33 >> 0x13 | uVar33 * 0x2000) ^
                    uVar33 >> 10) + uVar8;
  uVar39 = (uVar17 >> 3 ^ (uVar17 >> 0x12 | uVar17 * 0x4000) ^ (uVar17 >> 7 | uVar17 * 0x2000000)) +
           uVar16 + ((uVar41 >> 0x11 | uVar41 * 0x8000) ^ (uVar41 >> 0x13 | uVar41 * 0x2000) ^
                    uVar41 >> 10) + uVar38;
  uVar48 = (uVar18 >> 3 ^ (uVar18 >> 0x12 | uVar18 * 0x4000) ^ (uVar18 >> 7 | uVar18 * 0x2000000)) +
           uVar17 + ((uVar47 >> 0x11 | uVar47 * 0x8000) ^ (uVar47 >> 0x13 | uVar47 * 0x2000) ^
                    uVar47 >> 10) + uVar9;
  uVar22 = uVar10 + ((uVar37 >> 0x12 | uVar37 * 0x4000) ^ (uVar37 >> 7 | uVar37 * 0x2000000) ^
                    uVar37 >> 3) +
                    uVar18 + ((uVar39 >> 0x11 | uVar39 * 0x8000) ^
                              (uVar39 >> 0x13 | uVar39 * 0x2000) ^ uVar39 >> 10);
  uVar11 = uVar37 + ((uVar48 >> 0x11 | uVar48 * 0x8000) ^ (uVar48 >> 0x13 | uVar48 * 0x2000) ^
                    uVar48 >> 10) +
           ((uVar45 >> 0x12 | uVar45 * 0x4000) ^ (uVar45 >> 7 | uVar45 * 0x2000000) ^ uVar45 >> 3) +
           uVar35;
  iVar36 = iVar20 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80)) +
           (0x10ad0186U - iVar46 & uVar23 ^ uVar31 & uVar2) + uVar35;
  uVar4 = iVar7 + iVar36 + 0xa1b60ad2;
  iVar49 = ((uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
           (uVar43 >> 2 | uVar43 * 0x40000000)) + ((uVar3 | uVar43) & uVar24 | uVar3 & uVar43);
  uVar23 = iVar36 + 0x3e8e8dd0 + iVar49;
  iVar32 = (uVar4 & uVar2 ^ 0x5e49f52dU - (iVar7 + iVar36) & uVar31) +
           iVar6 + ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
                   (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar33;
  uVar24 = iVar27 + iVar32 + 0xb4c8320;
  iVar20 = (uVar3 & (uVar23 | uVar43) | uVar23 & uVar43) +
           ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
           (uVar23 >> 2 | uVar23 * 0x40000000));
  uVar12 = iVar32 + 0x7bb06fb2 + iVar20;
  iVar44 = (~uVar24 & uVar2 ^ uVar4 & uVar24) +
           iVar25 + ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000) ^
                    (uVar24 >> 0x19 | uVar24 * 0x80)) + uVar41;
  iVar28 = iVar5 + iVar44;
  uVar2 = iVar28 + 0xddbcd573;
  iVar26 = (uVar43 & (uVar23 | uVar12) | uVar23 & uVar12) +
           ((uVar12 >> 0xd | uVar12 * 0x80000) ^ (uVar12 >> 0x16 | uVar12 * 0x400) ^
           (uVar12 >> 2 | uVar12 * 0x40000000));
  uVar31 = iVar44 + 0x488d5e81 + iVar26;
  iVar6 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
          (uVar2 >> 0x19 | uVar2 * 0x80)) + uVar47 + (0x22432a8cU - iVar28 & uVar4 ^ uVar24 & uVar2)
  ;
  iVar42 = iVar42 + iVar21 + iVar29 * 2 + iVar6;
  uVar3 = iVar42 + 0x34d57319;
  iVar6 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
          (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar12 | uVar31) & uVar23 | uVar12 & uVar31) +
          iVar46 + iVar6;
  uVar4 = iVar6 + 0xb6bf501c;
  iVar25 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
           (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar39 + (~uVar3 & uVar24 ^ uVar2 & uVar3);
  iVar49 = iVar49 + iVar7 + iVar36 * 2 + iVar25;
  uVar24 = iVar49 + 0xb1d780bb;
  iVar25 = ((uVar4 >> 0x16 | uVar4 * 0x400) ^ (uVar4 >> 0xd | uVar4 * 0x80000) ^
           (uVar4 >> 2 | iVar6 * 0x40000000)) + ((uVar31 | uVar4) & uVar12 | uVar31 & uVar4) +
           iVar7 + iVar36 + iVar25;
  uVar23 = iVar25 + 0x7348f2eb;
  iVar21 = ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000) ^
           (uVar24 >> 0x19 | uVar24 * 0x80)) + uVar48 +
           (0x4e287f44U - iVar49 & uVar2 ^ uVar3 & uVar24);
  iVar20 = iVar27 + iVar32 * 2 + iVar21 + iVar20;
  uVar2 = iVar20 + 0x5d95f8f6;
  iVar21 = ((uVar23 >> 0x16 | uVar23 * 0x400) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar4 | uVar23) & uVar31 | uVar4 & uVar23) +
           iVar27 + iVar32 + iVar21;
  uVar31 = iVar21 + 0xe1e58944;
  iVar7 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
          (uVar2 >> 0x19 | uVar2 * 0x80)) + uVar22 + (~uVar2 & uVar3 ^ uVar24 & uVar2);
  iVar26 = iVar5 + iVar44 * 2 + iVar7 + iVar26;
  uVar3 = iVar26 + 0x1a586979;
  iVar7 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
          (uVar31 >> 2 | iVar21 * 0x40000000)) + ((uVar23 | uVar31) & uVar4 | uVar23 & uVar31) +
          iVar28 + iVar7;
  uVar4 = iVar7 + 0xd1cb0af8;
  iVar42 = (~uVar3 & uVar24 ^ uVar2 & uVar3) +
           uVar11 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80)) + iVar42;
  iVar29 = iVar6 + iVar42;
  uVar24 = iVar29 + 0xfbff63a5;
  iVar27 = (uVar31 & uVar4 | (uVar31 | uVar4) & uVar23) +
           ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 0x16 | uVar4 * 0x400) ^
           (uVar4 >> 2 | iVar7 * 0x40000000));
  uVar17 = iVar42 + 0x45401389 + iVar27;
  uVar12 = ((uVar22 >> 0x11 | uVar22 * 0x8000) ^ (uVar22 >> 0x13 | uVar22 * 0x2000) ^ uVar22 >> 10)
           + uVar45 + ((uVar30 >> 7 | uVar30 * 0x2000000) ^ (uVar30 >> 0x12 | uVar30 * 0x4000) ^
                      uVar30 >> 3) + uVar33;
  uVar16 = (uVar11 >> 10 ^ (uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar11 >> 0x13 | uVar11 * 0x2000))
           + uVar30 + ((uVar34 >> 7 | uVar34 * 0x2000000) ^ (uVar34 >> 0x12 | uVar34 * 0x4000) ^
                      uVar34 >> 3) + uVar41;
  uVar14 = ((uVar12 >> 0x11 | uVar12 * 0x8000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000) ^ uVar12 >> 10)
           + uVar34 + ((uVar40 >> 7 | uVar40 * 0x2000000) ^ (uVar40 >> 0x12 | uVar40 * 0x4000) ^
                      uVar40 >> 3) + uVar47;
  uVar13 = ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10)
           + uVar40 + ((uVar8 >> 7 | uVar8 * 0x2000000) ^ (uVar8 >> 0x12 | uVar8 * 0x4000) ^
                      uVar8 >> 3) + uVar39;
  uVar15 = (uVar14 >> 10 ^ (uVar14 >> 0x11 | uVar14 * 0x8000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000))
           + uVar8 + ((uVar38 >> 7 | uVar38 * 0x2000000) ^ (uVar38 >> 0x12 | uVar38 * 0x4000) ^
                     uVar38 >> 3) + uVar48;
  uVar40 = (uVar13 >> 10 ^ (uVar13 >> 0x11 | uVar13 * 0x8000) ^ (uVar13 >> 0x13 | uVar13 * 0x2000))
           + uVar38 + ((uVar9 >> 7 | uVar9 * 0x2000000) ^ (uVar9 >> 0x12 | uVar9 * 0x4000) ^
                      uVar9 >> 3) + uVar22;
  uVar8 = uVar11 + ((uVar15 >> 0x11 | uVar15 * 0x8000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000) ^
                   uVar15 >> 10) +
                   ((uVar10 >> 7 | uVar10 * 0x2000000) ^ (uVar10 >> 0x12 | uVar10 * 0x4000) ^
                   uVar10 >> 3) + uVar9;
  uVar34 = uVar10 + ((uVar35 >> 7 | uVar35 * 0x2000000) ^ (uVar35 >> 0x12 | uVar35 * 0x4000) ^
                    uVar35 >> 3) +
           ((uVar40 >> 0x11 | uVar40 * 0x8000) ^ (uVar40 >> 0x13 | uVar40 * 0x2000) ^ uVar40 >> 10)
           + uVar12;
  iVar49 = (0x4009c5aU - iVar29 & uVar2 ^ uVar3 & uVar24) +
           uVar12 + ((uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000) ^
                    (uVar24 >> 0x19 | uVar24 * 0x80)) + iVar49;
  uVar23 = iVar25 + 0x3ec534bc + iVar49;
  iVar32 = ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 0x16 | uVar17 * 0x400) ^
           (uVar17 >> 2 | uVar17 * 0x40000000)) + ((uVar4 | uVar17) & uVar31 | uVar4 & uVar17);
  uVar9 = iVar49 + -0x3483be2f + iVar32;
  iVar20 = (~uVar23 & uVar3 ^ uVar23 & uVar24) +
           uVar16 + ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
                    (uVar23 >> 0x19 | uVar23 * 0x80)) + iVar20;
  uVar2 = iVar21 + iVar20 + 0x5db2ee42;
  iVar28 = ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
           (uVar9 >> 2 | uVar9 * 0x40000000)) + ((uVar9 | uVar17) & uVar4 | uVar9 & uVar17);
  uVar10 = iVar20 + 0x7bcd64fe + iVar28;
  iVar26 = (~uVar2 & uVar24 ^ uVar2 & uVar23) +
           uVar14 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                    (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar26;
  uVar3 = iVar7 + iVar26 + 0x136bebbd;
  iVar46 = (uVar17 & (uVar10 | uVar9) | uVar10 & uVar9) +
           ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
           (uVar10 >> 2 | uVar10 * 0x40000000));
  uVar31 = iVar26 + 0x41a0e0c5 + iVar46;
  iVar5 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
          (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar13 + (~uVar3 & uVar23 ^ uVar3 & uVar2);
  iVar6 = iVar27 + iVar42 * 2 + iVar6 + iVar5;
  uVar4 = iVar6 + 0x75f033e3;
  iVar27 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
           (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar10 | uVar31) & uVar9 | uVar10 & uVar31) +
           iVar29 + iVar5;
  uVar24 = iVar27 + 0x30b0205a;
  iVar42 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar15 + (~uVar4 & uVar2 ^ uVar4 & uVar3);
  iVar5 = iVar32 + iVar49 * 2 + iVar25 + iVar42;
  uVar2 = iVar5 + 0x435d8340;
  iVar25 = ((uVar24 >> 0x16 | uVar24 * 0x400) ^ (uVar24 >> 0xd | uVar24 * 0x80000) ^
           (uVar24 >> 2 | uVar24 * 0x40000000)) + ((uVar31 | uVar24) & uVar10 | uVar31 & uVar24) +
           iVar25 + iVar49 + iVar42;
  uVar23 = iVar25 + 0x77e1416f;
  iVar42 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | iVar5 * 0x4000000) ^
           (uVar2 >> 0x19 | uVar2 * 0x80)) + uVar40 + (~uVar2 & uVar3 ^ uVar4 & uVar2);
  iVar28 = iVar21 + iVar20 * 2 + iVar42 + iVar28;
  uVar3 = iVar28 + 0x2858fd8a;
  iVar21 = ((uVar23 >> 0x16 | uVar23 * 0x400) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar24 | uVar23) & uVar31 | uVar24 & uVar23) +
           iVar21 + iVar20 + iVar42;
  uVar31 = iVar21 + 0xac8b988c;
  iVar42 = ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
           (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar8 + (~uVar3 & uVar4 ^ uVar2 & uVar3);
  iVar46 = iVar7 + iVar26 * 2 + iVar42 + iVar46;
  uVar4 = iVar46 + 0xb0a996d1;
  iVar7 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
          (uVar31 >> 2 | iVar21 * 0x40000000)) + ((uVar31 | uVar23) & uVar24 | uVar31 & uVar23) +
          iVar7 + iVar26 + iVar42;
  uVar24 = iVar7 + 0x6f08b60c;
  iVar6 = (0x4f56692eU - iVar46 & uVar2 ^ uVar3 & uVar4) +
          uVar34 + ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
                   (uVar4 >> 0x19 | uVar4 * 0x80)) + iVar6;
  uVar2 = iVar27 + iVar6 + 0xecec430;
  iVar26 = (uVar31 & uVar24 | (uVar31 | uVar24) & uVar23) +
           ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
           (uVar24 >> 2 | iVar7 * 0x40000000));
  uVar23 = iVar6 + -0x21e15c2a + iVar26;
  uVar16 = ((uVar33 >> 0x12 | uVar33 * 0x4000) ^ (uVar33 >> 7 | uVar33 * 0x2000000) ^ uVar33 >> 3) +
           uVar35 + ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^
                    uVar8 >> 10) + uVar16;
  uVar14 = uVar33 + ((uVar34 >> 0x11 | uVar34 * 0x8000) ^ (uVar34 >> 0x13 | uVar34 * 0x2000) ^
                    uVar34 >> 10) +
           ((uVar41 >> 0x12 | uVar41 * 0x4000) ^ (uVar41 >> 7 | uVar41 * 0x2000000) ^ uVar41 >> 3) +
           uVar14;
  uVar13 = ((uVar16 >> 0x11 | uVar16 * 0x8000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000) ^ uVar16 >> 10)
           + uVar41 + ((uVar47 >> 0x12 | uVar47 * 0x4000) ^ (uVar47 >> 7 | uVar47 * 0x2000000) ^
                      uVar47 >> 3) + uVar13;
  uVar15 = uVar47 + ((uVar14 >> 0x11 | uVar14 * 0x8000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000) ^
                    uVar14 >> 10) +
           ((uVar39 >> 0x12 | uVar39 * 0x4000) ^ (uVar39 >> 7 | uVar39 * 0x2000000) ^ uVar39 >> 3) +
           uVar15;
  uVar40 = uVar40 + ((uVar48 >> 0x12 | uVar48 * 0x4000) ^ (uVar48 >> 7 | uVar48 * 0x2000000) ^
                    uVar48 >> 3) +
                    uVar39 + ((uVar13 >> 0x11 | uVar13 * 0x8000) ^
                              (uVar13 >> 0x13 | uVar13 * 0x2000) ^ uVar13 >> 10);
  uVar8 = uVar48 + ((uVar15 >> 0x11 | uVar15 * 0x8000) ^ (uVar15 >> 0x13 | uVar15 * 0x2000) ^
                   uVar15 >> 10) +
          ((uVar22 >> 0x12 | uVar22 * 0x4000) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^ uVar22 >> 3) +
          uVar8;
  iVar5 = (~uVar2 & uVar3 ^ uVar4 & uVar2) +
          uVar16 + ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
                   (uVar2 >> 0x19 | uVar2 * 0x80)) + iVar5;
  iVar44 = iVar25 + iVar5;
  iVar36 = ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 0x16 | uVar23 * 0x400) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) + ((uVar24 | uVar23) & uVar31 | uVar24 & uVar23);
  uVar9 = iVar5 + -0x4812f9d2 + iVar36;
  uVar3 = iVar44 + 0x2fce479d;
  iVar28 = (uVar4 & ~uVar3 ^ uVar3 & uVar2) +
           ((uVar3 >> 6 | uVar3 * 0x4000000) ^ (uVar3 >> 0xb | uVar3 * 0x200000) ^
           (uVar3 >> 0x19 | uVar3 * 0x80)) + uVar14 + iVar28;
  uVar23 = iVar6 + iVar26 + -0x21e15c2a;
  uVar4 = iVar21 + iVar28 + 0x4d89f985;
  iVar32 = ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
           (uVar9 >> 2 | uVar9 * 0x40000000)) + ((uVar9 | uVar23) & uVar24 | uVar9 & uVar23);
  uVar23 = iVar28 + -0x5f019f07 + iVar32;
  iVar46 = (uVar2 & ~uVar4 ^ uVar3 & uVar4) +
           ((uVar4 >> 6 | uVar4 * 0x4000000) ^ (uVar4 >> 0xb | uVar4 * 0x200000) ^
           (uVar4 >> 0x19 | uVar4 * 0x80)) + uVar13 + iVar46;
  iVar42 = iVar7 + iVar46;
  uVar2 = iVar42 + 0xa47ac4f1;
  iVar20 = ((uVar23 >> 0x16 | uVar23 * 0x400) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
           (uVar23 >> 2 | uVar23 * 0x40000000)) +
           ((uVar23 | uVar9) & iVar6 + iVar26 + -0x21e15c2a | uVar23 & uVar9);
  uVar31 = iVar46 + iVar20 + 0x35720ee5;
  iVar29 = ((uVar2 >> 0x19 | uVar2 * 0x80) ^
           (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) + uVar15 +
           (0x5b853b0eU - iVar42 & iVar44 + 0x2fce479dU ^ uVar2 & uVar4);
  iVar26 = iVar26 + iVar27 + iVar6 * 2 + iVar29;
  uVar3 = iVar26 + 0x79b46a0e;
  iVar6 = ((uVar31 >> 0x16 | uVar31 * 0x400) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
          (uVar31 >> 2 | uVar31 * 0x40000000)) + ((uVar23 | uVar31) & uVar9 | uVar23 & uVar31) +
          iVar27 + iVar6 + iVar29;
  uVar24 = iVar6 + 0x9b95c638;
  iVar27 = uVar40 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80)) + (~uVar3 & uVar4 ^ uVar3 & uVar2);
  iVar25 = iVar36 + iVar5 * 2 + iVar25 + iVar27;
  uVar4 = iVar25 + 0x787a4dc5;
  iVar5 = ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
          (uVar24 >> 2 | iVar6 * 0x40000000)) + ((uVar31 | uVar24) & uVar23 | uVar31 & uVar24) +
          iVar27 + iVar44;
  iVar27 = uVar8 + ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
                   (uVar4 >> 0x19 | uVar4 * 0x80)) + (~uVar4 & uVar2 ^ uVar3 & uVar4);
  uVar2 = iVar5 + 0xc08d4797;
  iVar29 = iVar21 + iVar32 + iVar28 * 2 + iVar27;
  uVar23 = iVar29 + 0x92d8c769;
  iVar27 = ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 0x16 | uVar2 * 0x400) ^
           (uVar2 >> 2 | uVar2 * 0x40000000)) + ((uVar24 | uVar2) & uVar31 | uVar24 & uVar2) +
           iVar21 + iVar28 + iVar27;
  uVar31 = iVar27 + 0xf1da6670;
  iVar21 = ((uVar23 >> 0x19 | uVar23 * 0x80) ^
           (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
           (0x6d273896U - iVar29 & uVar3 ^ uVar23 & uVar4) +
           ((uVar11 >> 0x12 | uVar11 * 0x4000) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3) +
           uVar22 + ((uVar40 >> 0x11 | uVar40 * 0x8000) ^ (uVar40 >> 0x13 | uVar40 * 0x2000) ^
                    uVar40 >> 10) + uVar34;
  iVar20 = iVar20 + iVar7 + iVar46 * 2 + iVar21;
  uVar3 = iVar20 + 0x98e677cd;
  iVar7 = ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 0x16 | uVar31 * 0x400) ^
          (uVar31 >> 2 | iVar27 * 0x40000000)) + ((uVar31 | uVar2) & uVar24 | uVar31 & uVar2) +
          iVar42 + iVar21;
  uVar24 = iVar7 + 0x637468e8;
  iVar21 = ((uVar12 >> 0x12 | uVar12 * 0x4000) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3) +
           uVar11 + ((uVar8 >> 0x11 | uVar8 * 0x8000) ^ (uVar8 >> 0x13 | uVar8 * 0x2000) ^
                    uVar8 >> 10) + uVar16 +
           (0x67198832U - iVar20 & uVar4 ^ uVar23 & uVar3) +
           iVar26 + ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
                    (uVar3 >> 0x19 | uVar3 * 0x80));
  *(uint *)(param_1 + 0x50) =
       uVar1 + ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 0x16 | uVar24 * 0x400) ^
               (uVar24 >> 2 | iVar7 * 0x40000000)) +
       ((uVar31 | uVar24) & uVar2 | uVar31 & uVar24) + 0x4025e300 + iVar21;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x637468e8 + iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xe259990 + iVar27;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar5 + -0x3f72b869;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar6 + -0x244456c8 + iVar21;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -0x67198833 + iVar20;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -0x6d273897 + iVar29;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar25 + 0x787a4dc5;
  return;
}

