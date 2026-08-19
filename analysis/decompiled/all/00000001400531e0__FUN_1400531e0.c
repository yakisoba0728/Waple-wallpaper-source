// Function: FUN_1400531e0
// Addr: 1400531e0
// Size: 172 bytes


void FUN_1400531e0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[2];
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + param_2 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar5 + 0x28;
        if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        goto LAB_140053287;
      }
      uVar4 = func_0x00014028aff0(uVar1);
    }
    param_1[2] = lVar2 + param_2;
    param_1[3] = uVar5;
    if (uVar3 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar4,param_1,lVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,*param_1,lVar2);
  }
  uVar5 = 0x8000000000000027;
LAB_140053287:
  func_0x00014028aff0(uVar5);
  return;
}

