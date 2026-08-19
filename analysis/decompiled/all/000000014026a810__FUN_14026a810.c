// Function: FUN_14026a810
// Addr: 14026a810
// Size: 67 bytes


undefined4 * FUN_14026a810(undefined4 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0x10;
  }
  return param_1;
}

