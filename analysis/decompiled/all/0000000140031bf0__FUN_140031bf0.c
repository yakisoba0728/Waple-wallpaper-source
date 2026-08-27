// Function: FUN_140031bf0
// Addr: 140031bf0
// Size: 159 bytes


longlong * FUN_140031bf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = param_2[1] - *param_2;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < (ulonglong)((longlong)uVar2 >> 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    lVar1 = FUN_1400399f0();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = (uVar2 & 0xfffffffffffffffc) + lVar1;
    uVar2 = param_2[1] - *param_2;
    FUN_1404210f0(lVar1,*param_2,uVar2);
    param_1[1] = (uVar2 & 0xfffffffffffffffc) + lVar1;
  }
  return param_1;
}

