// Function: FUN_1402f5cf0
// Addr: 1402f5cf0
// Size: 120 bytes


ulonglong FUN_1402f5cf0(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1) {
    return 0;
  }
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (*(code *)param_1[4])(param_1,uVar1,param_2,param_3);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar2;
    return uVar2;
  }
  uVar3 = *(uint *)(param_1 + 1) - uVar1;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (param_3 != 0) {
    FUN_1404210f0(param_2,(ulonglong)uVar1 + *param_1,(ulonglong)uVar3);
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return (ulonglong)uVar3;
}

