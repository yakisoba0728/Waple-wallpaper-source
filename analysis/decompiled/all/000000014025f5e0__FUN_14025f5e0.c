// Function: FUN_14025f5e0
// Addr: 14025f5e0
// Size: 167 bytes


longlong * FUN_14025f5e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar3 = lVar1;
      puVar4 = auStack_28;
      if ((0xfff < (ulonglong)((param_1[2] - lVar1 >> 1) * 2)) &&
         (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
        lVar3 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x14025f648;
      thunk_FUN_14028af80(lVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}

