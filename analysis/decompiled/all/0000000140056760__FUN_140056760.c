// Function: FUN_140056760
// Addr: 140056760
// Size: 66 bytes


undefined8 * FUN_140056760(undefined8 *param_1,ulonglong param_2)

{
  FUN_140085440(param_1 + 1);
  *param_1 = &PTR_FUN_1404777d0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x30);
  }
  return param_1;
}

