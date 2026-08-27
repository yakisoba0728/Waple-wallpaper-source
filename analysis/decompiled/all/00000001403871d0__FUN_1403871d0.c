// Function: FUN_1403871d0
// Addr: 1403871d0
// Size: 35 bytes


undefined1 FUN_1403871d0(undefined8 param_1,uint param_2)

{
  char cVar1;
  
  if (param_2 < 0x80) {
    cVar1 = FUN_1403c9880();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

