// Function: FUN_14029d920
// Addr: 14029d920
// Size: 153 bytes


void FUN_14029d920(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(0,param_2,uVar1 * 2 + 2);
  }
  uVar2 = uVar1 | 7;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto UNWIND_INFO_14029da26_UnwindCodes_52__OffsetInProlog;
    uVar3 = (uVar2 + 1) * 2;
    if (uVar3 == 0) {
      *param_1 = 0;
      param_1[2] = uVar1;
      param_1[3] = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,param_2,uVar1 * 2 + 2);
    }
  }
  else {
    uVar3 = 0xfffffffffffffffe;
  }
  if (uVar3 < 0x1000) {
    func_0x00014028aff0();
    return;
  }
  if (uVar3 < uVar3 + 0x27) {
    func_0x00014028aff0(uVar3 + 0x27);
    return;
  }
UNWIND_INFO_14029da26_UnwindCodes_52__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

