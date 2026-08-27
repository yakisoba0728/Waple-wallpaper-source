// Function: FUN_14014e4f0
// Addr: 14014e4f0
// Size: 184 bytes


undefined4 * FUN_14014e4f0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 4);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      puVar4 = auStack_28;
      if ((0xfff < (*(longlong *)(param_1 + 8) - lVar1 & 0xffffffffffffffe0U)) &&
         (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x14014e565;
      thunk_FUN_14028af80(lVar3);
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return param_1;
}

