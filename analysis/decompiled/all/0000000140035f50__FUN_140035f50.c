// Function: FUN_140035f50
// Addr: 140035f50
// Size: 5 bytes


void FUN_140035f50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  if (param_4 <= param_1[3] - uVar1) {
    param_1[2] = uVar1 + param_4;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((longlong)param_1 + param_2 + param_4,(longlong)param_1 + param_2,
                  (uVar1 - param_2) + 1);
  }
  func_0x0001400381a0(param_1,param_4,uVar1,param_2,param_3,param_4);
  return;
}

