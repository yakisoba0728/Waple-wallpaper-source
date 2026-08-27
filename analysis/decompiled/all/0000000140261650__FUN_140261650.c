// Function: FUN_140261650
// Addr: 140261650
// Size: 37 bytes


undefined8 * FUN_140261650(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1404920c0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}

