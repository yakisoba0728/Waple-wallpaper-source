// Function: FUN_1402577e0
// Addr: 1402577e0
// Size: 83 bytes


undefined1 FUN_1402577e0(longlong param_1)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 0x120) & 1) == 0) ||
      ((*(longlong *)(param_1 + 0x180) != 0 && (cVar1 = FUN_140185010(), cVar1 == '\0')))) &&
     ((*(uint *)(param_1 + 0x304) & 0x1100) == 0)) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x5a8) != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    return 1;
  }
  return 0;
}

