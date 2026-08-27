// Function: FUN_140261710
// Addr: 140261710
// Size: 83 bytes


void FUN_140261710(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (param_1[1] - *param_1) + lVar1) {
    FUN_1404217a0(param_2,0);
    return;
  }
  FUN_1404210f0(param_2,param_1[1],lVar1);
  param_1[1] = param_1[1] + lVar1;
  return;
}

