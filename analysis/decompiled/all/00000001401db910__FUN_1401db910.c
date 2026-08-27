// Function: FUN_1401db910
// Addr: 1401db910
// Size: 500 bytes


longlong FUN_1401db910(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong unaff_RSI;
  longlong lVar8;
  longlong unaff_R13;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar6 = *param_1;
  lVar8 = ((longlong)(param_1[1] - uVar6) >> 3) * -0x1111111111111111;
  if (lVar8 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = ((longlong)(param_1[2] - uVar6) >> 3) * -0x1111111111111111;
  uVar2 = 0x222222222222222 - (uVar3 >> 1);
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
LAB_1401dbb00:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = (uVar3 >> 1) + uVar3;
  uVar2 = lVar8 + 1;
  uVar9 = uVar2;
  if (uVar2 <= uVar3) {
    uVar9 = uVar3;
  }
  if (0x222222222222222 < uVar9) goto LAB_1401dbb00;
  uVar9 = uVar9 * 0x78;
  if (uVar9 == 0) {
    unaff_RSI = 0;
LAB_1401db9ef:
    lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)(param_2 - uVar6)),8) +
            (param_2 - uVar6);
    lVar8 = -(lVar5 >> 0x3f);
    unaff_R13 = ((lVar5 >> 6) + lVar8) * 0x78 + unaff_RSI;
    FUN_1401dc3f0(lVar8,unaff_R13,param_3);
    uVar3 = param_1[1];
    uVar4 = *param_1;
    uVar6 = unaff_RSI;
    if (param_2 != uVar3) {
      FUN_1401dc460(*param_1,param_2,unaff_RSI);
      uVar3 = param_1[1];
      uVar6 = unaff_R13 + 0x78;
      uVar4 = param_2;
    }
    FUN_1401dc460(uVar4,uVar3,uVar6);
    uVar6 = *param_1;
    if (uVar6 == 0) goto LAB_1401dbac3;
    uVar3 = param_1[1];
    for (; uVar6 != uVar3; uVar6 = uVar6 + 0x78) {
      FUN_140017240(uVar6);
    }
    uVar6 = *param_1;
    uVar3 = uVar6;
    puVar7 = auStack_48;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar6) >> 3) * 8)) &&
       (uVar3 = *(ulonglong *)(uVar6 - 8), puVar7 = auStack_48, 0x1f < (uVar6 - uVar3) - 8))
    goto LAB_1401dbab1;
  }
  else {
    if (uVar9 < 0x1000) {
      unaff_RSI = FUN_14028af20(uVar9);
      goto LAB_1401db9ef;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_1401dbb00;
    lVar8 = FUN_14028af20();
    if (lVar8 != 0) {
      unaff_RSI = lVar8 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar8;
      goto LAB_1401db9ef;
    }
LAB_1401dbab1:
    uVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar7 = auStack_40;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401dbac3;
  thunk_FUN_14028af80(uVar3);
LAB_1401dbac3:
  *param_1 = unaff_RSI;
  param_1[1] = uVar2 * 0x78 + unaff_RSI;
  param_1[2] = uVar9 + unaff_RSI;
  return unaff_R13;
}

