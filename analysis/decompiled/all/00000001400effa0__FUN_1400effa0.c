// Function: FUN_1400effa0
// Addr: 1400effa0
// Size: 91 bytes


undefined8 * FUN_1400effa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1404870e8;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  *param_1 = &PTR_FUN_1404777d0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x20);
  }
  return param_1;
}

