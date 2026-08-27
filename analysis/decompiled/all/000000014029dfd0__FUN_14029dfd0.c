// Function: FUN_14029dfd0
// Addr: 14029dfd0
// Size: 103 bytes


undefined8 * FUN_14029dfd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Mpunct<unsigned_short>::vftable;
  thunk_FUN_1402d9040(param_1[2]);
  thunk_FUN_1402d9040(param_1[4]);
  thunk_FUN_1402d9040(param_1[5]);
  thunk_FUN_1402d9040(param_1[6]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x78);
  }
  return param_1;
}

