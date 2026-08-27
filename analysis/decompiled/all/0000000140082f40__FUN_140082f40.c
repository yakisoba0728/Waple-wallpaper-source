// Function: FUN_140082f40
// Addr: 140082f40
// Size: 85 bytes


void FUN_140082f40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x5c) != 0x7fffffff) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    FUN_140290ea0(param_1 + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

