// Function: thunk_FUN_14028af20
// Addr: 14028b0c0
// Size: 5 bytes


void thunk_FUN_14028af20(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = _malloc_base();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_1402d0a90(param_1);
    if (iVar3 == 0) break;
    lVar2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    FUN_14028b8e0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

