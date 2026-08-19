// Function: Unwind@140051001
// Addr: 140051001
// Size: 50 bytes


void Unwind_140051001(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 extraout_var;
  undefined4 *unaff_RBX;
  undefined4 local_res24;
  
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_14028f930(param_1,*param_2);
  *unaff_RBX = extraout_var;
  unaff_RBX[1] = local_res24;
  *(undefined ***)(unaff_RBX + 2) = &PTR_DAT_1404df600;
  return;
}

