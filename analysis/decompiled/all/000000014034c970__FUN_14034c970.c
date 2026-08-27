// Function: FUN_14034c970
// Addr: 14034c970
// Size: 102 bytes


int FUN_14034c970(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar1 = FUN_1402f7ff0(param_3,4,*(uint *)(param_1 + 0x2c),param_2,
                          *(undefined8 *)(param_1 + 0x30),local_res10);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 0x2c) = param_2;
  }
  return 0;
}

