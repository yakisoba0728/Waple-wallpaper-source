// Function: FUN_1401334d0
// Addr: 1401334d0
// Size: 536 bytes


void FUN_1401334d0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *unaff_RSI;
  undefined8 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  lVar12 = *param_1;
  uVar10 = (param_1[2] - lVar12 >> 3) * -0x5555555555555555;
  uVar7 = 0xaaaaaaaaaaaaaaa - (uVar10 >> 1);
  if ((uVar7 <= uVar10 && uVar10 - uVar7 != 0) ||
     ((uVar10 = (uVar10 >> 1) + uVar10, uVar7 = param_2, param_2 <= uVar10 &&
      (uVar7 = uVar10, 0xaaaaaaaaaaaaaaa < uVar10)))) {
LAB_1401336e4:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  lVar11 = param_1[1];
  uVar10 = uVar7 * 0x18;
  puVar14 = (undefined8 *)0x0;
  if (uVar10 == 0) {
LAB_1401335b1:
    lVar12 = lVar11 - lVar12 >> 3;
    puVar1 = puVar14 + lVar12;
    for (lVar12 = param_2 + lVar12 * 0x5555555555555555; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    }
    puVar1 = (undefined8 *)param_1[1];
    puVar6 = puVar14;
    for (puVar9 = (undefined8 *)*param_1; puVar9 != puVar1; puVar9 = puVar9 + 3) {
      uVar2 = puVar9[2];
      uVar3 = puVar9[1];
      uVar4 = *puVar9;
      puVar9[2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      *puVar6 = uVar4;
      puVar6[1] = uVar3;
      puVar6[2] = uVar2;
      puVar6 = puVar6 + 3;
    }
    lVar12 = *param_1;
    if (lVar12 == 0) goto LAB_1401336a1;
    lVar11 = param_1[1];
    for (; lVar12 != lVar11; lVar12 = lVar12 + 0x18) {
      FUN_140031b80(lVar12);
    }
    lVar12 = *param_1;
    lVar11 = lVar12;
    puVar13 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar12 >> 3) * 8)) &&
       (lVar11 = *(longlong *)(lVar12 + -8), puVar13 = auStack_48, unaff_RSI = puVar14,
       0x1f < (lVar12 - lVar11) - 8U)) goto LAB_14013368f;
  }
  else {
    if (uVar10 < 0x1000) {
      puVar14 = (undefined8 *)FUN_14028af20(uVar10);
      goto LAB_1401335b1;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_1401336e4;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      puVar14 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      puVar14[-1] = lVar8;
      goto LAB_1401335b1;
    }
LAB_14013368f:
    lVar11 = 5;
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar13 = auStack_40;
    puVar14 = unaff_RSI;
  }
  *(undefined8 *)(puVar13 + -8) = 0x1401336a1;
  thunk_FUN_14028af80(lVar11);
LAB_1401336a1:
  *param_1 = (longlong)puVar14;
  param_1[1] = (longlong)(puVar14 + param_2 * 3);
  param_1[2] = (longlong)(puVar14 + uVar7 * 3);
  return;
}

