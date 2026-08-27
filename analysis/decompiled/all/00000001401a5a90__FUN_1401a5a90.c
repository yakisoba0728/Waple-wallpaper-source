// Function: FUN_1401a5a90
// Addr: 1401a5a90
// Size: 108 bytes


undefined8 * FUN_1401a5a90(undefined8 *param_1,ulonglong param_2)

{
  FUN_14000d9e0(param_1 + 0x17);
  FUN_1401a5b50(param_1 + 0x15);
  FUN_140085440(param_1 + 0xf);
  FUN_140085440(param_1 + 10);
  FUN_140017240(param_1 + 3);
  *param_1 = &PTR_FUN_14048b750;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xe0);
  }
  return param_1;
}

