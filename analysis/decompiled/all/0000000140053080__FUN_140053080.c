// Function: FUN_140053080
// Addr: 140053080
// Size: 131 bytes


void FUN_140053080(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  
  uVar2 = param_1[3];
  if (uVar2 < param_2) {
    uVar7 = 0x7fffffffffffffff;
    lVar3 = param_1[2];
    if (0x7fffffffffffffffU - lVar3 < param_2 - lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1400173b0();
    }
    uVar6 = param_2 | 0xf;
    if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
      uVar1 = (uVar2 >> 1) + uVar2;
      uVar7 = uVar6;
      if (uVar6 < uVar1) {
        uVar7 = uVar1;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 == 0) {
        uVar6 = 0;
        goto code_r0x00014005314e;
      }
      if (uVar1 < 0x1000) {
        uVar6 = func_0x00014028aff0(uVar1);
        goto code_r0x00014005314e;
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
    if (lVar5 != 0) {
      uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar5;
code_r0x00014005314e:
      param_1[2] = param_2;
      param_1[3] = uVar7;
      if (uVar2 < 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar6,param_1,lVar3 + 1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar6,*param_1,lVar3 + 1);
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    func_0x00014028b040(uVar7);
    *param_1 = unaff_RSI;
    param_1[2] = lVar3;
  }
  return;
}

