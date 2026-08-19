// Function: FUN_14028c170
// Addr: 14028c170
// Size: 75 bytes


undefined8 * FUN_14028c170(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_140426f00;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bba50(param_2 + 8);
  *param_1 = &DAT_140427078;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

