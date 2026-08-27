// Function: FUN_1401bc480
// Addr: 1401bc480
// Size: 22 bytes


longlong FUN_1401bc480(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 7;
  if ((1 < uVar1) && (uVar1 = param_1 - 0x10, 2 < uVar1)) {
    return (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}

