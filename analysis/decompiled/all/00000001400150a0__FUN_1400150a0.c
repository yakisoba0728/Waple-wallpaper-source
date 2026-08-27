// Function: FUN_1400150a0
// Addr: 1400150a0
// Size: 103 bytes


void FUN_1400150a0(undefined8 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(1);
  }
  DVar1 = *(DWORD *)(param_1 + 1);
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    local_18 = *(undefined4 *)param_1;
    uStack_14 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_10 = *(undefined4 *)(param_1 + 1);
    uStack_c = *(undefined4 *)((longlong)param_1 + 0xc);
    iVar3 = FUN_140291150(&local_18,0);
    if (iVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

