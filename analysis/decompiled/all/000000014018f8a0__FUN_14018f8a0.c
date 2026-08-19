// Function: FUN_14018f8a0
// Addr: 14018f8a0
// Size: 104 bytes


undefined8 FUN_14018f8a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x98) >> 0x1c & 1) == 0) {
    return 2;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xefffffff;
  uVar1 = func_0x000140421ed0(param_2);
  return uVar1;
}

