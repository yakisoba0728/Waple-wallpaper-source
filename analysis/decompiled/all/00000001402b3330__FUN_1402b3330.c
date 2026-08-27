// Function: FUN_1402b3330
// Addr: 1402b3330
// Size: 94 bytes


undefined8 * FUN_1402b3330(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
  thunk_FUN_1402d9040(param_1[2]);
  thunk_FUN_1402d9040(param_1[3]);
  thunk_FUN_1402d9040(param_1[4]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x58);
  }
  return param_1;
}

