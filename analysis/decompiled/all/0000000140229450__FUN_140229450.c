// Function: FUN_140229450
// Addr: 140229450
// Size: 19 bytes


longlong FUN_140229450(int param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(uint3)(param_1 - 9U >> 8);
  if ((3 < param_1 - 9U) && (param_1 != 0x13)) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}

