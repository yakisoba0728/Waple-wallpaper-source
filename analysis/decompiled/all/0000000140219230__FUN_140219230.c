// Function: FUN_140219230
// Addr: 140219230
// Size: 413 bytes


void FUN_140219230(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 4) * -0x3333333333333333;
  uVar2 = 0x333333333333333 - (uVar3 >> 1);
  if ((uVar2 <= uVar3 && uVar3 - uVar2 != 0) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar2 = param_2, param_2 <= uVar3 &&
      (uVar2 = uVar3, 0x333333333333333 < uVar3)))) {
LAB_1402193c9:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = param_1[1];
  uVar2 = uVar2 * 0x50;
  if (uVar2 == 0) {
    unaff_RBX = 0;
LAB_140219304:
    lVar6 = (longlong)(uVar3 - uVar4) >> 4;
    FUN_1402193d0(lVar6 * 0x10 + unaff_RBX,param_2 + lVar6 * 0x3333333333333333);
    FUN_1404210f0(unaff_RBX,*param_1,param_1[1] - *param_1);
    uVar3 = *param_1;
    if (uVar3 == 0) goto LAB_140219388;
    uVar4 = uVar3;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 4) << 4)) &&
       (uVar4 = *(ulonglong *)(uVar3 - 8), puVar5 = auStack_38, 0x1f < (uVar3 - uVar4) - 8))
    goto LAB_140219376;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar2);
      goto LAB_140219304;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_1402193c9;
    lVar6 = FUN_14028af20();
    if (lVar6 != 0) {
      unaff_RBX = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar6;
      goto LAB_140219304;
    }
LAB_140219376:
    uVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  *(undefined8 *)(puVar5 + -8) = 0x140219388;
  thunk_FUN_14028af80(uVar4);
LAB_140219388:
  *param_1 = unaff_RBX;
  param_1[1] = param_2 * 0x50 + unaff_RBX;
  param_1[2] = uVar2 + unaff_RBX;
  return;
}

