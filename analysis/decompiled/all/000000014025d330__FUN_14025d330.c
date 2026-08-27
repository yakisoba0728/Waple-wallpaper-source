// Function: FUN_14025d330
// Addr: 14025d330
// Size: 60 bytes


undefined1 FUN_14025d330(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    if ((*(longlong *)(param_1 + 0x180) != 0) && (cVar1 = FUN_140185010(), cVar1 == '\0')) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x2c4) & 4) != 0) {
      return 1;
    }
  }
  return 0;
}

