// Function: FUN_1402eb630
// Addr: 1402eb630
// Size: 97 bytes


bool FUN_1402eb630(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_1402ea200(*param_1);
  FUN_1402ea330(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_1402eb610(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

