// Function: FUN_140013fe0
// Addr: 140013fe0
// Size: 92 bytes


undefined8 * FUN_140013fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype<wchar_t>::vftable;
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

