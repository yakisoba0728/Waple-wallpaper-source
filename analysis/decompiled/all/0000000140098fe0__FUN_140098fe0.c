// Function: FUN_140098fe0
// Addr: 140098fe0
// Size: 108 bytes


undefined8 * FUN_140098fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140485b90;
  FUN_140099310();
  FUN_14000d9e0(param_1 + 0x28);
  FUN_14000d9e0(param_1 + 0x12);
  FUN_14003de70(param_1 + 0x10);
  *param_1 = &PTR_FUN_140485cf8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x158);
  }
  return param_1;
}

