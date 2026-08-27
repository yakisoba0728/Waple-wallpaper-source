// Function: FUN_1400317e0
// Addr: 1400317e0
// Size: 175 bytes


void FUN_1400317e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 8) {
      plVar2 = (longlong *)plVar6[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar6);
        plVar6[7] = 0;
      }
    }
    lVar3 = *param_1;
    lVar5 = lVar3;
    puVar7 = auStack_28;
    if ((0xfff < (param_1[2] - lVar3 & 0xffffffffffffffc0U)) &&
       (lVar5 = *(longlong *)(lVar3 + -8), puVar7 = auStack_28, 0x1f < (lVar3 - lVar5) - 8U)) {
      pcVar4 = (code *)swi(0x29);
      lVar5 = (*pcVar4)(5);
      puVar7 = auStack_20;
    }
    *(undefined8 *)(puVar7 + -8) = 0x140031874;
    thunk_FUN_14028af80(lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

