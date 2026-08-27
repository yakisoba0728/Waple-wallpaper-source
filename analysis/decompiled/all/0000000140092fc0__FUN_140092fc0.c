// Function: FUN_140092fc0
// Addr: 140092fc0
// Size: 497 bytes


void FUN_140092fc0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong unaff_R14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  for (; (uVar5 == uVar4 || (uVar5 < 8)); uVar5 = uVar5 * 2) {
    if (0x3ffffffffffffff - uVar5 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140082f20();
    }
  }
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar5) {
LAB_1400931a7:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = uVar5 * 8;
  if (uVar3 == 0) {
    unaff_R14 = 0;
LAB_14009307a:
    uVar3 = uVar5 >> 1;
    lVar2 = uVar4 * 8;
    for (; uVar5 <= uVar3; uVar5 = uVar5 * 2) {
    }
    uVar5 = uVar5 - *(longlong *)(param_1 + 0x10);
    lVar7 = (*(longlong *)(param_1 + 0x10) - uVar4) * 8;
    FUN_1404210f0(lVar2 + unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar7);
    lVar7 = lVar7 + lVar2 + unaff_R14;
    if (uVar5 < uVar4) {
      lVar2 = uVar5 * 8;
      FUN_1404210f0(lVar7,*(undefined8 *)(param_1 + 8),lVar2);
      lVar7 = (uVar4 - uVar5) * 8;
      FUN_1404210f0(unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar7);
      uVar4 = unaff_R14 + lVar7;
    }
    else {
      FUN_1404210f0(lVar7,*(undefined8 *)(param_1 + 8),lVar2);
      FUN_1404217a0(lVar7 + lVar2,0,(uVar5 - uVar4) * 8);
      uVar4 = unaff_R14;
    }
    FUN_1404217a0(uVar4,0,lVar2);
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) goto LAB_14009318e;
    lVar7 = lVar2;
    puVar6 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar7 = *(longlong *)(lVar2 + -8), puVar6 = auStack_38, 0x1f < (lVar2 - lVar7) - 8U))
    goto LAB_14009317c;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_R14 = FUN_14028af20();
      goto LAB_14009307a;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_1400931a7;
    lVar2 = FUN_14028af20(uVar3 + 0x27);
    if (lVar2 != 0) {
      unaff_R14 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar2;
      goto LAB_14009307a;
    }
LAB_14009317c:
    lVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_30;
  }
  *(undefined8 *)(puVar6 + -8) = 0x14009318e;
  thunk_FUN_14028af80(lVar7);
LAB_14009318e:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar5;
  *(ulonglong *)(param_1 + 8) = unaff_R14;
  return;
}

