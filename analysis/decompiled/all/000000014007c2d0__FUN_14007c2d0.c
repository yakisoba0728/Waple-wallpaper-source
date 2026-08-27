// Function: FUN_14007c2d0
// Addr: 14007c2d0
// Size: 81 bytes


undefined8 * FUN_14007c2d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_14000f880(param_1,puVar1,param_2[2]);
    plVar2 = param_2 + 4;
    if (0xf < (ulonglong)param_2[7]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 4,plVar2,param_2[6]);
  }
  return param_1;
}

