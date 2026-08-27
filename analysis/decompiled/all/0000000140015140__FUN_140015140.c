// Function: FUN_140015140
// Addr: 140015140
// Size: 60 bytes


void FUN_140015140(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140290d80();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

