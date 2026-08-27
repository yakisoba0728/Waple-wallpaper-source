// Function: FUN_1400e72e0
// Addr: 1400e72e0
// Size: 472 bytes


void FUN_1400e72e0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar9 = 0xaaaaaaaaaaaaaaa;
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar1 = *param_1;
  uVar7 = (longlong)(param_1[2] - uVar1) / 0x18;
  if ((0xaaaaaaaaaaaaaaa - (uVar7 >> 1) < uVar7) ||
     ((uVar7 = (uVar7 >> 1) + uVar7, uVar4 = param_2, param_2 <= uVar7 &&
      (uVar4 = uVar7, 0xaaaaaaaaaaaaaaa < uVar7)))) {
LAB_1400e74b4:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar7 = param_1[1];
  uVar4 = uVar4 * 0x18;
  if (uVar4 == 0) {
    unaff_RBX = 0;
LAB_1400e73c3:
    lVar5 = (longlong)(uVar7 - uVar1) / 0x18;
    puVar3 = (undefined8 *)(unaff_RBX + lVar5 * 0x18);
    for (lVar6 = param_2 - lVar5; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    }
    FUN_1404210f0(unaff_RBX,*param_1,param_1[1] - *param_1);
    uVar9 = *param_1;
    if (uVar9 == 0) goto LAB_1400e7477;
    uVar7 = uVar9;
    puVar8 = auStack_38;
    if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar9) / 0x18) * 0x18)) {
      uVar7 = *(ulonglong *)(uVar9 - 8);
      uVar9 = (uVar9 - uVar7) - 8;
      puVar8 = auStack_38;
      if (0x1f < uVar9) goto LAB_1400e7468;
    }
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_RBX = FUN_14028af20(uVar4);
      goto LAB_1400e73c3;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1400e74b4;
    lVar5 = FUN_14028af20();
    if (lVar5 != 0) {
      unaff_RBX = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar5;
      goto LAB_1400e73c3;
    }
LAB_1400e7468:
    uVar7 = uVar9;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1400e7477;
  thunk_FUN_14028af80(uVar7);
LAB_1400e7477:
  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBX + param_2 * 0x18;
  param_1[2] = uVar4 + unaff_RBX;
  return;
}

