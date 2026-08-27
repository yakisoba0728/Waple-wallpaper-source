// Function: FUN_14009aee0
// Addr: 14009aee0
// Size: 44 bytes


void FUN_14009aee0(longlong param_1,int param_2,undefined8 param_3)

{
  *(int *)(param_1 + 0x34) = param_2;
  FUN_1404210f0(param_1 + 0x38,param_3,(longlong)param_2 << 3);
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}

