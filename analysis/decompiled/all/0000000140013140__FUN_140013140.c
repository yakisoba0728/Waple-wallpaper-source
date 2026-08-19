// Function: FUN_140013140
// Addr: 140013140
// Size: 37 bytes


void FUN_140013140(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 != param_1[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar1);
    }
    lVar1 = *param_1;
    lVar3 = lVar1;
    puVar4 = auStack_38;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_38, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_30;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1400131c8;
    func_0x00014028b040(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}

