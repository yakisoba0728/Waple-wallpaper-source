// Function: FUN_1403973f0
// Addr: 1403973f0
// Size: 110 bytes


void FUN_1403973f0(longlong param_1)

{
  FUN_14041be00(param_1 + 0x40,0x10,2,FUN_1403961c0);
  FUN_14041be00(param_1 + 0x20,0x10,2,FUN_1403961c0);
  if (1 < *(int *)(param_1 + 0x10) + 1U) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

