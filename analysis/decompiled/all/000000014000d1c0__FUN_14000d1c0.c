// Function: FUN_14000d1c0
// Addr: 14000d1c0
// Size: 76 bytes


bool FUN_14000d1c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 == param_2[2]) {
    if (*plVar1 != 0) {
      iVar2 = func_0x0001404210c0(param_1,puVar3);
      return iVar2 == 0;
    }
    return true;
  }
  return false;
}

