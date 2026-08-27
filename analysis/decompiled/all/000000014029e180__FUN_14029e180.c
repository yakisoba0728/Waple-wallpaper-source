// Function: FUN_14029e180
// Addr: 14029e180
// Size: 92 bytes


undefined8 * FUN_14029e180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype<unsigned_short>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1402d9040(param_1[3]);
  }
  thunk_FUN_1402d9040(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x60);
  }
  return param_1;
}

