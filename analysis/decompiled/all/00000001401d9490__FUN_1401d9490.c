// Function: FUN_1401d9490
// Addr: 1401d9490
// Size: 443 bytes


void FUN_1401d9490(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar3 = *param_1;
  uVar7 = param_1[1] - uVar3;
  uVar6 = (longlong)uVar7 >> 4;
  if (param_2 < uVar6) {
    param_1[1] = param_2 * 0x10 + uVar3;
    return;
  }
  if (param_2 <= uVar6) {
    return;
  }
  uVar3 = (longlong)(param_1[2] - uVar3) >> 4;
  if (param_2 <= uVar3) {
    uVar3 = FUN_1401dbff0(param_1[1],param_2 - uVar6);
    param_1[1] = uVar3;
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if ((0xfffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar5 = param_2, param_2 <= uVar3 &&
      (uVar5 = uVar3, 0xfffffffffffffff < uVar3)))) {
LAB_1401d9641:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar5 = uVar5 * 0x10;
  if (uVar5 == 0) {
    unaff_RBP = 0;
LAB_1401d9580:
    if (param_2 - uVar6 != 0) {
      FUN_1404217a0((uVar7 & 0xfffffffffffffff0) + unaff_RBP,0,(param_2 - uVar6) * 0x10);
    }
    FUN_1404210f0(unaff_RBP,*param_1,param_1[1] - *param_1);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_1401d95f1;
    uVar6 = uVar3;
    puVar4 = auStack_38;
    if ((0xfff < (param_1[2] - uVar3 & 0xfffffffffffffff0)) &&
       (uVar6 = *(ulonglong *)(uVar3 - 8), puVar4 = auStack_38, 0x1f < (uVar3 - uVar6) - 8))
    goto LAB_1401d95e2;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_RBP = FUN_14028af20(uVar5);
      goto LAB_1401d9580;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_1401d9641;
    lVar2 = FUN_14028af20();
    if (lVar2 != 0) {
      unaff_RBP = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBP - 8) = lVar2;
      goto LAB_1401d9580;
    }
LAB_1401d95e2:
    pcVar1 = (code *)swi(0x29);
    uVar6 = (*pcVar1)(5);
    puVar4 = auStack_30;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1401d95f1;
  thunk_FUN_14028af80(uVar6);
LAB_1401d95f1:
  *param_1 = unaff_RBP;
  param_1[1] = param_2 * 0x10 + unaff_RBP;
  param_1[2] = uVar5 + unaff_RBP;
  return;
}

