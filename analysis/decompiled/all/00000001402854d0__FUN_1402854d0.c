// Function: FUN_1402854d0
// Addr: 1402854d0
// Size: 597 bytes


undefined8 * FUN_1402854d0(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140285e60(param_1 + 2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar4 = *param_2;
  lVar7 = param_2[1];
  if (lVar4 != lVar7) {
    do {
      local_res8[0] = FUN_14028a670(lVar4);
      FUN_14007b9c0(param_1 + 2,local_res8);
      lVar7 = param_2[1];
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar7);
  }
  lVar4 = param_1[5];
  lVar7 = lVar7 - *param_2 >> 3;
  lVar9 = param_1[6] - lVar4 >> 5;
  uVar8 = lVar7 * -0x5555555555555555;
  if (uVar8 < (ulonglong)(lVar9 * -0x3333333333333333)) {
    lVar4 = lVar7 * -0x5555555555555520 + lVar4;
LAB_1402856fd:
    param_1[6] = lVar4;
    return param_1;
  }
  if (uVar8 + lVar9 * 0x3333333333333333 == 0) {
    return param_1;
  }
  lVar4 = param_1[7] - lVar4 >> 5;
  uVar3 = lVar4 * -0x3333333333333333;
  if (uVar8 < uVar3 || uVar8 + lVar4 * 0x3333333333333333 == 0) {
    lVar4 = FUN_140285f50(param_1[6],uVar8 + lVar9 * 0x3333333333333333);
    goto LAB_1402856fd;
  }
  if (0x199999999999999 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar2 = 0x199999999999999 - (uVar3 >> 1);
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar2 = uVar8;
    if ((uVar8 <= uVar3) && (uVar2 = uVar3, 0x199999999999999 < uVar3)) {
LAB_14028571b:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar2 = uVar2 * 0xa0;
    if (uVar2 != 0) {
      if (0xfff < uVar2) {
        uVar3 = uVar2 + 0x27;
        if (uVar3 <= uVar2) goto LAB_14028571b;
        goto LAB_140285630;
      }
      uVar6 = FUN_14028af20(uVar2);
    }
LAB_140285657:
    FUN_140285f50(lVar9 * 0x20 + uVar6,uVar8 + lVar9 * 0x3333333333333333);
    FUN_1404210f0(uVar6,param_1[5],param_1[6] - param_1[5]);
    lVar4 = param_1[5];
    if (lVar4 == 0) goto LAB_1402856d2;
    if ((0xfff < (ulonglong)((param_1[7] - lVar4 >> 5) << 5)) &&
       (lVar9 = lVar4 - *(longlong *)(lVar4 + -8), lVar4 = *(longlong *)(lVar4 + -8),
       puVar5 = auStack_48, 0x1f < lVar9 - 8U)) goto LAB_1402856c0;
  }
  else {
    uVar2 = 0xffffffffffffffa0;
    uVar3 = 0xffffffffffffffc7;
LAB_140285630:
    lVar4 = FUN_14028af20(uVar3);
    if (lVar4 != 0) {
      uVar6 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar4;
      goto LAB_140285657;
    }
LAB_1402856c0:
    lVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_40;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1402856d2;
  thunk_FUN_14028af80(lVar4);
LAB_1402856d2:
  param_1[5] = uVar6;
  param_1[6] = lVar7 * -0x5555555555555520 + uVar6;
  param_1[7] = uVar2 + uVar6;
  return param_1;
}

