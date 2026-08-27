// Function: FUN_14010d100
// Addr: 14010d100
// Size: 97 bytes


undefined1 FUN_14010d100(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140086de0(param_1 + 0x10,"general","");
  if (*(char *)(lVar2 + 8) == '\a') {
    lVar2 = FUN_140087490(lVar2,"supportsaudioprocessing","");
    if (lVar2 == 0) {
      lVar2 = FUN_140084ac0();
    }
    if (*(char *)(lVar2 + 8) == '\x05') {
      cVar1 = FUN_140086300(lVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

