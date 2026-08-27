// Function: FUN_14028b450
// Addr: 14028b450
// Size: 43 bytes


undefined8 * FUN_14028b450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x18);
  }
  return param_1;
}

