// Function: FUN_1402d2438
// Addr: 1402d2438
// Size: 118 bytes


void FUN_1402d2438(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1402d9b20();
  if (iVar1 == 0) {
    iVar1 = FUN_1402d9b20();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

