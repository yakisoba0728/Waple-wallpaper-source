// Function: FUN_140228ec0
// Addr: 140228ec0
// Size: 37 bytes


undefined8 * FUN_140228ec0(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_140491308;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}

