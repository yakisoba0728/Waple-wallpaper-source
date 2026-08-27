// Function: FUN_140256370
// Addr: 140256370
// Size: 110 bytes


undefined4 * FUN_140256370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 10) = 0;
    *(undefined8 *)(param_3 + 0xc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_3 + 8) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_3 + 0xc) = uVar1;
    *(undefined1 *)(param_1 + 6) = 0;
    param_3 = param_3 + 0xe;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0xf;
  }
  return param_3;
}

