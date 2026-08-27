// Function: FUN_1400fbe90
// Addr: 1400fbe90
// Size: 909 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1400fbe90(undefined8 param_1,float *param_2,uint *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar12;
  float fVar20;
  float fVar23;
  float fVar26;
  undefined1 auVar15 [16];
  uint uVar13;
  uint uVar14;
  uint uVar21;
  uint uVar22;
  uint uVar24;
  uint uVar25;
  uint uVar27;
  uint uVar28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  uint uVar63;
  uint uVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar71 [16];
  float fVar77;
  
  fVar40 = *param_5;
  fVar43 = param_5[1];
  fVar45 = param_5[2];
  fVar47 = param_5[3];
  fVar69 = *param_4;
  fVar72 = param_4[1];
  fVar74 = param_4[2];
  fVar76 = param_4[3];
  fVar12 = (fVar69 + fVar40) * _DAT_140492dc0;
  fVar20 = (fVar72 + fVar43) * _UNK_140492dc4;
  fVar23 = (fVar74 + fVar45) * _UNK_140492dc8;
  fVar26 = (fVar76 + fVar47) * _UNK_140492dcc;
  auVar15._0_4_ = fVar12 + fVar40;
  auVar15._4_4_ = fVar20 + fVar43;
  auVar15._8_4_ = fVar23 + fVar45;
  auVar15._12_4_ = fVar26 + fVar47;
  auVar17._0_4_ = fVar12 + fVar69;
  auVar17._4_4_ = fVar20 + fVar72;
  auVar17._8_4_ = fVar23 + fVar74;
  auVar17._12_4_ = fVar26 + fVar76;
  auVar30 = roundps(in_XMM3,auVar15,9);
  auVar29 = roundps(in_XMM2,auVar17,9);
  fVar36 = auVar30._0_4_;
  fVar37 = auVar30._4_4_;
  fVar38 = auVar30._8_4_;
  fVar39 = auVar30._12_4_;
  fVar32 = auVar29._0_4_;
  fVar33 = auVar29._4_4_;
  fVar34 = auVar29._8_4_;
  fVar35 = auVar29._12_4_;
  auVar66._0_4_ = (int)fVar36;
  auVar66._4_4_ = (int)fVar37;
  auVar66._8_4_ = (int)fVar38;
  auVar66._12_4_ = (int)fVar39;
  fVar12 = _DAT_140492da0 * (fVar36 + fVar32);
  fVar20 = _UNK_140492da4 * (fVar37 + fVar33);
  fVar23 = _UNK_140492da8 * (fVar38 + fVar34);
  fVar26 = _UNK_140492dac * (fVar39 + fVar35);
  auVar61._0_4_ = (int)fVar32;
  auVar61._4_4_ = (int)fVar33;
  auVar61._8_4_ = (int)fVar34;
  auVar61._12_4_ = (int)fVar35;
  auVar62 = pmulld(auVar61,_DAT_140492d80);
  auVar67 = pmulld(auVar66,_DAT_140492f70);
  fVar40 = fVar40 - (fVar36 - fVar12);
  fVar43 = fVar43 - (fVar37 - fVar20);
  fVar45 = fVar45 - (fVar38 - fVar23);
  fVar47 = fVar47 - (fVar39 - fVar26);
  auVar29 = ZEXT816(0);
  fVar69 = fVar69 - (fVar32 - fVar12);
  fVar72 = fVar72 - (fVar33 - fVar20);
  fVar74 = fVar74 - (fVar34 - fVar23);
  fVar76 = fVar76 - (fVar35 - fVar26);
  uVar1 = -(uint)(fVar40 < fVar69);
  uVar2 = -(uint)(fVar43 < fVar72);
  uVar3 = -(uint)(fVar45 < fVar74);
  uVar4 = -(uint)(fVar47 < fVar76);
  fVar49 = fVar40 + _DAT_140493010;
  fVar50 = fVar43 + _UNK_140493014;
  fVar51 = fVar45 + _UNK_140493018;
  fVar52 = fVar47 + _UNK_14049301c;
  fVar36 = (fVar69 - (float)(uVar1 & _DAT_140492e30)) + _DAT_140492da0;
  fVar37 = (fVar72 - (float)(uVar2 & _UNK_140492e34)) + _UNK_140492da4;
  fVar38 = (fVar74 - (float)(uVar3 & _UNK_140492e38)) + _UNK_140492da8;
  fVar39 = (fVar76 - (float)(uVar4 & _UNK_140492e3c)) + _UNK_140492dac;
  fVar32 = (fVar40 - (float)(~uVar1 & _DAT_140492e30)) + _DAT_140492da0;
  fVar33 = (fVar43 - (float)(~uVar2 & _UNK_140492e34)) + _UNK_140492da4;
  fVar34 = (fVar45 - (float)(~uVar3 & _UNK_140492e38)) + _UNK_140492da8;
  fVar35 = (fVar47 - (float)(~uVar4 & _UNK_140492e3c)) + _UNK_140492dac;
  fVar12 = fVar69 + _DAT_140493010;
  fVar20 = fVar72 + _UNK_140493014;
  fVar23 = fVar74 + _UNK_140493018;
  fVar26 = fVar76 + _UNK_14049301c;
  auVar71._0_4_ =
       (float)(DAT_140492ff0 ^ (uint)(fVar69 * fVar69)) +
       (float)(DAT_140492ff0 ^ (uint)(fVar40 * fVar40)) + _DAT_140492dd0;
  auVar71._4_4_ =
       (float)(_UNK_140492ff4 ^ (uint)(fVar72 * fVar72)) +
       (float)(_UNK_140492ff4 ^ (uint)(fVar43 * fVar43)) + _UNK_140492dd4;
  auVar71._8_4_ =
       (float)(_UNK_140492ff8 ^ (uint)(fVar74 * fVar74)) +
       (float)(_UNK_140492ff8 ^ (uint)(fVar45 * fVar45)) + _UNK_140492dd8;
  auVar71._12_4_ =
       (float)(_UNK_140492ffc ^ (uint)(fVar76 * fVar76)) +
       (float)(_UNK_140492ffc ^ (uint)(fVar47 * fVar47)) + _UNK_140492ddc;
  auVar30 = maxps(auVar71,auVar29);
  auVar42._0_4_ =
       (float)(DAT_140492ff0 ^ (uint)(fVar36 * fVar36)) +
       (float)(DAT_140492ff0 ^ (uint)(fVar32 * fVar32)) + _DAT_140492dd0;
  auVar42._4_4_ =
       (float)(_UNK_140492ff4 ^ (uint)(fVar37 * fVar37)) +
       (float)(_UNK_140492ff4 ^ (uint)(fVar33 * fVar33)) + _UNK_140492dd4;
  auVar42._8_4_ =
       (float)(_UNK_140492ff8 ^ (uint)(fVar38 * fVar38)) +
       (float)(_UNK_140492ff8 ^ (uint)(fVar34 * fVar34)) + _UNK_140492dd8;
  auVar42._12_4_ =
       (float)(_UNK_140492ffc ^ (uint)(fVar39 * fVar39)) +
       (float)(_UNK_140492ffc ^ (uint)(fVar35 * fVar35)) + _UNK_140492ddc;
  fVar70 = auVar30._0_4_ * auVar30._0_4_;
  fVar73 = auVar30._4_4_ * auVar30._4_4_;
  fVar75 = auVar30._8_4_ * auVar30._8_4_;
  fVar77 = auVar30._12_4_ * auVar30._12_4_;
  auVar30 = maxps(auVar42,auVar29);
  fVar41 = auVar30._0_4_ * auVar30._0_4_;
  fVar44 = auVar30._4_4_ * auVar30._4_4_;
  fVar46 = auVar30._8_4_ * auVar30._8_4_;
  fVar48 = auVar30._12_4_ * auVar30._12_4_;
  uVar5 = auVar67._0_4_;
  uVar60 = auVar62._0_4_;
  uVar9 = auVar67._4_4_;
  uVar63 = auVar62._4_4_;
  uVar10 = auVar67._8_4_;
  uVar11 = auVar67._12_4_;
  uVar64 = auVar62._8_4_;
  uVar65 = auVar62._12_4_;
  auVar54._0_4_ =
       (float)(DAT_140492ff0 ^ (uint)(fVar12 * fVar12)) +
       (float)(DAT_140492ff0 ^ (uint)(fVar49 * fVar49)) + _DAT_140492dd0;
  auVar54._4_4_ =
       (float)(_UNK_140492ff4 ^ (uint)(fVar20 * fVar20)) +
       (float)(_UNK_140492ff4 ^ (uint)(fVar50 * fVar50)) + _UNK_140492dd4;
  auVar54._8_4_ =
       (float)(_UNK_140492ff8 ^ (uint)(fVar23 * fVar23)) +
       (float)(_UNK_140492ff8 ^ (uint)(fVar51 * fVar51)) + _UNK_140492dd8;
  auVar54._12_4_ =
       (float)(_UNK_140492ffc ^ (uint)(fVar26 * fVar26)) +
       (float)(_UNK_140492ffc ^ (uint)(fVar52 * fVar52)) + _UNK_140492ddc;
  auVar29 = maxps(auVar54,auVar29);
  uVar14 = *param_3;
  uVar22 = param_3[1];
  uVar25 = param_3[2];
  uVar28 = param_3[3];
  auVar19._0_4_ = uVar5 ^ uVar60 ^ uVar14;
  auVar19._4_4_ = uVar9 ^ uVar63 ^ uVar22;
  auVar19._8_4_ = uVar10 ^ uVar64 ^ uVar25;
  auVar19._12_4_ = uVar11 ^ uVar65 ^ uVar28;
  fVar53 = auVar29._0_4_ * auVar29._0_4_;
  fVar55 = auVar29._4_4_ * auVar29._4_4_;
  fVar56 = auVar29._8_4_ * auVar29._8_4_;
  fVar57 = auVar29._12_4_ * auVar29._12_4_;
  auVar29 = pmulld(auVar19,_DAT_140492d90);
  uVar13 = (int)auVar29._0_4_ >> 0xf ^ auVar29._0_4_;
  uVar21 = (int)auVar29._4_4_ >> 0xf ^ auVar29._4_4_;
  uVar24 = (int)auVar29._8_4_ >> 0xf ^ auVar29._8_4_;
  uVar27 = (int)auVar29._12_4_ >> 0xf ^ auVar29._12_4_;
  auVar8._4_4_ = uVar21 << 0x1d;
  auVar8._0_4_ = uVar13 << 0x1d;
  auVar59._0_4_ =
       uVar5 + (~uVar1 & (uint)DAT_140492f70) ^ uVar60 + (uVar1 & (uint)DAT_140492d80) ^ uVar14;
  auVar59._4_4_ =
       uVar9 + (~uVar2 & DAT_140492f70._4_4_) ^ uVar63 + (uVar2 & DAT_140492d80._4_4_) ^ uVar22;
  auVar59._8_4_ =
       uVar10 + (~uVar3 & DAT_140492f70._8_4_) ^ uVar64 + (uVar3 & DAT_140492d80._8_4_) ^ uVar25;
  auVar59._12_4_ =
       uVar11 + (~uVar4 & DAT_140492f70._12_4_) ^ uVar65 + (uVar4 & DAT_140492d80._12_4_) ^ uVar28;
  auVar29 = pmulld(auVar59,_DAT_140492d90);
  auVar68._0_4_ = uVar5 + (uint)DAT_140492f70 ^ uVar60 + (uint)DAT_140492d80 ^ uVar14;
  auVar68._4_4_ = uVar9 + DAT_140492f70._4_4_ ^ uVar63 + DAT_140492d80._4_4_ ^ uVar22;
  auVar68._8_4_ = uVar10 + DAT_140492f70._8_4_ ^ uVar64 + DAT_140492d80._8_4_ ^ uVar25;
  auVar68._12_4_ = uVar11 + DAT_140492f70._12_4_ ^ uVar65 + DAT_140492d80._12_4_ ^ uVar28;
  auVar30 = pmulld(auVar68,_DAT_140492d90);
  uVar14 = (int)auVar29._0_4_ >> 0xf ^ auVar29._0_4_;
  uVar22 = (int)auVar29._4_4_ >> 0xf ^ auVar29._4_4_;
  uVar25 = (int)auVar29._8_4_ >> 0xf ^ auVar29._8_4_;
  uVar28 = (int)auVar29._12_4_ >> 0xf ^ auVar29._12_4_;
  uVar1 = (int)auVar30._0_4_ >> 0xf ^ auVar30._0_4_;
  uVar2 = (int)auVar30._4_4_ >> 0xf ^ auVar30._4_4_;
  uVar3 = (int)auVar30._8_4_ >> 0xf ^ auVar30._8_4_;
  uVar4 = (int)auVar30._12_4_ >> 0xf ^ auVar30._12_4_;
  auVar6._4_4_ = uVar2 << 0x1d;
  auVar6._0_4_ = uVar1 << 0x1d;
  auVar58._0_4_ = (uint)fVar12 ^ uVar1 << 0x1f;
  auVar58._4_4_ = (uint)fVar20 ^ uVar2 << 0x1f;
  auVar58._8_4_ = (uint)fVar23 ^ uVar3 << 0x1f;
  auVar58._12_4_ = (uint)fVar26 ^ uVar4 << 0x1f;
  auVar6._8_4_ = uVar3 << 0x1d;
  auVar6._12_4_ = uVar4 << 0x1d;
  auVar31._0_8_ =
       CONCAT44(((int)uVar2 >> 1) << 0x1f ^ (uint)fVar50,((int)uVar1 >> 1) << 0x1f ^ (uint)fVar49);
  auVar31._8_4_ = ((int)uVar3 >> 1) << 0x1f ^ (uint)fVar51;
  auVar31._12_4_ = ((int)uVar4 >> 1) << 0x1f ^ (uint)fVar52;
  auVar7._4_4_ = uVar22 << 0x1d;
  auVar7._0_4_ = uVar14 << 0x1d;
  uVar1 = (uint)fVar32 ^ ((int)uVar14 >> 1) << 0x1f;
  uVar2 = (uint)fVar33 ^ ((int)uVar22 >> 1) << 0x1f;
  uVar3 = (uint)fVar34 ^ ((int)uVar25 >> 1) << 0x1f;
  uVar4 = (uint)fVar35 ^ ((int)uVar28 >> 1) << 0x1f;
  auVar30._4_4_ = (uint)fVar37 ^ uVar22 << 0x1f;
  auVar30._0_4_ = (uint)fVar36 ^ uVar14 << 0x1f;
  auVar30._8_4_ = (uint)fVar38 ^ uVar25 << 0x1f;
  auVar30._12_4_ = (uint)fVar39 ^ uVar28 << 0x1f;
  auVar16._8_4_ = auVar31._8_4_;
  auVar16._0_8_ = auVar31._0_8_;
  auVar16._12_4_ = auVar31._12_4_;
  auVar17 = blendvps(auVar16,auVar58,auVar6);
  auVar59 = blendvps(auVar58,auVar31,auVar6);
  auVar62._4_4_ = (uint)fVar43 ^ ((int)uVar21 >> 1) << 0x1f;
  auVar62._0_4_ = (uint)fVar40 ^ ((int)uVar13 >> 1) << 0x1f;
  auVar62._8_4_ = (uint)fVar45 ^ ((int)uVar24 >> 1) << 0x1f;
  auVar62._12_4_ = (uint)fVar47 ^ ((int)uVar27 >> 1) << 0x1f;
  auVar7._8_4_ = uVar25 << 0x1d;
  auVar7._12_4_ = uVar28 << 0x1d;
  auVar67._4_4_ = (uint)fVar72 ^ uVar21 << 0x1f;
  auVar67._0_4_ = (uint)fVar69 ^ uVar13 << 0x1f;
  auVar67._8_4_ = (uint)fVar74 ^ uVar24 << 0x1f;
  auVar67._12_4_ = (uint)fVar76 ^ uVar27 << 0x1f;
  auVar18._4_4_ = uVar2;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar3;
  auVar18._12_4_ = uVar4;
  auVar19 = blendvps(auVar18,auVar30,auVar7);
  auVar29._4_4_ = uVar2;
  auVar29._0_4_ = uVar1;
  auVar29._8_4_ = uVar3;
  auVar29._12_4_ = uVar4;
  auVar30 = blendvps(auVar30,auVar29,auVar7);
  auVar8._8_4_ = uVar24 << 0x1d;
  auVar8._12_4_ = uVar27 << 0x1d;
  auVar29 = blendvps(auVar62,auVar67,auVar8);
  auVar62 = blendvps(auVar67,auVar62,auVar8);
  fVar40 = ((auVar62._4_4_ * _UNK_140492f34 + auVar29._4_4_) * fVar73 * fVar73 +
           (auVar30._4_4_ * _UNK_140492f34 + auVar19._4_4_) * fVar44 * fVar44 +
           (auVar59._4_4_ * _UNK_140492f34 + auVar17._4_4_) * fVar55 * fVar55) * _UNK_140492f64;
  fVar43 = ((auVar62._8_4_ * _UNK_140492f38 + auVar29._8_4_) * fVar75 * fVar75 +
           (auVar30._8_4_ * _UNK_140492f38 + auVar19._8_4_) * fVar46 * fVar46 +
           (auVar59._8_4_ * _UNK_140492f38 + auVar17._8_4_) * fVar56 * fVar56) * _UNK_140492f68;
  fVar45 = ((auVar62._12_4_ * _UNK_140492f3c + auVar29._12_4_) * fVar77 * fVar77 +
           (auVar30._12_4_ * _UNK_140492f3c + auVar19._12_4_) * fVar48 * fVar48 +
           (auVar59._12_4_ * _UNK_140492f3c + auVar17._12_4_) * fVar57 * fVar57) * _UNK_140492f6c;
  *param_2 = ((auVar62._0_4_ * _DAT_140492f30 + auVar29._0_4_) * fVar70 * fVar70 +
             (auVar30._0_4_ * _DAT_140492f30 + auVar19._0_4_) * fVar41 * fVar41 +
             (auVar59._0_4_ * _DAT_140492f30 + auVar17._0_4_) * fVar53 * fVar53) * _DAT_140492f60;
  param_2[1] = fVar40;
  param_2[2] = fVar43;
  param_2[3] = fVar45;
  return param_2;
}

