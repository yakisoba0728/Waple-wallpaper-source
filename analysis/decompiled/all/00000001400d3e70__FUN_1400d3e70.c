// Function: FUN_1400d3e70
// Addr: 1400d3e70
// Size: 118 bytes


longlong FUN_1400d3e70(longlong param_1,longlong param_2)

{
  FUN_140016fc0();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  FUN_140016fc0(param_1 + 0x28,param_2 + 0x28);
  FUN_140016fc0(param_1 + 0x48,param_2 + 0x48);
  FUN_140016fc0(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  return param_1;
}

