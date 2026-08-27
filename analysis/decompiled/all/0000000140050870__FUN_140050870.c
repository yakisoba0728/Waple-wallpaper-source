// Function: FUN_140050870
// Addr: 140050870
// Size: 378 bytes


void FUN_140050870(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar3 = param_1[3];
  if (param_2 <= uVar3) {
    return;
  }
  uVar9 = 0x7ffffffffffffffe;
  uVar4 = param_1[2];
  if (0x7ffffffffffffffe - uVar4 < param_2 - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar7 = param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar7;
    if (uVar7 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffff < uVar9 + 1) goto LAB_1400509e0;
    uVar7 = (uVar9 + 1) * 2;
    if (uVar7 != 0) goto LAB_14005091a;
    unaff_RSI = 0;
LAB_140050953:
    param_1[2] = param_2;
    lVar6 = uVar4 * 2 + 2;
    param_1[3] = uVar9;
    if (uVar3 < 8) {
      FUN_1404210f0(unaff_RSI,param_1,lVar6);
      goto LAB_1400509c1;
    }
    uVar9 = *param_1;
    FUN_1404210f0(unaff_RSI,uVar9,lVar6);
    if (0xfff < uVar3 * 2 + 2) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar3 * 2 + 0x29);
        goto LAB_1400509c1;
      }
      goto LAB_1400509a8;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_14005091a:
    if (uVar7 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_140050953;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_1400509e0:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar6 = FUN_14028af20(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_140050953;
    }
LAB_1400509a8:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1400509b7;
  thunk_FUN_14028af80(uVar9);
LAB_1400509c1:
  *param_1 = unaff_RSI;
  param_1[2] = uVar4;
  return;
}

