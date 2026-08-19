// Function: FUN_140016060
// Addr: 140016060
// Size: 181 bytes


undefined8 * FUN_140016060(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  
  lVar2 = param_1[2];
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar6 = lVar2 + param_2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto UNWIND_INFO_1400161cb_UnwindCodes_12__UnwindOpCode;
    uVar6 = (uVar7 + 1) * 2;
    if (uVar6 == 0) {
      uVar6 = 0;
      goto UNWIND_INFO_14001611e_UnwindCodes_14__OffsetInProlog;
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
UNWIND_INFO_1400161cb_UnwindCodes_12__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar5 = func_0x00014028aff0(uVar6 + 0x27);
    if (lVar5 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      func_0x00014028b040(uVar7);
      *param_1 = unaff_RBX;
      return param_1;
    }
    uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar6 - 8) = lVar5;
  }
UNWIND_INFO_14001611e_UnwindCodes_14__OffsetInProlog:
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar7;
  if (7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,*param_1,lVar2 * 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,param_1,lVar2 * 2);
}

