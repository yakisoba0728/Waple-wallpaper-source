// Function: FUN_14015c760
// Addr: 14015c760
// Size: 360 bytes


undefined8 FUN_14015c760(int param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined4 *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar1 + (4 - *param_2)) {
    uVar3 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar1 + 1);
    uVar3 = *puVar1;
  }
  *param_3 = uVar3;
  puVar2 = (uint *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar2 + (4 - *param_2)) {
    uVar4 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar2 + 1);
    uVar4 = *puVar2;
  }
  param_3[1] = param_3[1] | uVar4;
  puVar1 = (undefined4 *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar1 + (4 - *param_2)) {
    uVar3 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar1 + 1);
    uVar3 = *puVar1;
  }
  param_3[2] = uVar3;
  puVar1 = (undefined4 *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar1 + (4 - *param_2)) {
    uVar3 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar1 + 1);
    uVar3 = *puVar1;
  }
  param_3[3] = uVar3;
  puVar1 = (undefined4 *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar1 + (4 - *param_2)) {
    uVar3 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar1 + 1);
    uVar3 = *puVar1;
  }
  param_3[5] = uVar3;
  puVar2 = (uint *)param_2[1];
  if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar2 + (4 - *param_2)) {
    uVar5 = 0;
  }
  else {
    param_2[1] = (longlong)(puVar2 + 1);
    uVar5 = (ulonglong)*puVar2;
  }
  param_3[6] = (int)uVar5;
  if ((*(byte *)(param_3 + 1) & 0x40) != 0) {
    puVar2 = (uint *)param_2[1];
    if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar2 + (4 - *param_2)) {
      uVar5 = 0;
    }
    else {
      param_2[1] = (longlong)(puVar2 + 1);
      uVar5 = (ulonglong)*puVar2;
    }
    param_3[4] = (int)uVar5;
  }
  param_3[7] = 0;
  if (0 < param_1) {
    puVar2 = (uint *)param_2[1];
    if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar2 + (4 - *param_2)) {
      param_3[7] = 0;
      return 1;
    }
    param_2[1] = (longlong)(puVar2 + 1);
    uVar5 = (ulonglong)*puVar2;
    param_3[7] = *puVar2;
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}

