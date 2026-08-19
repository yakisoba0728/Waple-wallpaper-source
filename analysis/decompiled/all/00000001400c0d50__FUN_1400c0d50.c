// Function: FUN_1400c0d50
// Addr: 1400c0d50
// Size: 308 bytes


void FUN_1400c0d50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1404860b0;
  uVar1 = FUN_1402d3ed0(0x200,0x10);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x21;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f004189;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41f00000;
  param_1[0x1f] = 0x41200000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x21) = 0;
  func_0x00014028aff0(0x50);
  return;
}

