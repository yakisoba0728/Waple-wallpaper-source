// Function: FUN_1401e2b10
// Addr: 1401e2b10
// Size: 167 bytes


undefined8 * FUN_1401e2b10(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = FUN_14028af20(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[9] = lVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 7;
  param_1[0xf] = 8;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  FUN_14004f190(param_1 + 0xb,0x10,param_1[9]);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}

