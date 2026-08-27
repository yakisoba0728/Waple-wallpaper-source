// Function: FUN_140282850
// Addr: 140282850
// Size: 196 bytes


void FUN_140282850(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
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
    puVar7 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) &&
       (lVar5 = *(longlong *)(lVar3 + -8), puVar7 = auStack_38, 0x1f < (lVar3 - lVar5) - 8U)) {
      lVar5 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = auStack_30;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1402828ed;
    thunk_FUN_14028af80(lVar5);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

