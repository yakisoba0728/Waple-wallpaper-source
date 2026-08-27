// Function: FUN_1401dc460
// Addr: 1401dc460
// Size: 165 bytes


undefined8 * FUN_1401dc460(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xf) {
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
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    uVar1 = param_1[9];
    param_3[8] = param_1[8];
    param_3[9] = uVar1;
    uVar1 = param_1[0xb];
    param_3[10] = param_1[10];
    param_3[0xb] = uVar1;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)param_1 + 100);
    *(undefined4 *)(param_3 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)((longlong)param_3 + 0x6c) = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(undefined4 *)(param_3 + 0xe) = *(undefined4 *)(param_1 + 0xe);
    param_3 = param_3 + 0xf;
  }
  return param_3;
}

