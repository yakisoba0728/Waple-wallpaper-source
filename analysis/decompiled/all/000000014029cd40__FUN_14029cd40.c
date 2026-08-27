// Function: FUN_14029cd40
// Addr: 14029cd40
// Size: 539 bytes


ulonglong *
FUN_14029cd40(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined2 local_20;
  
  puVar8 = auStack_48;
  uVar12 = param_1[2];
  uVar9 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar12 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar11 = param_1[3];
  uVar6 = uVar12 + param_2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar11 <= 0x7ffffffffffffffe - (uVar11 >> 1))) {
    uVar2 = uVar11 + (uVar11 >> 1);
    uVar9 = uVar6;
    if (uVar6 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffff < uVar9 + 1) goto LAB_14029cf57;
    uVar6 = (uVar9 + 1) * 2;
    if (uVar6 != 0) goto LAB_14029cdda;
    unaff_RSI = 0;
LAB_14029ce17:
    if ((7 < param_1[3]) && (DAT_140472230 != '\0')) {
      uVar3 = *param_1;
      uVar6 = uVar3 + (param_1[3] + 1) * 2;
      uVar7 = uVar6 + 7 & 0xfffffffffffffff8;
      uVar2 = uVar3 + (param_1[2] + 1) * 2;
      uVar10 = uVar7;
      if (uVar2 <= uVar7) {
        uVar10 = uVar2;
      }
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      _guard_check_icall(uVar3,uVar7,uVar10,uVar6);
    }
    local_20 = param_6;
    local_28 = param_5;
    param_1[2] = uVar12 + param_2;
    param_1[3] = uVar9;
    if (uVar11 < 8) {
      FUN_14029de40(unaff_RSI,param_1,uVar12,param_4);
      goto LAB_14029cedc;
    }
    uVar9 = *param_1;
    FUN_14029de40(unaff_RSI,uVar9,uVar12,param_4);
    puVar8 = auStack_48;
    if (0xfff < uVar11 * 2 + 2) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar11 * 2 + 0x29);
        puVar8 = auStack_48;
        goto LAB_14029cedc;
      }
      goto LAB_14029cec3;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_14029cdda:
    if (uVar6 < 0x1000) {
      unaff_RSI = FUN_14028af20();
      goto LAB_14029ce17;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_14029cf57:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar5 = FUN_14028af20(uVar6 + 0x27);
    if (lVar5 != 0) {
      unaff_RSI = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar5;
      goto LAB_14029ce17;
    }
LAB_14029cec3:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_40;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14029ced2;
  thunk_FUN_14028af80(uVar9);
LAB_14029cedc:
  *param_1 = unaff_RSI;
  uVar12 = param_1[3];
  if ((7 < uVar12) && (DAT_140472230 != '\0')) {
    uVar9 = unaff_RSI + (uVar12 + 1) * 2;
    uVar6 = uVar12 * 2 + 9 + unaff_RSI & 0xfffffffffffffff8;
    uVar12 = unaff_RSI + (param_1[2] + 1) * 2;
    uVar11 = uVar6;
    if (uVar9 <= uVar6) {
      uVar11 = uVar9;
    }
    if (uVar6 < uVar12) {
      uVar12 = uVar6;
    }
    *(undefined8 *)(puVar8 + -8) = 0x14029cf30;
    _guard_check_icall(unaff_RSI,uVar6,uVar11,uVar12);
  }
  return param_1;
}

