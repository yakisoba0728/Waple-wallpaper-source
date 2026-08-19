// Function: FUN_140049650
// Addr: 140049650
// Size: 453 bytes


void FUN_140049650(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  puVar7 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar7 = (undefined8 *)*param_4;
  }
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  uVar5 = param_4[2];
  uVar4 = param_1[3];
  if (uVar3 - param_2 < param_3) {
    param_3 = uVar3 - param_2;
  }
  if (param_3 == uVar5) {
    if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(*param_1 + param_2,puVar7,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((longlong)param_1 + param_2,puVar7,uVar5);
  }
  if (uVar5 < param_3) {
    if (0xf < uVar4) {
      param_1 = (longlong *)*param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((longlong)param_1 + param_2,puVar7,uVar5);
  }
  uVar5 = uVar5 - param_3;
  if (uVar5 <= uVar4 - uVar3) {
    param_1[2] = uVar5 + uVar3;
    if (0xf < uVar4) {
      param_1 = (longlong *)*param_1;
    }
    lVar1 = (longlong)param_1 + param_3 + param_2;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar5 + lVar1,lVar1);
  }
  if (0x7fffffffffffffff - uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar6 = uVar3 + uVar5 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    uVar2 = uVar6 + 1;
    if (uVar2 == 0) {
      param_1[2] = uVar3 + uVar5;
      param_1[3] = uVar6;
      if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_1,param_2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,param_1,param_2);
    }
    if (uVar2 < 0x1000) {
      func_0x00014028aff0(uVar2);
      return;
    }
    uVar6 = uVar6 + 0x28;
    if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar6 = 0x8000000000000027;
  }
  func_0x00014028aff0(uVar6);
  return;
}

