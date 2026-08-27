// Function: FUN_14017e790
// Addr: 14017e790
// Size: 374 bytes


void FUN_14017e790(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong *unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  if (*(longlong *)(param_1 + 0x1478) == *(longlong *)(param_1 + 0x1480)) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x1480) - *(longlong *)(param_1 + 0x1478);
  if (lVar4 == 0) {
    plVar8 = (longlong *)0x0;
    plVar9 = plVar8;
    plVar10 = plVar8;
LAB_14017e865:
    plVar3 = plVar8;
    if (*(longlong *)(param_1 + 0x1478) != *(longlong *)(param_1 + 0x1480)) {
      *(longlong *)(param_1 + 0x1480) = *(longlong *)(param_1 + 0x1478);
    }
    for (; plVar3 != plVar9; plVar3 = plVar3 + 1) {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    if ((ulonglong)(((longlong)plVar10 - (longlong)plVar8 >> 3) * 8) < 0x1000) goto LAB_14017e8dd;
    unaff_RSI = (longlong *)((longlong)plVar8 + (-8 - plVar8[-1]));
    plVar8 = (longlong *)plVar8[-1];
    puVar7 = auStack_28;
    if (unaff_RSI < (longlong *)0x20) goto LAB_14017e8dd;
  }
  else {
    uVar5 = lVar4 >> 3;
    if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar6 = uVar5 * 8;
    if (uVar6 == 0) {
      plVar8 = (longlong *)0x0;
LAB_14017e832:
      uVar6 = *(longlong *)(param_1 + 0x1480) - *(longlong *)(param_1 + 0x1478);
      FUN_1404210f0(plVar8,*(longlong *)(param_1 + 0x1478),uVar6);
      plVar9 = (longlong *)((longlong)plVar8 + (uVar6 & 0xfffffffffffffff8));
      plVar10 = plVar8 + uVar5;
      goto LAB_14017e865;
    }
    if (uVar6 < 0x1000) {
      plVar8 = (longlong *)FUN_14028af20(uVar6);
      goto LAB_14017e832;
    }
    if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar4 = FUN_14028af20();
    if (lVar4 != 0) {
      plVar8 = (longlong *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      plVar8[-1] = lVar4;
      goto LAB_14017e832;
    }
  }
  plVar8 = unaff_RSI;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar7 = auStack_20;
LAB_14017e8dd:
  *(undefined8 *)(puVar7 + -8) = 0x14017e8e2;
  thunk_FUN_14028af80(plVar8);
  return;
}

