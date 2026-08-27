// Function: FUN_1400efdd0
// Addr: 1400efdd0
// Size: 105 bytes


undefined4 * FUN_1400efdd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    uVar1 = *(undefined8 *)(param_1 + 6);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar3 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar1;
    param_3 = param_3 + 8;
  }
  return param_3;
}

