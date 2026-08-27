// Function: FUN_14041adb0
// Addr: 14041adb0
// Size: 770 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14041adb0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  sbyte sVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  uint uVar29;
  double dVar30;
  ulonglong in_XMM5_Qb;
  
  fVar10 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar10) {
    uVar23 = FUN_14041bb30();
    return uVar23;
  }
  dVar30 = (double)(float)param_1;
  dVar19 = ABS(dVar30);
  if ((uint)fVar10 < 0x3f490fdc) {
    if ((uint)fVar10 < 0x39000000) {
      if ((uint)fVar10 < 0x32000000) {
        return param_1;
      }
      dVar19 = dVar30 * dVar30 * dVar30 * DAT_140471e98;
    }
    else {
      dVar19 = dVar30 * dVar30;
      dVar19 = dVar19 * dVar30 *
               ((DAT_140471e68 * dVar19 + DAT_140471e60) /
               ((DAT_140471e80 * dVar19 + DAT_140471e78) * dVar19 + DAT_140471e70));
    }
    auVar24._0_8_ = dVar19 + dVar30;
    auVar24._8_8_ = in_XMM5_Qb;
    auVar27._4_12_ = auVar24._4_12_;
    auVar27._0_4_ = (float)auVar24._0_8_;
    return auVar27._0_8_;
  }
  if ((longlong)dVar19 < DAT_140471e88) {
    uVar29 = (uint)(_DAT_140471e20 * (double)((ulonglong)dVar19 & _DAT_140471e10) + DAT_140471eb0);
    dVar28 = (double)(int)uVar29;
    uVar29 = uVar29 & _DAT_140471e30;
    dVar19 = (dVar19 - dVar28 * DAT_140471eb8) - dVar28 * DAT_140471ec0;
  }
  else {
    uVar22 = ((ulonglong)dVar19 >> 0x34) - 0x3ff;
    lVar20 = -((uVar22 >> 3) - 0x86);
    uVar15 = (ulonglong)dVar19 & 0xfffffffffffff | 0x10000000000000;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_1404720e0 + lVar20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = SUB168(auVar3 * auVar6,8);
    uVar11 = SUB168(auVar3 * auVar6,0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(&UNK_1404720e8 + lVar20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    uVar22 = uVar22 & 7;
    auVar9 = auVar4 * auVar7 + auVar9;
    uVar12 = auVar9._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&UNK_1404720f0 + lVar20);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    uVar21 = auVar9._8_8_ + SUB168(auVar5 * auVar8,0);
    uVar18 = 0;
    bVar14 = (byte)(0x36 - uVar22) & 0x3f;
    uVar15 = uVar21 >> bVar14;
    bVar1 = (0x36 - uVar22 & 0x3f) != 0;
    bVar2 = (uVar21 >> bVar14 - 1 & 1) != 0;
    if (bVar1 && bVar2) {
      uVar21 = ~uVar21;
      uVar12 = ~uVar12;
      uVar11 = ~uVar11;
      uVar18 = 0x8000000000000000;
    }
    uVar29 = (int)uVar15 + (uint)(bVar1 && bVar2) & 3;
    sVar13 = (char)uVar22 + 10;
    uVar15 = (uVar21 << sVar13) >> sVar13;
    lVar16 = uVar22 - 0x36;
    lVar20 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar21 = uVar12;
    if (uVar15 == 0) {
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      lVar16 = uVar22 - 0x76;
      uVar21 = uVar11;
      uVar15 = uVar12;
    }
    lVar17 = lVar20 + -0x34;
    if (lVar17 < 0) {
      bVar14 = -(byte)lVar17;
      uVar15 = uVar15 << (bVar14 & 0x3f) | uVar21 >> (-(bVar14 - 0x40) & 0x3f);
    }
    else if (lVar17 != 0) {
      uVar15 = uVar15 >> ((byte)lVar17 & 0x3f);
    }
    dVar19 = (double)(uVar15 & 0xffefffffffffffff | uVar18 | lVar16 + lVar20 + 0x3ff << 0x34) *
             DAT_140471ec8;
  }
  dVar28 = dVar19 * dVar19;
  dVar19 = dVar19 + dVar28 * dVar19 *
                    ((DAT_140471e68 * dVar28 + DAT_140471e60) /
                    ((DAT_140471e80 * dVar28 + DAT_140471e78) * dVar28 + DAT_140471e70));
  if ((uVar29 & 1) == 1) {
    dVar19 = DAT_140471ed0 / dVar19;
  }
  auVar25._0_8_ = (double)((ulonglong)dVar19 ^ (ulonglong)dVar30 & _DAT_140471e50);
  auVar25._8_8_ = in_XMM5_Qb & _UNK_140471e58;
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = (float)auVar25._0_8_;
  return auVar26._0_8_;
}

