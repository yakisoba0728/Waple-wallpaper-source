// Function: FUN_140332180
// Addr: 140332180
// Size: 366 bytes


undefined8
FUN_140332180(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  longlong lVar2;
  
  FUN_1404217a0(param_1,0,0x740);
  lVar2 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x90),"postscript-cmaps",1);
  if (lVar2 == 0) {
    return 7;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xcb] = lVar2;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar2 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar2;
    param_1[4] = lVar2 + 0x18;
    param_1[5] = lVar2 + 0x60;
    FUN_1402f1060();
    param_1[0xd] = **(undefined8 **)(param_3 + 0x38);
    param_1[0xc] = 0;
    if (param_7 != '\0') {
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = PTR_LAB_140441388;
  param_1[0xe] = PTR_FUN_140441380;
  param_1[0xf] = puVar1;
  puVar1 = PTR_FUN_140441398;
  param_1[0x10] = PTR_LAB_140441390;
  param_1[0x11] = puVar1;
  puVar1 = PTR_FUN_1404413a8;
  param_1[0x12] = PTR_FUN_1404413a0;
  param_1[0x13] = puVar1;
  puVar1 = PTR_FUN_1404413b8;
  param_1[0x14] = PTR_FUN_1404413b0;
  param_1[0x15] = puVar1;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xcd] = param_5;
  *(undefined4 *)(param_1 + 0xde) = param_8;
  param_1[0xdd] = param_6;
  param_1[0xdf] = param_9;
  puVar1 = PTR_FUN_1404413c8;
  param_1[0xe0] = PTR_FUN_1404413c0;
  param_1[0xe1] = puVar1;
  puVar1 = PTR_FUN_1404413d8;
  param_1[0xe2] = PTR_FUN_1404413d0;
  param_1[0xe3] = puVar1;
  return 0;
}

