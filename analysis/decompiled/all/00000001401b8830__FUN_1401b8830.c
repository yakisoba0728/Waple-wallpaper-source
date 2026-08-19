// Function: FUN_1401b8830
// Addr: 1401b8830
// Size: 202 bytes


undefined8 * FUN_1401b8830(undefined8 *param_1)

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
  uVar7 = 0x3ffffffffffffffe;
  if (lVar2 == 0x3ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar6 = lVar2 + 1U | 3;
  if ((uVar6 < 0x3fffffffffffffff) && (uVar3 <= 0x3ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x3fffffffffffffff < uVar7 + 1) goto LAB_1401b89c2;
    uVar6 = (uVar7 + 1) * 4;
    if (uVar6 == 0) {
      uVar6 = 0;
      goto UNWIND_INFO_1401b88fe_UnwindCodes_8__UnwindOpCode;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffc;
  }
  if (uVar6 < 0x1000) {
    uVar6 = func_0x00014028aff0();
  }
  else {
    if (uVar6 + 0x27 <= uVar6) {
LAB_1401b89c2:
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
UNWIND_INFO_1401b88fe_UnwindCodes_8__UnwindOpCode:
  param_1[2] = lVar2 + 1U;
  param_1[3] = uVar7;
  if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,*param_1,lVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,param_1,lVar2 * 4);
}

