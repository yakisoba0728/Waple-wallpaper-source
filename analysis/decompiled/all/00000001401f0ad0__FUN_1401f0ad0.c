// Function: FUN_1401f0ad0
// Addr: 1401f0ad0
// Size: 141 bytes


void FUN_1401f0ad0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
      func_0x00014000dab0(lVar3 + 0x18);
    }
    lVar3 = *param_1;
    if ((0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) &&
       (lVar2 = lVar3 - *(longlong *)(lVar3 + -8), lVar3 = *(longlong *)(lVar3 + -8),
       puVar4 = auStack_28, 0x1f < lVar2 - 8U)) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
    }
    *(undefined **)(puVar4 + -8) = &UNK_1401f0b64;
    func_0x00014028b040(lVar3);
    return;
  }
  return;
}

