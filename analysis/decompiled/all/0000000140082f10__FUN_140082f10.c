// Function: FUN_140082f10
// Addr: 140082f10
// Size: 32 bytes


undefined8 FUN_140082f10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = func_0x000140290e50();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (lVar3 != 0) {
      while( true ) {
        lVar3 = lVar3 + -1;
        *(longlong *)(param_1 + 0x70) = lVar3;
        if (lVar3 == 0) break;
        *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    piVar1 = (int *)(param_1 + 0x4c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      (*DAT_140426298)(param_1 + 0x10);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

