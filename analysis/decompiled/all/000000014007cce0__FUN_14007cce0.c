// Function: FUN_14007cce0
// Addr: 14007cce0
// Size: 30 bytes


undefined8 * FUN_14007cce0(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_140478280;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}

