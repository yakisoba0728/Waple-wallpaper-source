// Function: FUN_1401b7280
// Addr: 1401b7280
// Size: 224 bytes


void FUN_1401b7280(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        FUN_1401b8b20(lVar2);
        thunk_FUN_14028af80(lVar2,0x28);
      }
    }
    lVar2 = *param_1;
    lVar4 = lVar2;
    puVar6 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar4 = *(longlong *)(lVar2 + -8), puVar6 = auStack_38, 0x1f < (lVar2 - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar6 = auStack_30;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1401b7338;
    thunk_FUN_14028af80(lVar4);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

