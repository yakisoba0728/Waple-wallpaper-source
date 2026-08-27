// Function: FUN_140015b60
// Addr: 140015b60
// Size: 84 bytes


undefined8 * FUN_140015b60(undefined8 *param_1,ulonglong param_2)

{
  FUN_140017240(param_1 + 0xc);
  FUN_140016770(param_1 + 8);
  FUN_140016770(param_1 + 4);
  *param_1 = &PTR_FUN_1404744e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x80);
  }
  return param_1;
}

