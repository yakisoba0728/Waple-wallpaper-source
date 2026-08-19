// Function: FUN_1400f9140
// Addr: 1400f9140
// Size: 317 bytes


void FUN_1400f9140(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  uVar3 = *(ulonglong *)(param_3 + 0x10);
  uVar4 = param_1[3];
  if (uVar3 <= uVar4 - uVar2) {
    param_1[2] = uVar3 + uVar2;
    if (0xf < uVar4) {
      param_1 = (undefined8 *)*param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar3 + (longlong)param_1 + param_2,(longlong)param_1 + param_2,
                  (uVar2 - param_2) + 1);
  }
  if (0x7fffffffffffffff - uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar5 = uVar2 + uVar3 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar1 = (uVar4 >> 1) + uVar4;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      param_1[3] = uVar5;
      param_1[2] = uVar2 + uVar3;
      if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_1,param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,param_1,param_2);
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar5 = uVar5 + 0x28;
    if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar5 = 0x8000000000000027;
  }
  func_0x00014028aff0(uVar5);
  return;
}

