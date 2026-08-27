// Function: FUN_140155690
// Addr: 140155690
// Size: 75 bytes


undefined8 * FUN_140155690(undefined8 *param_1,ulonglong param_2)

{
  FUN_140017240(param_1 + 8);
  FUN_140017240(param_1 + 4);
  *param_1 = &PTR_FUN_14048b750;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x60);
  }
  return param_1;
}

