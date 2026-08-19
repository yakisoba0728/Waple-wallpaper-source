// Function: FUN_1402dd8b0
// Addr: 1402dd8b0
// Size: 69 bytes


void FUN_1402dd8b0(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    lVar3 = param_1 * param_2;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    do {
      lVar2 = (*DAT_1404264b0)(DAT_1404e4fa0,8,lVar3);
      if (lVar2 != 0) {
        return;
      }
      iVar1 = FUN_1402d3bb0();
    } while ((iVar1 != 0) && (iVar1 = func_0x0001402d0b60(lVar3), iVar1 != 0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

