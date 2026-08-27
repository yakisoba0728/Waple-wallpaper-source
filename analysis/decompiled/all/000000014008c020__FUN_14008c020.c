// Function: FUN_14008c020
// Addr: 14008c020
// Size: 43 bytes


undefined8 * FUN_14008c020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140478b40;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x10);
  }
  return param_1;
}

