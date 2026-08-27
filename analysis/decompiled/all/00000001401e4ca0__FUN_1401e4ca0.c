// Function: FUN_1401e4ca0
// Addr: 1401e4ca0
// Size: 191 bytes


undefined8 FUN_1401e4ca0(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  puVar4 = auStack_48;
  local_20 = param_1[1];
  local_18 = param_1[2];
  local_28 = *param_1;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  (*(code *)param_1[5])(param_1[4],param_1[3],&local_28);
  FUN_140292030();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    puVar4 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar1 >> 3) * 8)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_48, 0x1f < (lVar1 - lVar3) - 8U)) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_40;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1401e4d3a;
    thunk_FUN_14028af80(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1401e4d52;
  thunk_FUN_14028af80(param_1,0x30);
  return 0;
}

