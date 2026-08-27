// Function: FUN_140395e10
// Addr: 140395e10
// Size: 208 bytes


void FUN_140395e10(longlong param_1)

{
  FUN_14039aaf0();
  if (1 < *(int *)(param_1 + 0x118) + 1U) {
    FUN_14040bdf0(param_1 + 0x118,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x120));
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (1 < *(int *)(param_1 + 0x108) + 1U) {
    FUN_14040bdf0(param_1 + 0x108,0);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x110));
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (1 < *(int *)(param_1 + 0xa0) + 1U) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1403beff0(param_1);
  }
  return;
}

