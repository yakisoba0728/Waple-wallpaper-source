// Function: FUN_1402d381c
// Addr: 1402d381c
// Size: 70 bytes


uint FUN_1402d381c(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    iVar2 = FUN_1402d9b20();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

