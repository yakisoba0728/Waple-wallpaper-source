// Function: FUN_1401d9560
// Addr: 1401d9560
// Size: 177 bytes


void FUN_1401d9560(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  uVar7 = param_1[1] - lVar2;
  uVar6 = (longlong)uVar7 >> 4;
  if (param_2 < uVar6) {
    param_1[1] = param_2 * 0x10 + lVar2;
    return;
  }
  if (param_2 <= uVar6) {
    return;
  }
  uVar4 = param_1[2] - lVar2 >> 4;
  if (param_2 <= uVar4) {
    lVar2 = func_0x0001401dc0c0(param_1[1],param_2 - uVar6);
    param_1[1] = lVar2;
    return;
  }
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if ((uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) &&
     ((uVar4 = (uVar4 >> 1) + uVar4, uVar5 = param_2, uVar4 < param_2 ||
      (uVar5 = uVar4, uVar4 < 0x1000000000000000)))) {
    uVar5 = uVar5 * 0x10;
    if (uVar5 == 0) {
      uVar4 = 0;
    }
    else if (uVar5 < 0x1000) {
      uVar4 = func_0x00014028aff0(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) goto UNWIND_INFO_1401d96d2_UnwindCodes_29__UnwindOpCode;
      lVar2 = func_0x00014028aff0();
      if (lVar2 == 0) {
        pcVar1 = (code *)swi(0x29);
        uVar3 = (*pcVar1)(5);
        func_0x00014028b040(uVar3);
        *param_1 = unaff_RBP;
        param_1[1] = param_2 * 0x10 + unaff_RBP;
        param_1[2] = uVar5 + unaff_RBP;
        return;
      }
      uVar4 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar2;
    }
    if (param_2 - uVar6 != 0) {
      func_0x000140421870((uVar7 & 0xfffffffffffffff0) + uVar4,0,(param_2 - uVar6) * 0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,*param_1,param_1[1] - *param_1);
  }
UNWIND_INFO_1401d96d2_UnwindCodes_29__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

