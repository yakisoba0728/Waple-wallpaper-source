// Function: FUN_1400132e0
// Addr: 1400132e0
// Size: 418 bytes


ulonglong *
FUN_1400132e0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined2 local_20;
  
  puVar9 = auStack_48;
  uVar3 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_140013478;
    uVar7 = (uVar8 + 1) * 2;
    if (uVar7 != 0) goto LAB_140013384;
    unaff_RSI = 0;
LAB_1400133bd:
    param_1[2] = uVar3 + param_2;
    param_1[3] = uVar8;
    if (uVar4 < 8) {
      local_20 = param_6;
      local_28 = param_5;
      FUN_140013200(unaff_RSI,param_1,uVar3,param_4);
      goto LAB_140013454;
    }
    uVar8 = *param_1;
    local_20 = param_6;
    local_28 = param_5;
    FUN_140013200(unaff_RSI,uVar8,uVar3,param_4);
    if (0xfff < uVar4 * 2 + 2) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar4 * 2 + 0x29);
        goto LAB_140013454;
      }
      goto LAB_140013424;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_140013384:
    if (uVar7 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_1400133bd;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_140013478:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar6 = FUN_14028af20(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_1400133bd;
    }
LAB_140013424:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140013433;
  thunk_FUN_14028af80(uVar8);
LAB_140013454:
  *param_1 = unaff_RSI;
  return param_1;
}

