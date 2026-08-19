// Function: FUN_140082b20
// Addr: 140082b20
// Size: 257 bytes


void FUN_140082b20(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = param_5 - param_4;
  if (uVar4 == 0) {
    *param_2 = (param_3 - lVar1) + *param_1;
    return;
  }
  lVar2 = param_1[1];
  if (uVar4 <= (ulonglong)(param_1[2] - lVar2)) {
    if ((ulonglong)(lVar2 - param_3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(param_3 + uVar4,param_3,lVar2 - param_3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar2,lVar2 - uVar4,uVar4);
  }
  if (0x7fffffffffffffffU - (lVar2 - lVar1) < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - lVar1;
  uVar5 = (lVar2 - lVar1) + uVar4;
  if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x8000000000000026;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(param_3 - lVar1,param_4,uVar4);
    }
    if (uVar5 < 0x1000) {
      func_0x00014028aff0(uVar5);
      return;
    }
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  func_0x00014028aff0(uVar4);
  return;
}

