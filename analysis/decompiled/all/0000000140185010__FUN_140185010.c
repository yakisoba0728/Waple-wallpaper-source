// Function: FUN_140185010
// Addr: 140185010
// Size: 48 bytes


undefined1 FUN_140185010(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) && (cVar1 = FUN_140185010(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

