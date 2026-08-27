// Function: FUN_1401f8930
// Addr: 1401f8930
// Size: 102 bytes


undefined8 * FUN_1401f8930(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    param_3 = param_3 + 7;
  }
  return param_3;
}

