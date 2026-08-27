// Function: FUN_1402563e0
// Addr: 1402563e0
// Size: 135 bytes


undefined8 * FUN_1402563e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = *param_1;
    uVar1 = param_1[3];
    uVar2 = param_1[2];
    uVar3 = param_1[1];
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_3[1] = uVar3;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    uVar1 = param_1[6];
    uVar2 = param_1[5];
    uVar3 = param_1[4];
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_3[4] = uVar3;
    param_3[5] = uVar2;
    param_3[6] = uVar1;
    param_3 = param_3 + 7;
  }
  return param_3;
}

