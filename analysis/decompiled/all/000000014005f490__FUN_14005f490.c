// Function: FUN_14005f490
// Addr: 14005f490
// Size: 36 bytes


void FUN_14005f490(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}

