// Function: FUN_1403100e0
// Addr: 1403100e0
// Size: 60 bytes


void FUN_1403100e0(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_14030b2a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = param_3;
  }
  return;
}

