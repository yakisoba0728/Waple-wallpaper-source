// Function: FUN_140092720
// Addr: 140092720
// Size: 631 bytes


void FUN_140092720(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong unaff_R14;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar6 = auStack_48;
  uVar9 = *(ulonglong *)(param_1 + 0x18);
  puVar7 = auStack_48;
  if ((((int)uVar9 + (int)*(longlong *)(param_1 + 0x20) & 1U) != 0) ||
     (uVar4 = *(ulonglong *)(param_1 + 0x10), puVar7 = auStack_48,
     *(longlong *)(param_1 + 0x20) + 2U >> 1 < uVar4)) goto LAB_140092913;
  uVar5 = 1;
  if (uVar4 != 0) {
    uVar5 = uVar4;
  }
  for (; (uVar5 == uVar4 || (uVar5 < 8)); uVar5 = uVar5 * 2) {
    if (0xfffffffffffffff - uVar5 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140082f20();
    }
  }
  if (0x1fffffffffffffff < uVar5) {
LAB_14009298d:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar4 = uVar5 * 8;
  if (uVar4 == 0) {
    unaff_R14 = 0;
LAB_140092808:
    uVar9 = uVar9 >> 1;
    uVar4 = uVar5 >> 1;
    lVar2 = uVar9 * 8;
    for (; uVar5 <= uVar4; uVar5 = uVar5 * 2) {
    }
    uVar5 = uVar5 - *(longlong *)(param_1 + 0x10);
    lVar8 = (*(longlong *)(param_1 + 0x10) - uVar9) * 8;
    FUN_1404210f0(lVar2 + unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar8);
    lVar8 = lVar8 + lVar2 + unaff_R14;
    if (uVar5 < uVar9) {
      lVar2 = uVar5 * 8;
      FUN_1404210f0(lVar8,*(undefined8 *)(param_1 + 8),lVar2);
      lVar8 = (uVar9 - uVar5) * 8;
      FUN_1404210f0(unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar8);
      uVar9 = unaff_R14 + lVar8;
    }
    else {
      FUN_1404210f0(lVar8,*(undefined8 *)(param_1 + 8),lVar2);
      FUN_1404217a0(lVar8 + lVar2,0,(uVar5 - uVar9) * 8);
      uVar9 = unaff_R14;
    }
    FUN_1404217a0(uVar9,0,lVar2);
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar8 = lVar2;
      puVar6 = auStack_48;
      if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
         (lVar8 = *(longlong *)(lVar2 + -8), puVar6 = auStack_48, 0x1f < (lVar2 - lVar8) - 8U))
      goto LAB_1400928f9;
      goto LAB_140092903;
    }
  }
  else {
    if (uVar4 < 0x1000) {
      unaff_R14 = FUN_14028af20();
      goto LAB_140092808;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_14009298d;
    lVar2 = FUN_14028af20(uVar4 + 0x27);
    if (lVar2 != 0) {
      unaff_R14 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar2;
      goto LAB_140092808;
    }
LAB_1400928f9:
    lVar8 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar6 = auStack_40;
LAB_140092903:
    *(undefined8 *)(puVar6 + -8) = 0x14009290b;
    thunk_FUN_14028af80(lVar8);
  }
  *(ulonglong *)(param_1 + 8) = unaff_R14;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar5;
  puVar7 = puVar6;
LAB_140092913:
  *(ulonglong *)(param_1 + 0x18) =
       *(ulonglong *)(param_1 + 0x18) & *(longlong *)(param_1 + 0x10) * 2 - 1U;
  uVar9 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
  uVar4 = uVar9 >> 1;
  uVar5 = *(longlong *)(param_1 + 0x10) - 1U & uVar4;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar5 * 8) == 0) {
    *(undefined8 *)(puVar7 + -8) = 0x14009294d;
    uVar3 = FUN_14028af20(0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar5 * 8) = uVar3;
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar4) * 8) +
   (ulonglong)((uint)uVar9 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

