// Function: FUN_140136aa0
// Addr: 140136aa0
// Size: 426 bytes


void FUN_140136aa0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar5 = auStack_58;
  puVar6 = auStack_58;
  uVar7 = *param_1;
  uVar3 = (longlong)(param_1[2] - uVar7) >> 3;
  if (param_3 <= uVar3) {
    uVar3 = (longlong)(param_1[1] - uVar7) >> 3;
    if (uVar3 < param_3) {
      FUN_1404210f0(uVar7,param_2,uVar3 * 8);
      uVar7 = param_1[1];
      lVar2 = (param_3 - uVar3) * 8;
      FUN_1404210f0(uVar7,uVar3 * 8 + param_2,lVar2);
    }
    else {
      lVar2 = param_3 * 8;
      FUN_1404210f0(uVar7,param_2,lVar2);
    }
    goto LAB_140136c2b;
  }
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x1fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar3 < param_3) {
      uVar3 = param_3;
    }
  }
  if (uVar7 == 0) {
LAB_140136b57:
    if (0x1fffffffffffffff < uVar3) {
LAB_140136c40:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar3 = uVar3 * 8;
    if (uVar3 == 0) {
      uVar7 = 0;
      puVar6 = auStack_58;
    }
    else {
      if (0xfff < uVar3) {
        if (uVar3 + 0x27 <= uVar3) goto LAB_140136c40;
        lVar2 = FUN_14028af20();
        if (lVar2 == 0) goto LAB_140136b91;
        goto LAB_140136b98;
      }
      uVar7 = FUN_14028af20(uVar3);
    }
  }
  else {
    uVar4 = ((longlong)(param_1[2] - uVar7) >> 3) * 8;
    if (uVar4 < 0x1000) {
LAB_140136b3b:
      thunk_FUN_14028af80(uVar7,uVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_140136b57;
    }
    if ((uVar7 - *(ulonglong *)(uVar7 - 8)) - 8 < 0x20) {
      uVar4 = uVar4 + 0x27;
      uVar7 = *(ulonglong *)(uVar7 - 8);
      goto LAB_140136b3b;
    }
LAB_140136b91:
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar5 = auStack_50;
LAB_140136b98:
    uVar7 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar7 - 8) = lVar2;
    puVar6 = puVar5;
  }
  *param_1 = uVar7;
  param_1[1] = uVar7;
  lVar2 = param_3 * 8;
  param_1[2] = uVar3 + uVar7;
  *(undefined8 *)(puVar6 + -8) = 0x140136bd6;
  FUN_1404210f0(uVar7,param_2,lVar2);
LAB_140136c2b:
  param_1[1] = lVar2 + uVar7;
  return;
}

