// Function: FUN_140085610
// Addr: 140085610
// Size: 207 bytes


undefined8 * FUN_140085610(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar2 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar2;
  uVar2 = param_2[2];
  param_2[2] = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  lVar4 = param_2[2];
  param_2[2] = uVar3;
  if (lVar4 != 0) {
    FUN_140017240(lVar4 + 0x40);
    FUN_140017240(lVar4 + 0x20);
    FUN_140017240(lVar4);
    thunk_FUN_14028af80(lVar4,0x60);
  }
  lVar4 = param_1[2];
  param_1[2] = uVar2;
  if (lVar4 != 0) {
    FUN_140017240(lVar4 + 0x40);
    FUN_140017240(lVar4 + 0x20);
    FUN_140017240(lVar4);
    thunk_FUN_14028af80(lVar4,0x60);
  }
  uVar2 = param_2[3];
  param_2[3] = param_1[3];
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_2[4] = param_1[4];
  param_1[4] = uVar2;
  return param_1;
}

