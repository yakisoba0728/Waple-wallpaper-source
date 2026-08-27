// Function: FUN_14007c1f0
// Addr: 14007c1f0
// Size: 94 bytes


longlong FUN_14007c1f0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    FUN_14000de40(param_3,param_1);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    FUN_14000de40(param_3 + 0x28,param_1 + 0x28);
    param_3 = param_3 + 0x48;
  }
  return param_3;
}

