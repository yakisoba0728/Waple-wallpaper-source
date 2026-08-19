// Function: FUN_140085420
// Addr: 140085420
// Size: 16 bytes


undefined8 * FUN_140085420(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffeff;
  uVar1 = *(undefined4 *)(param_1 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[2];
  param_1[2] = 0;
  uVar3 = param_2[2];
  param_2[2] = 0;
  lVar4 = param_1[2];
  param_1[2] = uVar3;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar4 + 0x40);
  }
  lVar4 = param_2[2];
  param_2[2] = uVar2;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar4 + 0x40);
  }
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = uVar2;
  return param_1;
}

