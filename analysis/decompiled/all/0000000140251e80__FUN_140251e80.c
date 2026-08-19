// Function: FUN_140251e80
// Addr: 140251e80
// Size: 73 bytes


void FUN_140251e80(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 != param_1[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar1 + 0x18);
    }
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
    *(undefined8 *)(puVar4 + -8) = 0x140251f10;
    func_0x00014028b040(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

