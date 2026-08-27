// Function: FUN_14028b7e0
// Addr: 14028b7e0
// Size: 33 bytes


undefined8 * FUN_14028b7e0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

