// Function: thunk_FUN_1402ea4b4
// Addr: 1402ea738
// Size: 5 bytes


undefined8 thunk_FUN_1402ea4b4(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = func_0x0001402d69e0(param_1,0x7fff);
    if (uVar1 < 0x7fff) {
      FUN_1402d6370(0xb);
      uVar2 = FUN_1402ea514(param_1);
      __acrt_unlock(0xb);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

