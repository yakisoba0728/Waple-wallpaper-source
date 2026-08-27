// Function: FUN_1401796d0
// Addr: 1401796d0
// Size: 180 bytes


void FUN_1401796d0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
      FUN_140031b80(lVar3 + 0x18);
      FUN_14017c3c0(lVar3);
    }
    lVar3 = *param_1;
    lVar2 = lVar3;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) &&
       (lVar2 = *(longlong *)(lVar3 + -8), puVar4 = auStack_28, 0x1f < (lVar3 - lVar2) - 8U)) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x14017976c;
    thunk_FUN_14028af80(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

