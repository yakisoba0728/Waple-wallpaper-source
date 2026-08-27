// Function: FUN_14007c720
// Addr: 14007c720
// Size: 484 bytes


longlong FUN_14007c720(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong unaff_RBP;
  ulonglong uVar8;
  longlong unaff_R13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = auStack_48;
  uVar6 = *param_1;
  if (param_1[1] - uVar6 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = (longlong)(param_1[2] - uVar6) >> 6;
  uVar1 = ((longlong)(param_1[1] - uVar6) >> 6) + 1;
  if (0x3ffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0xffffffffffffffc0;
    uVar4 = 0xffffffffffffffe7;
LAB_14007c7dc:
    lVar3 = FUN_14028af20(uVar4);
    if (lVar3 != 0) {
      unaff_RBP = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBP - 8) = lVar3;
      goto LAB_14007c800;
    }
LAB_14007c8af:
    pcVar2 = (code *)swi(0x29);
    uVar6 = (*pcVar2)(5);
    puVar7 = auStack_40;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x3ffffffffffffff < uVar8) {
LAB_14007c900:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar8 = uVar8 * 0x40;
    if (uVar8 == 0) {
      unaff_RBP = 0;
    }
    else {
      if (0xfff < uVar8) {
        uVar4 = uVar8 | 0x27;
        if (uVar4 <= uVar8) goto LAB_14007c900;
        goto LAB_14007c7dc;
      }
      unaff_RBP = FUN_14028af20();
    }
LAB_14007c800:
    uVar6 = param_2 - uVar6 & 0xffffffffffffffc0;
    unaff_R13 = uVar6 + unaff_RBP;
    FUN_140016fc0(unaff_R13,param_3);
    FUN_140016fc0((uVar6 | 0x20) + unaff_RBP,param_3 + 0x20);
    uVar4 = param_1[1];
    uVar5 = *param_1;
    uVar6 = unaff_RBP;
    if (param_2 != uVar4) {
      FUN_14007d630(*param_1,param_2,unaff_RBP);
      uVar4 = param_1[1];
      uVar6 = unaff_R13 + 0x40;
      uVar5 = param_2;
    }
    FUN_14007d630(uVar5,uVar4,uVar6);
    uVar6 = *param_1;
    if (uVar6 == 0) goto LAB_14007c8be;
    uVar4 = param_1[1];
    for (; uVar6 != uVar4; uVar6 = uVar6 + 0x40) {
      FUN_140017240(uVar6 + 0x20);
      FUN_140017240(uVar6);
    }
    uVar6 = *param_1;
    if ((0xfff < (param_1[2] - uVar6 & 0xffffffffffffffc0)) &&
       (lVar3 = uVar6 - *(ulonglong *)(uVar6 - 8), uVar6 = *(ulonglong *)(uVar6 - 8),
       puVar7 = auStack_48, 0x1f < lVar3 - 8U)) goto LAB_14007c8af;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14007c8be;
  thunk_FUN_14028af80(uVar6);
LAB_14007c8be:
  *param_1 = unaff_RBP;
  param_1[1] = uVar1 * 0x40 + unaff_RBP;
  param_1[2] = uVar8 + unaff_RBP;
  return unaff_R13;
}

