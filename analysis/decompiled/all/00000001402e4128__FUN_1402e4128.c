// Function: FUN_1402e4128
// Addr: 1402e4128
// Size: 30 bytes


undefined8 FUN_1402e4128(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    while (lVar1 != 0) {
      lVar2 = lVar2 + 1;
      param_1 = param_1 + 1;
      lVar1 = *param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402dd8b0(lVar2 + 1,8);
  }
  return 0;
}

