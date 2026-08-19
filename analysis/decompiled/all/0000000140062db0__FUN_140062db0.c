// Function: FUN_140062db0
// Addr: 140062db0
// Size: 36 bytes


void FUN_140062db0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
    *param_1 = 0;
  }
  return;
}

