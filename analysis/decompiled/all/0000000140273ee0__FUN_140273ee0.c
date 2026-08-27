// Function: FUN_140273ee0
// Addr: 140273ee0
// Size: 102 bytes


undefined8 * FUN_140273ee0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14003f730(param_1 + 0xf);
  FUN_14000d9e0(param_1 + 10);
  FUN_140030c70(param_1 + 8);
  FUN_140016770(param_1 + 3);
  FUN_14007ac00(param_1 + 1);
  *param_1 = &PTR_FUN_140489890;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x188);
  }
  return param_1;
}

