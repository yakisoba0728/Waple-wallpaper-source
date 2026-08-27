// Function: FUN_1401b6430
// Addr: 1401b6430
// Size: 485 bytes


undefined4 * FUN_1401b6430(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined4 *unaff_RSI;
  undefined4 *puVar10;
  undefined4 *unaff_R12;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar8 = *param_1;
  if (param_1[1] - lVar8 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar7 = param_1[2] - lVar8 >> 5;
  if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_1401b6611:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar1 = (param_1[1] - lVar8 >> 5) + 1;
  uVar11 = uVar1;
  if (uVar1 <= uVar7) {
    uVar11 = uVar7;
  }
  if (0x7ffffffffffffff < uVar11) goto LAB_1401b6611;
  uVar7 = uVar11 * 0x20;
  if (uVar7 == 0) {
    unaff_RSI = (undefined4 *)0x0;
LAB_1401b64fe:
    unaff_R12 = (undefined4 *)((param_2 - lVar8 & 0xffffffffffffffe0U) + (longlong)unaff_RSI);
    *unaff_R12 = *param_3;
    unaff_R12[1] = param_3[1];
    uVar2 = *(undefined8 *)(param_3 + 6);
    uVar3 = *(undefined8 *)(param_3 + 4);
    uVar4 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(unaff_R12 + 2) = uVar4;
    *(undefined8 *)(unaff_R12 + 4) = uVar3;
    *(undefined8 *)(unaff_R12 + 6) = uVar2;
    lVar8 = param_1[1];
    lVar6 = *param_1;
    puVar10 = unaff_RSI;
    if (param_2 != lVar8) {
      FUN_1400efdd0(*param_1,param_2,unaff_RSI);
      lVar8 = param_1[1];
      puVar10 = unaff_R12 + 8;
      lVar6 = param_2;
    }
    FUN_1400efdd0(lVar6,lVar8,puVar10);
    lVar8 = *param_1;
    if (lVar8 == 0) goto LAB_1401b65d4;
    lVar6 = param_1[1];
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
      FUN_14000d9e0(lVar8 + 8);
    }
    lVar8 = *param_1;
    lVar6 = lVar8;
    puVar9 = auStack_48;
    if ((0xfff < (param_1[2] - lVar8 & 0xffffffffffffffe0U)) &&
       (lVar6 = *(longlong *)(lVar8 + -8), puVar9 = auStack_48, 0x1f < (lVar8 - lVar6) - 8U))
    goto LAB_1401b65c5;
  }
  else {
    if (uVar7 < 0x1000) {
      unaff_RSI = (undefined4 *)FUN_14028af20(uVar7);
      goto LAB_1401b64fe;
    }
    if (uVar7 + 0x27 <= uVar7) goto LAB_1401b6611;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RSI = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RSI + -2) = lVar6;
      goto LAB_1401b64fe;
    }
LAB_1401b65c5:
    pcVar5 = (code *)swi(0x29);
    lVar6 = (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1401b65d4;
  thunk_FUN_14028af80(lVar6);
LAB_1401b65d4:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar1 * 8);
  param_1[2] = (longlong)(unaff_RSI + uVar11 * 8);
  return unaff_R12;
}

