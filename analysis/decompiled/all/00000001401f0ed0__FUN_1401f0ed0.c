// Function: FUN_1401f0ed0
// Addr: 1401f0ed0
// Size: 500 bytes


undefined4 * FUN_1401f0ed0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *unaff_RBP;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *unaff_R13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar6 = auStack_48;
  lVar5 = *param_1;
  if (param_1[1] - lVar5 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - lVar5 >> 6;
  uVar1 = (param_1[1] - lVar5 >> 6) + 1;
  if (0x3ffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar7 = 0xffffffffffffffc0;
    uVar4 = 0xffffffffffffffe7;
LAB_1401f0f8c:
    lVar3 = FUN_14028af20(uVar4);
    if (lVar3 != 0) {
      unaff_RBP = (undefined4 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RBP + -2) = lVar3;
      goto LAB_1401f0fb0;
    }
LAB_1401f106f:
    pcVar2 = (code *)swi(0x29);
    lVar5 = (*pcVar2)(5);
    puVar6 = auStack_40;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (0x3ffffffffffffff < uVar7) {
LAB_1401f10c0:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar7 = uVar7 * 0x40;
    if (uVar7 == 0) {
      unaff_RBP = (undefined4 *)0x0;
    }
    else {
      if (0xfff < uVar7) {
        uVar4 = uVar7 | 0x27;
        if (uVar4 <= uVar7) goto LAB_1401f10c0;
        goto LAB_1401f0f8c;
      }
      unaff_RBP = (undefined4 *)FUN_14028af20();
    }
LAB_1401f0fb0:
    uVar4 = param_2 - lVar5 & 0xffffffffffffffc0;
    unaff_R13 = (undefined4 *)(uVar4 + (longlong)unaff_RBP);
    *unaff_R13 = *param_3;
    FUN_140016fc0((uVar4 | 8) + (longlong)unaff_RBP,param_3 + 2);
    FUN_140031bf0((uVar4 | 0x28) + (longlong)unaff_RBP,param_3 + 10);
    lVar5 = param_1[1];
    lVar3 = *param_1;
    puVar8 = unaff_RBP;
    if (param_2 != lVar5) {
      FUN_1401f1700(*param_1,param_2,unaff_RBP);
      lVar5 = param_1[1];
      puVar8 = unaff_R13 + 0x10;
      lVar3 = param_2;
    }
    FUN_1401f1700(lVar3,lVar5,puVar8);
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_1401f107e;
    lVar3 = param_1[1];
    for (; lVar5 != lVar3; lVar5 = lVar5 + 0x40) {
      FUN_140031b80(lVar5 + 0x28);
      FUN_140017240(lVar5 + 8);
    }
    lVar5 = *param_1;
    if ((0xfff < (param_1[2] - lVar5 & 0xffffffffffffffc0U)) &&
       (lVar3 = lVar5 - *(longlong *)(lVar5 + -8), lVar5 = *(longlong *)(lVar5 + -8),
       puVar6 = auStack_48, 0x1f < lVar3 - 8U)) goto LAB_1401f106f;
  }
  *(undefined8 *)(puVar6 + -8) = 0x1401f107e;
  thunk_FUN_14028af80(lVar5);
LAB_1401f107e:
  *param_1 = (longlong)unaff_RBP;
  param_1[1] = (longlong)(unaff_RBP + uVar1 * 0x10);
  param_1[2] = uVar7 + (longlong)unaff_RBP;
  return unaff_R13;
}

