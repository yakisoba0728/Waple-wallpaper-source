// Function: FUN_140327cf0
// Addr: 140327cf0
// Size: 56 bytes


undefined8 FUN_140327cf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1402f0420(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    return 0xb;
  }
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  return 0;
}

