// Function: FUN_140053400
// Addr: 140053400
// Size: 34 bytes


void FUN_140053400(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 uStackX_8;
  
  if ((ulonglong)param_2[3] < 0x10) {
    uVar2 = param_2[2];
  }
  else {
    uVar2 = param_2[2];
    param_2 = (undefined8 *)*param_2;
  }
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < uVar2) {
    FUN_1400531e0(param_1,uVar2,uStackX_8,param_2,uVar2);
    return;
  }
  param_1[2] = lVar1 + uVar2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0((longlong)param_1 + lVar1,param_2,uVar2);
}

