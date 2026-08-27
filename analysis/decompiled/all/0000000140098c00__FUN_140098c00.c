// Function: FUN_140098c00
// Addr: 140098c00
// Size: 43 bytes


undefined8 * FUN_140098c00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140485cf8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x10);
  }
  return param_1;
}

