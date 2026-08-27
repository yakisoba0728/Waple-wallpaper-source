// Function: FUN_1401d9b80
// Addr: 1401d9b80
// Size: 455 bytes


void FUN_1401d9b80(ulonglong *param_1,ulonglong param_2)

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
  
  puVar4 = auStack_38;
  uVar3 = *param_1;
  uVar7 = param_1[1] - uVar3;
  uVar6 = (longlong)uVar7 >> 6;
  if (param_2 < uVar6) {
    param_1[1] = param_2 * 0x40 + uVar3;
    return;
  }
  if (param_2 <= uVar6) {
    return;
  }
  uVar3 = (longlong)(param_1[2] - uVar3) >> 6;
  if (param_2 <= uVar3) {
    uVar3 = FUN_14012bac0(param_1[1],param_2 - uVar6);
    param_1[1] = uVar3;
    return;
  }
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (0x3ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0xffffffffffffffc0;
    uVar3 = 0xffffffffffffffe7;
LAB_1401d9c5c:
    lVar2 = FUN_14028af20(uVar3);
    if (lVar2 != 0) {
      unaff_RBP = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBP - 8) = lVar2;
      goto LAB_1401d9c7c;
    }
LAB_1401d9cde:
    pcVar1 = (code *)swi(0x29);
    uVar3 = (*pcVar1)(5);
    puVar4 = auStack_30;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar5 = param_2;
    if ((param_2 <= uVar3) && (uVar5 = uVar3, 0x3ffffffffffffff < uVar3)) {
LAB_1401d9d3d:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar5 = uVar5 * 0x40;
    if (uVar5 == 0) {
      unaff_RBP = 0;
    }
    else {
      if (0xfff < uVar5) {
        uVar3 = uVar5 | 0x27;
        if (uVar3 <= uVar5) goto LAB_1401d9d3d;
        goto LAB_1401d9c5c;
      }
      unaff_RBP = FUN_14028af20();
    }
LAB_1401d9c7c:
    if (param_2 - uVar6 != 0) {
      FUN_1404217a0((uVar7 & 0xffffffffffffffc0) + unaff_RBP,0,(param_2 - uVar6) * 0x40);
    }
    FUN_1404210f0(unaff_RBP,*param_1,param_1[1] - *param_1);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_1401d9ced;
    if ((0xfff < (param_1[2] - uVar3 & 0xffffffffffffffc0)) &&
       (lVar2 = uVar3 - *(ulonglong *)(uVar3 - 8), uVar3 = *(ulonglong *)(uVar3 - 8),
       puVar4 = auStack_38, 0x1f < lVar2 - 8U)) goto LAB_1401d9cde;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1401d9ced;
  thunk_FUN_14028af80(uVar3);
LAB_1401d9ced:
  *param_1 = unaff_RBP;
  param_1[1] = param_2 * 0x40 + unaff_RBP;
  param_1[2] = uVar5 + unaff_RBP;
  return;
}

