// Function: FUN_1401d4330
// Addr: 1401d4330
// Size: 38 bytes


longlong FUN_1401d4330(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x4b8);
  return (*(longlong *)(lVar1 + 0x40) - *(longlong *)(lVar1 + 0x38) >> 4) * -0x1111111111111111;
}

