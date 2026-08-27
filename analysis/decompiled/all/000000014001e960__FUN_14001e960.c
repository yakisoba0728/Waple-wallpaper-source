// Function: FUN_14001e960
// Addr: 14001e960
// Size: 178 bytes


undefined8 * FUN_14001e960(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140475510;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x28))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  FUN_1400317e0(param_1 + 0x17);
  FUN_1400317e0(param_1 + 0x14);
  FUN_1400317e0(param_1 + 0x11);
  FUN_1400317e0(param_1 + 0xe);
  FUN_140031890(param_1 + 0xb);
  FUN_14000d9e0(param_1 + 5);
  FUN_140030c70(param_1 + 3);
  *param_1 = &PTR_FUN_140475540;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xd0);
  }
  return param_1;
}

