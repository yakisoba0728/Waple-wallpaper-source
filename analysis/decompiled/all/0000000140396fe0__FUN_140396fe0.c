// Function: FUN_140396fe0
// Addr: 140396fe0
// Size: 45 bytes


void FUN_140396fe0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x38) + 1U) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x40));
    return;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (1 < *(int *)(param_1 + 0x28) + 1U) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

