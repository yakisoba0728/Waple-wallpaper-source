// Function: FUN_140397b80
// Addr: 140397b80
// Size: 713 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140397b80(undefined1 (*param_1) [16])

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar12;
  ulonglong uVar23;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  undefined1 auVar31 [16];
  ulonglong uVar32;
  uint uVar22;
  
  if (5 < DAT_1404dc008) {
    auVar5 = *param_1;
    auVar18._0_8_ =
         CONCAT44(auVar5._4_4_ >> 1 & _UNK_140471b14,(uint)(auVar5._0_8_ >> 1) & _DAT_140471b10);
    auVar18._8_4_ = (uint)(auVar5._8_8_ >> 1) & _UNK_140471b18;
    auVar18._12_4_ = auVar5._12_4_ >> 1 & _UNK_140471b1c;
    uVar12 = auVar5._0_8_ - auVar18._0_8_;
    uVar23 = auVar5._8_8_ - auVar18._8_8_;
    uVar22 = (uint)(uVar12 >> 0x20);
    auVar13._0_8_ = CONCAT44(uVar22 & _UNK_140471ad4,(uint)uVar12 & _DAT_140471ad0);
    auVar13._8_4_ = (uint)uVar23 & _UNK_140471ad8;
    uVar2 = (uint)(uVar23 >> 0x20);
    auVar13._12_4_ = uVar2 & _UNK_140471adc;
    auVar31._0_8_ = CONCAT44(uVar22 >> 2 & _UNK_140471ad4,(uint)(uVar12 >> 2) & _DAT_140471ad0);
    auVar31._8_4_ = (uint)(uVar23 >> 2) & _UNK_140471ad8;
    auVar31._12_4_ = uVar2 >> 2 & _UNK_140471adc;
    uVar32 = auVar31._8_8_ + auVar13._8_8_;
    auVar5 = param_1[1];
    auVar20._0_8_ =
         CONCAT44(auVar5._4_4_ >> 1 & _UNK_140471b14,(uint)(auVar5._0_8_ >> 1) & _DAT_140471b10);
    auVar20._8_4_ = (uint)(auVar5._8_8_ >> 1) & _UNK_140471b18;
    auVar20._12_4_ = auVar5._12_4_ >> 1 & _UNK_140471b1c;
    uVar12 = auVar5._0_8_ - auVar20._0_8_;
    uVar23 = auVar5._8_8_ - auVar20._8_8_;
    uVar22 = (uint)(uVar12 >> 0x20);
    auVar14._0_8_ = CONCAT44(uVar22 & _UNK_140471ad4,(uint)uVar12 & _DAT_140471ad0);
    auVar14._8_4_ = (uint)uVar23 & _UNK_140471ad8;
    uVar2 = (uint)(uVar23 >> 0x20);
    auVar14._12_4_ = uVar2 & _UNK_140471adc;
    auVar29._0_8_ = CONCAT44(uVar22 >> 2 & _UNK_140471ad4,(uint)(uVar12 >> 2) & _DAT_140471ad0);
    auVar29._8_4_ = (uint)(uVar23 >> 2) & _UNK_140471ad8;
    auVar29._12_4_ = uVar2 >> 2 & _UNK_140471adc;
    uVar30 = auVar29._8_8_ + auVar14._8_8_;
    auVar5 = param_1[2];
    auVar28._0_8_ =
         CONCAT44(auVar5._4_4_ >> 1 & _UNK_140471b14,(uint)(auVar5._0_8_ >> 1) & _DAT_140471b10);
    auVar28._8_4_ = (uint)(auVar5._8_8_ >> 1) & _UNK_140471b18;
    auVar28._12_4_ = auVar5._12_4_ >> 1 & _UNK_140471b1c;
    uVar12 = auVar5._0_8_ - auVar28._0_8_;
    uVar23 = auVar5._8_8_ - auVar28._8_8_;
    uVar22 = (uint)(uVar12 >> 0x20);
    auVar15._0_8_ = CONCAT44(uVar22 & _UNK_140471ad4,(uint)uVar12 & _DAT_140471ad0);
    auVar15._8_4_ = (uint)uVar23 & _UNK_140471ad8;
    uVar2 = (uint)(uVar23 >> 0x20);
    auVar15._12_4_ = uVar2 & _UNK_140471adc;
    auVar24._0_8_ = CONCAT44(uVar22 >> 2 & _UNK_140471ad4,(uint)(uVar12 >> 2) & _DAT_140471ad0);
    auVar24._8_4_ = (uint)(uVar23 >> 2) & _UNK_140471ad8;
    auVar24._12_4_ = uVar2 >> 2 & _UNK_140471adc;
    uVar25 = auVar24._8_8_ + auVar15._8_8_;
    auVar5 = param_1[3];
    auVar7._0_8_ = CONCAT44(auVar5._4_4_ >> 1 & _UNK_140471b14,
                            (uint)(auVar5._0_8_ >> 1) & _DAT_140471b10);
    auVar7._8_4_ = (uint)(auVar5._8_8_ >> 1) & _UNK_140471b18;
    auVar7._12_4_ = auVar5._12_4_ >> 1 & _UNK_140471b1c;
    uVar12 = auVar5._0_8_ - auVar7._0_8_;
    uVar23 = auVar5._8_8_ - auVar7._8_8_;
    lVar6 = ((ulonglong)(auVar24._0_8_ + auVar15._0_8_) >> 4) + auVar24._0_8_ + auVar15._0_8_;
    lVar11 = (uVar25 >> 4) + uVar25;
    uVar22 = (uint)(uVar12 >> 0x20);
    auVar16._0_8_ = CONCAT44(uVar22 & _UNK_140471ad4,(uint)uVar12 & _DAT_140471ad0);
    auVar16._8_4_ = (uint)uVar23 & _UNK_140471ad8;
    uVar2 = (uint)(uVar23 >> 0x20);
    auVar16._12_4_ = uVar2 & _UNK_140471adc;
    auVar5._0_4_ = (uint)lVar6 & _DAT_140471ac0;
    auVar5._4_4_ = (uint)((ulonglong)lVar6 >> 0x20) & _UNK_140471ac4;
    auVar5._8_4_ = (uint)lVar11 & _UNK_140471ac8;
    auVar5._12_4_ = (uint)((ulonglong)lVar11 >> 0x20) & _UNK_140471acc;
    auVar26._0_8_ = CONCAT44(uVar22 >> 2 & _UNK_140471ad4,(uint)(uVar12 >> 2) & _DAT_140471ad0);
    auVar26._8_4_ = (uint)(uVar23 >> 2) & _UNK_140471ad8;
    auVar26._12_4_ = uVar2 >> 2 & _UNK_140471adc;
    auVar5 = vpmullq_avx512vl(auVar5,_DAT_140492cf0);
    uVar12 = auVar26._8_8_ + auVar16._8_8_;
    auVar27._0_8_ = auVar5._0_8_ >> 0x38;
    auVar27._8_8_ = auVar5._8_8_ >> 0x38;
    auVar28 = pshufb(auVar27,_DAT_140436950);
    lVar6 = ((ulonglong)(auVar29._0_8_ + auVar14._0_8_) >> 4) + auVar29._0_8_ + auVar14._0_8_;
    lVar11 = (uVar30 >> 4) + uVar30;
    auVar8._0_4_ = (uint)lVar6 & _DAT_140471ac0;
    auVar8._4_4_ = (uint)((ulonglong)lVar6 >> 0x20) & _UNK_140471ac4;
    auVar8._8_4_ = (uint)lVar11 & _UNK_140471ac8;
    auVar8._12_4_ = (uint)((ulonglong)lVar11 >> 0x20) & _UNK_140471acc;
    auVar5 = vpmullq_avx512vl(auVar8,_DAT_140492cf0);
    auVar17._0_8_ = auVar5._0_8_ >> 0x38;
    auVar17._8_8_ = auVar5._8_8_ >> 0x38;
    auVar18 = pshufb(auVar17,_DAT_140436950);
    lVar6 = ((ulonglong)(auVar26._0_8_ + auVar16._0_8_) >> 4) + auVar26._0_8_ + auVar16._0_8_;
    lVar11 = (uVar12 >> 4) + uVar12;
    auVar9._0_4_ = (uint)lVar6 & _DAT_140471ac0;
    auVar9._4_4_ = (uint)((ulonglong)lVar6 >> 0x20) & _UNK_140471ac4;
    auVar9._8_4_ = (uint)lVar11 & _UNK_140471ac8;
    auVar9._12_4_ = (uint)((ulonglong)lVar11 >> 0x20) & _UNK_140471acc;
    auVar5 = vpmullq_avx512vl(auVar9,_DAT_140492cf0);
    auVar19._0_8_ = auVar5._0_8_ >> 0x38;
    auVar19._8_8_ = auVar5._8_8_ >> 0x38;
    auVar20 = pshufb(auVar19,_DAT_140436950);
    lVar6 = ((ulonglong)(auVar31._0_8_ + auVar13._0_8_) >> 4) + auVar31._0_8_ + auVar13._0_8_;
    lVar11 = (uVar32 >> 4) + uVar32;
    auVar10._0_4_ = (uint)lVar6 & _DAT_140471ac0;
    auVar10._4_4_ = (uint)((ulonglong)lVar6 >> 0x20) & _UNK_140471ac4;
    auVar10._8_4_ = (uint)lVar11 & _UNK_140471ac8;
    auVar10._12_4_ = (uint)((ulonglong)lVar11 >> 0x20) & _UNK_140471acc;
    auVar5 = vpmullq_avx512vl(auVar10,_DAT_140492cf0);
    auVar21._0_8_ = auVar5._0_8_ >> 0x38;
    auVar21._8_8_ = auVar5._8_8_ >> 0x38;
    auVar5 = pshufb(auVar21,_DAT_140436950);
    return auVar28._0_4_ + auVar18._0_4_ + auVar20._0_4_ + auVar5._0_4_ +
           auVar28._4_4_ + auVar18._4_4_ + auVar20._4_4_ + auVar5._4_4_;
  }
  uVar22 = 0;
  uVar12 = 0;
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar23 = *(ulonglong *)(*param_1 + uVar12 * 8) -
             (*(ulonglong *)(*param_1 + uVar12 * 8) >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
    iVar1 = (int)uVar12;
    uVar2 = iVar1 + 2;
    uVar12 = (ulonglong)uVar2;
    iVar4 = iVar4 + (uint)(byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
    uVar23 = *(ulonglong *)(*param_1 + (ulonglong)(iVar1 + 1) * 8) -
             (*(ulonglong *)(*param_1 + (ulonglong)(iVar1 + 1) * 8) >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
    iVar3 = iVar3 + (uint)(byte)(((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
  } while (uVar2 < 7);
  if (uVar2 < 8) {
    uVar12 = *(ulonglong *)(*param_1 + uVar12 * 8) -
             (*(ulonglong *)(*param_1 + uVar12 * 8) >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar22 = (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  return iVar3 + iVar4 + uVar22;
}

