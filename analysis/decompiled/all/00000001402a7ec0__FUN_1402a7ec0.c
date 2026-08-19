// Function: FUN_1402a7ec0
// Addr: 1402a7ec0
// Size: 5 bytes


void FUN_1402a7ec0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(short *)(param_1 + 2 + lVar2 * 2) != 0);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1402dd8b0(lVar2 + 2,2);
}

