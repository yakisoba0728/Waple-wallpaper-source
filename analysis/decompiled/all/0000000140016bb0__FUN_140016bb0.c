// Function: FUN_140016bb0
// Addr: 140016bb0
// Size: 158 bytes


undefined8 * FUN_140016bb0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  uVar5 = param_1[3];
  if (param_3 <= uVar5) {
    puVar7 = param_1;
    if (7 < uVar5) {
      puVar7 = (undefined8 *)*param_1;
    }
    param_1[2] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar7,param_2,param_3 * 2);
  }
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar8 = 0;
  uVar4 = param_3 | 7;
  if ((uVar4 < 0x7fffffffffffffff) && (uVar5 <= 0x7ffffffffffffffe - (uVar5 >> 1))) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar4;
    if (uVar4 < uVar5) {
      uVar6 = uVar5;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto UNWIND_INFO_140016cee_UnwindCodes_30__OffsetInProlog;
    uVar5 = (uVar6 + 1) * 2;
    if (uVar5 == 0) goto code_r0x000140016cb8;
  }
  else {
    uVar5 = 0xfffffffffffffffe;
  }
  if (uVar5 < 0x1000) {
    uVar8 = func_0x00014028aff0();
  }
  else {
    if (uVar5 + 0x27 <= uVar5) {
UNWIND_INFO_140016cee_UnwindCodes_30__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar2 = func_0x00014028aff0(uVar5 + 0x27);
    if (lVar2 == 0) {
      pcVar1 = (code *)swi(0x29);
      uVar3 = (*pcVar1)(5);
      func_0x00014028b040(uVar3);
      *param_1 = unaff_RSI;
      return param_1;
    }
    uVar8 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar2;
  }
code_r0x000140016cb8:
  param_1[3] = uVar6;
  param_1[2] = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar8,param_2,param_3 * 2);
}

