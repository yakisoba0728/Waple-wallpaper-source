// Function: FUN_1401f1440
// Addr: 1401f1440
// Size: 103 bytes


void FUN_1401f1440(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined2 *)((longlong)param_2 + 0xe) = *(undefined2 *)((longlong)param_3 + 0xe);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)((longlong)param_2 + 0x12) = *(undefined2 *)((longlong)param_3 + 0x12);
  uVar1 = *(undefined4 *)(param_3 + 3);
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_2 + 3) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar3;
  FUN_140016fc0(param_2 + 5,param_3 + 5);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_3 + 9);
  return;
}

