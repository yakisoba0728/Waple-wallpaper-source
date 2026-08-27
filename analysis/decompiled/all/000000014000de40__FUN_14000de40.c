// Function: FUN_14000de40
// Addr: 14000de40
// Size: 146 bytes


longlong * FUN_14000de40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (0xf < (ulonglong)param_1[3]) {
      lVar1 = *param_1;
      puVar4 = auStack_28;
      lVar3 = lVar1;
      if ((0xfff < param_1[3] + 1U) &&
         (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_28, 0x1f < (lVar1 - lVar3) - 8U)) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x14000de98;
      thunk_FUN_14028af80(lVar3);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0;
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

