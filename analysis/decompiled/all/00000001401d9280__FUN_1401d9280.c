// Function: FUN_1401d9280
// Addr: 1401d9280
// Size: 395 bytes


void FUN_1401d9280(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar6 = auStack_48;
  puVar7 = auStack_48;
  lVar3 = param_1[1];
  lVar5 = *param_1;
  lVar8 = lVar3 - lVar5 >> 2;
  if (param_2 < (ulonglong)(lVar8 * -0x5555555555555555)) {
    param_1[1] = lVar5 + param_2 * 0xc;
    return;
  }
  if ((ulonglong)(lVar8 * -0x5555555555555555) < param_2) {
    uVar4 = (param_1[2] - lVar5 >> 2) * -0x5555555555555555;
    if (param_2 <= uVar4) {
      lVar5 = param_2 + lVar8 * 0x5555555555555555;
      if (lVar5 != 0) {
        lVar5 = lVar5 * 0xc;
        FUN_1404217a0(lVar3,0,lVar5);
        lVar3 = lVar3 + lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    if (0x1555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar2 = 0x1555555555555555 - (uVar4 >> 1);
    if ((uVar2 <= uVar4 && uVar4 - uVar2 != 0) ||
       ((uVar4 = (uVar4 >> 1) + uVar4, uVar2 = param_2, param_2 <= uVar4 &&
        (uVar2 = uVar4, 0x1555555555555555 < uVar4)))) {
LAB_1401d9401:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar4 = uVar2 * 0xc;
    if (uVar4 == 0) {
      uVar4 = 0;
      puVar7 = auStack_48;
    }
    else if (uVar4 < 0x1000) {
      uVar4 = FUN_14028af20();
    }
    else {
      if (uVar4 + 0x27 <= uVar4) goto LAB_1401d9401;
      lVar3 = FUN_14028af20(uVar4 + 0x27);
      if (lVar3 == 0) {
        pcVar1 = (code *)swi(0x29);
        lVar3 = (*pcVar1)(5);
        puVar6 = auStack_40;
      }
      uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar3;
      puVar7 = puVar6;
    }
    lVar3 = param_2 + lVar8 * 0x5555555555555555;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar7 + -8) = 0x1401d93a0;
      FUN_1404217a0(uVar4 + lVar8 * 4,0,lVar3 * 0xc);
    }
    lVar3 = *param_1;
    lVar5 = param_1[1];
    *(undefined8 *)(puVar7 + -8) = 0x1401d93b2;
    FUN_1404210f0(uVar4,lVar3,lVar5 - lVar3);
    *(undefined8 *)(puVar7 + -8) = 0x1401d93c3;
    FUN_1401dc9c0(param_1,uVar4,param_2,uVar2);
  }
  return;
}

