// Function: FUN_1402eb700
// Addr: 1402eb700
// Size: 97 bytes


bool FUN_1402eb700(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_1402ea2d0(*param_1);
  func_0x0001402ea400(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_1402eb6e0(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}

