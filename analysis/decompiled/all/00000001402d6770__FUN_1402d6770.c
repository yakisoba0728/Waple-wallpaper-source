// Function: FUN_1402d6770
// Addr: 1402d6770
// Size: 120 bytes


longlong FUN_1402d6770(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar2 * 2) != 0);
    lVar2 = thunk_FUN_1402da070((lVar3 + 2) * 2);
    if (lVar2 != 0) {
      iVar1 = func_0x0001402dec70();
      if (iVar1 == 0) {
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}

