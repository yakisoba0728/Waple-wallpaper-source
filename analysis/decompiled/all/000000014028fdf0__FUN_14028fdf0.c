// Function: FUN_14028fdf0
// Addr: 14028fdf0
// Size: 30 bytes


void FUN_14028fdf0(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
  }
  return;
}

