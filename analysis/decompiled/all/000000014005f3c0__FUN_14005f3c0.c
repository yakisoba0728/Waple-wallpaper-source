// Function: FUN_14005f3c0
// Addr: 14005f3c0
// Size: 36 bytes


void FUN_14005f3c0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}

