// Function: FUN_1402da070
// Addr: 1402da070
// Size: 86 bytes


void FUN_1402da070(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      lVar2 = (*DAT_1404264b0)(DAT_1404e4fa0,0,param_1);
      if (lVar2 != 0) {
        return;
      }
      iVar1 = FUN_1402d3bb0();
    } while ((iVar1 != 0) && (iVar1 = func_0x0001402d0b60(param_1), iVar1 != 0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

