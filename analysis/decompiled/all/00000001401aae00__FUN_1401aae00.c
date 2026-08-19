// Function: FUN_1401aae00
// Addr: 1401aae00
// Size: 126 bytes


undefined8 * FUN_1401aae00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    uVar1 = param_1[2];
    uVar2 = param_1[1];
    uVar3 = *param_1;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *param_3 = uVar3;
    param_3[1] = uVar2;
    param_3[2] = uVar1;
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    uVar3 = param_1[3];
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_3[3] = uVar3;
    param_3[4] = uVar2;
    param_3[5] = uVar1;
    param_3 = param_3 + 6;
  }
  return param_3;
}

