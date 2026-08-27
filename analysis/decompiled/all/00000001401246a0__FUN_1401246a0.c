// Function: FUN_1401246a0
// Addr: 1401246a0
// Size: 146 bytes


undefined8 * FUN_1401246a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14048a1a0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  FUN_140017240(param_1 + 7);
  *param_1 = &PTR_FUN_14048a278;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x60);
  }
  return param_1;
}

