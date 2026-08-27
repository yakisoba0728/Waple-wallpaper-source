// Function: FUN_1402826c0
// Addr: 1402826c0
// Size: 214 bytes


void FUN_1402826c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      FUN_1401b7f60(lVar3);
    }
    lVar3 = *param_1;
    lVar2 = lVar3;
    puVar4 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), puVar4 = auStack_38, 0x1f < (lVar3 - lVar2) - 8U)) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140282766;
    thunk_FUN_14028af80(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}

