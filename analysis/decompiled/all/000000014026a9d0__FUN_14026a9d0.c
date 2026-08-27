// Function: FUN_14026a9d0
// Addr: 14026a9d0
// Size: 142 bytes


undefined4 * FUN_14026a9d0(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    lVar1 = FUN_14028af20(0x20);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar1 + 8) = lVar1;
    *(longlong *)(param_1 + 2) = lVar1;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 7;
    *(undefined8 *)(param_1 + 0xe) = 8;
    *param_1 = 0x3f800000;
    FUN_140011f50(param_1 + 6,0x10,lVar1);
    param_1 = param_1 + 0x10;
  }
  return param_1;
}

