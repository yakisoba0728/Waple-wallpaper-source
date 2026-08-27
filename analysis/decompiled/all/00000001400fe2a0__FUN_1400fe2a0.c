// Function: FUN_1400fe2a0
// Addr: 1400fe2a0
// Size: 243 bytes


undefined8 * FUN_1400fe2a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140488970;
  param_1[0x2b] = &PTR_LAB_140488a10;
  if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2c] + 0x20))();
    param_1[0x2c] = 0;
  }
  FUN_140103850(param_1 + 0x60);
  FUN_140017240(param_1 + 0x5c);
  FUN_14000d9e0(param_1 + 0x57);
  FUN_140031340(param_1 + 0x55);
  FUN_140017240(param_1 + 0x50);
  FUN_14000dcc0(param_1 + 0x4c);
  FUN_14000d9e0(param_1 + 0x47);
  FUN_140049340(param_1 + 0x45);
  FUN_140017240(param_1 + 0x3f);
  FUN_140017240(param_1 + 0x37);
  param_1[0x2b] = &PTR_FUN_140488a28;
  FUN_1400fdc50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x378);
  }
  return param_1;
}

