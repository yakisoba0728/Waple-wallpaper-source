// Function: FUN_14028b300
// Addr: 14028b300
// Size: 1 bytes


undefined1 FUN_14028b300(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    uRam00000001404e3b20 = 1;
  }
  func_0x00014028b9f0();
  cVar1 = FUN_1402bb7e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001402d1f84();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1402bb810(0);
  }
  return 0;
}

