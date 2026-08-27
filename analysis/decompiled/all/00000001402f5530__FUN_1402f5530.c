// Function: FUN_1402f5530
// Addr: 1402f5530
// Size: 108 bytes


byte FUN_1402f5530(longlong *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 1) <= param_2) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar1 = *(uint *)(param_1 + 1) - param_2;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    if (param_4 != 0) {
      FUN_1404210f0(param_3,(ulonglong)param_2 + *param_1,uVar1);
    }
  }
  else {
    uVar1 = (*(code *)param_1[4])(param_1,(ulonglong)param_2);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar1 + param_2;
  return -(uVar1 < param_4) & 0x55;
}

