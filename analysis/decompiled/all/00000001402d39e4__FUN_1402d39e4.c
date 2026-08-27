// Function: FUN_1402d39e4
// Addr: 1402d39e4
// Size: 142 bytes


uint FUN_1402d39e4(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_1402d3a74(*param_2), (char)in_EAX != '\0')) {
    iVar1 = FUN_1402bfe60();
    if ((iVar1 == 0) && (iVar1 = FUN_1402bfe60(), iVar1 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

