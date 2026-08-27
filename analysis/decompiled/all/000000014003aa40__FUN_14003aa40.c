// Function: FUN_14003aa40
// Addr: 14003aa40
// Size: 43 bytes


undefined8 * FUN_14003aa40(undefined8 *param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_1[3]) {
    *param_2 = *param_1;
    param_2[1] = param_1[2];
    return param_2;
  }
  *param_2 = param_1;
  param_2[1] = param_1[2];
  return param_2;
}

