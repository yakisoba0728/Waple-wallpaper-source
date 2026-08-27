// Function: FUN_14028b870
// Addr: 14028b870
// Size: 66 bytes


undefined8 * FUN_14028b870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1402bba20(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x18);
  }
  return param_1;
}

