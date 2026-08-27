// Function: FUN_1403974e0
// Addr: 1403974e0
// Size: 124 bytes


void FUN_1403974e0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0xe0) + 1U) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (1 < *(int *)(param_1 + 0xd0) + 1U) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xd8));
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_140397330(param_1 + 0x28);
  return;
}

