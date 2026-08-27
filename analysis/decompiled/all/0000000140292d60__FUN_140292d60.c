// Function: FUN_140292d60
// Addr: 140292d60
// Size: 48 bytes


undefined8 * FUN_140292d60(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

