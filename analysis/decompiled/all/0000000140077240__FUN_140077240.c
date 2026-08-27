// Function: FUN_140077240
// Addr: 140077240
// Size: 1041 bytes


void FUN_140077240(ulonglong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong unaff_R14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  ulonglong local_78;
  ulonglong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  puVar7 = auStack_98;
  uVar6 = *param_1;
  lVar11 = (longlong)(param_3 - uVar6) >> 3;
  uVar12 = lVar11 * -0x71c71c71c71c71c7;
  param_5 = param_5 - param_4;
  local_78 = uVar12;
  puVar8 = auStack_98;
  if (param_5 == 0) goto LAB_140077619;
  uVar5 = param_1[1];
  lVar9 = param_5 >> 3;
  uVar10 = lVar9 * -0x71c71c71c71c71c7;
  uVar3 = (longlong)(param_1[2] - uVar5) / 0x48;
  if (uVar10 < uVar3 || uVar10 - uVar3 == 0) {
    lVar11 = lVar9 * 8;
    if (uVar10 < (ulonglong)(((longlong)(uVar5 - param_3) >> 3) * -0x71c71c71c71c71c7)) {
      uVar6 = uVar5 + lVar9 * -8;
      lVar9 = lVar11;
      uVar12 = FUN_14007c690(uVar6,uVar5,uVar5);
      param_1[1] = uVar12;
      while (uVar6 != param_3) {
        FUN_14000de40(uVar5 - 0x48,uVar6 - 0x48);
        *(undefined4 *)(uVar5 - 0x28) = *(undefined4 *)(uVar6 - 0x28);
        FUN_14000de40(uVar5 - 0x20,uVar6 - 0x20);
        uVar5 = uVar5 - 0x48;
        uVar6 = uVar6 - 0x48;
        lVar9 = lVar11;
      }
      uVar6 = param_3;
      if (lVar9 != 0) {
        do {
          FUN_140017240(uVar6 + 0x28);
          FUN_140017240(uVar6);
          uVar6 = uVar6 + 0x48;
        } while (uVar6 != lVar9 + param_3);
      }
      FUN_14007c620(param_4,uVar10,param_3);
      puVar8 = auStack_98;
      uVar12 = local_78;
    }
    else {
      uVar6 = FUN_14007c690(param_3,uVar5,lVar11 + param_3);
      param_1[1] = uVar6;
      for (uVar6 = param_3; uVar6 != uVar5; uVar6 = uVar6 + 0x48) {
        FUN_140017240(uVar6 + 0x28);
        FUN_140017240(uVar6);
      }
      FUN_14007c620(param_4,uVar10,param_3);
      puVar8 = auStack_98;
    }
    goto LAB_140077619;
  }
  lVar9 = (longlong)(uVar5 - uVar6) >> 3;
  uVar3 = lVar9 * 0x71c71c71c71c71c7 + 0x38e38e38e38e38e;
  if (uVar3 <= uVar10 && uVar10 - uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar3 = ((longlong)(param_1[2] - uVar6) >> 3) * -0x71c71c71c71c71c7;
  uVar4 = 0x38e38e38e38e38e - (uVar3 >> 1);
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
LAB_140077647:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = lVar9 * -0x71c71c71c71c71c7 + uVar10;
  uVar3 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x38e38e38e38e38e < uVar4) goto LAB_140077647;
  local_78 = uVar4 * 0x48;
  if (local_78 == 0) {
    unaff_R14 = 0;
LAB_1400773a9:
    uVar3 = unaff_R14 + (uVar10 + uVar12) * 0x48;
    uVar1 = unaff_R14 + lVar11 * 8;
    local_70 = param_1;
    local_60 = uVar4;
    local_50 = uVar3;
    FUN_14007c620(param_4,uVar10,uVar1);
    local_58 = uVar1;
    if ((param_5 != 0x48) || (uVar10 = unaff_R14, param_3 != uVar5)) {
      FUN_14007c690(uVar6,param_3,unaff_R14);
      uVar6 = param_3;
      uVar10 = uVar3;
      local_58 = unaff_R14;
    }
    FUN_14007c690(uVar6,uVar5,uVar10);
    uVar6 = *param_1;
    local_68 = 0;
    if (uVar6 != 0) {
      uVar5 = param_1[1];
      for (; uVar6 != uVar5; uVar6 = uVar6 + 0x48) {
        FUN_140017240(uVar6 + 0x28);
        FUN_140017240(uVar6);
      }
      uVar6 = *param_1;
      uVar5 = uVar6;
      puVar7 = auStack_98;
      if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar6) >> 3) * 8)) &&
         (uVar5 = *(ulonglong *)(uVar6 - 8), puVar7 = auStack_98, 0x1f < (uVar6 - uVar5) - 8))
      goto LAB_1400774b4;
      goto LAB_1400774be;
    }
  }
  else {
    if (local_78 < 0x1000) {
      unaff_R14 = FUN_14028af20(local_78);
      goto LAB_1400773a9;
    }
    if (local_78 + 0x27 <= local_78) goto LAB_140077647;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      unaff_R14 = lVar9 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar9;
      goto LAB_1400773a9;
    }
LAB_1400774b4:
    uVar5 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar7 = auStack_90;
LAB_1400774be:
    *(undefined8 *)(puVar7 + -8) = 0x1400774c6;
    thunk_FUN_14028af80(uVar5);
  }
  lVar11 = *(longlong *)(puVar7 + 0xb8);
  *param_1 = unaff_R14;
  lVar9 = *(longlong *)(puVar7 + 0x20);
  param_1[1] = unaff_R14 + lVar11 * 0x48;
  param_1[2] = lVar9 + unaff_R14;
  *(undefined8 *)(puVar7 + -8) = 0x1400774f3;
  FUN_14007d100(puVar7 + 0x28);
  puVar8 = puVar7;
LAB_140077619:
  **(longlong **)(puVar8 + 0xa8) = *param_1 + uVar12 * 0x48;
  return;
}

