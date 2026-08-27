// Function: FUN_1400cae30
// Addr: 1400cae30
// Size: 174 bytes


void FUN_1400cae30(longlong *param_1)

{
  int iVar1;
  longlong *local_18;
  char local_10;
  
  local_10 = 0;
  local_18 = param_1 + 4;
  iVar1 = FUN_140290d80();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) != 0x7fffffff) {
    local_10 = '\x01';
    if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
      (**(code **)(*param_1 + 0x20))(param_1,&local_18);
    }
    iVar1 = *(int *)((longlong)param_1 + 0xbc);
    while (iVar1 == 0) {
      FUN_140290f10(param_1 + 0xe,local_18);
      iVar1 = *(int *)((longlong)param_1 + 0xbc);
    }
    if (local_10 != '\0') {
      FUN_140290ea0(local_18);
    }
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

