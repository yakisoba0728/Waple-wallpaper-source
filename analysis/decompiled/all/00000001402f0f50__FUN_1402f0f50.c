// Function: FUN_1402f0f50
// Addr: 1402f0f50
// Size: 69 bytes


void FUN_1402f0f50(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_1402f07f0();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(ulonglong *)(param_1 + 0xa0) =
         (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
    return;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}

