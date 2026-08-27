// Function: FUN_14013d130
// Addr: 14013d130
// Size: 54 bytes


undefined8 * FUN_14013d130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14048af20;
  param_1[1] = &PTR_FUN_14048b128;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x38);
  }
  return param_1;
}

