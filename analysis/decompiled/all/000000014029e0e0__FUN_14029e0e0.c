// Function: FUN_14029e0e0
// Addr: 14029e0e0
// Size: 76 bytes


undefined8 * FUN_14029e0e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::collate<unsigned_short>::vftable;
  thunk_FUN_1402d9040(param_1[3]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x20);
  }
  return param_1;
}

