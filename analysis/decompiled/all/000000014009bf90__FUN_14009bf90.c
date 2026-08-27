// Function: FUN_14009bf90
// Addr: 14009bf90
// Size: 39 bytes


undefined8 * FUN_14009bf90(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[1] = &DAT_140474480;
  *param_1 = &PTR_FUN_1404861c8;
  param_1[3] = &PTR_PTR_1404dfbf0;
  return param_1;
}

