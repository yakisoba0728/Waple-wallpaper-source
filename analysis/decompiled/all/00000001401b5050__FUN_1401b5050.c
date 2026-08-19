// Function: FUN_1401b5050
// Addr: 1401b5050
// Size: 196 bytes


undefined8 * FUN_1401b5050(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (3 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x3ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar1 < 4) {
    param_1[2] = uVar1;
    param_1[3] = 3;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar2 = uVar1 | 3;
  if (uVar2 < 0x3fffffffffffffff) {
    if (uVar2 < 4) {
      uVar2 = 4;
    }
    if (0x3fffffffffffffff < uVar2 + 1) goto UNWIND_INFO_1401b516b_UnwindCodes_1__UnwindOpCode;
    uVar5 = (uVar2 + 1) * 4;
    if (uVar5 == 0) goto UNWIND_INFO_1401b513e_UnwindCodes_0__OffsetInProlog;
  }
  else {
    uVar5 = 0xfffffffffffffffc;
    uVar2 = 0x3ffffffffffffffe;
  }
  if (uVar5 < 0x1000) {
    uVar4 = func_0x00014028aff0();
UNWIND_INFO_1401b513e_UnwindCodes_0__OffsetInProlog:
    *param_1 = uVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,param_2,uVar1 * 4 + 4);
  }
  if (uVar5 < uVar5 + 0x27) {
    puVar3 = (undefined8 *)func_0x00014028aff0(uVar5 + 0x27);
    return puVar3;
  }
UNWIND_INFO_1401b516b_UnwindCodes_1__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

