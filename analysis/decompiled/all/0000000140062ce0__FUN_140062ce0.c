// Function: FUN_140062ce0
// Addr: 140062ce0
// Size: 36 bytes


void FUN_140062ce0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
    *param_1 = 0;
  }
  return;
}

