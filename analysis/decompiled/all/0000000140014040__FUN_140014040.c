// Function: FUN_140014040
// Addr: 140014040
// Size: 52 bytes


bool FUN_140014040(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = func_0x0001404210c0(param_1,param_3,param_2);
  return iVar1 == 0;
}

