// Function: FUN_140219cb0
// Addr: 140219cb0
// Size: 155 bytes


undefined4 * FUN_140219cb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 6);
    uVar3 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_3 + 4) = uVar3;
    *(undefined8 *)(param_3 + 6) = uVar2;
    *(undefined8 *)(param_3 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    uVar3 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_3 + 10) = uVar3;
    *(undefined8 *)(param_3 + 0xc) = uVar2;
    *(undefined8 *)(param_3 + 0xe) = uVar1;
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

