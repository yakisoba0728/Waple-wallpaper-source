// Function: FUN_140120e90
// Addr: 140120e90
// Size: 99 bytes


undefined8 * FUN_140120e90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14048a008;
  param_1[0xe] = &PTR_LAB_140489fe0;
  FUN_1402d3dd0(param_1[0x10]);
  *param_1 = &PTR_FUN_140489e48;
  FUN_140016770(param_1 + 8);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xf0);
  }
  return param_1;
}

