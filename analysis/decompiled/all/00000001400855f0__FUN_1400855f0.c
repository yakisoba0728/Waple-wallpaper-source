// Function: FUN_1400855f0
// Addr: 1400855f0
// Size: 17 bytes


undefined8 * FUN_1400855f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_58 [56];
  
  puVar5 = (undefined8 *)func_0x000140085160(local_58);
  uVar1 = *(undefined4 *)(puVar5 + 1);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar2 = *puVar5;
  *puVar5 = *param_1;
  *param_1 = uVar2;
  uVar2 = puVar5[2];
  puVar5[2] = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  lVar4 = puVar5[2];
  puVar5[2] = uVar3;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar4 + 0x40);
  }
  lVar4 = param_1[2];
  param_1[2] = uVar2;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar4 + 0x40);
  }
  uVar2 = puVar5[3];
  puVar5[3] = param_1[3];
  param_1[3] = uVar2;
  uVar2 = puVar5[4];
  puVar5[4] = param_1[4];
  param_1[4] = uVar2;
  func_0x000140085510(local_58);
  return param_1;
}

