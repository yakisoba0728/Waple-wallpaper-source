// Function: FUN_14003e050
// Addr: 14003e050
// Size: 81 bytes


void FUN_14003e050(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    puVar4 = auStack_28;
    if ((0xfff < (param_1[2] - lVar1 & 0xfffffffffffffff0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined **)(puVar4 + -8) = &UNK_14003e09b;
    func_0x00014028b040(lVar3);
    return;
  }
  return;
}

