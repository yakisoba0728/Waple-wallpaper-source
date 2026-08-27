// Function: FUN_140124660
// Addr: 140124660
// Size: 60 bytes


undefined1 * FUN_140124660(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  return param_1;
}

