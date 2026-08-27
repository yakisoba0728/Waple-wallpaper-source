// Function: FUN_1402ba390
// Addr: 1402ba390
// Size: 805 bytes


undefined1 (*) [16] FUN_1402ba390(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  short sVar22;
  short sVar23;
  
  uVar1 = *(ushort *)*param_2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (1 < DAT_1404dc008) {
    if (((uint)param_2 & 0xfff) < 0xff1) {
      auVar21 = *param_2;
    }
    else {
      puVar9 = (ushort *)(*param_2 + 2);
      auVar12._0_8_ = SUB168(ZEXT216(uVar1) << 0x70,2);
      uVar6 = (ulonglong)uVar1 << 0x20 | (ulonglong)*(ushort *)(*param_2 + 2) << 0x30;
      auVar12._8_8_ = uVar6;
      if (*(ushort *)(*param_2 + 2) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(ushort *)(*param_2 + 4);
        puVar9 = (ushort *)(*param_2 + 4);
      }
      auVar16._0_8_ = auVar12._2_8_;
      uVar6 = uVar6 >> 0x10 | (ulonglong)uVar2 << 0x30;
      auVar16._8_8_ = uVar6;
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      auVar17._0_8_ = auVar16._2_8_;
      uVar6 = uVar6 >> 0x10 | (ulonglong)uVar2 << 0x30;
      auVar17._8_8_ = uVar6;
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      auVar18._0_8_ = auVar17._2_8_;
      uVar6 = uVar6 >> 0x10 | (ulonglong)uVar2 << 0x30;
      auVar18._8_8_ = uVar6;
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      auVar19._0_8_ = auVar18._2_8_;
      uVar6 = uVar6 >> 0x10 | (ulonglong)uVar2 << 0x30;
      auVar19._8_8_ = uVar6;
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar9[1];
        puVar9 = puVar9 + 1;
      }
      auVar20._0_8_ = auVar19._2_8_;
      uVar6 = uVar6 >> 0x10 | (ulonglong)uVar2 << 0x30;
      auVar20._8_8_ = uVar6;
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = puVar9[1];
      }
      auVar21._0_8_ = auVar20._2_8_;
      auVar21._8_8_ = uVar6 >> 0x10 | (ulonglong)uVar7 << 0x30;
    }
    while( true ) {
      while( true ) {
        uVar4 = (uint)param_1 & 0xfff;
        pauVar5 = param_2;
        if (0xff0 < uVar4) break;
        pcmpistri(auVar21,*param_1,0xd);
        if (uVar4 < 0xff1) {
          if (0xfef < uVar4) {
            return (undefined1 (*) [16])0x0;
          }
          iVar8 = pcmpistri(auVar21,*param_1,0xd);
          param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar8 * 2);
          pauVar10 = param_1;
          goto LAB_1402ba630;
        }
        param_1 = param_1 + 1;
      }
      if (*(ushort *)*param_1 == 0) {
        return (undefined1 (*) [16])0x0;
      }
      pauVar10 = param_1;
      if (*(ushort *)*param_1 == uVar1) break;
LAB_1402ba681:
      param_1 = (undefined1 (*) [16])(*pauVar10 + 2);
    }
LAB_1402ba630:
    do {
      for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
LAB_1402ba68a:
        if (*(short *)*pauVar5 == 0) {
          return pauVar10;
        }
        if (*(short *)*param_1 != *(short *)*pauVar5) goto LAB_1402ba681;
        pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
      }
      uVar6 = (ulonglong)((uint)pauVar5 & 0xfff);
      if (0xff0 < uVar6) goto LAB_1402ba68a;
      pcmpistri(*pauVar5,*param_1,0xd);
      if (!SBORROW8(uVar6,0xff0)) goto LAB_1402ba681;
      if ((longlong)(uVar6 - 0xff0) < 0) {
        return pauVar10;
      }
      param_1 = param_1 + 1;
      pauVar5 = pauVar5 + 1;
    } while( true );
  }
  auVar12 = pshuflw(in_XMM1,ZEXT216(uVar1),0);
  do {
    for (; 0xff0 < ((uint)param_1 & 0xfff); param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
LAB_1402ba41c:
      if (*(ushort *)*param_1 == 0) {
        return (undefined1 (*) [16])0x0;
      }
      pauVar5 = param_1;
      pauVar10 = param_2;
      if (uVar1 == *(ushort *)*param_1) {
LAB_1402ba440:
        for (; (((uint)pauVar10 & 0xfff) < 0xff1 && (((uint)pauVar5 & 0xfff) < 0xff1));
            pauVar5 = pauVar5 + 1) {
          auVar14._0_2_ = -(ushort)(*(short *)*pauVar10 == 0);
          auVar14._2_2_ = -(ushort)(*(short *)(*pauVar10 + 2) == 0);
          auVar14._4_2_ = -(ushort)(*(short *)(*pauVar10 + 4) == 0);
          auVar14._6_2_ = -(ushort)(*(short *)(*pauVar10 + 6) == 0);
          auVar14._8_2_ = -(ushort)(*(short *)(*pauVar10 + 8) == 0);
          auVar14._10_2_ = -(ushort)(*(short *)(*pauVar10 + 10) == 0);
          auVar14._12_2_ = -(ushort)(*(short *)(*pauVar10 + 0xc) == 0);
          auVar14._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0xe) == 0);
          auVar15._0_2_ = -(ushort)(*(short *)*pauVar10 != *(short *)*pauVar5);
          auVar15._2_2_ = -(ushort)(*(short *)(*pauVar10 + 2) != *(short *)(*pauVar5 + 2));
          auVar15._4_2_ = -(ushort)(*(short *)(*pauVar10 + 4) != *(short *)(*pauVar5 + 4));
          auVar15._6_2_ = -(ushort)(*(short *)(*pauVar10 + 6) != *(short *)(*pauVar5 + 6));
          auVar15._8_2_ = -(ushort)(*(short *)(*pauVar10 + 8) != *(short *)(*pauVar5 + 8));
          auVar15._10_2_ = -(ushort)(*(short *)(*pauVar10 + 10) != *(short *)(*pauVar5 + 10));
          auVar15._12_2_ = -(ushort)(*(short *)(*pauVar10 + 0xc) != *(short *)(*pauVar5 + 0xc));
          auVar15._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0xe) != *(short *)(*pauVar5 + 0xe));
          auVar15 = auVar15 | auVar14;
          uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
          if (uVar2 != 0) {
            uVar4 = 0;
            if (uVar2 != 0) {
              for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            lVar3 = (ulonglong)(uVar4 >> 1) * 2;
            pauVar5 = (undefined1 (*) [16])(*pauVar5 + lVar3);
            pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar3);
            break;
          }
          pauVar10 = pauVar10 + 1;
        }
        if (*(short *)*pauVar10 == 0) {
          return param_1;
        }
        if (*(short *)*pauVar5 == *(short *)*pauVar10) {
          pauVar5 = (undefined1 (*) [16])(*pauVar5 + 2);
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + 2);
          goto LAB_1402ba440;
        }
      }
    }
    sVar22 = auVar12._0_2_;
    auVar11._0_2_ = -(ushort)(*(short *)*param_1 == sVar22);
    sVar23 = auVar12._2_2_;
    auVar11._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == sVar23);
    auVar11._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == sVar22);
    auVar11._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == sVar23);
    auVar11._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == sVar22);
    auVar11._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == sVar23);
    auVar11._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == sVar22);
    auVar11._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == sVar23);
    auVar13._0_2_ = -(ushort)(*(short *)*param_1 == 0);
    auVar13._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == 0);
    auVar13._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == 0);
    auVar13._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == 0);
    auVar13._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == 0);
    auVar13._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == 0);
    auVar13._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == 0);
    auVar13._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == 0);
    auVar13 = auVar13 | auVar11;
    uVar2 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar13[0xf] >> 7) << 0xf;
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (ulonglong)(uVar4 >> 1) * 2);
      goto LAB_1402ba41c;
    }
    param_1 = param_1 + 1;
  } while( true );
}

