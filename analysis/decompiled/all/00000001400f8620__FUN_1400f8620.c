// Function: FUN_1400f8620
// Addr: 1400f8620
// Size: 559 bytes


undefined4 * FUN_1400f8620(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined4 *unaff_RSI;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *unaff_R12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = *param_2;
    FUN_140016fc0(puVar1 + 2,param_2 + 2);
    puVar1[10] = param_2[10];
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    puVar1[0xc] = param_2[0xc];
    puVar1 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 0xe);
    return puVar1;
  }
  lVar8 = ((longlong)puVar1 - *param_1) / 0x38;
  if (lVar8 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = (param_1[2] - *param_1 >> 3) * 0x6db6db6db6db6db7;
  uVar3 = 0x492492492492492 - (uVar10 >> 1);
  if (uVar3 <= uVar10 && uVar10 - uVar3 != 0) {
LAB_1400f884b:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar3 = lVar8 + 1;
  uVar4 = uVar3;
  if (uVar3 <= uVar10) {
    uVar4 = uVar10;
  }
  if (0x492492492492492 < uVar4) goto LAB_1400f884b;
  uVar10 = uVar4 * 0x38;
  if (uVar10 == 0) {
    unaff_RSI = (undefined4 *)0x0;
LAB_1400f8746:
    unaff_R12 = unaff_RSI + lVar8 * 0xe;
    *unaff_R12 = *param_2;
    FUN_140016fc0(unaff_R12 + 2,param_2 + 2);
    unaff_R12[10] = param_2[10];
    *(undefined1 *)(unaff_R12 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    unaff_R12[0xc] = param_2[0xc];
    puVar7 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)*param_1;
    puVar11 = unaff_RSI;
    if (puVar1 != puVar7) {
      FUN_1400fa010((undefined4 *)*param_1,puVar1,unaff_RSI);
      puVar7 = (undefined4 *)param_1[1];
      puVar11 = unaff_R12 + 0xe;
      puVar5 = puVar1;
    }
    FUN_1400fa010(puVar5,puVar7,puVar11);
    lVar8 = *param_1;
    if (lVar8 == 0) goto LAB_1400f881b;
    lVar6 = param_1[1];
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x38) {
      FUN_140017240(lVar8 + 8);
    }
    lVar8 = *param_1;
    lVar6 = lVar8;
    puVar9 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - lVar8 >> 3) * 8)) &&
       (lVar6 = *(longlong *)(lVar8 + -8), puVar9 = auStack_68, 0x1f < (lVar8 - lVar6) - 8U))
    goto LAB_1400f8809;
  }
  else {
    if (uVar10 < 0x1000) {
      unaff_RSI = (undefined4 *)FUN_14028af20(uVar10);
      goto LAB_1400f8746;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_1400f884b;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RSI = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RSI + -2) = lVar6;
      goto LAB_1400f8746;
    }
LAB_1400f8809:
    lVar6 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar9 = auStack_60;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1400f881b;
  thunk_FUN_14028af80(lVar6);
LAB_1400f881b:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar3 * 0xe);
  param_1[2] = (longlong)(unaff_RSI + uVar4 * 0xe);
  return unaff_R12;
}

