// Function: FUN_1401dcc40
// Addr: 1401dcc40
// Size: 246 bytes


void FUN_1401dcc40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
    for (; lVar3 != lVar2; lVar3 = lVar3 + 200) {
      FUN_1401dcd40(lVar3 + 0xb0);
      FUN_1401d9d50(lVar3 + 0x68);
      FUN_14000d9e0(lVar3);
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
    *(undefined8 *)(puVar4 + -8) = 0x1401dcd03;
    thunk_FUN_14028af80(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 200 + param_2;
  param_1[2] = param_4 * 200 + param_2;
  return;
}

