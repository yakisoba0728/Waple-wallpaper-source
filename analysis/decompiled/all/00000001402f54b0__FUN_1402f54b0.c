// Function: FUN_1402f54b0
// Addr: 1402f54b0
// Size: 115 bytes


byte FUN_1402f54b0(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    uVar2 = *(uint *)(param_1 + 1) - uVar1;
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    if (param_3 != 0) {
      FUN_1404210f0(param_2,(ulonglong)uVar1 + *param_1,uVar2);
    }
  }
  else {
    uVar2 = (*(code *)param_1[4])(param_1,(ulonglong)uVar1,param_2,param_3);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar1 + uVar2;
  return -(uVar2 < param_3) & 0x55;
}

