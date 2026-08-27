// Function: FUN_140016770
// Addr: 140016770
// Size: 111 bytes


void FUN_140016770(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (7 < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    puVar4 = auStack_28;
    lVar3 = lVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1400167c4;
    thunk_FUN_14028af80(lVar3);
  }
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}

