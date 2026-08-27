// Function: FUN_14028c050
// Addr: 14028c050
// Size: 71 bytes


undefined8 * FUN_14028c050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1402bb980(&local_18);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}

