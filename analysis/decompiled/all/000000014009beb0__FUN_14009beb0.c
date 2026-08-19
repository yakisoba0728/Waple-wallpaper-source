// Function: FUN_14009beb0
// Addr: 14009beb0
// Size: 197 bytes


void FUN_14009beb0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar1 = param_1[2] - *param_1 >> 3;
  if ((uVar1 <= 0x1fffffffffffffff - (uVar1 >> 1)) &&
     ((uVar1 = (uVar1 >> 1) + uVar1, uVar2 = param_2, uVar1 < param_2 ||
      (uVar2 = uVar1, uVar1 < 0x2000000000000000)))) {
    uVar2 = uVar2 * 8;
    if (uVar2 == 0) {
      uVar1 = param_1[1] - *param_1;
      func_0x000140421870(uVar1 & 0xfffffffffffffff8,0,(param_2 - ((longlong)uVar1 >> 3)) * 8);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,*param_1,param_1[1] - *param_1);
    }
    if (uVar2 < 0x1000) {
      func_0x00014028aff0(uVar2);
      return;
    }
    if (uVar2 < uVar2 + 0x27) {
      func_0x00014028aff0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

