// Function: FUN_14005b010
// Addr: 14005b010
// Size: 111 bytes


void FUN_14005b010(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), puVar4 = auStack_48, 0x1f < (lVar1 - lVar3) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)(5);
      puVar4 = auStack_40;
    }
    *(undefined8 *)(puVar4 + -8) = 0x14005b063;
    thunk_FUN_14028af80(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}

