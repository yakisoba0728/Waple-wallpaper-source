// Function: FUN_1401410a0
// Addr: 1401410a0
// Size: 484 bytes


longlong FUN_1401410a0(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  ulonglong unaff_RSI;
  longlong unaff_R13;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar12 = auStack_48;
  uVar8 = *param_1;
  if (param_1[1] - uVar8 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar9 = (longlong)(param_1[2] - uVar8) >> 6;
  uVar1 = ((longlong)(param_1[1] - uVar8) >> 6) + 1;
  if (0x3ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar13 = 0xffffffffffffffc0;
    uVar9 = 0xffffffffffffffe7;
LAB_140141156:
    lVar6 = FUN_14028af20(uVar9);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_14014117a;
    }
LAB_140141234:
    pcVar5 = (code *)swi(0x29);
    uVar8 = (*pcVar5)(5);
    puVar12 = auStack_40;
  }
  else {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (0x3ffffffffffffff < uVar13) {
LAB_140141280:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar13 = uVar13 * 0x40;
    if (uVar13 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar13) {
        uVar9 = uVar13 | 0x27;
        if (uVar9 <= uVar13) goto LAB_140141280;
        goto LAB_140141156;
      }
      unaff_RSI = FUN_14028af20();
    }
LAB_14014117a:
    unaff_R13 = (param_2 - uVar8 & 0xffffffffffffffc0) + unaff_RSI;
    *(undefined8 *)(unaff_R13 + 0x38) = 0;
    puVar2 = *(undefined8 **)(param_3 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar2)(puVar2,unaff_R13);
      *(undefined8 *)(unaff_R13 + 0x38) = uVar7;
    }
    uVar9 = param_1[1];
    uVar10 = *param_1;
    uVar8 = unaff_RSI;
    if (param_2 != uVar9) {
      FUN_140141320(*param_1,param_2,unaff_RSI);
      uVar9 = param_1[1];
      uVar8 = unaff_R13 + 0x40;
      uVar10 = param_2;
    }
    FUN_140141320(uVar10,uVar9,uVar8);
    plVar11 = (longlong *)*param_1;
    if (plVar11 == (longlong *)0x0) goto LAB_140141243;
    plVar3 = (longlong *)param_1[1];
    for (; plVar11 != plVar3; plVar11 = plVar11 + 8) {
      plVar4 = (longlong *)plVar11[7];
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar11);
        plVar11[7] = 0;
      }
    }
    uVar8 = *param_1;
    if ((0xfff < (param_1[2] - uVar8 & 0xffffffffffffffc0)) &&
       (lVar6 = uVar8 - *(ulonglong *)(uVar8 - 8), uVar8 = *(ulonglong *)(uVar8 - 8),
       puVar12 = auStack_48, 0x1f < lVar6 - 8U)) goto LAB_140141234;
  }
  *(undefined8 *)(puVar12 + -8) = 0x140141243;
  thunk_FUN_14028af80(uVar8);
LAB_140141243:
  *param_1 = unaff_RSI;
  param_1[1] = uVar1 * 0x40 + unaff_RSI;
  param_1[2] = uVar13 + unaff_RSI;
  return unaff_R13;
}

