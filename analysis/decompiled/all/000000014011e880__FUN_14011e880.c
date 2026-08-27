// Function: FUN_14011e880
// Addr: 14011e880
// Size: 91 bytes


undefined1 FUN_14011e880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140087490(param_1 + 8,"dependency","");
  if (lVar1 != 0) {
    lVar1 = FUN_140087490(param_1 + 8,"dependency","");
    if (lVar1 == 0) {
      lVar1 = FUN_140084ac0();
    }
    if (*(char *)(lVar1 + 8) == '\x04') {
      return 1;
    }
  }
  return 0;
}

