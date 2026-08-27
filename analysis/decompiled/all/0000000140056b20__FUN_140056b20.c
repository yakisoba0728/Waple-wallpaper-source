// Function: FUN_140056b20
// Addr: 140056b20
// Size: 64 bytes


void FUN_140056b20(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(param_1 + 0x28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x74) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

