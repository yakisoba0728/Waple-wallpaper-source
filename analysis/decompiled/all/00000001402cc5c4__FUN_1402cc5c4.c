// Function: FUN_1402cc5c4
// Addr: 1402cc5c4
// Size: 42 bytes


int FUN_1402cc5c4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = FUN_1402e0500();
    *param_2 = lVar1;
    return (lVar1 != -1) - 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

