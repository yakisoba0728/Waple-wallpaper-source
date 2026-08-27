// Function: FUN_140056e00
// Addr: 140056e00
// Size: 24 bytes


undefined8 * FUN_140056e00(undefined8 *param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_1[3]) {
    *param_2 = *param_1;
    return param_2;
  }
  *param_2 = param_1;
  return param_2;
}

