// Function: FUN_14011aee0
// Addr: 14011aee0
// Size: 105 bytes


void FUN_14011aee0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x450);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) != 0x7fffffff) {
    FUN_1400150a0(param_1 + 0x440);
    FUN_140290ea0(param_1 + 0x450);
    return;
  }
  *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

