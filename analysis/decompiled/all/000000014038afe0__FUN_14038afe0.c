// Function: FUN_14038afe0
// Addr: 14038afe0
// Size: 29 bytes


undefined8 FUN_14038afe0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  puVar1 = (undefined8 *)FUN_1403a3560(param_1 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      return *(undefined8 *)(param_1 + 8);
    }
  }
  else {
    *puVar1 = *(undefined8 *)(param_1 + 8);
    puVar1[1] = *(undefined8 *)(param_1 + 0x10);
    puVar1[6] = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  return *(undefined8 *)(param_1 + 8);
}

