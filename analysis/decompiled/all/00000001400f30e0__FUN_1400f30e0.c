// Function: FUN_1400f30e0
// Addr: 1400f30e0
// Size: 123 bytes


bool FUN_1400f30e0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_140290d80(param_1 + 0xd8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    if (*(longlong **)(param_1 + 0x58) == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xd8))();
      bVar2 = iVar1 != 0;
    }
    FUN_140290ea0(param_1 + 0xd8);
    return bVar2;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

