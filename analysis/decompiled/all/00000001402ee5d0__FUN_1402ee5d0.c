// Function: FUN_1402ee5d0
// Addr: 1402ee5d0
// Size: 62 bytes


ulonglong FUN_1402ee5d0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1402f3460(*param_1,*(undefined2 *)((longlong)param_1 + 0x22),
                        *(undefined2 *)(param_1 + 4),param_2 + 0x20);
  if ((int)uVar1 == 0) {
    FUN_1402f27b0(param_1 + 4,param_2 + 0x20);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

