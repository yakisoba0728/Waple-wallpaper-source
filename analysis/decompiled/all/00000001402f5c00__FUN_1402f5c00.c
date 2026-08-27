// Function: FUN_1402f5c00
// Addr: 1402f5c00
// Size: 65 bytes


void FUN_1402f5c00(longlong param_1,longlong *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*param_2 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(*(longlong *)(param_1 + 0x30));
    }
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}

