// Function: FUN_14025d3e0
// Addr: 14025d3e0
// Size: 52 bytes


undefined8 FUN_14025d3e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 200) + 0x1ac);
  if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
    if (cVar1 == '\x03') {
      return 0x200;
    }
    if (cVar1 == '\x04') {
      return 0x400;
    }
  }
  return 0x100;
}

