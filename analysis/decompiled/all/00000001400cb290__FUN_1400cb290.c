// Function: FUN_1400cb290
// Addr: 1400cb290
// Size: 94 bytes


undefined8 * FUN_1400cb290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140485fb0;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_140292210(param_1 + 4);
  }
  FUN_140292df0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xd0);
  }
  return param_1;
}

