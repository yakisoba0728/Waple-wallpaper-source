// Function: FUN_1401b6fe0
// Addr: 1401b6fe0
// Size: 161 bytes


undefined8 * FUN_1401b6fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
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
    *(undefined4 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 3;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    param_3[5] = param_1[5];
    param_3[6] = param_1[6];
    uVar1 = param_1[9];
    uVar2 = param_1[8];
    uVar3 = param_1[7];
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_3[7] = uVar3;
    param_3[8] = uVar2;
    param_3[9] = uVar1;
    param_3 = param_3 + 10;
  }
  return param_3;
}

