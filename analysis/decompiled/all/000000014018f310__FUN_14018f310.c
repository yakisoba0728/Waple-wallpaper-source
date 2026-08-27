// Function: FUN_14018f310
// Addr: 14018f310
// Size: 102 bytes


void FUN_14018f310(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140290d80(&DAT_1404dfaf0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb3c != 0x7fffffff) {
    if (DAT_1404e8ee8 != 0) {
      thunk_FUN_14028af80(param_2);
    }
    FUN_140290ea0(&DAT_1404dfaf0);
    return;
  }
  DAT_1404dfb3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

