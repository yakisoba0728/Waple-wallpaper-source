// Function: FUN_140186340
// Addr: 140186340
// Size: 156 bytes


void FUN_140186340(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_140290d80(&DAT_1404dfaf0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (DAT_1404dfb3c == 0x7fffffff) {
      DAT_1404dfb3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    DAT_1404e8ee4 = DAT_1404e8ee4 + -1;
    FUN_1401e3e30();
    lVar1 = DAT_1404e8ee8;
    if (DAT_1404e8ee4 == 0) {
      if (DAT_1404e8ee8 != 0) {
        FUN_1401e3620(DAT_1404e8ee8);
        thunk_FUN_14028af80(lVar1,0x68);
      }
      DAT_1404e8ee8 = 0;
    }
    FUN_140290ea0(&DAT_1404dfaf0);
  }
  return;
}

