// Function: FUN_140170e70
// Addr: 140170e70
// Size: 620 bytes


undefined8 * FUN_140170e70(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14048df88;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 3) = 7;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffeff;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar1 = (longlong *)FUN_14028af20(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  param_1[2] = plVar1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar2 = FUN_14028af20(0x48);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[0x14] = lVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 7;
  param_1[0x1a] = 8;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  FUN_14004f190(param_1 + 0x16,0x10,param_1[0x14]);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar2 = FUN_14028af20(0x18);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[0x1b] = lVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar2 = FUN_14028af20(0x18);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[0x1e] = lVar2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 7;
  param_1[0x24] = 8;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  FUN_14004f190(param_1 + 0x20,0x10,param_1[0x1e]);
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  param_1[0x2b] = lVar2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 7;
  param_1[0x31] = 8;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  FUN_140037600(param_1 + 0x2d,0x10,param_1[0x2b]);
  return param_1;
}

