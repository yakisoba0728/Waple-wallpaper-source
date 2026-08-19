// Function: FUN_14007bbb0
// Addr: 14007bbb0
// Size: 113 bytes


undefined8 * FUN_14007bbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar1 = (undefined8 *)func_0x000140421ed0(param_1);
  return puVar1;
}

