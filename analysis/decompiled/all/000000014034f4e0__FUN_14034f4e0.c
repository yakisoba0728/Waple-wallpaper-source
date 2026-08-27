// Function: FUN_14034f4e0
// Addr: 14034f4e0
// Size: 88 bytes


undefined8 FUN_14034f4e0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x20)) {
    return 6;
  }
  if (param_3 != 0) {
    FUN_1402f36a0(param_2 + 0x98,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    FUN_1402f3790(param_2 + 0x98,*param_4,param_4[1]);
  }
  return 0;
}

