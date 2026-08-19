// Function: FUN_1400d5140
// Addr: 1400d5140
// Size: 121 bytes


void FUN_1400d5140(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = param_4;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0xff;
  *param_1 = &PTR_DAT_14048bb30;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  func_0x00014028aff0(0xb0);
  return;
}

