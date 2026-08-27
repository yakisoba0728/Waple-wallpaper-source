// Function: FUN_140085070
// Addr: 140085070
// Size: 31 bytes


undefined1 * FUN_140085070(undefined1 *param_1,undefined1 param_2)

{
  param_1[8] = 5;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = param_2;
  return param_1;
}

