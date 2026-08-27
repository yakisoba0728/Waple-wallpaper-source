// Function: FUN_140038070
// Addr: 140038070
// Size: 94 bytes


undefined8 * FUN_140038070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::numpunct<char>::vftable;
  thunk_FUN_1402d9040(param_1[2]);
  thunk_FUN_1402d9040(param_1[4]);
  thunk_FUN_1402d9040(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x30);
  }
  return param_1;
}

