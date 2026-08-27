// Function: FUN_1400601c0
// Addr: 1400601c0
// Size: 121 bytes


void FUN_1400601c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    puVar4 = auStack_48;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_48, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_40;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140060217;
    thunk_FUN_14028af80(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}

