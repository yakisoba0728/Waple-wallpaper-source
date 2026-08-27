// Function: FUN_1401a72b0
// Addr: 1401a72b0
// Size: 152 bytes


longlong FUN_1401a72b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401640b0();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar1 = FUN_14028af20(0x58);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 7;
  *(undefined8 *)(param_1 + 0x78) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  FUN_14004f190((undefined8 *)(param_1 + 0x58),0x10,lVar1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xf;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return param_1;
}

