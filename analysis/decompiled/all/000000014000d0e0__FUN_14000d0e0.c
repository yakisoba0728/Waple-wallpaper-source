// Function: FUN_14000d0e0
// Addr: 14000d0e0
// Size: 1 bytes


bool FUN_14000d0e0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = func_0x000140421ed0(param_2);
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 != lVar3) {
    return false;
  }
  if (*plVar1 == 0) {
    return true;
  }
  iVar2 = func_0x0001404210c0(param_1,param_2);
  return iVar2 == 0;
}

