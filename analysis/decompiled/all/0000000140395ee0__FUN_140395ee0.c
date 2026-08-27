// Function: FUN_140395ee0
// Addr: 140395ee0
// Size: 193 bytes


void FUN_140395ee0(longlong param_1)

{
  FUN_14039ac10();
  if (1 < *(int *)(param_1 + 0xb0) + 1U) {
    FUN_14040bea0(param_1 + 0xb0,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xb8));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (1 < *(int *)(param_1 + 0xa0) + 1U) {
    FUN_14040bdf0(param_1 + 0xa0,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (1 < *(int *)(param_1 + 0x50) + 1U) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1403beff0(param_1);
  }
  return;
}

