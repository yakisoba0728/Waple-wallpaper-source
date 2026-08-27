// Function: FUN_140012c40
// Addr: 140012c40
// Size: 94 bytes


undefined8 * FUN_140012c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::numpunct<wchar_t>::vftable;
  thunk_FUN_1402d9040(param_1[2]);
  thunk_FUN_1402d9040(param_1[4]);
  thunk_FUN_1402d9040(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x30);
  }
  return param_1;
}

