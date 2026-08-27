// Function: FUN_1402ee480
// Addr: 1402ee480
// Size: 107 bytes


ulonglong FUN_1402ee480(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_2 + 0x60) != 0x6f75746c) {
    return 0x12;
  }
  uVar1 = FUN_1402f3390(*param_1,*(undefined2 *)(param_2 + 0x9a),*(undefined2 *)(param_2 + 0x98),
                        param_1 + 4);
  if ((int)uVar1 == 0) {
    FUN_1402f26e0((undefined2 *)(param_2 + 0x98),param_1 + 4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

