// Function: FUN_140011070
// Addr: 140011070
// Size: 43 bytes


undefined8 * FUN_140011070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x10);
  }
  return param_1;
}

