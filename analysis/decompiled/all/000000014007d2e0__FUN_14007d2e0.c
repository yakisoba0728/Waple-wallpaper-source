// Function: FUN_14007d2e0
// Addr: 14007d2e0
// Size: 93 bytes


void FUN_14007d2e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  FUN_140016fc0(param_2,param_3);
  FUN_140016fc0(param_2 + 0x20,param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
  return;
}

