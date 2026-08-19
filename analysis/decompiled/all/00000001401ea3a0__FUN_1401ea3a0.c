// Function: FUN_1401ea3a0
// Addr: 1401ea3a0
// Size: 51 bytes


undefined1 FUN_1401ea3a0(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x180) == 0) {
      return 1;
    }
    cVar1 = FUN_1401850e0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(uint *)(param_1 + 0x304) & 0x1100) != 0) {
    return 1;
  }
  return 0;
}

