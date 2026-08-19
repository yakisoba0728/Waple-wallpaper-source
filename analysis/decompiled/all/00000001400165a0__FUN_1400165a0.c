// Function: FUN_1400165a0
// Addr: 1400165a0
// Size: 76 bytes


void FUN_1400165a0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 uStackX_8;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    FUN_1400163e0(param_1,param_3,uStackX_8,param_2,param_3);
    return;
  }
  param_1[2] = lVar1 + param_3;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0((longlong)param_1 + lVar1 * 2,param_2,param_3 * 2);
}

