// Function: FUN_14011f7b0
// Addr: 14011f7b0
// Size: 126 bytes


void FUN_14011f7b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0xe50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0xe9c) != 0x7fffffff) {
    if (*(longlong *)(param_1 + 0xe30) != 0) {
      FUN_140181f30(*(longlong *)(param_1 + 0xe30),param_2);
    }
    FUN_140290ea0(param_1 + 0xe50);
    return;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

