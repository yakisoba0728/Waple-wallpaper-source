// Function: FUN_140018240
// Addr: 140018240
// Size: 110 bytes


undefined4 * FUN_140018240(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (param_3[2] != 0) {
    param_1[4] = (int)param_3[2];
    uVar1 = thunk_FUN_14028af20();
    *(undefined8 *)(param_1 + 6) = uVar1;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_1404210f0(uVar1,param_3,param_1[4]);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
    param_1[1] = param_1[4];
  }
  return param_1;
}

