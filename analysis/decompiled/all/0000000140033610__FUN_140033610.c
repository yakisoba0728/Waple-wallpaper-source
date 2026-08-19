// Function: FUN_140033610
// Addr: 140033610
// Size: 120 bytes


void FUN_140033610(longlong *param_1)

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
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_20;
    }
    *(undefined **)(puVar4 + -8) = &UNK_140033686;
    func_0x00014028b040(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140016840(lVar1);
}

