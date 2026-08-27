// Function: FUN_140396fb0
// Addr: 140396fb0
// Size: 100 bytes


void FUN_140396fb0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (1 < *(int *)(lVar1 + 0x10) + 1U) {
      *(undefined4 *)(lVar1 + 0x14) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + 0x18));
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (1 < *(int *)(lVar1 + 0x20) + 1U) {
      *(undefined4 *)(lVar1 + 0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + 0x28));
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    thunk_FUN_1402d9040(lVar1);
  }
  return;
}

