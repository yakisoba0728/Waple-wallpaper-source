// Function: FUN_140031240
// Addr: 140031240
// Size: 143 bytes


void FUN_140031240(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 == param_1[1]) {
    lVar1 = *param_1;
    lVar3 = lVar1;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)((param_1[2] - lVar1 >> 3) * 8)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined **)(puVar4 + -8) = &UNK_1400312e0;
    func_0x00014028b040(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(lVar1 + 0x28);
}

