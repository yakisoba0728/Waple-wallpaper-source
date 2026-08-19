// Function: FUN_140053430
// Addr: 140053430
// Size: 196 bytes


void FUN_140053430(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = param_1[2];
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar6 = lVar2 + param_2 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      uVar6 = 0;
      goto LAB_1400534f9;
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar6 = uVar7 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar6 = 0x8000000000000027;
  }
  lVar5 = func_0x00014028aff0(uVar6);
  if (lVar5 == 0) {
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    func_0x00014028b040(uVar7);
    return;
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar5;
LAB_1400534f9:
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,param_1,lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,*param_1,lVar2);
}

