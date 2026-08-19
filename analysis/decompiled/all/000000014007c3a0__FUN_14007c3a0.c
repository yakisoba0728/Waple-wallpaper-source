// Function: FUN_14007c3a0
// Addr: 14007c3a0
// Size: 45 bytes


undefined8 * FUN_14007c3a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_1,puVar1,param_2[2]);
  }
  return param_1;
}

