// Function: FUN_140016ee0
// Addr: 140016ee0
// Size: 153 bytes


void FUN_140016ee0(undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_res8;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (uVar2 <= param_1[3] - uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1404217a0(uVar1 + (longlong)param_1,(int)param_3,uVar2);
    *(undefined1 *)(uVar1 + (longlong)param_1 + uVar2) = 0;
    return;
  }
  FUN_140016cc0(param_1,uVar2,local_res8,uVar2,param_3);
  return;
}

