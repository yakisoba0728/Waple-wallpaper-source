// Function: FUN_1402782c0
// Addr: 1402782c0
// Size: 724 bytes


bool FUN_1402782c0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  ulonglong *puVar1;
  code *pcVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 ***local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  
  puVar15 = auStack_d8;
  dVar19 = (double)FUN_140278240();
  puVar1 = (ulonglong *)param_2[1];
  dVar5 = DAT_1404929d0;
  for (puVar17 = (ulonglong *)*param_2; puVar17 != puVar1; puVar17 = puVar17 + 4) {
    ppppuVar8 = (undefined8 ****)0x0;
    uVar13 = puVar17[2];
    local_b8 = (undefined8 ****)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    puVar16 = puVar17;
    if (7 < puVar17[3]) {
      puVar16 = (ulonglong *)*puVar17;
    }
    if (0x7ffffffffffffffe < uVar13) goto LAB_14027858a;
    if (uVar13 < 8) {
      local_a0 = 7;
      local_b8 = (undefined8 ***)*puVar16;
      uStack_b0 = puVar16[1];
      local_a8 = uVar13;
    }
    else {
      uVar14 = uVar13 | 7;
      if (uVar14 < 0x7fffffffffffffff) {
        if (uVar14 < 10) {
          uVar14 = 10;
        }
        if (0x7fffffffffffffff < uVar14 + 1) goto LAB_140278590;
        uVar10 = (uVar14 + 1) * 2;
        if (uVar10 != 0) goto LAB_1402783b2;
      }
      else {
        uVar14 = 0x7ffffffffffffffe;
        uVar10 = 0xfffffffffffffffe;
LAB_1402783b2:
        if (uVar10 < 0x1000) {
          ppppuVar8 = (undefined8 ****)FUN_14028af20();
        }
        else {
          if (uVar10 + 0x27 <= uVar10) {
LAB_140278590:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          pppuVar7 = (undefined8 ***)FUN_14028af20(uVar10 + 0x27);
          if (pppuVar7 == (undefined8 ***)0x0) goto LAB_140278583;
          ppppuVar8 = (undefined8 ****)((longlong)pppuVar7 + 0x27U & 0xffffffffffffffe0);
          ppppuVar8[-1] = pppuVar7;
        }
      }
      local_b8 = ppppuVar8;
      local_a8 = uVar13;
      local_a0 = uVar14;
      FUN_1404210f0(ppppuVar8,puVar16,uVar13 * 2 + 2);
    }
    ppppuVar8 = &local_b8;
    if (7 < local_a0) {
      ppppuVar8 = (undefined8 ****)local_b8;
    }
    dVar20 = (double)FUN_140278240(ppppuVar8);
    dVar4 = dVar5;
    if (((0.0 <= dVar20) && (dVar4 = dVar20, 0.0 < dVar5)) && (dVar20 <= dVar5)) {
      dVar4 = dVar5;
    }
    if (7 < local_a0) {
      uVar13 = local_a0 * 2 + 2;
      ppppuVar8 = (undefined8 ****)local_b8;
      if (0xfff < uVar13) {
        ppppuVar8 = (undefined8 ****)local_b8[-1];
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppuVar8))) goto LAB_140278583;
        uVar13 = local_a0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppuVar8,uVar13);
    }
    dVar5 = dVar4;
  }
  if (dVar5 <= dVar19) {
    sVar9 = strlen(param_3);
    FUN_140277c80(&local_98,param_1,sVar9 & 0xffffffff);
    puVar11 = &local_98;
    if (0xf < local_80) {
      puVar11 = (undefined1 *)CONCAT71(uStack_97,local_98);
    }
    iVar6 = FUN_1402c9e60(puVar11,param_3,(longlong)(int)sVar9);
    bVar18 = iVar6 != 0;
    if (0xf < local_80) {
      lVar3 = CONCAT71(uStack_97,local_98);
      uVar13 = local_80 + 1;
      lVar12 = lVar3;
      if (0xfff < uVar13) {
        lVar12 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar12) - 8U) {
LAB_140278583:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar15 = auStack_d0;
LAB_14027858a:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar15 + -8) = &UNK_14027858f;
          FUN_1400172e0();
        }
        uVar13 = local_80 + 0x28;
      }
      thunk_FUN_14028af80(lVar12,uVar13);
    }
    local_88 = 0;
    local_80 = 0xf;
    local_98 = 0;
    FUN_140033540(param_2);
  }
  else {
    FUN_140033540(param_2);
    bVar18 = true;
  }
  return bVar18;
}

