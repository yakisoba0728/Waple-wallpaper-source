// Function: FUN_14028b190
// Addr: 14028b190
// Size: 5 bytes


void FUN_14028b190(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = thunk_FUN_1402da070();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = func_0x0001402d0b60(param_1);
    if (iVar3 == 0) break;
    lVar2 = thunk_FUN_1402da070(param_1);
  }
  if (param_1 == -1) {
    func_0x00014028b9b0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b990();
}

