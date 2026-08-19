// Function: FUN_1401dcb30
// Addr: 1401dcb30
// Size: 102 bytes


void FUN_1401dcb30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (0x1555555555555555 < param_2) {
LAB_1401dcbb6:
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  param_2 = param_2 * 0xc;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xfff < param_2) {
      if (param_2 < param_2 + 0x27) {
        func_0x00014028aff0();
        return;
      }
      goto LAB_1401dcbb6;
    }
    lVar1 = func_0x00014028aff0(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + param_2;
  return;
}

