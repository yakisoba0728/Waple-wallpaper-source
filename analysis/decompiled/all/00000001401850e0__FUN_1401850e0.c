// Function: FUN_1401850e0
// Addr: 1401850e0
// Size: 36 bytes


undefined1 FUN_1401850e0(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) && (cVar1 = FUN_1401850e0(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

