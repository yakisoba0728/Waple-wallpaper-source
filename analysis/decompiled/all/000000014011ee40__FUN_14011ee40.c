// Function: FUN_14011ee40
// Addr: 14011ee40
// Size: 66 bytes


undefined8 * FUN_14011ee40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140489e48;
  FUN_140016770(param_1 + 8);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x70);
  }
  return param_1;
}

