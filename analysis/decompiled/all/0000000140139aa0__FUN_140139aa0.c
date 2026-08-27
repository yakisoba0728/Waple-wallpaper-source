// Function: FUN_140139aa0
// Addr: 140139aa0
// Size: 54 bytes


undefined8 * FUN_140139aa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14048b078;
  param_1[1] = &PTR_FUN_14048b128;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x38);
  }
  return param_1;
}

