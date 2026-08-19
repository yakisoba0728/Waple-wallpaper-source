// Function: FUN_1400f31b0
// Addr: 1400f31b0
// Size: 97 bytes


bool FUN_1400f31b0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = func_0x000140290e50(param_1 + 0xd8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xd8))();
      bVar2 = iVar1 != 0;
    }
    FUN_140290f70(param_1 + 0xd8);
    return bVar2;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

