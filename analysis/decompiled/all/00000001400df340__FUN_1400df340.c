// Function: FUN_1400df340
// Addr: 1400df340
// Size: 164 bytes


void FUN_1400df340(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_4 == 0) {
    return;
  }
  lVar2 = param_1[1];
  if (param_4 <= (ulonglong)(param_1[2] - lVar2)) {
    if ((ulonglong)(lVar2 - param_2) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(param_2 + param_4,param_2,lVar2 - param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar2,lVar2 - param_4,param_4);
  }
  lVar1 = *param_1;
  if (0x7fffffffffffffffU - (lVar2 - lVar1) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - lVar1;
  uVar4 = (lVar2 - lVar1) + param_4;
  if (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) {
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      if (0xfff < uVar4) {
        uVar3 = uVar4 + 0x27;
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        goto code_r0x0001400df3da;
      }
      lVar2 = func_0x00014028aff0(uVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((param_2 - lVar1) + lVar2,param_3,param_4);
  }
  uVar3 = 0x8000000000000026;
code_r0x0001400df3da:
  func_0x00014028aff0(uVar3);
  return;
}

