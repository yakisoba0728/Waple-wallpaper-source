// Function: FUN_1400140e0
// Addr: 1400140e0
// Size: 73 bytes


undefined2 *
FUN_1400140e0(longlong *param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while ((param_3 != param_4 &&
         (cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,*param_3), cVar1 != '\0'))) {
    param_3 = param_3 + 1;
  }
  return param_3;
}

