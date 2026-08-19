// Function: FUN_1400159e0
// Addr: 1400159e0
// Size: 288 bytes


undefined8 *
FUN_1400159e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RDI;
  
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (param_4 <= uVar2 - lVar3) {
    param_1[2] = param_4 + lVar3;
    if (7 < uVar2) {
      param_1 = (undefined8 *)*param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((longlong)param_1 + param_4 * 2,param_1,lVar3 * 2 + 2);
  }
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar6 = param_4 + lVar3 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_140015bfd;
    uVar6 = (uVar7 + 1) * 2;
    if (uVar6 == 0) {
      uVar6 = 0;
      goto UNWIND_INFO_140015b39_UnwindCodes_14__UnwindOpCode;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
  }
  if (uVar6 < 0x1000) {
    uVar6 = func_0x00014028aff0();
  }
  else {
    if (uVar6 + 0x27 <= uVar6) {
LAB_140015bfd:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar5 = func_0x00014028aff0(uVar6 + 0x27);
    if (lVar5 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      func_0x00014028b040(uVar7);
      *param_1 = unaff_RDI;
      return param_1;
    }
    uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar6 - 8) = lVar5;
  }
UNWIND_INFO_140015b39_UnwindCodes_14__UnwindOpCode:
  param_1[2] = param_4 + lVar3;
  param_1[3] = uVar7;
  if (7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,param_3,param_4 * 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,param_3,param_4 * 2);
}

