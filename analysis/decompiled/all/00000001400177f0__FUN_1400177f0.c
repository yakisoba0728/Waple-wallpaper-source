// Function: FUN_1400177f0
// Addr: 1400177f0
// Size: 66 bytes


undefined8 * FUN_1400177f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1404755b8;
  FUN_140085440(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x30);
  }
  return param_1;
}

