// Function: FUN_14028f760
// Addr: 14028f760
// Size: 30 bytes


void FUN_14028f760(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
  }
  return;
}

