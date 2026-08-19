// Function: FUN_140184ab0
// Addr: 140184ab0
// Size: 1064 bytes


void FUN_140184ab0(float *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  iVar14 = 0;
  do {
    while( true ) {
      lVar15 = (longlong)iVar14;
      fVar16 = *(float *)(param_2 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10);
      if (iVar14 == 0) break;
      if (iVar14 == 1) {
        param_1[1] = fVar16;
        fVar16 = *(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x10);
LAB_140184cc9:
        param_1[5] = fVar16;
        fVar16 = *(float *)(param_2 + 4 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10)
        ;
LAB_140184cdc:
        param_1[9] = fVar16;
        fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 4 + lVar15 * 0x10)
        ;
LAB_140184cef:
        param_1[0xd] = fVar16;
        fVar16 = *(float *)(param_2 + 8 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10)
        ;
LAB_140184d02:
        param_1[0x11] = fVar16;
        fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 8 + lVar15 * 0x10)
        ;
LAB_140184d15:
        param_1[0x15] = fVar16;
        iVar14 = iVar14 + 1;
      }
      else {
        if (iVar14 != 2) {
          if (iVar14 != 3) break;
          param_1[3] = fVar16;
          fVar16 = *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x30);
LAB_140184d33:
          param_1[7] = fVar16;
          fVar16 = *(float *)(param_2 + 4 + lVar15 * 0x10) +
                   *(float *)(param_2 + 0xc + lVar15 * 0x10);
LAB_140184d46:
          param_1[0xb] = fVar16;
          fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) -
                   *(float *)(param_2 + 4 + lVar15 * 0x10);
LAB_140184d59:
          param_1[0xf] = fVar16;
          fVar16 = *(float *)(param_2 + 8 + lVar15 * 0x10) +
                   *(float *)(param_2 + 0xc + lVar15 * 0x10);
LAB_140184d6c:
          param_1[0x13] = fVar16;
          fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) -
                   *(float *)(param_2 + 8 + lVar15 * 0x10);
LAB_140184d7f:
          param_1[0x17] = fVar16;
          goto LAB_140184d84;
        }
        param_1[2] = fVar16;
        fVar16 = *(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x20);
LAB_140184c5f:
        param_1[6] = fVar16;
        fVar16 = *(float *)(param_2 + 4 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10)
        ;
LAB_140184c72:
        param_1[10] = fVar16;
        fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 4 + lVar15 * 0x10)
        ;
LAB_140184c85:
        param_1[0xe] = fVar16;
        fVar16 = *(float *)(param_2 + 8 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10)
        ;
LAB_140184c98:
        param_1[0x12] = fVar16;
        fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 8 + lVar15 * 0x10)
        ;
LAB_140184cab:
        param_1[0x16] = fVar16;
        iVar14 = iVar14 + 1;
      }
    }
    *param_1 = fVar16;
    fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + lVar15 * 0x10);
    if (iVar14 != 0) {
      if (iVar14 == 1) goto LAB_140184cc9;
      if (iVar14 == 2) goto LAB_140184c5f;
      if (iVar14 == 3) goto LAB_140184d33;
    }
    param_1[4] = fVar16;
    fVar16 = *(float *)(param_2 + 4 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10);
    if (iVar14 != 0) {
      if (iVar14 == 1) goto LAB_140184cdc;
      if (iVar14 == 2) goto LAB_140184c72;
      if (iVar14 == 3) goto LAB_140184d46;
    }
    param_1[8] = fVar16;
    fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 4 + lVar15 * 0x10);
    if (iVar14 != 0) {
      if (iVar14 == 1) goto LAB_140184cef;
      if (iVar14 == 2) goto LAB_140184c85;
      if (iVar14 == 3) goto LAB_140184d59;
    }
    param_1[0xc] = fVar16;
    fVar16 = *(float *)(param_2 + 8 + lVar15 * 0x10) + *(float *)(param_2 + 0xc + lVar15 * 0x10);
    if (iVar14 != 0) {
      if (iVar14 == 1) goto LAB_140184d02;
      if (iVar14 == 2) goto LAB_140184c98;
      if (iVar14 == 3) goto LAB_140184d6c;
    }
    param_1[0x10] = fVar16;
    fVar16 = *(float *)(param_2 + 0xc + lVar15 * 0x10) - *(float *)(param_2 + 8 + lVar15 * 0x10);
    if (iVar14 != 0) {
      if (iVar14 == 1) goto LAB_140184d15;
      if (iVar14 == 2) goto LAB_140184cab;
      if (iVar14 == 3) goto LAB_140184d7f;
    }
    iVar14 = iVar14 + 1;
    param_1[0x14] = fVar16;
  } while (iVar14 < 4);
LAB_140184d84:
  uVar1 = *(ulonglong *)param_1;
  fVar16 = (float)(uVar1 >> 0x20);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = *(ulonglong *)(param_1 + 2);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 2);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar2._4_4_ = fVar16;
  auVar2._0_4_ = fVar16;
  auVar2._8_4_ = fVar16;
  auVar2._12_4_ = fVar16;
  auVar17 = divps(auVar17,auVar2);
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar16;
  auVar3._8_4_ = fVar16;
  auVar3._12_4_ = fVar16;
  auVar24 = divps(auVar24,auVar3);
  *(ulonglong *)param_1 = auVar17._0_8_;
  *(ulonglong *)(param_1 + 2) = auVar24._0_8_;
  uVar1 = *(ulonglong *)(param_1 + 4);
  fVar16 = (float)(uVar1 >> 0x20);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(ulonglong *)(param_1 + 6);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 6);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar16;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = fVar16;
  auVar17 = divps(auVar18,auVar4);
  auVar5._4_4_ = fVar16;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar16;
  auVar5._12_4_ = fVar16;
  auVar24 = divps(auVar25,auVar5);
  *(ulonglong *)(param_1 + 4) = auVar17._0_8_;
  *(ulonglong *)(param_1 + 6) = auVar24._0_8_;
  uVar1 = *(ulonglong *)(param_1 + 8);
  fVar16 = (float)(uVar1 >> 0x20);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(ulonglong *)(param_1 + 10);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 10);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar6._4_4_ = fVar16;
  auVar6._0_4_ = fVar16;
  auVar6._8_4_ = fVar16;
  auVar6._12_4_ = fVar16;
  auVar17 = divps(auVar19,auVar6);
  auVar7._4_4_ = fVar16;
  auVar7._0_4_ = fVar16;
  auVar7._8_4_ = fVar16;
  auVar7._12_4_ = fVar16;
  auVar24 = divps(auVar26,auVar7);
  *(ulonglong *)(param_1 + 8) = auVar17._0_8_;
  *(ulonglong *)(param_1 + 10) = auVar24._0_8_;
  uVar1 = *(ulonglong *)(param_1 + 0xc);
  fVar16 = (float)(uVar1 >> 0x20);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(ulonglong *)(param_1 + 0xe);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 0xe);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar8._4_4_ = fVar16;
  auVar8._0_4_ = fVar16;
  auVar8._8_4_ = fVar16;
  auVar8._12_4_ = fVar16;
  auVar17 = divps(auVar20,auVar8);
  auVar9._4_4_ = fVar16;
  auVar9._0_4_ = fVar16;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = fVar16;
  auVar24 = divps(auVar27,auVar9);
  *(ulonglong *)(param_1 + 0xc) = auVar17._0_8_;
  *(ulonglong *)(param_1 + 0xe) = auVar24._0_8_;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  fVar16 = (float)(uVar1 >> 0x20);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(ulonglong *)(param_1 + 0x12);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 0x12);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar10._4_4_ = fVar16;
  auVar10._0_4_ = fVar16;
  auVar10._8_4_ = fVar16;
  auVar10._12_4_ = fVar16;
  auVar17 = divps(auVar21,auVar10);
  auVar11._4_4_ = fVar16;
  auVar11._0_4_ = fVar16;
  auVar11._8_4_ = fVar16;
  auVar11._12_4_ = fVar16;
  auVar24 = divps(auVar28,auVar11);
  *(ulonglong *)(param_1 + 0x10) = auVar17._0_8_;
  *(ulonglong *)(param_1 + 0x12) = auVar24._0_8_;
  uVar1 = *(ulonglong *)(param_1 + 0x14);
  fVar16 = (float)(uVar1 >> 0x20);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *(ulonglong *)(param_1 + 0x16);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  fVar23 = (float)*(ulonglong *)(param_1 + 0x16);
  fVar16 = fVar16 * fVar16 + (float)uVar1 * (float)uVar1 + fVar23 * fVar23;
  if (fVar16 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar16);
  }
  fVar16 = SQRT(fVar16);
  auVar12._4_4_ = fVar16;
  auVar12._0_4_ = fVar16;
  auVar12._8_4_ = fVar16;
  auVar12._12_4_ = fVar16;
  auVar17 = divps(auVar22,auVar12);
  auVar13._4_4_ = fVar16;
  auVar13._0_4_ = fVar16;
  auVar13._8_4_ = fVar16;
  auVar13._12_4_ = fVar16;
  auVar24 = divps(auVar29,auVar13);
  *(ulonglong *)(param_1 + 0x14) = auVar17._0_8_;
  *(ulonglong *)(param_1 + 0x16) = auVar24._0_8_;
  return;
}

