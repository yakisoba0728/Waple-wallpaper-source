// Function: FUN_140057000
// Addr: 140057000
// Size: 551 bytes


undefined8 * FUN_140057000(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *unaff_RSI;
  undefined8 *unaff_R12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar6 = param_1[2] - lVar2 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_140057223:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar1 = (param_1[1] - lVar2 >> 3) + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar6) {
    uVar7 = uVar6;
  }
  if (0x1fffffffffffffff < uVar7) goto LAB_140057223;
  uVar6 = uVar7 * 8;
  if (uVar6 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1400570d2:
    uVar3 = *param_3;
    *param_3 = 0xffffffffffffffff;
    unaff_R12 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xfffffffffffffff8U) + (longlong)unaff_RSI);
    *unaff_R12 = uVar3;
    puVar10 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar5 = unaff_RSI;
    if (param_2 == puVar10) {
      for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
    }
    else {
      for (; puVar8 != param_2; puVar8 = puVar8 + 1) {
        uVar3 = *puVar8;
        *puVar8 = 0xffffffffffffffff;
        *puVar5 = uVar3;
        puVar5 = puVar5 + 1;
      }
      puVar10 = (undefined8 *)param_1[1];
      puVar8 = unaff_R12;
      for (; param_2 != puVar10; param_2 = param_2 + 1) {
        puVar8 = puVar8 + 1;
        uVar3 = *param_2;
        *param_2 = 0xffffffffffffffff;
        *puVar8 = uVar3;
      }
    }
    puVar10 = (undefined8 *)*param_1;
    if (puVar10 == (undefined8 *)0x0) goto LAB_1400571e9;
    puVar8 = (undefined8 *)param_1[1];
    for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      FUN_14028fdf0(*puVar10);
    }
    lVar2 = *param_1;
    lVar9 = lVar2;
    puVar11 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar9 = *(longlong *)(lVar2 + -8), puVar11 = auStack_48, 0x1f < (lVar2 - lVar9) - 8U))
    goto LAB_1400571d7;
  }
  else {
    if (uVar6 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_14028af20(uVar6);
      goto LAB_1400570d2;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_140057223;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      unaff_RSI = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar9;
      goto LAB_1400570d2;
    }
LAB_1400571d7:
    lVar9 = 5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar11 = auStack_40;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400571e9;
  thunk_FUN_14028af80(lVar9);
LAB_1400571e9:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1);
  param_1[2] = (longlong)(unaff_RSI + uVar7);
  return unaff_R12;
}

