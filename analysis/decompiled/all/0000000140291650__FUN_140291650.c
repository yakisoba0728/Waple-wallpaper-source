// Function: FUN_140291650
// Addr: 140291650
// Size: 92 bytes


void FUN_140291650(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1 * 2;
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + 2 + lVar2) != 0);
  lVar1 = lVar1 * 2 + 2;
  lVar2 = thunk_FUN_1402da070(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar2,param_1,lVar1);
  }
  return;
}

