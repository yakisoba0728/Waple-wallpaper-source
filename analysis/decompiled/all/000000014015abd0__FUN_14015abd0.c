// Function: FUN_14015abd0
// Addr: 14015abd0
// Size: 80 bytes


void FUN_14015abd0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  
  if (param_2 <= (ulonglong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = param_1[1];
  param_2 = param_2 * 8;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else if (param_2 < 0x1000) {
    uVar4 = func_0x00014028aff0(param_2);
  }
  else {
    if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar2 = func_0x00014028aff0();
    if (lVar2 == 0) {
      uVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      func_0x00014028b040(uVar3);
      *param_1 = unaff_RBX;
      param_1[1] = (uVar4 & 0xfffffffffffffff8) + unaff_RBX;
      param_1[2] = param_2 + unaff_RBX;
      return;
    }
    uVar4 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar4,*param_1,param_1[1] - *param_1);
}

