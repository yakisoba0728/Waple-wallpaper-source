// Function: FUN_1400ce030
// Addr: 1400ce030
// Size: 500 bytes


void FUN_1400ce030(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong unaff_R14;
  ulonglong uVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 1;
  if (uVar7 != 0) {
    uVar4 = uVar7;
  }
  for (; (uVar4 == uVar7 || (uVar4 < 8)); uVar4 = uVar4 * 2) {
    if (0xfffffffffffffff - uVar4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140082f20();
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar4) {
LAB_1400ce21a:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar3 = uVar4 * 8;
  if (uVar3 == 0) {
    unaff_R14 = 0;
LAB_1400ce0ea:
    uVar7 = uVar7 >> 1;
    uVar3 = uVar4 >> 1;
    lVar2 = uVar7 * 8;
    for (; uVar4 <= uVar3; uVar4 = uVar4 * 2) {
    }
    uVar4 = uVar4 - *(longlong *)(param_1 + 0x10);
    lVar6 = (*(longlong *)(param_1 + 0x10) - uVar7) * 8;
    FUN_1404210f0(lVar2 + unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar6);
    lVar6 = lVar6 + lVar2 + unaff_R14;
    if (uVar4 < uVar7) {
      lVar2 = uVar4 * 8;
      FUN_1404210f0(lVar6,*(undefined8 *)(param_1 + 8),lVar2);
      lVar6 = (uVar7 - uVar4) * 8;
      FUN_1404210f0(unaff_R14,*(longlong *)(param_1 + 8) + lVar2,lVar6);
      uVar7 = unaff_R14 + lVar6;
    }
    else {
      FUN_1404210f0(lVar6,*(undefined8 *)(param_1 + 8),lVar2);
      FUN_1404217a0(lVar6 + lVar2,0,(uVar4 - uVar7) * 8);
      uVar7 = unaff_R14;
    }
    FUN_1404217a0(uVar7,0,lVar2);
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) goto LAB_1400ce201;
    lVar6 = lVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar6 = *(longlong *)(lVar2 + -8), puVar5 = auStack_38, 0x1f < (lVar2 - lVar6) - 8U))
    goto LAB_1400ce1ef;
  }
  else {
    if (uVar3 < 0x1000) {
      unaff_R14 = FUN_14028af20();
      goto LAB_1400ce0ea;
    }
    if (uVar3 + 0x27 <= uVar3) goto LAB_1400ce21a;
    lVar2 = FUN_14028af20(uVar3 + 0x27);
    if (lVar2 != 0) {
      unaff_R14 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_R14 - 8) = lVar2;
      goto LAB_1400ce0ea;
    }
LAB_1400ce1ef:
    lVar6 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_30;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1400ce201;
  thunk_FUN_14028af80(lVar6);
LAB_1400ce201:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar4;
  *(ulonglong *)(param_1 + 8) = unaff_R14;
  return;
}

