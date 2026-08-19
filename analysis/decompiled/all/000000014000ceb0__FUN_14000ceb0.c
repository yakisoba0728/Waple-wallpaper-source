// Function: FUN_14000ceb0
// Addr: 14000ceb0
// Size: 214 bytes


void FUN_14000ceb0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_140017090(lVar1);
  }
  uVar4 = lVar1 - *param_1;
  lVar1 = (longlong)uVar4 >> 5;
  if (lVar1 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - *param_1 >> 5;
  if (uVar3 <= 0x7ffffffffffffff - (uVar3 >> 1)) {
    uVar2 = lVar1 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    if (uVar2 < 0x800000000000000) {
      uVar2 = uVar2 * 0x20;
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017090(uVar4 & 0xffffffffffffffe0,param_2);
      }
      if (uVar2 < 0x1000) {
        func_0x00014028aff0();
        return;
      }
      if (uVar2 < uVar2 + 0x27) {
        func_0x00014028aff0(uVar2 + 0x27);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

