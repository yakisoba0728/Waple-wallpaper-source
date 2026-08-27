// Function: FUN_140050f20
// Addr: 140050f20
// Size: 67 bytes


void FUN_140050f20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 extraout_var;
  undefined4 local_14;
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_14028f860(param_1,param_2);
  *param_4 = extraout_var;
  param_4[1] = local_14;
  *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
  return;
}

