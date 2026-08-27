// Function: FUN_140113be0
// Addr: 140113be0
// Size: 146 bytes


void FUN_140113be0(longlong param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    DVar1 = GetThreadId(*(HANDLE *)(param_1 + 0x1d0));
    PostThreadMessageW(DVar1,0x12,0,0);
    if (*(int *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(1);
    }
    DVar1 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x1d8) == DVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_18 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_14 = *(undefined4 *)(param_1 + 0x1d4);
    uStack_10 = *(undefined4 *)(param_1 + 0x1d8);
    uStack_c = *(undefined4 *)(param_1 + 0x1dc);
    iVar2 = FUN_140291150(&local_18,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  return;
}

