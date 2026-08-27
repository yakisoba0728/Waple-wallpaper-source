// Function: FUN_1400f88d0
// Addr: 1400f88d0
// Size: 96 bytes


undefined8 * FUN_1400f88d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  plVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_res18[0] = param_3;
  FUN_1400f9c00(local_res18,param_1,param_2,*plVar1 + (longlong)param_2);
  return param_1;
}

