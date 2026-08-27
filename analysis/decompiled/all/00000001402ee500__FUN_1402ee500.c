// Function: FUN_1402ee500
// Addr: 1402ee500
// Size: 78 bytes


ulonglong FUN_1402ee500(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1402f3390(*param_1,*(undefined2 *)((longlong)param_1 + 0x22),
                        *(undefined2 *)(param_1 + 4),param_2 + 0x20);
  if ((int)uVar1 == 0) {
    FUN_1402f26e0(param_1 + 4,param_2 + 0x20);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

