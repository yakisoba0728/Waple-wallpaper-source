// Function: FUN_14002f980
// Addr: 14002f980
// Size: 207 bytes


longlong FUN_14002f980(longlong param_1,longlong param_2)

{
  FUN_140016fc0();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_140031230(param_1 + 0x28,param_2 + 0x28);
  FUN_140031230(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  FUN_140031bf0(param_1 + 0x78,param_2 + 0x78);
  FUN_140016fc0(param_1 + 0x90,param_2 + 0x90);
  FUN_140016fc0(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xd2);
  return param_1;
}

