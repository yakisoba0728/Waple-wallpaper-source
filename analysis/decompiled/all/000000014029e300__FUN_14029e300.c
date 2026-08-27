// Function: FUN_14029e300
// Addr: 14029e300
// Size: 76 bytes


undefined8 * FUN_14029e300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::
             time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
             ::vftable;
  thunk_FUN_1402d9040(param_1[2]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x18);
  }
  return param_1;
}

