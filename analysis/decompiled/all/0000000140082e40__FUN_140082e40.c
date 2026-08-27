// Function: FUN_140082e40
// Addr: 140082e40
// Size: 99 bytes


void FUN_140082e40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140290d80();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (lVar2 != 0) {
      while( true ) {
        lVar2 = lVar2 + -1;
        *(longlong *)(param_1 + 0x70) = lVar2;
        if (lVar2 == 0) break;
        *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    FUN_140290ea0(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

