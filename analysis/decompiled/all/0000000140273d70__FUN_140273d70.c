// Function: FUN_140273d70
// Addr: 140273d70
// Size: 353 bytes


undefined8 * FUN_140273d70(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_140492238;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_14028af20(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar1 = FUN_14028af20(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  param_1[8] = lVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 7;
  param_1[0xe] = 8;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  FUN_14004f190(param_1 + 10,0x10,param_1[8]);
  param_1[0x26] = 0;
  param_1[0xf] = &DAT_140475df0;
  param_1[0x27] = 0;
  param_1[0x25] = std::basic_ios<char,std::char_traits<char>_>::vftable;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_140012ae0(param_1 + 0xf,param_1 + 0x11);
  *(undefined ***)((longlong)*(int *)(param_1[0xf] + 4) + 0x78 + (longlong)param_1) =
       &PTR_LAB_140475df8;
  *(int *)((longlong)*(int *)(param_1[0xf] + 4) + 0x74 + (longlong)param_1) =
       *(int *)(param_1[0xf] + 4) + -0xb0;
  FUN_14004c570(param_1 + 0x11);
  return param_1;
}

