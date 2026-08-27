// Function: FUN_14000de00
// Addr: 14000de00
// Size: 50 bytes


undefined8 * FUN_14000de00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_14000f880(param_1,puVar1,param_2[2]);
  }
  return param_1;
}

