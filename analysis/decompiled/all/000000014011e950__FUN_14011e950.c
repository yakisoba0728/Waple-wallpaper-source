// Function: FUN_14011e950
// Addr: 14011e950
// Size: 6 bytes


undefined1 FUN_14011e950(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000140087560(param_1 + 8,"dependency","");
  if (lVar1 != 0) {
    lVar1 = func_0x000140087560(param_1 + 8,"dependency","");
    if (lVar1 == 0) {
      lVar1 = FUN_140084b90();
    }
    if (*(char *)(lVar1 + 8) == '\x04') {
      return 1;
    }
  }
  return 0;
}

