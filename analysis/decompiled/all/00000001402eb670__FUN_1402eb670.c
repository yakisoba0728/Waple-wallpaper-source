// Function: FUN_1402eb670
// Addr: 1402eb670
// Size: 71 bytes


undefined8 FUN_1402eb670(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_1402ec720(0,0);
      *param_1 = uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = thunk_FUN_1402ec720(param_2,param_3);
    *param_1 = uVar1;
    return 0;
  }
  thunk_FUN_1402ec720(param_2,param_3);
  return 0;
}

