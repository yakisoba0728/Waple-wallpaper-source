// Function: FUN_14029e350
// Addr: 14029e350
// Size: 76 bytes


undefined8 * FUN_14029e350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
  thunk_FUN_1402d9040(param_1[2]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x18);
  }
  return param_1;
}

