// Function: FUN_140016560
// Addr: 140016560
// Size: 156 bytes


longlong * FUN_140016560(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = auStack_28;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (puVar3 = auStack_28, 0x1f < (*param_1 - *(longlong *)(*param_1 + -8)) - 8U)) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x1400165c0;
      thunk_FUN_14028af80();
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}

