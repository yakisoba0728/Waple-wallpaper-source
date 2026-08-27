// Function: FUN_140292d10
// Addr: 140292d10
// Size: 65 bytes


undefined8 * FUN_140292d10(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bb980(param_2 + 8);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

