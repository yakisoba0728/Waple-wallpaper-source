// Function: FUN_14011f830
// Addr: 14011f830
// Size: 134 bytes


void FUN_14011f830(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0xe50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0xe9c) != 0x7fffffff) {
    *(undefined4 *)(param_1 + 0xea0) = param_2;
    if (*(longlong *)(param_1 + 0xe30) != 0) {
      FUN_1401816d0(*(longlong *)(param_1 + 0xe30),param_2);
    }
    FUN_140290ea0(param_1 + 0xe50);
    return;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

