// Function: FUN_1401f1510
// Addr: 1401f1510
// Size: 86 bytes


void FUN_1401f1510(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* WARNING: Subroutine does not return */
  FUN_140017090(param_2 + 5,param_3 + 5);
}

