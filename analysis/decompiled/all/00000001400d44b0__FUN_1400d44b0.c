// Function: FUN_1400d44b0
// Addr: 1400d44b0
// Size: 36 bytes


undefined8 * FUN_1400d44b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_140486ff8;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_1402d3ea0();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_1402d3ea0();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    FUN_1402d3ea0();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    param_1[7] = 0;
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
    param_1[8] = 0;
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[9] = 0;
  }
  func_0x00014028b040(param_1[10]);
  *param_1 = &PTR_LAB_140487000;
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0x60);
  }
  return param_1;
}

