// Function: FUN_140215ba0
// Addr: 140215ba0
// Size: 559 bytes


void FUN_140215ba0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RBP;
  longlong lVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar5 = *param_1;
  lVar9 = (longlong)(param_1[1] - uVar5) >> 4;
  if (param_2 < (ulonglong)(lVar9 * -0x3333333333333333)) {
    param_1[1] = param_2 * 0x50 + uVar5;
    return;
  }
  if (param_2 <= (ulonglong)(lVar9 * -0x3333333333333333)) {
    return;
  }
  uVar5 = ((longlong)(param_1[2] - uVar5) >> 4) * -0x3333333333333333;
  if (param_2 <= uVar5) {
    uVar5 = FUN_1402193d0(param_1[1],param_2 + lVar9 * 0x3333333333333333);
    param_1[1] = uVar5;
    return;
  }
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = 0x333333333333333 - (uVar5 >> 1);
  if ((uVar3 <= uVar5 && uVar5 - uVar3 != 0) ||
     ((uVar5 = (uVar5 >> 1) + uVar5, uVar3 = param_2, param_2 <= uVar5 &&
      (uVar3 = uVar5, 0x333333333333333 < uVar5)))) {
LAB_140215dc5:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar5 = 0;
  uVar3 = uVar3 * 0x50;
  if (uVar3 == 0) {
LAB_140215cb2:
    puVar6 = (undefined8 *)(lVar9 * 0x10 + uVar5);
    for (lVar9 = param_2 + lVar9 * 0x3333333333333333; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined2 *)((longlong)puVar6 + 0x4d) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x4f) = 0;
      *puVar6 = 0x3f800000;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 9) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x4c) = 0;
      puVar6 = puVar6 + 10;
    }
    FUN_1404210f0(uVar5,*param_1,param_1[1] - *param_1);
    uVar1 = *param_1;
    if (uVar1 == 0) goto LAB_140215d6e;
    uVar7 = uVar1;
    puVar8 = auStack_38;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar1) >> 4) << 4)) &&
       (uVar7 = *(ulonglong *)(uVar1 - 8), puVar8 = auStack_38, unaff_RBP = uVar5,
       0x1f < (uVar1 - uVar7) - 8)) goto LAB_140215d5c;
  }
  else {
    if (uVar3 < 0x1000) {
      uVar5 = FUN_14028af20(uVar3);
      goto LAB_140215cb2;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_140215dc5;
    lVar4 = FUN_14028af20();
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto LAB_140215cb2;
    }
LAB_140215d5c:
    uVar7 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_30;
    uVar5 = unaff_RBP;
  }
  *(undefined8 *)(puVar8 + -8) = 0x140215d6e;
  thunk_FUN_14028af80(uVar7);
LAB_140215d6e:
  *param_1 = uVar5;
  param_1[1] = param_2 * 0x50 + uVar5;
  param_1[2] = uVar3 + uVar5;
  return;
}

