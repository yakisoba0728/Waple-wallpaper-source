// Function: FUN_14028b7a0
// Addr: 14028b7a0
// Size: 60 bytes


undefined8 * FUN_14028b7a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bb980(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

