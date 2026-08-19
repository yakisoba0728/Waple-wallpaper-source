// Function: FUN_140038db0
// Addr: 140038db0
// Size: 203 bytes


void FUN_140038db0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (0x7fffffffffffffff - param_1[2] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar2 = param_1[3];
  param_2 = param_1[2] + param_2;
  uVar3 = param_2 | 0xf;
  if ((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      param_1[3] = uVar3;
      param_1[2] = param_2;
      if (uVar2 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,param_1,param_4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,*param_1,param_4);
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar3 = uVar3 + 0x28;
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
  }
  func_0x00014028aff0(uVar3);
  return;
}

