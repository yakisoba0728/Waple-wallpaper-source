// Function: FUN_1403972a0
// Addr: 1403972a0
// Size: 143 bytes


void FUN_1403972a0(longlong param_1)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xe8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x100) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x108) = *(undefined8 *)(param_1 + 0x178);
  }
  if (1 < *(int *)(param_1 + 0x140) + 1U) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x148));
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1403beff0();
  }
  return;
}

