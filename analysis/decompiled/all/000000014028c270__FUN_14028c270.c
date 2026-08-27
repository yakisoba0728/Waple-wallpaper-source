// Function: FUN_14028c270
// Addr: 14028c270
// Size: 66 bytes


undefined8 * FUN_14028c270(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1402bba20(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x20);
  }
  return param_1;
}

