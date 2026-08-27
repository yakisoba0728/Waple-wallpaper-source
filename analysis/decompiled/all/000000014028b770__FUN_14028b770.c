// Function: FUN_14028b770
// Addr: 14028b770
// Size: 33 bytes


undefined8 * FUN_14028b770(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

