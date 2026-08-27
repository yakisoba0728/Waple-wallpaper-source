// Function: FUN_1402fc5f0
// Addr: 1402fc5f0
// Size: 70 bytes


void FUN_1402fc5f0(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_140303b00(param_1,param_2,0);
  FUN_140303b00(param_1,param_2,1);
  return;
}

