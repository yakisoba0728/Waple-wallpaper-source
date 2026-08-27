// Function: FUN_14025fa40
// Addr: 14025fa40
// Size: 113 bytes


undefined8 * FUN_14025fa40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140491d10;
  FUN_14000d9e0(param_1 + 0x85);
  FUN_14015a700(param_1 + 0x83);
  FUN_14000d9e0(param_1 + 0x7d);
  FUN_14015a780(param_1 + 0x7b);
  FUN_1401e6b40(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x460);
  }
  return param_1;
}

