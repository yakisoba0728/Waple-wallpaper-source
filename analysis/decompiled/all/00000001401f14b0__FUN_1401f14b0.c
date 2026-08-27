// Function: FUN_1401f14b0
// Addr: 1401f14b0
// Size: 147 bytes


undefined8 * FUN_1401f14b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    *param_3 = *param_1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xc);
    *(undefined2 *)((longlong)param_3 + 0xe) = *(undefined2 *)((longlong)param_1 + 0xe);
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)((longlong)param_3 + 0x12) = *(undefined2 *)((longlong)param_1 + 0x12);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x1c);
    *(undefined8 *)((longlong)param_3 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x14);
    *(undefined8 *)((longlong)param_3 + 0x1c) = uVar1;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    uVar1 = param_1[6];
    param_3[5] = param_1[5];
    param_3[6] = uVar1;
    uVar1 = param_1[8];
    param_3[7] = param_1[7];
    param_3[8] = uVar1;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[7] = 0;
    param_1[8] = 0xf;
    *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 9);
    param_3 = param_3 + 10;
  }
  return param_3;
}

