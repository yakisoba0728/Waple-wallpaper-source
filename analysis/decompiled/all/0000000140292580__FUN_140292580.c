// Function: FUN_140292580
// Addr: 140292580
// Size: 60 bytes


undefined8 * FUN_140292580(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bb980(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

