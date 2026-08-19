// Function: FUN_1402ca440
// Addr: 1402ca440
// Size: 248 bytes


double FUN_1402ca440(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 in_XMM0 [16];
  
  dVar3 = in_XMM0._0_8_;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (((ulonglong)dVar3 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *param_2 = -1;
    if ((((longlong)dVar3 + 0x10000000000000U & 0x7fffffffffffffff) != 0) &&
       (((ulonglong)dVar3 & 0x7ff8000000000000) != 0x7ff8000000000000)) {
      FUN_1402de970(0x1f80,0xffc0);
      dVar3 = (double)FUN_1402ddf40(8);
      return dVar3;
    }
  }
  else {
    if (dVar3 == 0.0) {
      *param_2 = 0;
      return dVar3;
    }
    if ((((ulonglong)dVar3 & 0x7ff0000000000000) == 0) &&
       (((ulonglong)dVar3 & 0xfffffffffffff) != 0)) {
      uVar2 = (ulonglong)dVar3 & 0xfffffffffffff;
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar2 = uVar2 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
      *param_2 = (int)lVar1 + -0x431;
      if (dVar3 < 0.0) {
        uVar2 = uVar2 | 0x8000000000000000;
      }
      return (double)(uVar2 & 0xbfefffffffffffff | 0x3fe0000000000000);
    }
    dVar3 = (double)((ulonglong)dVar3 & 0xbfefffffffffffff | 0x3fe0000000000000);
    *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  }
  return dVar3;
}

