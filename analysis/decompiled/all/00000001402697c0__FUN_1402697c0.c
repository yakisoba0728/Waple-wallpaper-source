// Function: FUN_1402697c0
// Addr: 1402697c0
// Size: 586 bytes


undefined8 * FUN_1402697c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *unaff_RSI;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *unaff_R12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar5 = *param_1;
  lVar8 = (param_1[1] - lVar5 >> 4) * -0x3333333333333333;
  if (lVar8 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (param_1[2] - lVar5 >> 4) * -0x3333333333333333;
  uVar2 = 0x333333333333333 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_140269a06:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar8 + 1;
  uVar4 = uVar2;
  if (uVar2 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x333333333333333 < uVar4) goto LAB_140269a06;
  uVar3 = uVar4 * 0x50;
  if (uVar3 == 0) {
    unaff_RSI = (undefined8 *)0x0;
LAB_1402698a3:
    lVar5 = (param_2 - lVar5) / 0x50;
    unaff_R12 = unaff_RSI + lVar5 * 10;
    *unaff_R12 = *param_3;
    FUN_14026c0e0((lVar5 * 0x50 | 8U) + (longlong)unaff_RSI,param_3 + 1);
    FUN_14026c0e0(unaff_R12 + 4,param_3 + 4);
    unaff_R12[7] = param_3[7];
    *(undefined1 *)(unaff_R12 + 8) = *(undefined1 *)(param_3 + 8);
    *(undefined4 *)((longlong)unaff_R12 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x44);
    *(undefined4 *)(unaff_R12 + 9) = *(undefined4 *)(param_3 + 9);
    lVar5 = param_1[1];
    lVar8 = *param_1;
    puVar7 = unaff_RSI;
    if (param_2 != lVar5) {
      FUN_14026bcf0(*param_1,param_2,unaff_RSI);
      lVar5 = param_1[1];
      puVar7 = unaff_R12 + 10;
      lVar8 = param_2;
    }
    FUN_14026bcf0(lVar8,lVar5,puVar7);
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_1402699c5;
    lVar8 = param_1[1];
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0x50) {
      FUN_140031b80(lVar5 + 0x20);
      FUN_140031b80(lVar5 + 8);
    }
    lVar5 = *param_1;
    lVar8 = lVar5;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar5 >> 4) << 4)) &&
       (lVar8 = *(longlong *)(lVar5 + -8), puVar6 = auStack_48, 0x1f < (lVar5 - lVar8) - 8U))
    goto LAB_1402699b3;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_14028af20(uVar3);
      goto LAB_1402698a3;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_140269a06;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RSI = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar8;
      goto LAB_1402698a3;
    }
LAB_1402699b3:
    lVar8 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1402699c5;
  thunk_FUN_14028af80(lVar8);
LAB_1402699c5:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar2 * 10);
  param_1[2] = (longlong)(unaff_RSI + uVar4 * 10);
  return unaff_R12;
}

