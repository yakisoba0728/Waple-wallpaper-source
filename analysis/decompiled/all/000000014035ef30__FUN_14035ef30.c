// Function: FUN_14035ef30
// Addr: 14035ef30
// Size: 70 bytes


longlong FUN_14035ef30(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1404150d0();
  if (param_2 < uVar1) {
    lVar2 = FUN_1404152b0(param_1,param_2);
    if (*(char *)(lVar2 + 4) == '\0') {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}

