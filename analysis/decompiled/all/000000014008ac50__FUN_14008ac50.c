// Function: FUN_14008ac50
// Addr: 14008ac50
// Size: 117 bytes


undefined8 * FUN_14008ac50(undefined8 *param_1,ulonglong param_2)

{
  FUN_140017240(param_1 + 0x17);
  FUN_140017240(param_1 + 0x13);
  FUN_140017240(param_1 + 0xf);
  FUN_140017240(param_1 + 10);
  FUN_140017240(param_1 + 5);
  FUN_14000dcc0(param_1 + 2);
  *param_1 = &PTR_FUN_140478b40;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xe8);
  }
  return param_1;
}

