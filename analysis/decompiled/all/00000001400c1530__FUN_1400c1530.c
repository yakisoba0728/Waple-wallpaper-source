// Function: FUN_1400c1530
// Addr: 1400c1530
// Size: 99 bytes


void FUN_1400c1530(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  FUN_140017240(param_1 + 3);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1400c1580;
    thunk_FUN_14028af80(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

