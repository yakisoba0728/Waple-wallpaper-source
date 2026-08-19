// Function: FUN_1401e4d70
// Addr: 1401e4d70
// Size: 154 bytes


undefined8 FUN_1401e4d70(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = param_1[1];
  local_18 = param_1[2];
  local_28 = *param_1;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  (*(code *)param_1[5])(param_1[4],param_1[3],&local_28);
  FUN_140292100();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar4 = lVar1;
    puVar5 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - lVar1 >> 3) * 8)) &&
       (lVar4 = *(longlong *)(lVar1 + -8), puVar5 = auStack_48, 0x1f < (lVar1 - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_40;
    }
    *(undefined **)(puVar5 + -8) = &UNK_1401e4e0a;
    uVar3 = func_0x00014028b040(lVar4);
    return uVar3;
  }
  func_0x00014028b040(param_1,0x30);
  return 0;
}

