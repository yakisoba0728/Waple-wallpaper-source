// Function: FUN_140068f50
// Addr: 140068f50
// Size: 107 bytes


undefined8 * FUN_140068f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_14000f880(param_1,puVar1,param_2[2]);
    plVar2 = param_2 + 5;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    if (0xf < (ulonglong)param_2[8]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 5,plVar2,param_2[7]);
    return param_1;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}

