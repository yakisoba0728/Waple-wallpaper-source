// Function: FUN_1400e5e40
// Addr: 1400e5e40
// Size: 53 bytes


longlong FUN_1400e5e40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (lVar1 != 0) {
    *(longlong *)(param_2 + 0x10) = lVar1;
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = param_2;
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = param_2;
  return param_2;
}

