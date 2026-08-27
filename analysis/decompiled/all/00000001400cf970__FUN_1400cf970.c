// Function: FUN_1400cf970
// Addr: 1400cf970
// Size: 83 bytes


void FUN_1400cf970(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x58))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
    *param_3 = 0;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
  }
  return;
}

