// Function: FUN_140050ff0
// Addr: 140050ff0
// Size: 16 bytes


void FUN_140050ff0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 extraout_var;
  undefined4 uStack_14;
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_14028f930(param_1,param_2);
  *param_4 = extraout_var;
  param_4[1] = uStack_14;
  *(undefined ***)(param_4 + 2) = &PTR_DAT_1404df600;
  return;
}

