// Function: FUN_140269e40
// Addr: 140269e40
// Size: 621 bytes


longlong FUN_140269e40(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  uVar7 = *param_1;
  lVar4 = ((longlong)(param_1[1] - uVar7) >> 3) * -0x7d05f417d05f417d;
  if (lVar4 == 0xbe82fa0be82fa0) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar1 = lVar4 + 1;
  uVar6 = ((longlong)(param_1[2] - uVar7) >> 3) * -0x7d05f417d05f417d;
  uVar5 = 0xbe82fa0be82fa0 - (uVar6 >> 1);
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar5 = uVar1;
    if (uVar1 <= uVar6) {
      uVar5 = uVar6;
    }
    if (0xbe82fa0be82fa0 < uVar5) {
LAB_14026a0a9:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar5 = uVar5 * 0x158;
    if (uVar5 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar5) {
        uVar6 = uVar5 + 0x27;
        if (uVar6 <= uVar5) goto LAB_14026a0a9;
        goto LAB_140269f04;
      }
      unaff_RSI = FUN_14028af20(uVar5);
    }
LAB_140269f2b:
    unaff_R13 = ((longlong)(param_2 - uVar7) / 0x158) * 0x158 + unaff_RSI;
    FUN_14026be00(unaff_R13,param_3);
    uVar7 = param_1[1];
    uVar6 = *param_1;
    uVar3 = unaff_RSI;
    if (param_2 == uVar7) {
      for (; uVar6 != uVar7; uVar6 = uVar6 + 0x158) {
        FUN_14026be00(uVar3,uVar6);
        uVar3 = uVar3 + 0x158;
      }
    }
    else {
      for (; uVar6 != param_2; uVar6 = uVar6 + 0x158) {
        FUN_14026be00(uVar3,uVar6);
        uVar3 = uVar3 + 0x158;
      }
      uVar7 = param_1[1];
      lVar4 = unaff_R13;
      for (; param_2 != uVar7; param_2 = param_2 + 0x158) {
        lVar4 = lVar4 + 0x158;
        FUN_14026be00(lVar4,param_2);
      }
    }
    uVar7 = *param_1;
    if (uVar7 == 0) goto LAB_14026a069;
    uVar6 = param_1[1];
    for (; uVar7 != uVar6; uVar7 = uVar7 + 0x158) {
      FUN_1401dce00(uVar7);
    }
    uVar7 = *param_1;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar7) >> 3) * 8)) &&
       (lVar4 = uVar7 - *(ulonglong *)(uVar7 - 8), uVar7 = *(ulonglong *)(uVar7 - 8),
       puVar8 = auStack_48, 0x1f < lVar4 - 8U)) goto LAB_14026a057;
  }
  else {
    uVar5 = 0xffffffffffffff00;
    uVar6 = 0xffffffffffffff27;
LAB_140269f04:
    lVar4 = FUN_14028af20(uVar6);
    if (lVar4 != 0) {
      unaff_RSI = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar4;
      goto LAB_140269f2b;
    }
LAB_14026a057:
    uVar7 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_40;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14026a069;
  thunk_FUN_14028af80(uVar7);
LAB_14026a069:
  *param_1 = unaff_RSI;
  param_1[1] = uVar1 * 0x158 + unaff_RSI;
  param_1[2] = uVar5 + unaff_RSI;
  return unaff_R13;
}

