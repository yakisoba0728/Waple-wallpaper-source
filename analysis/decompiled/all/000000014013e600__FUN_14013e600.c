// Function: FUN_14013e600
// Addr: 14013e600
// Size: 260 bytes


void FUN_14013e600(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_140017090(lVar2);
  }
  lVar2 = lVar2 - *param_1;
  lVar2 = lVar2 / 0x12 + (lVar2 >> 0x3f);
  lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  if (lVar2 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = (param_1[2] - *param_1 >> 3) * -0x71c71c71c71c71c7;
  uVar1 = 0x38e38e38e38e38e - (uVar3 >> 1);
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar1 = lVar2 + 1U;
    if (lVar2 + 1U <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 < 0x38e38e38e38e38f) {
      uVar1 = uVar1 * 0x48;
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017090(lVar2 * 0x48,param_2);
      }
      if (uVar1 < 0x1000) {
        func_0x00014028aff0(uVar1);
        return;
      }
      if (uVar1 < uVar1 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

