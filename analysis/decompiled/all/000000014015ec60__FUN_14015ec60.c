// Function: FUN_14015ec60
// Addr: 14015ec60
// Size: 187 bytes


void FUN_14015ec60(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_14048b8e0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 1;
  FUN_14000da40(param_1 + 7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  func_0x00014028aff0(0x58);
  return;
}

