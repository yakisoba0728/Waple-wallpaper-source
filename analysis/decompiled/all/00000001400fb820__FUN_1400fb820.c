// Function: FUN_1400fb820
// Addr: 1400fb820
// Size: 1096 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1400fb820(undefined8 param_1,float *param_2,uint *param_3,float *param_4,float *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined1 auVar16 [16];
  float fVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar41;
  uint uVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  uint uVar53;
  float fVar54;
  uint uVar55;
  uint uVar56;
  float fVar57;
  uint uVar58;
  uint uVar59;
  float fVar60;
  uint uVar61;
  uint uVar62;
  float fVar63;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  
  fVar51 = *param_5;
  fVar54 = param_5[1];
  fVar57 = param_5[2];
  fVar60 = param_5[3];
  fVar63 = *param_4;
  fVar66 = param_4[1];
  fVar67 = param_4[2];
  fVar68 = param_4[3];
  fVar12 = (fVar63 + fVar51) * _DAT_140492dc0;
  fVar17 = (fVar66 + fVar54) * _UNK_140492dc4;
  fVar20 = (fVar67 + fVar57) * _UNK_140492dc8;
  fVar24 = (fVar68 + fVar60) * _UNK_140492dcc;
  fVar13 = fVar12 + fVar51;
  fVar18 = fVar17 + fVar54;
  fVar21 = fVar20 + fVar57;
  fVar25 = fVar24 + fVar60;
  fVar12 = fVar12 + fVar63;
  fVar17 = fVar17 + fVar66;
  fVar20 = fVar20 + fVar67;
  fVar24 = fVar24 + fVar68;
  fVar35 = (float)(int)fVar12;
  fVar36 = (float)(int)fVar17;
  fVar37 = (float)(int)fVar20;
  fVar38 = (float)(int)fVar24;
  fVar27 = (float)(int)fVar13;
  fVar29 = (float)(int)fVar18;
  fVar31 = (float)(int)fVar21;
  fVar33 = (float)(int)fVar25;
  fVar35 = fVar35 - (float)(-(uint)(fVar12 < fVar35) & _DAT_140492e30);
  fVar36 = fVar36 - (float)(-(uint)(fVar17 < fVar36) & _UNK_140492e34);
  fVar37 = fVar37 - (float)(-(uint)(fVar20 < fVar37) & _UNK_140492e38);
  fVar38 = fVar38 - (float)(-(uint)(fVar24 < fVar38) & _UNK_140492e3c);
  auVar65._4_4_ = _UNK_140492d84;
  auVar65._0_4_ = _DAT_140492d80;
  auVar65._8_4_ = _UNK_140492d88;
  auVar65._12_4_ = _UNK_140492d8c;
  fVar27 = fVar27 - (float)(-(uint)(fVar13 < fVar27) & _DAT_140492e30);
  fVar29 = fVar29 - (float)(-(uint)(fVar18 < fVar29) & _UNK_140492e34);
  fVar31 = fVar31 - (float)(-(uint)(fVar21 < fVar31) & _UNK_140492e38);
  fVar33 = fVar33 - (float)(-(uint)(fVar25 < fVar33) & _UNK_140492e3c);
  uVar15 = _DAT_140492d80 * (int)fVar35;
  uVar32 = _UNK_140492d84 * (int)fVar36;
  uVar41 = _UNK_140492d8c * (int)fVar38;
  uVar28 = (uint)((auVar65._8_8_ & 0xffffffff) * (ulonglong)(uint)(int)fVar37);
  auVar40._4_4_ = _UNK_140492f74;
  auVar40._0_4_ = _DAT_140492f70;
  auVar40._8_4_ = _UNK_140492f78;
  auVar40._12_4_ = _UNK_140492f7c;
  uVar23 = _DAT_140492f70 * (int)fVar27;
  uVar34 = _UNK_140492f74 * (int)fVar29;
  uVar42 = _UNK_140492f7c * (int)fVar33;
  uVar30 = (uint)((auVar40._8_8_ & 0xffffffff) * (ulonglong)(uint)(int)fVar31);
  fVar12 = (fVar27 + fVar35) * _DAT_140492da0;
  fVar17 = (fVar29 + fVar36) * _UNK_140492da4;
  fVar20 = (fVar31 + fVar37) * _UNK_140492da8;
  fVar24 = (fVar33 + fVar38) * _UNK_140492dac;
  fVar51 = fVar51 - (fVar27 - fVar12);
  fVar54 = fVar54 - (fVar29 - fVar17);
  fVar57 = fVar57 - (fVar31 - fVar20);
  fVar60 = fVar60 - (fVar33 - fVar24);
  fVar63 = fVar63 - (fVar35 - fVar12);
  fVar66 = fVar66 - (fVar36 - fVar17);
  fVar67 = fVar67 - (fVar37 - fVar20);
  fVar68 = fVar68 - (fVar38 - fVar24);
  auVar65 = ZEXT816(0);
  uVar2 = -(uint)(fVar51 < fVar63);
  uVar3 = -(uint)(fVar54 < fVar66);
  uVar4 = -(uint)(fVar57 < fVar67);
  uVar5 = -(uint)(fVar60 < fVar68);
  fVar69 = fVar63 + _DAT_140493010;
  fVar70 = fVar66 + _UNK_140493014;
  fVar71 = fVar67 + _UNK_140493018;
  fVar72 = fVar68 + _UNK_14049301c;
  fVar13 = (fVar63 - (float)(uVar2 & _DAT_140492e30)) + _DAT_140492da0;
  fVar18 = (fVar66 - (float)(uVar3 & _UNK_140492e34)) + _UNK_140492da4;
  fVar21 = (fVar67 - (float)(uVar4 & _UNK_140492e38)) + _UNK_140492da8;
  fVar25 = (fVar68 - (float)(uVar5 & _UNK_140492e3c)) + _UNK_140492dac;
  fVar73 = fVar51 + _DAT_140493010;
  fVar74 = fVar54 + _UNK_140493014;
  fVar75 = fVar57 + _UNK_140493018;
  fVar76 = fVar60 + _UNK_14049301c;
  fVar27 = (fVar51 - (float)(~uVar2 & _DAT_140492e30)) + _DAT_140492da0;
  fVar29 = (fVar54 - (float)(~uVar3 & _UNK_140492e34)) + _UNK_140492da4;
  fVar31 = (fVar57 - (float)(~uVar4 & _UNK_140492e38)) + _UNK_140492da8;
  fVar33 = (fVar60 - (float)(~uVar5 & _UNK_140492e3c)) + _UNK_140492dac;
  auVar39._0_4_ =
       (float)(DAT_140492ff0 ^ (uint)(fVar63 * fVar63)) +
       (float)(DAT_140492ff0 ^ (uint)(fVar51 * fVar51)) + _DAT_140492dd0;
  auVar39._4_4_ =
       (float)(_UNK_140492ff4 ^ (uint)(fVar66 * fVar66)) +
       (float)(_UNK_140492ff4 ^ (uint)(fVar54 * fVar54)) + _UNK_140492dd4;
  auVar39._8_4_ =
       (float)(_UNK_140492ff8 ^ (uint)(fVar67 * fVar67)) +
       (float)(_UNK_140492ff8 ^ (uint)(fVar57 * fVar57)) + _UNK_140492dd8;
  auVar39._12_4_ =
       (float)(_UNK_140492ffc ^ (uint)(fVar68 * fVar68)) +
       (float)(_UNK_140492ffc ^ (uint)(fVar60 * fVar60)) + _UNK_140492ddc;
  auVar40 = maxps(auVar39,auVar65);
  auVar78._0_4_ =
       (float)(DAT_140492ff0 ^ (uint)(fVar13 * fVar13)) +
       (float)(DAT_140492ff0 ^ (uint)(fVar27 * fVar27)) + _DAT_140492dd0;
  auVar78._4_4_ =
       (float)(_UNK_140492ff4 ^ (uint)(fVar18 * fVar18)) +
       (float)(_UNK_140492ff4 ^ (uint)(fVar29 * fVar29)) + _UNK_140492dd4;
  auVar78._8_4_ =
       (float)(_UNK_140492ff8 ^ (uint)(fVar21 * fVar21)) +
       (float)(_UNK_140492ff8 ^ (uint)(fVar31 * fVar31)) + _UNK_140492dd8;
  auVar78._12_4_ =
       (float)(_UNK_140492ffc ^ (uint)(fVar25 * fVar25)) +
       (float)(_UNK_140492ffc ^ (uint)(fVar33 * fVar33)) + _UNK_140492ddc;
  fVar12 = auVar40._0_4_ * auVar40._0_4_;
  fVar17 = auVar40._4_4_ * auVar40._4_4_;
  fVar20 = auVar40._8_4_ * auVar40._8_4_;
  fVar24 = auVar40._12_4_ * auVar40._12_4_;
  auVar64._0_4_ =
       (float)((uint)(fVar69 * fVar69) ^ DAT_140492ff0) +
       (float)((uint)(fVar73 * fVar73) ^ DAT_140492ff0) + _DAT_140492dd0;
  auVar64._4_4_ =
       (float)((uint)(fVar70 * fVar70) ^ _UNK_140492ff4) +
       (float)((uint)(fVar74 * fVar74) ^ _UNK_140492ff4) + _UNK_140492dd4;
  auVar64._8_4_ =
       (float)((uint)(fVar71 * fVar71) ^ _UNK_140492ff8) +
       (float)((uint)(fVar75 * fVar75) ^ _UNK_140492ff8) + _UNK_140492dd8;
  auVar64._12_4_ =
       (float)((uint)(fVar72 * fVar72) ^ _UNK_140492ffc) +
       (float)((uint)(fVar76 * fVar76) ^ _UNK_140492ffc) + _UNK_140492ddc;
  auVar40 = maxps(auVar78,auVar65);
  auVar65 = maxps(auVar64,auVar65);
  fVar77 = auVar40._0_4_ * auVar40._0_4_;
  fVar79 = auVar40._4_4_ * auVar40._4_4_;
  fVar80 = auVar40._8_4_ * auVar40._8_4_;
  fVar81 = auVar40._12_4_ * auVar40._12_4_;
  fVar35 = auVar65._0_4_ * auVar65._0_4_;
  fVar36 = auVar65._4_4_ * auVar65._4_4_;
  fVar37 = auVar65._8_4_ * auVar65._8_4_;
  fVar38 = auVar65._12_4_ * auVar65._12_4_;
  iVar6 = DAT_140492d90._4_4_;
  iVar1 = DAT_140492d90._12_4_;
  uVar9 = iVar6 * (uVar34 ^ uVar32 ^ param_3[1]);
  uVar11 = iVar1 * (uVar42 ^ uVar41 ^ param_3[3]);
  iVar7 = (int)DAT_140492d90;
  uVar8 = iVar7 * (uVar23 ^ uVar15 ^ *param_3);
  uVar10 = (uint)((DAT_140492d90._8_8_ & 0xffffffff) * (ulonglong)(uVar30 ^ uVar28 ^ param_3[2]));
  uVar8 = (int)uVar8 >> 0xf ^ uVar8;
  uVar9 = (int)uVar9 >> 0xf ^ uVar9;
  uVar10 = (int)uVar10 >> 0xf ^ uVar10;
  uVar11 = (int)uVar11 >> 0xf ^ uVar11;
  uVar14 = (uint)fVar63 ^ uVar8 << 0x1f;
  uVar19 = (uint)fVar66 ^ uVar9 << 0x1f;
  uVar22 = (uint)fVar67 ^ uVar10 << 0x1f;
  uVar26 = (uint)fVar68 ^ uVar11 << 0x1f;
  uVar52 = (uint)fVar51 ^ ((int)uVar8 >> 1) << 0x1f;
  uVar55 = (uint)fVar54 ^ ((int)uVar9 >> 1) << 0x1f;
  uVar58 = (uint)fVar57 ^ ((int)uVar10 >> 1) << 0x1f;
  uVar61 = (uint)fVar60 ^ ((int)uVar11 >> 1) << 0x1f;
  uVar53 = (uVar52 ^ uVar14) & (int)(uVar8 << 0x1d) >> 0x1f;
  uVar56 = (uVar55 ^ uVar19) & (int)(uVar9 << 0x1d) >> 0x1f;
  uVar59 = (uVar58 ^ uVar22) & (int)(uVar10 << 0x1d) >> 0x1f;
  uVar62 = (uVar61 ^ uVar26) & (int)(uVar11 << 0x1d) >> 0x1f;
  auVar16._0_4_ = uVar23 + (~uVar2 & _DAT_140492f70) ^ uVar15 + (uVar2 & _DAT_140492d80) ^ *param_3;
  auVar16._4_4_ =
       uVar34 + (~uVar3 & _UNK_140492f74) ^ uVar32 + (uVar3 & _UNK_140492d84) ^ param_3[1];
  auVar16._8_4_ =
       uVar30 + (~uVar4 & _UNK_140492f78) ^ uVar28 + (uVar4 & _UNK_140492d88) ^ param_3[2];
  auVar16._12_4_ =
       uVar42 + (~uVar5 & _UNK_140492f7c) ^ uVar41 + (uVar5 & _UNK_140492d8c) ^ param_3[3];
  uVar4 = (uint)((auVar16._8_8_ & 0xffffffff) * (ulonglong)DAT_140492d90._8_4_);
  uVar2 = (int)(auVar16._0_4_ * iVar7) >> 0xf ^ auVar16._0_4_ * iVar7;
  uVar3 = (int)(auVar16._4_4_ * iVar6) >> 0xf ^ auVar16._4_4_ * iVar6;
  uVar4 = (int)uVar4 >> 0xf ^ uVar4;
  uVar5 = (int)(auVar16._12_4_ * iVar1) >> 0xf ^ auVar16._12_4_ * iVar1;
  uVar9 = iVar6 * (uVar34 + _UNK_140492f74 ^ uVar32 + _UNK_140492d84 ^ param_3[1]);
  uVar11 = iVar1 * (uVar42 + _UNK_140492f7c ^ uVar41 + _UNK_140492d8c ^ param_3[3]);
  uVar15 = iVar7 * (uVar23 + _DAT_140492f70 ^ uVar15 + _DAT_140492d80 ^ *param_3);
  uVar43 = uVar2 << 0x1f ^ (uint)fVar13;
  uVar44 = uVar3 << 0x1f ^ (uint)fVar18;
  uVar45 = uVar4 << 0x1f ^ (uint)fVar21;
  uVar46 = uVar5 << 0x1f ^ (uint)fVar25;
  uVar8 = ((int)uVar2 >> 1) << 0x1f ^ (uint)fVar27;
  uVar41 = ((int)uVar3 >> 1) << 0x1f ^ (uint)fVar29;
  uVar42 = ((int)uVar4 >> 1) << 0x1f ^ (uint)fVar31;
  uVar10 = ((int)uVar5 >> 1) << 0x1f ^ (uint)fVar33;
  uVar23 = (uint)((DAT_140492d90._8_8_ & 0xffffffff) *
                 (ulonglong)(uVar30 + _UNK_140492f78 ^ uVar28 + _UNK_140492d88 ^ param_3[2]));
  uVar47 = (uVar8 ^ uVar43) & (int)(uVar2 << 0x1d) >> 0x1f;
  uVar48 = (uVar41 ^ uVar44) & (int)(uVar3 << 0x1d) >> 0x1f;
  uVar49 = (uVar42 ^ uVar45) & (int)(uVar4 << 0x1d) >> 0x1f;
  uVar50 = (uVar10 ^ uVar46) & (int)(uVar5 << 0x1d) >> 0x1f;
  uVar15 = (int)uVar15 >> 0xf ^ uVar15;
  uVar9 = (int)uVar9 >> 0xf ^ uVar9;
  uVar23 = (int)uVar23 >> 0xf ^ uVar23;
  uVar11 = (int)uVar11 >> 0xf ^ uVar11;
  uVar2 = ((int)uVar15 >> 1) << 0x1f ^ (uint)fVar73;
  uVar3 = ((int)uVar9 >> 1) << 0x1f ^ (uint)fVar74;
  uVar4 = ((int)uVar23 >> 1) << 0x1f ^ (uint)fVar75;
  uVar5 = ((int)uVar11 >> 1) << 0x1f ^ (uint)fVar76;
  uVar28 = uVar15 << 0x1f ^ (uint)fVar69;
  uVar30 = uVar9 << 0x1f ^ (uint)fVar70;
  uVar32 = uVar23 << 0x1f ^ (uint)fVar71;
  uVar34 = uVar11 << 0x1f ^ (uint)fVar72;
  uVar15 = (uVar2 ^ uVar28) & (int)(uVar15 << 0x1d) >> 0x1f;
  uVar9 = (uVar3 ^ uVar30) & (int)(uVar9 << 0x1d) >> 0x1f;
  uVar23 = (uVar4 ^ uVar32) & (int)(uVar23 << 0x1d) >> 0x1f;
  uVar11 = (uVar5 ^ uVar34) & (int)(uVar11 << 0x1d) >> 0x1f;
  fVar51 = (((float)(uVar56 ^ uVar19) * _UNK_140492f34 + (float)(uVar56 ^ uVar55)) * fVar17 * fVar17
           + ((float)(uVar48 ^ uVar44) * _UNK_140492f34 + (float)(uVar48 ^ uVar41)) *
             fVar79 * fVar79 +
             ((float)(uVar9 ^ uVar30) * _UNK_140492f34 + (float)(uVar9 ^ uVar3)) * fVar36 * fVar36)
           * _UNK_140492f64;
  fVar54 = (((float)(uVar59 ^ uVar22) * _UNK_140492f38 + (float)(uVar59 ^ uVar58)) * fVar20 * fVar20
           + ((float)(uVar49 ^ uVar45) * _UNK_140492f38 + (float)(uVar49 ^ uVar42)) *
             fVar80 * fVar80 +
             ((float)(uVar23 ^ uVar32) * _UNK_140492f38 + (float)(uVar23 ^ uVar4)) * fVar37 * fVar37
           ) * _UNK_140492f68;
  fVar57 = (((float)(uVar62 ^ uVar26) * _UNK_140492f3c + (float)(uVar62 ^ uVar61)) * fVar24 * fVar24
           + ((float)(uVar50 ^ uVar46) * _UNK_140492f3c + (float)(uVar50 ^ uVar10)) *
             fVar81 * fVar81 +
             ((float)(uVar11 ^ uVar34) * _UNK_140492f3c + (float)(uVar11 ^ uVar5)) * fVar38 * fVar38
           ) * _UNK_140492f6c;
  *param_2 = (((float)(uVar53 ^ uVar14) * _DAT_140492f30 + (float)(uVar53 ^ uVar52)) *
              fVar12 * fVar12 +
             ((float)(uVar47 ^ uVar43) * _DAT_140492f30 + (float)(uVar47 ^ uVar8)) * fVar77 * fVar77
             + ((float)(uVar15 ^ uVar28) * _DAT_140492f30 + (float)(uVar15 ^ uVar2)) *
               fVar35 * fVar35) * _DAT_140492f60;
  param_2[1] = fVar51;
  param_2[2] = fVar54;
  param_2[3] = fVar57;
  return param_2;
}

