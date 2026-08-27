// Function: FUN_140162080
// Addr: 140162080
// Size: 117 bytes


undefined8 * FUN_140162080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14048ba60;
  FUN_140017240(param_1 + 0x16);
  FUN_14000d9e0(param_1 + 0x11);
  FUN_140030c70(param_1 + 0xf);
  FUN_14000d9e0(param_1 + 9);
  FUN_140164020(param_1 + 7);
  FUN_1400ddab0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xd0);
  }
  return param_1;
}

