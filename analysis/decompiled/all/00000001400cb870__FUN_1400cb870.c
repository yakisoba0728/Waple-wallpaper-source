// Function: FUN_1400cb870
// Addr: 1400cb870
// Size: 529 bytes


undefined8 * FUN_1400cb870(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_RSI;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar12 = (undefined8 *)*param_1;
  if (param_1[1] - (longlong)puVar12 == -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = param_1[2] - (longlong)puVar12 >> 4;
  if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_1400cba78:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar1 = (param_1[1] - (longlong)puVar12 >> 4) + 1;
  uVar13 = uVar1;
  if (uVar1 <= uVar10) {
    uVar13 = uVar10;
  }
  if (0xfffffffffffffff < uVar13) goto LAB_1400cba78;
  uVar10 = uVar13 * 0x10;
  if (uVar10 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1400cb93c:
    uVar10 = (longlong)param_2 - (longlong)puVar12 & 0xfffffffffffffff0;
    puVar12 = (undefined8 *)(uVar10 + (longlong)unaff_RSI);
    FUN_1400cd4c0(uVar10,puVar12,param_3);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar6 = unaff_RSI;
    if (param_2 == puVar2) {
      for (; puVar8 != puVar2; puVar8 = puVar8 + 2) {
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        *puVar6 = uVar4;
        puVar6[1] = uVar5;
        puVar6 = puVar6 + 2;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 2) {
        uVar4 = *puVar8;
        uVar5 = puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        *puVar6 = uVar4;
        puVar6[1] = uVar5;
        puVar6 = puVar6 + 2;
      }
      puVar2 = (undefined8 *)param_1[1];
      puVar8 = puVar12;
      for (; param_2 != puVar2; param_2 = param_2 + 2) {
        uVar4 = *param_2;
        uVar5 = param_2[1];
        *param_2 = 0;
        param_2[1] = 0;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        puVar8 = puVar8 + 2;
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_1400cba3c;
    for (lVar9 = lVar7; lVar9 != param_1[1]; lVar9 = lVar9 + 0x10) {
      if (*(int *)(lVar9 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140015110();
      }
    }
    lVar9 = lVar7;
    puVar11 = auStack_38;
    if ((0xfff < (param_1[2] - lVar7 & 0xfffffffffffffff0U)) &&
       (lVar9 = *(longlong *)(lVar7 + -8), puVar11 = auStack_38, 0x1f < (lVar7 - lVar9) - 8U))
    goto LAB_1400cba2a;
  }
  else {
    if (uVar10 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_14028af20(uVar10);
      goto LAB_1400cb93c;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_1400cba78;
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      unaff_RSI = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar7;
      goto LAB_1400cb93c;
    }
LAB_1400cba2a:
    lVar9 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar11 = auStack_30;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400cba3c;
  thunk_FUN_14028af80(lVar9);
LAB_1400cba3c:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1 * 2);
  param_1[2] = (longlong)(unaff_RSI + uVar13 * 2);
  return puVar12;
}

