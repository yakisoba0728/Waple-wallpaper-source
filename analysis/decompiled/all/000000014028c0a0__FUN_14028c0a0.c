// Function: FUN_14028c0a0
// Addr: 14028c0a0
// Size: 75 bytes


undefined8 * FUN_14028c0a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bb980(param_2 + 8);
  *param_1 = std::regex_error::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

