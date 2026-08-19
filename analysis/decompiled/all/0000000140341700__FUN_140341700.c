// Function: FUN_140341700
// Addr: 140341700
// Size: 45 bytes


void FUN_140341700(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060();
  }
  return;
}

