// Function: FUN_1402bf230
// Addr: 1402bf230
// Size: 216 bytes


int FUN_1402bf230(undefined8 *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar2 <= uVar1) && (local_10 = param_1[1], local_10 <= uVar2)) {
    if ((longlong)(uVar2 - local_10) < (longlong)(uVar1 - uVar2)) {
      uVar3 = *param_1;
      param_4 = param_2;
      if (local_10 < uVar2) {
        do {
          FUN_1402bf190(uVar3,&local_10);
          param_2 = param_2 + 1;
          param_4 = param_2;
        } while (local_10 < (ulonglong)param_5[1]);
      }
    }
    else {
      uVar3 = *param_5;
      local_10 = uVar2;
      if (uVar2 < uVar1) {
        do {
          FUN_1402bf190(uVar3,&local_10);
          param_4 = param_4 + -1;
        } while (local_10 < *(ulonglong *)(param_3 + 8));
      }
    }
    return param_4;
  }
  return -1;
}

