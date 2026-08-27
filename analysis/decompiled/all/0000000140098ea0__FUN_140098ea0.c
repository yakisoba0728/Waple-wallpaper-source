// Function: FUN_140098ea0
// Addr: 140098ea0
// Size: 319 bytes


undefined8 * FUN_140098ea0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_140485b90;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar1 = FUN_14028af20(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[0x10] = lVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 7;
  param_1[0x16] = 8;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  FUN_14004f190(param_1 + 0x12,0x10,param_1[0x10]);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 **)(param_2 + 0x18) = param_1;
  return param_1;
}

