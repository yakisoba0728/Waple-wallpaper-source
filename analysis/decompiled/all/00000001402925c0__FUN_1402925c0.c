// Function: FUN_1402925c0
// Addr: 1402925c0
// Size: 33 bytes


undefined8 * FUN_1402925c0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

