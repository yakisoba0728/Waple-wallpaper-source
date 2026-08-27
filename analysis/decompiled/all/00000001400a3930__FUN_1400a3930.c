// Function: FUN_1400a3930
// Addr: 1400a3930
// Size: 552 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400a3930(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [16];
  byte *pbVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  
  auVar6 = _DAT_140492d70;
  auVar5 = _DAT_140492d00;
  auVar4 = _DAT_140492cb0;
  uVar13 = *(uint *)(param_1 + 0x28) & 0xffff;
  uVar15 = *(uint *)(param_1 + 0x28) >> 0x10;
  pauVar3 = (undefined1 (*) [16])param_2[1];
  while (pauVar3 != (undefined1 (*) [16])0x0) {
    pauVar9 = (undefined1 (*) [16])*param_2;
    if (pauVar3 < (undefined1 (*) [16])0x15a1) {
      pauVar11 = (undefined1 (*) [16])0x0;
      pauVar10 = pauVar3;
      pauVar12 = pauVar9;
      uVar16 = (uint)pauVar3;
    }
    else {
      pauVar7 = (undefined1 (*) [16])0x0;
      pauVar11 = pauVar3 + -0x15a;
      pauVar12 = pauVar9 + 0x15a;
      if (pauVar3 < (undefined1 (*) [16])0x15a0) {
        pauVar11 = pauVar7;
        pauVar12 = pauVar7;
      }
      pauVar10 = (undefined1 (*) [16])0x15a0;
      if (pauVar3 < (undefined1 (*) [16])0x15a0) {
        pauVar10 = pauVar7;
      }
      param_2[1] = (longlong)pauVar10;
      if (pauVar3 < (undefined1 (*) [16])0x15a0) {
        pauVar9 = pauVar7;
      }
      *param_2 = (longlong)pauVar9;
      uVar16 = 0x15a0;
      if (pauVar3 < (undefined1 (*) [16])0x15a0) {
        uVar16 = 0;
      }
    }
    puVar2 = *pauVar9;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    iVar31 = 0;
    while (pauVar9 < (undefined1 (*) [16])(puVar2 + ((ulonglong)pauVar10 & 0xffffffffffffffe0))) {
      auVar18 = lddqu(in_XMM1,*pauVar9);
      auVar19 = lddqu(in_XMM2,pauVar9[1]);
      pauVar9 = pauVar9 + 2;
      iVar20 = iVar20 + iVar24;
      iVar21 = iVar21 + iVar25;
      iVar22 = iVar22 + iVar26;
      iVar23 = iVar23 + iVar27;
      auVar17 = psadbw(auVar18,ZEXT816(0));
      in_XMM1 = pmaddubsw(auVar18,auVar6);
      auVar18 = psadbw(auVar19,ZEXT816(0));
      in_XMM2 = pmaddubsw(auVar19,auVar5);
      iVar24 = iVar24 + auVar17._0_4_ + auVar18._0_4_;
      iVar25 = iVar25 + auVar17._4_4_ + auVar18._4_4_;
      iVar26 = iVar26 + auVar17._8_4_ + auVar18._8_4_;
      iVar27 = iVar27 + auVar17._12_4_ + auVar18._12_4_;
      auVar17 = pmaddwd(auVar4,in_XMM1);
      auVar18 = pmaddwd(auVar4,in_XMM2);
      iVar28 = iVar28 + auVar17._0_4_ + auVar18._0_4_;
      iVar29 = iVar29 + auVar17._4_4_ + auVar18._4_4_;
      iVar30 = iVar30 + auVar17._8_4_ + auVar18._8_4_;
      iVar31 = iVar31 + auVar17._12_4_ + auVar18._12_4_;
    }
    uVar1 = param_2[1];
    iVar28 = iVar20 * 0x20 + iVar28;
    iVar29 = iVar21 * 0x20 + iVar29;
    iVar30 = iVar22 * 0x20 + iVar30;
    iVar31 = iVar23 * 0x20 + iVar31;
    in_XMM1._0_4_ = iVar29 + iVar28;
    in_XMM1._4_4_ = iVar28 + iVar29;
    in_XMM1._8_4_ = iVar31 + iVar30;
    in_XMM1._12_4_ = iVar30 + iVar31;
    uVar14 = uVar13 + iVar27 + iVar26 + iVar25 + iVar24;
    uVar15 = uVar15 + (uVar16 & 0xffffffe0) * uVar13 + in_XMM1._8_4_ + in_XMM1._0_4_;
    if ((uVar1 & 0xffffffffffffffe0) < uVar1) {
      for (pbVar8 = (byte *)((uVar1 & 0xffffffffffffffe0) + *param_2);
          pbVar8 < (byte *)(uVar1 + *param_2); pbVar8 = pbVar8 + 1) {
        uVar14 = uVar14 + *pbVar8;
        uVar15 = uVar15 + uVar14;
      }
    }
    *param_2 = (longlong)pauVar12;
    param_2[1] = (longlong)pauVar11;
    uVar13 = uVar14 % 0xfff1;
    uVar15 = uVar15 % 0xfff1;
    pauVar3 = pauVar11;
  }
  *(uint *)(param_1 + 0x28) = uVar15 << 0x10 | uVar13;
  return (ulonglong)(uint3)(uVar13 >> 8) << 8;
}

