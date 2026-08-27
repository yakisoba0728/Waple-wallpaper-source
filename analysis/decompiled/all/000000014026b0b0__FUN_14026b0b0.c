// Function: FUN_14026b0b0
// Addr: 14026b0b0
// Size: 389 bytes


void FUN_14026b0b0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong unaff_RBP;
  ulonglong uVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = *param_1;
  uVar4 = (longlong)(param_1[2] - uVar3) >> 4;
  if ((0xfffffffffffffff - (uVar4 >> 1) < uVar4) ||
     ((uVar4 = (uVar4 >> 1) + uVar4, uVar6 = param_2, param_2 <= uVar4 &&
      (uVar6 = uVar4, 0xfffffffffffffff < uVar4)))) {
LAB_14026b231:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = param_1[1];
  uVar8 = 0;
  uVar6 = uVar6 * 0x10;
  if (uVar6 == 0) {
LAB_14026b175:
    uVar4 = uVar4 - uVar3;
    puVar5 = (undefined8 *)((uVar4 & 0xfffffffffffffff0) + uVar8);
    for (lVar2 = param_2 - ((longlong)uVar4 >> 4); lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
    FUN_1404210f0(uVar8,*param_1,param_1[1] - *param_1);
    uVar4 = *param_1;
    if (uVar4 == 0) goto LAB_14026b1f5;
    uVar3 = uVar4;
    puVar7 = auStack_38;
    if ((0xfff < (param_1[2] - uVar4 & 0xfffffffffffffff0)) &&
       (uVar3 = *(ulonglong *)(uVar4 - 8), puVar7 = auStack_38, unaff_RBP = uVar8,
       0x1f < (uVar4 - uVar3) - 8)) goto LAB_14026b1e6;
  }
  else {
    if (uVar6 < 0x1000) {
      uVar8 = FUN_14028af20(uVar6);
      goto LAB_14026b175;
    }
    if (uVar6 + 0x27 <= uVar6) goto LAB_14026b231;
    lVar2 = FUN_14028af20();
    if (lVar2 != 0) {
      uVar8 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar8 - 8) = lVar2;
      goto LAB_14026b175;
    }
LAB_14026b1e6:
    pcVar1 = (code *)swi(0x29);
    uVar3 = (*pcVar1)(5);
    puVar7 = auStack_30;
    uVar8 = unaff_RBP;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14026b1f5;
  thunk_FUN_14028af80(uVar3);
LAB_14026b1f5:
  *param_1 = uVar8;
  param_1[1] = param_2 * 0x10 + uVar8;
  param_1[2] = uVar6 + uVar8;
  return;
}

