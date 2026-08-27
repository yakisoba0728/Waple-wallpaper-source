// Function: FUN_1400f0fc0
// Addr: 1400f0fc0
// Size: 56 bytes


longlong FUN_1400f0fc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x100;
  lVar1 = param_1;
  do {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    lVar1 = lVar1 + 0x34;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x3400) = 0;
  *(undefined8 *)(param_1 + 0x3408) = 0;
  return param_1;
}

