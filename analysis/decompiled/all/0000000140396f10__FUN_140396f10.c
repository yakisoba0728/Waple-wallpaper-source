// Function: FUN_140396f10
// Addr: 140396f10
// Size: 86 bytes


void FUN_140396f10(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x38) + 1U) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (1 < *(int *)(param_1 + 0x28) + 1U) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

