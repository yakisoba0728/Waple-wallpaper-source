// Function: FUN_140016130
// Addr: 140016130
// Size: 64 bytes


void FUN_140016130(undefined8 *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  undefined1 local_res8;
  
  uVar1 = param_1[2];
  if (uVar1 < (ulonglong)param_1[3]) {
    param_1[2] = uVar1 + 1;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + uVar1 * 2) = param_2;
    *(undefined2 *)((longlong)param_1 + uVar1 * 2 + 2) = 0;
    return;
  }
  FUN_140015f90(param_1,1,local_res8,param_2);
  return;
}

