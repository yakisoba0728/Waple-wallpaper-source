// Function: FUN_1401dd430
// Addr: 1401dd430
// Size: 334 bytes


undefined8 * FUN_1401dd430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_2[0x16];
  uVar2 = param_2[0x18];
  uVar3 = param_2[0x17];
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar2;
  return param_1;
}

