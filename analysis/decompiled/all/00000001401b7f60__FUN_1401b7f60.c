// Function: FUN_1401b7f60
// Addr: 1401b7f60
// Size: 167 bytes


void FUN_1401b7f60(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = *param_1;
    lVar5 = lVar3;
    puVar7 = auStack_28;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) &&
       (lVar5 = *(longlong *)(lVar3 + -8), puVar7 = auStack_28, 0x1f < (lVar3 - lVar5) - 8U)) {
      lVar5 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = auStack_20;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1401b7fef;
    thunk_FUN_14028af80(lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

