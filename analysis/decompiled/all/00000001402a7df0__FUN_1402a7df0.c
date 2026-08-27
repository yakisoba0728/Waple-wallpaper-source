// Function: FUN_1402a7df0
// Addr: 1402a7df0
// Size: 108 bytes


longlong FUN_1402a7df0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(short *)(param_1 + 2 + lVar1 * 2) != 0);
  lVar2 = _calloc_base(lVar1 + 2,2);
  if (lVar2 != 0) {
    FUN_1404210f0(lVar2,param_1,(lVar1 + 2) * 2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

