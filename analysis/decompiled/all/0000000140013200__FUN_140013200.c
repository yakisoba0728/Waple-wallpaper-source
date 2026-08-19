// Function: FUN_140013200
// Addr: 140013200
// Size: 111 bytes


void FUN_140013200(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined2 param_4)

{
  ulonglong uVar1;
  undefined1 uStackX_8;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  if (param_1[3] - uVar1 < param_3) {
    FUN_1400133b0(param_1,param_3,uStackX_8,param_2,param_3,param_4);
    return;
  }
  param_1[2] = uVar1 + param_3;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0((longlong)param_1 + (param_3 + param_2) * 2,(longlong)param_1 + param_2 * 2,
                (uVar1 - param_2) * 2 + 2);
}

