// Function: FUN_1400fd010
// Addr: 1400fd010
// Size: 3121 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fd010(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  uint uVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  uint uVar43;
  float fVar44;
  undefined1 auVar38 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint uVar54;
  float fVar55;
  float fVar58;
  uint uVar59;
  float fVar60;
  float fVar61;
  uint uVar62;
  float fVar63;
  float fVar64;
  uint uVar65;
  float fVar66;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar67;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar73;
  float fVar74;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar83;
  float fVar84;
  uint uVar85;
  float fVar86;
  uint uVar87;
  float fVar88;
  uint uVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  uint uVar99;
  float fVar100;
  uint uVar101;
  float fVar102;
  uint uVar103;
  float fVar104;
  uint uVar105;
  float fVar106;
  uint uVar107;
  float fVar108;
  uint uVar109;
  float fVar110;
  uint uVar111;
  float fVar112;
  uint uVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  uint uVar119;
  float fVar120;
  uint uVar121;
  float fVar122;
  uint uVar123;
  float fVar124;
  uint uVar125;
  float fVar126;
  
  fVar45 = *param_3;
  fVar47 = param_3[1];
  fVar49 = param_3[2];
  fVar51 = param_3[3];
  fVar53 = *param_4;
  fVar58 = param_4[1];
  fVar61 = param_4[2];
  fVar64 = param_4[3];
  fVar73 = *param_5;
  fVar77 = param_5[1];
  fVar79 = param_5[2];
  fVar81 = param_5[3];
  fVar28 = (fVar53 + fVar73 + fVar45) * _DAT_140483610;
  fVar29 = (fVar58 + fVar77 + fVar47) * _UNK_140483614;
  fVar30 = (fVar61 + fVar79 + fVar49) * _UNK_140483618;
  fVar31 = (fVar64 + fVar81 + fVar51) * _UNK_14048361c;
  auVar24._0_4_ = fVar45 + fVar28;
  auVar24._4_4_ = fVar47 + fVar29;
  auVar24._8_4_ = fVar49 + fVar30;
  auVar24._12_4_ = fVar51 + fVar31;
  auVar76._0_4_ = fVar53 + fVar28;
  auVar76._4_4_ = fVar58 + fVar29;
  auVar76._8_4_ = fVar61 + fVar30;
  auVar76._12_4_ = fVar64 + fVar31;
  auVar24 = roundps(auVar24,auVar24,1);
  uVar36 = (uint)auVar24._0_4_;
  uVar39 = (uint)auVar24._4_4_;
  uVar41 = (uint)auVar24._8_4_;
  uVar43 = (uint)auVar24._12_4_;
  auVar24 = roundps(auVar24,auVar76,1);
  uVar32 = (uint)auVar24._0_4_;
  uVar33 = (uint)auVar24._4_4_;
  uVar34 = (uint)auVar24._8_4_;
  uVar35 = (uint)auVar24._12_4_;
  auVar27._0_4_ = fVar73 + fVar28;
  auVar27._4_4_ = fVar77 + fVar29;
  auVar27._8_4_ = fVar79 + fVar30;
  auVar27._12_4_ = fVar81 + fVar31;
  auVar24 = roundps(auVar24,auVar27,1);
  uVar119 = (uint)auVar24._0_4_;
  uVar121 = (uint)auVar24._4_4_;
  uVar123 = (uint)auVar24._8_4_;
  uVar125 = (uint)auVar24._12_4_;
  fVar28 = (float)(int)(uVar119 + uVar32 + uVar36) * _DAT_140483600;
  fVar29 = (float)(int)(uVar121 + uVar33 + uVar39) * _UNK_140483604;
  fVar30 = (float)(int)(uVar123 + uVar34 + uVar41) * _UNK_140483608;
  fVar31 = (float)(int)(uVar125 + uVar35 + uVar43) * _UNK_14048360c;
  fVar45 = fVar45 - ((float)(int)uVar36 - fVar28);
  fVar47 = fVar47 - ((float)(int)uVar39 - fVar29);
  fVar49 = fVar49 - ((float)(int)uVar41 - fVar30);
  fVar51 = fVar51 - ((float)(int)uVar43 - fVar31);
  fVar53 = fVar53 - ((float)(int)uVar32 - fVar28);
  fVar58 = fVar58 - ((float)(int)uVar33 - fVar29);
  fVar61 = fVar61 - ((float)(int)uVar34 - fVar30);
  fVar64 = fVar64 - ((float)(int)uVar35 - fVar31);
  uVar16 = -(uint)(fVar53 <= fVar45);
  uVar18 = -(uint)(fVar58 <= fVar47);
  uVar20 = -(uint)(fVar61 <= fVar49);
  uVar22 = -(uint)(fVar64 <= fVar51);
  fVar73 = fVar73 - ((float)(int)uVar119 - fVar28);
  fVar77 = fVar77 - ((float)(int)uVar121 - fVar29);
  fVar79 = fVar79 - ((float)(int)uVar123 - fVar30);
  fVar81 = fVar81 - ((float)(int)uVar125 - fVar31);
  uVar17 = -(uint)(fVar73 <= fVar45);
  uVar19 = -(uint)(fVar77 <= fVar47);
  uVar21 = -(uint)(fVar79 <= fVar49);
  uVar23 = -(uint)(fVar81 <= fVar51);
  uVar107 = uVar16 & uVar17 & _DAT_1404835f0;
  uVar109 = uVar18 & uVar19 & _UNK_1404835f4;
  uVar111 = uVar20 & uVar21 & _UNK_1404835f8;
  uVar113 = uVar22 & uVar23 & _UNK_1404835fc;
  uVar99 = -(uint)(fVar45 < fVar53 && fVar73 < fVar53) & _DAT_1404835f0;
  uVar101 = -(uint)(fVar47 < fVar58 && fVar77 < fVar58) & _UNK_1404835f4;
  uVar103 = -(uint)(fVar49 < fVar61 && fVar79 < fVar61) & _UNK_1404835f8;
  uVar105 = -(uint)(fVar51 < fVar64 && fVar81 < fVar64) & _UNK_1404835fc;
  uVar83 = -(uint)(fVar45 < fVar73 && fVar53 < fVar73) & _DAT_1404835f0;
  uVar85 = -(uint)(fVar47 < fVar77 && fVar58 < fVar77) & _UNK_1404835f4;
  uVar87 = -(uint)(fVar49 < fVar79 && fVar61 < fVar79) & _UNK_1404835f8;
  uVar89 = -(uint)(fVar64 < fVar81 && fVar51 < fVar81) & _UNK_1404835fc;
  uVar54 = (-(uint)(fVar45 < fVar53) & uVar17 | -(uint)(fVar45 < fVar73) & uVar16 | uVar107) &
           _DAT_1404835f0;
  uVar59 = (-(uint)(fVar47 < fVar58) & uVar19 | -(uint)(fVar47 < fVar77) & uVar18 | uVar109) &
           _UNK_1404835f4;
  uVar62 = (-(uint)(fVar49 < fVar61) & uVar21 | -(uint)(fVar49 < fVar79) & uVar20 | uVar111) &
           _UNK_1404835f8;
  uVar65 = (-(uint)(fVar51 < fVar64) & uVar23 | -(uint)(fVar51 < fVar81) & uVar22 | uVar113) &
           _UNK_1404835fc;
  uVar16 = (-(uint)(fVar53 < fVar73) & -(uint)(fVar45 < fVar53) | -(uint)(fVar73 <= fVar53) & uVar16
           | uVar99) & _DAT_1404835f0;
  uVar18 = (-(uint)(fVar58 < fVar77) & -(uint)(fVar47 < fVar58) | -(uint)(fVar77 <= fVar58) & uVar18
           | uVar101) & _UNK_1404835f4;
  uVar20 = (-(uint)(fVar61 < fVar79) & -(uint)(fVar49 < fVar61) | -(uint)(fVar79 <= fVar61) & uVar20
           | uVar103) & _UNK_1404835f8;
  uVar22 = (-(uint)(fVar64 < fVar81) & -(uint)(fVar51 < fVar64) | -(uint)(fVar81 <= fVar64) & uVar22
           | uVar105) & _UNK_1404835fc;
  uVar17 = (-(uint)(fVar73 <= fVar53) & -(uint)(fVar45 < fVar73) | -(uint)(fVar53 < fVar73) & uVar17
           | uVar83) & _DAT_1404835f0;
  uVar19 = (-(uint)(fVar77 <= fVar58) & -(uint)(fVar47 < fVar77) | -(uint)(fVar58 < fVar77) & uVar19
           | uVar85) & _UNK_1404835f4;
  uVar21 = (-(uint)(fVar79 <= fVar61) & -(uint)(fVar49 < fVar79) | -(uint)(fVar61 < fVar79) & uVar21
           | uVar87) & _UNK_1404835f8;
  uVar23 = (-(uint)(fVar81 <= fVar64) & -(uint)(fVar51 < fVar81) | -(uint)(fVar64 < fVar81) & uVar23
           | uVar89) & _UNK_1404835fc;
  fVar67 = (fVar45 - (float)(int)uVar107) + _DAT_140483600;
  fVar70 = (fVar47 - (float)(int)uVar109) + _UNK_140483604;
  fVar71 = (fVar49 - (float)(int)uVar111) + _UNK_140483608;
  fVar72 = (fVar51 - (float)(int)uVar113) + _UNK_14048360c;
  fVar37 = (fVar53 - (float)(int)uVar99) + _DAT_140483600;
  fVar40 = (fVar58 - (float)(int)uVar101) + _UNK_140483604;
  fVar42 = (fVar61 - (float)(int)uVar103) + _UNK_140483608;
  fVar44 = (fVar64 - (float)(int)uVar105) + _UNK_14048360c;
  fVar84 = (fVar73 - (float)(int)uVar83) + _DAT_140483600;
  fVar86 = (fVar77 - (float)(int)uVar85) + _UNK_140483604;
  fVar88 = (fVar79 - (float)(int)uVar87) + _UNK_140483608;
  fVar90 = (fVar81 - (float)(int)uVar89) + _UNK_14048360c;
  fVar91 = (fVar45 - (float)(int)uVar54) + _DAT_1404835e0;
  fVar92 = (fVar47 - (float)(int)uVar59) + _UNK_1404835e4;
  fVar93 = (fVar49 - (float)(int)uVar62) + _UNK_1404835e8;
  fVar94 = (fVar51 - (float)(int)uVar65) + _UNK_1404835ec;
  fVar46 = (fVar53 - (float)(int)uVar16) + _DAT_1404835e0;
  fVar48 = (fVar58 - (float)(int)uVar18) + _UNK_1404835e4;
  fVar50 = (fVar61 - (float)(int)uVar20) + _UNK_1404835e8;
  fVar52 = (fVar64 - (float)(int)uVar22) + _UNK_1404835ec;
  fVar74 = (fVar73 - (float)(int)uVar17) + _DAT_1404835e0;
  fVar78 = (fVar77 - (float)(int)uVar19) + _UNK_1404835e4;
  fVar80 = (fVar79 - (float)(int)uVar21) + _UNK_1404835e8;
  fVar82 = (fVar81 - (float)(int)uVar23) + _UNK_1404835ec;
  fVar28 = (fVar73 - _DAT_140483640) + _DAT_140483650;
  fVar29 = (fVar77 - _UNK_140483644) + _UNK_140483654;
  fVar30 = (fVar79 - _UNK_140483648) + _UNK_140483658;
  fVar31 = (fVar81 - _UNK_14048364c) + _UNK_14048365c;
  fVar100 = (fVar45 - _DAT_140483640) + _DAT_140483650;
  fVar102 = (fVar47 - _UNK_140483644) + _UNK_140483654;
  fVar104 = (fVar49 - _UNK_140483648) + _UNK_140483658;
  fVar106 = (fVar51 - _UNK_14048364c) + _UNK_14048365c;
  fVar115 = (fVar53 - _DAT_140483640) + _DAT_140483650;
  fVar116 = (fVar58 - _UNK_140483644) + _UNK_140483654;
  fVar117 = (fVar61 - _UNK_140483648) + _UNK_140483658;
  fVar118 = (fVar64 - _UNK_14048364c) + _UNK_14048365c;
  uVar119 = uVar119 & _DAT_140483630;
  uVar121 = uVar121 & _UNK_140483634;
  uVar123 = uVar123 & _UNK_140483638;
  uVar125 = uVar125 & _UNK_14048363c;
  uVar36 = uVar36 & _DAT_140483630;
  uVar39 = uVar39 & _UNK_140483634;
  uVar41 = uVar41 & _UNK_140483638;
  uVar43 = uVar43 & _UNK_14048363c;
  uVar32 = uVar32 & _DAT_140483630;
  uVar33 = uVar33 & _UNK_140483634;
  uVar34 = uVar34 & _UNK_140483638;
  uVar35 = uVar35 & _UNK_14048363c;
  fVar55 = ((_DAT_140483620 - fVar45 * fVar45) - fVar53 * fVar53) - fVar73 * fVar73;
  fVar60 = ((_UNK_140483624 - fVar47 * fVar47) - fVar58 * fVar58) - fVar77 * fVar77;
  fVar63 = ((_UNK_140483628 - fVar49 * fVar49) - fVar61 * fVar61) - fVar79 * fVar79;
  fVar66 = ((_UNK_14048362c - fVar51 * fVar51) - fVar64 * fVar64) - fVar81 * fVar81;
  uVar15 = (ulonglong)
           (byte)(&DAT_1404831a0)
                 [(int)((byte)(&DAT_1404833a0)[(int)((byte)(&DAT_1404833a0)[(int)uVar119] + uVar32)]
                       + uVar36)];
  fVar95 = ((_DAT_140483620 - fVar67 * fVar67) - fVar37 * fVar37) - fVar84 * fVar84;
  fVar96 = ((_UNK_140483624 - fVar70 * fVar70) - fVar40 * fVar40) - fVar86 * fVar86;
  fVar97 = ((_UNK_140483628 - fVar71 * fVar71) - fVar42 * fVar42) - fVar88 * fVar88;
  fVar98 = ((_UNK_14048362c - fVar72 * fVar72) - fVar44 * fVar44) - fVar90 * fVar90;
  fVar108 = ((_DAT_140483620 - fVar91 * fVar91) - fVar46 * fVar46) - fVar74 * fVar74;
  fVar110 = ((_UNK_140483624 - fVar92 * fVar92) - fVar48 * fVar48) - fVar78 * fVar78;
  fVar112 = ((_UNK_140483628 - fVar93 * fVar93) - fVar50 * fVar50) - fVar80 * fVar80;
  fVar114 = ((_UNK_14048362c - fVar94 * fVar94) - fVar52 * fVar52) - fVar82 * fVar82;
  uVar3 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar83 + uVar119)] + uVar32 +
                                   uVar99)] + uVar36 + uVar107)];
  fVar120 = ((_DAT_140483620 - fVar100 * fVar100) - fVar115 * fVar115) - fVar28 * fVar28;
  fVar122 = ((_UNK_140483624 - fVar102 * fVar102) - fVar116 * fVar116) - fVar29 * fVar29;
  fVar124 = ((_UNK_140483628 - fVar104 * fVar104) - fVar117 * fVar117) - fVar30 * fVar30;
  fVar126 = ((_UNK_14048362c - fVar106 * fVar106) - fVar118 * fVar118) - fVar31 * fVar31;
  uVar4 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar17 + uVar119)] + uVar32 +
                                   uVar16)] + uVar36 + uVar54)];
  uVar1 = (ulonglong)
          (byte)(&DAT_1404831a1)
                [(int)((byte)(&DAT_1404833a1)[(int)((byte)(&DAT_1404833a0)[(int)uVar119] + uVar32)]
                      + uVar36)];
  uVar12 = (ulonglong)
           (byte)(&DAT_1404831a0)
                 [(int)((byte)(&DAT_1404833a0)[(int)((byte)(&DAT_1404833a0)[(int)uVar121] + uVar33)]
                       + uVar39)];
  uVar5 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar85 + uVar121)] + uVar33 +
                                   uVar101)] + uVar39 + uVar109)];
  uVar6 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar19 + uVar121)] + uVar33 +
                                   uVar18)] + uVar39 + uVar59)];
  uVar2 = (ulonglong)
          (byte)(&DAT_1404831a1)
                [(int)((byte)(&DAT_1404833a1)[(int)((byte)(&DAT_1404833a0)[(int)uVar121] + uVar33)]
                      + uVar39)];
  uVar10 = (ulonglong)
           (byte)(&DAT_1404831a0)
                 [(int)((byte)(&DAT_1404833a0)[(int)((byte)(&DAT_1404833a0)[(int)uVar123] + uVar34)]
                       + uVar41)];
  uVar13 = (ulonglong)
           (byte)(&DAT_1404831a0)
                 [(int)((byte)(&DAT_1404833a0)
                              [(int)((byte)(&DAT_1404833a0)[(int)(uVar87 + uVar123)] + uVar34 +
                                    uVar103)] + uVar41 + uVar111)];
  auVar57._4_4_ = -(uint)(fVar60 < 0.0);
  auVar57._0_4_ = -(uint)(fVar55 < 0.0);
  uVar9 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar21 + uVar123)] + uVar34 +
                                   uVar20)] + uVar41 + uVar62)];
  uVar14 = (ulonglong)
           (byte)(&DAT_1404831a1)
                 [(int)((byte)(&DAT_1404833a1)[(int)((byte)(&DAT_1404833a0)[(int)uVar123] + uVar34)]
                       + uVar41)];
  uVar7 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)[(int)((byte)(&DAT_1404833a0)[(int)uVar125] + uVar35)]
                      + uVar43)];
  auVar57._8_4_ = -(uint)(fVar63 < 0.0);
  auVar57._12_4_ = -(uint)(fVar66 < 0.0);
  uVar11 = (ulonglong)
           (byte)(&DAT_1404831a0)
                 [(int)((byte)(&DAT_1404833a0)
                              [(int)((byte)(&DAT_1404833a0)[(int)(uVar89 + uVar125)] + uVar35 +
                                    uVar105)] + uVar43 + uVar113)];
  uVar8 = (ulonglong)
          (byte)(&DAT_1404831a0)
                [(int)((byte)(&DAT_1404833a0)
                             [(int)((byte)(&DAT_1404833a0)[(int)(uVar23 + uVar125)] + uVar35 +
                                   uVar22)] + uVar43 + uVar65)];
  auVar75._0_4_ =
       (*(float *)(&DAT_1404835a0 + uVar15 * 4) * fVar73 +
        *(float *)(&DAT_140483140 + uVar15 * 4) * fVar53 +
       *(float *)(&DAT_140483170 + uVar15 * 4) * fVar45) * fVar55 * fVar55 * fVar55 * fVar55;
  auVar75._4_4_ =
       (*(float *)(&DAT_1404835a0 + uVar12 * 4) * fVar77 +
        *(float *)(&DAT_140483140 + uVar12 * 4) * fVar58 +
       *(float *)(&DAT_140483170 + uVar12 * 4) * fVar47) * fVar60 * fVar60 * fVar60 * fVar60;
  auVar75._8_4_ =
       (*(float *)(&DAT_1404835a0 + uVar10 * 4) * fVar79 +
        *(float *)(&DAT_140483140 + uVar10 * 4) * fVar61 +
       *(float *)(&DAT_140483170 + uVar10 * 4) * fVar49) * fVar63 * fVar63 * fVar63 * fVar63;
  auVar75._12_4_ =
       (*(float *)(&DAT_1404835a0 + uVar7 * 4) * fVar81 +
        *(float *)(&DAT_140483140 + uVar7 * 4) * fVar64 +
       *(float *)(&DAT_140483170 + uVar7 * 4) * fVar51) * fVar66 * fVar66 * fVar66 * fVar66;
  uVar7 = (ulonglong)
          (byte)(&DAT_1404831a1)
                [(int)((byte)(&DAT_1404833a1)[(int)((byte)(&DAT_1404833a0)[(int)uVar125] + uVar35)]
                      + uVar43)];
  auVar76 = blendvps(auVar75,ZEXT816(0),auVar57);
  auVar69._4_4_ = -(uint)(fVar96 < 0.0);
  auVar69._0_4_ = -(uint)(fVar95 < 0.0);
  auVar69._8_4_ = -(uint)(fVar97 < 0.0);
  auVar69._12_4_ = -(uint)(fVar98 < 0.0);
  auVar25._4_4_ = -(uint)(fVar110 < 0.0);
  auVar25._0_4_ = -(uint)(fVar108 < 0.0);
  auVar26._4_4_ = -(uint)(fVar122 < 0.0);
  auVar26._0_4_ = -(uint)(fVar120 < 0.0);
  auVar68._0_4_ =
       (*(float *)(&DAT_1404835a0 + uVar3 * 4) * fVar84 +
        *(float *)(&DAT_140483140 + uVar3 * 4) * fVar37 +
       *(float *)(&DAT_140483170 + uVar3 * 4) * fVar67) * fVar95 * fVar95 * fVar95 * fVar95;
  auVar68._4_4_ =
       (*(float *)(&DAT_1404835a0 + uVar5 * 4) * fVar86 +
        *(float *)(&DAT_140483140 + uVar5 * 4) * fVar40 +
       *(float *)(&DAT_140483170 + uVar5 * 4) * fVar70) * fVar96 * fVar96 * fVar96 * fVar96;
  auVar68._8_4_ =
       (*(float *)(&DAT_1404835a0 + uVar13 * 4) * fVar88 +
        *(float *)(&DAT_140483140 + uVar13 * 4) * fVar42 +
       *(float *)(&DAT_140483170 + uVar13 * 4) * fVar71) * fVar97 * fVar97 * fVar97 * fVar97;
  auVar68._12_4_ =
       (*(float *)(&DAT_1404835a0 + uVar11 * 4) * fVar90 +
        *(float *)(&DAT_140483140 + uVar11 * 4) * fVar44 +
       *(float *)(&DAT_140483170 + uVar11 * 4) * fVar72) * fVar98 * fVar98 * fVar98 * fVar98;
  auVar69 = blendvps(auVar68,ZEXT816(0),auVar69);
  auVar25._8_4_ = -(uint)(fVar112 < 0.0);
  auVar25._12_4_ = -(uint)(fVar114 < 0.0);
  auVar56._0_4_ =
       (*(float *)(&DAT_1404835a0 + uVar4 * 4) * fVar74 +
        *(float *)(&DAT_140483140 + uVar4 * 4) * fVar46 +
       *(float *)(&DAT_140483170 + uVar4 * 4) * fVar91) * fVar108 * fVar108 * fVar108 * fVar108;
  auVar56._4_4_ =
       (*(float *)(&DAT_1404835a0 + uVar6 * 4) * fVar78 +
        *(float *)(&DAT_140483140 + uVar6 * 4) * fVar48 +
       *(float *)(&DAT_140483170 + uVar6 * 4) * fVar92) * fVar110 * fVar110 * fVar110 * fVar110;
  auVar56._8_4_ =
       (*(float *)(&DAT_1404835a0 + uVar9 * 4) * fVar80 +
        *(float *)(&DAT_140483140 + uVar9 * 4) * fVar50 +
       *(float *)(&DAT_140483170 + uVar9 * 4) * fVar93) * fVar112 * fVar112 * fVar112 * fVar112;
  auVar56._12_4_ =
       (*(float *)(&DAT_1404835a0 + uVar8 * 4) * fVar82 +
        *(float *)(&DAT_140483140 + uVar8 * 4) * fVar52 +
       *(float *)(&DAT_140483170 + uVar8 * 4) * fVar94) * fVar114 * fVar114 * fVar114 * fVar114;
  auVar57 = blendvps(auVar56,ZEXT816(0),auVar25);
  auVar26._8_4_ = -(uint)(fVar124 < 0.0);
  auVar26._12_4_ = -(uint)(fVar126 < 0.0);
  auVar38._0_4_ =
       (*(float *)(&DAT_1404835a0 + uVar1 * 4) * fVar28 +
        *(float *)(&DAT_140483140 + uVar1 * 4) * fVar115 +
       *(float *)(&DAT_140483170 + uVar1 * 4) * fVar100) * fVar120 * fVar120 * fVar120 * fVar120;
  auVar38._4_4_ =
       (*(float *)(&DAT_1404835a0 + uVar2 * 4) * fVar29 +
        *(float *)(&DAT_140483140 + uVar2 * 4) * fVar116 +
       *(float *)(&DAT_140483170 + uVar2 * 4) * fVar102) * fVar122 * fVar122 * fVar122 * fVar122;
  auVar38._8_4_ =
       (*(float *)(&DAT_1404835a0 + uVar14 * 4) * fVar30 +
        *(float *)(&DAT_140483140 + uVar14 * 4) * fVar117 +
       *(float *)(&DAT_140483170 + uVar14 * 4) * fVar104) * fVar124 * fVar124 * fVar124 * fVar124;
  auVar38._12_4_ =
       (*(float *)(&DAT_1404835a0 + uVar7 * 4) * fVar31 +
        *(float *)(&DAT_140483140 + uVar7 * 4) * fVar118 +
       *(float *)(&DAT_140483170 + uVar7 * 4) * fVar106) * fVar126 * fVar126 * fVar126 * fVar126;
  auVar24 = blendvps(auVar38,ZEXT816(0),auVar26);
  fVar45 = (auVar24._4_4_ + auVar57._4_4_ + auVar69._4_4_ + auVar76._4_4_) * _UNK_1404835d4;
  fVar47 = (auVar24._8_4_ + auVar57._8_4_ + auVar69._8_4_ + auVar76._8_4_) * _UNK_1404835d8;
  fVar49 = (auVar24._12_4_ + auVar57._12_4_ + auVar69._12_4_ + auVar76._12_4_) * _UNK_1404835dc;
  *param_2 = (auVar24._0_4_ + auVar57._0_4_ + auVar69._0_4_ + auVar76._0_4_) * _DAT_1404835d0;
  param_2[1] = fVar45;
  param_2[2] = fVar47;
  param_2[3] = fVar49;
  return;
}

