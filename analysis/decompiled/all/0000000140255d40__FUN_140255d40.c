// Function: FUN_140255d40
// Addr: 140255d40
// Size: 533 bytes


undefined4 * FUN_140255d40(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *unaff_RSI;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *unaff_R15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar5 = *param_1;
  lVar8 = (param_1[1] - lVar5 >> 3) * 0x6db6db6db6db6db7;
  if (lVar8 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = (param_1[2] - lVar5 >> 3) * 0x6db6db6db6db6db7;
  uVar2 = 0x492492492492492 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_140255f51:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar8 + 1;
  uVar4 = uVar2;
  if (uVar2 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x492492492492492 < uVar4) goto LAB_140255f51;
  uVar3 = uVar4 * 0x38;
  if (uVar3 == 0) {
    unaff_RSI = (undefined4 *)0x0;
LAB_140255e1f:
    unaff_R15 = unaff_RSI + ((param_2 - lVar5) / 0x38) * 0xe;
    *unaff_R15 = *param_3;
    unaff_R15[1] = param_3[1];
    unaff_R15[2] = param_3[2];
    *(undefined8 *)(unaff_R15 + 4) = *(undefined8 *)(param_3 + 4);
    FUN_140016fc0(unaff_R15 + 6,param_3 + 6);
    lVar5 = param_1[1];
    lVar8 = *param_1;
    puVar7 = unaff_RSI;
    if (param_2 != lVar5) {
      FUN_140256370(*param_1,param_2,unaff_RSI);
      lVar5 = param_1[1];
      puVar7 = unaff_R15 + 0xe;
      lVar8 = param_2;
    }
    FUN_140256370(lVar8,lVar5,puVar7);
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_140255f14;
    lVar8 = param_1[1];
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0x38) {
      FUN_140017240(lVar5 + 0x18);
    }
    lVar5 = *param_1;
    lVar8 = lVar5;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar5 >> 3) * 8)) &&
       (lVar8 = *(longlong *)(lVar5 + -8), puVar6 = auStack_48, 0x1f < (lVar5 - lVar8) - 8U))
    goto LAB_140255f02;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_RSI = (undefined4 *)FUN_14028af20(uVar3);
      goto LAB_140255e1f;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_140255f51;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RSI = (undefined4 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_RSI + -2) = lVar8;
      goto LAB_140255e1f;
    }
LAB_140255f02:
    lVar8 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
  }
  *(undefined8 *)(puVar6 + -8) = 0x140255f14;
  thunk_FUN_14028af80(lVar8);
LAB_140255f14:
  *param_1 = (longlong)unaff_RSI;
  param_1[1] = (longlong)(unaff_RSI + uVar2 * 0xe);
  param_1[2] = (longlong)(unaff_RSI + uVar4 * 0xe);
  return unaff_R15;
}

