// Function: FUN_1402d3864
// Addr: 1402d3864
// Size: 136 bytes


undefined8 FUN_1402d3864(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(param_2 + 2) == 0) && (param_2[1] - 2 < 2)) &&
     (cVar1 = FUN_1402d3a74(*param_2), cVar1 != '\0')) {
    iVar2 = FUN_1402d9b20();
    if ((iVar2 == 0) && (iVar2 = FUN_1402d9b20(), iVar2 == 0)) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}

