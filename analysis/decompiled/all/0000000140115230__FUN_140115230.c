// Function: FUN_140115230
// Addr: 140115230
// Size: 66 bytes


undefined8 * FUN_140115230(undefined8 *param_1,ulonglong param_2)

{
  FUN_140016770(param_1 + 1);
  *param_1 = &PTR_FUN_140489858;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x28);
  }
  return param_1;
}

