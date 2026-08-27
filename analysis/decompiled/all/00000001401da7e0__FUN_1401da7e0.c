// Function: FUN_1401da7e0
// Addr: 1401da7e0
// Size: 472 bytes


void FUN_1401da7e0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar8 = *param_1;
  uVar4 = ((longlong)(param_1[2] - uVar8) >> 3) * -0x5555555555555555;
  if (param_3 <= uVar4) {
    lVar3 = (longlong)(param_1[1] - uVar8) >> 3;
    if ((ulonglong)(lVar3 * -0x5555555555555555) < param_3) {
      FUN_1404210f0(uVar8,param_2,lVar3 * 8);
      uVar8 = param_1[1];
      lVar5 = (param_3 + lVar3 * 0x5555555555555555) * 0x18;
      FUN_1404210f0(uVar8,lVar3 * 8 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0x18;
      FUN_1404210f0(uVar8,param_2,lVar5);
    }
    goto LAB_1401da999;
  }
  if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar2 = 0xaaaaaaaaaaaaaaa - (uVar4 >> 1);
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar4 < param_3) {
      uVar4 = param_3;
    }
  }
  else {
    uVar4 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar8 == 0) {
LAB_1401da8ad:
    if (0xaaaaaaaaaaaaaaa < uVar4) {
LAB_1401da9ae:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar4 = uVar4 * 0x18;
    if (uVar4 == 0) {
      uVar8 = 0;
      puVar7 = auStack_58;
    }
    else {
      if (0xfff < uVar4) {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1401da9ae;
        lVar3 = FUN_14028af20();
        if (lVar3 == 0) goto LAB_1401da8eb;
        goto LAB_1401da8f2;
      }
      uVar8 = FUN_14028af20(uVar4);
    }
  }
  else {
    uVar2 = ((longlong)(param_1[2] - uVar8) >> 3) * 8;
    if (uVar2 < 0x1000) {
LAB_1401da891:
      thunk_FUN_14028af80(uVar8,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_1401da8ad;
    }
    if ((uVar8 - *(ulonglong *)(uVar8 - 8)) - 8 < 0x20) {
      uVar2 = uVar2 + 0x27;
      uVar8 = *(ulonglong *)(uVar8 - 8);
      goto LAB_1401da891;
    }
LAB_1401da8eb:
    pcVar1 = (code *)swi(0x29);
    lVar3 = (*pcVar1)(5);
    puVar6 = auStack_50;
LAB_1401da8f2:
    uVar8 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar3;
    puVar7 = puVar6;
  }
  *param_1 = uVar8;
  param_1[1] = uVar8;
  param_1[2] = uVar4 + uVar8;
  lVar5 = param_3 * 0x18;
  *(undefined8 *)(puVar7 + -8) = 0x1401da934;
  FUN_1404210f0(uVar8,param_2,lVar5);
LAB_1401da999:
  param_1[1] = lVar5 + uVar8;
  return;
}

