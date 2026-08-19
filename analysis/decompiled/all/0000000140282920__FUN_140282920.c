// Function: FUN_140282920
// Addr: 140282920
// Size: 196 bytes


void FUN_140282920(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar7 = auStack_38;
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar5 = *param_1;
    if ((0xfff < (ulonglong)((param_1[2] - lVar5 >> 3) * 8)) &&
       (lVar4 = lVar5 - *(longlong *)(lVar5 + -8), lVar5 = *(longlong *)(lVar5 + -8),
       puVar7 = auStack_38, 0x1f < lVar4 - 8U)) {
      lVar5 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_30;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1402829bd;
    func_0x00014028b040(lVar5);
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

