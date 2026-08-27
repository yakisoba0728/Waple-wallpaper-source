// Function: FUN_14010f450
// Addr: 14010f450
// Size: 167 bytes


void FUN_14010f450(undefined8 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x3b) != 0) {
    DVar1 = GetThreadId((HANDLE)param_1[0x3a]);
    PostThreadMessageW(DVar1,0x12,0,0);
    if (*(int *)(param_1 + 0x3b) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(1);
    }
    DVar1 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x3b) == DVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_18 = *(undefined4 *)(param_1 + 0x3a);
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x3b);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x1dc);
    iVar2 = FUN_140291150(&local_18,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  FUN_14010b870(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014010f4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

