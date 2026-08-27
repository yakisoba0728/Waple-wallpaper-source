// Function: FUN_1402ee390
// Addr: 1402ee390
// Size: 103 bytes


undefined8 FUN_1402ee390(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    return 0x12;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x94);
  uVar1 = *param_1;
  FUN_1402fb290(param_1 + 5);
  uVar1 = FUN_1402fb0a0(uVar1,param_2 + 0x68,param_1 + 5);
  return uVar1;
}

