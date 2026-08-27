// Function: FUN_140077960
// Addr: 140077960
// Size: 609 bytes


ulonglong FUN_140077960(ulonglong *param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  ulonglong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  
  puVar8 = auStack_98;
  uVar7 = param_1[1];
  if (uVar7 != param_1[2]) {
    FUN_140016fc0(uVar7);
    *(undefined4 *)(uVar7 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_140016fc0(uVar7 + 0x28,param_2 + 0x28);
    uVar7 = param_1[1];
    param_1[1] = uVar7 + 0x48;
    return uVar7;
  }
  lVar3 = uVar7 - *param_1;
  lVar3 = lVar3 / 0x12 + (lVar3 >> 0x3f);
  uVar10 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  if (uVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar9 = ((longlong)(param_1[2] - *param_1) >> 3) * -0x71c71c71c71c71c7;
  uVar2 = 0x38e38e38e38e38e - (uVar9 >> 1);
  if (uVar2 <= uVar9 && uVar9 - uVar2 != 0) {
LAB_140077bbd:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar2 = uVar10 + 1;
  uVar9 = (uVar9 >> 1) + uVar9;
  uVar5 = uVar2;
  if (uVar2 <= uVar9) {
    uVar5 = uVar9;
  }
  if (0x38e38e38e38e38e < uVar5) goto LAB_140077bbd;
  uVar9 = uVar5 * 0x48;
  if (uVar9 == 0) {
    unaff_RSI = 0;
LAB_140077a82:
    uVar10 = unaff_RSI + uVar10 * 0x48;
    local_58 = uVar10 + 0x48;
    local_78 = param_1;
    local_68 = uVar5;
    FUN_140016fc0(uVar10,param_2);
    *(undefined4 *)(uVar10 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_140016fc0(uVar10 + 0x28,param_2 + 0x28);
    uVar6 = param_1[1];
    uVar4 = *param_1;
    uVar5 = unaff_RSI;
    local_60 = uVar10;
    if (uVar7 != uVar6) {
      FUN_14007c690(*param_1,uVar7,unaff_RSI);
      uVar6 = param_1[1];
      uVar5 = uVar10 + 0x48;
      uVar4 = uVar7;
      local_60 = unaff_RSI;
    }
    FUN_14007c690(uVar4,uVar6,uVar5);
    uVar7 = *param_1;
    local_70 = 0;
    if (uVar7 == 0) goto LAB_140077b7b;
    uVar5 = param_1[1];
    for (; uVar7 != uVar5; uVar7 = uVar7 + 0x48) {
      FUN_140017240(uVar7 + 0x28);
      FUN_140017240(uVar7);
    }
    uVar7 = *param_1;
    uVar5 = uVar7;
    puVar8 = auStack_98;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar7) >> 3) * 8)) &&
       (uVar5 = *(ulonglong *)(uVar7 - 8), puVar8 = auStack_98, 0x1f < (uVar7 - uVar5) - 8))
    goto LAB_140077b69;
  }
  else {
    if (uVar9 < 0x1000) {
      unaff_RSI = FUN_14028af20(uVar9);
      goto LAB_140077a82;
    }
    if (uVar9 + 0x27 <= uVar9) goto LAB_140077bbd;
    lVar3 = FUN_14028af20();
    if (lVar3 != 0) {
      unaff_RSI = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar3;
      goto LAB_140077a82;
    }
LAB_140077b69:
    uVar5 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_90;
  }
  *(undefined8 *)(puVar8 + -8) = 0x140077b7b;
  thunk_FUN_14028af80(uVar5);
LAB_140077b7b:
  *param_1 = unaff_RSI;
  param_1[1] = unaff_RSI + uVar2 * 0x48;
  param_1[2] = uVar9 + unaff_RSI;
  *(undefined8 *)(puVar8 + -8) = 0x140077ba3;
  FUN_14007d100(puVar8 + 0x20);
  return uVar10;
}

