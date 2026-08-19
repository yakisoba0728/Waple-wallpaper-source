// Function: FUN_1403872a0
// Addr: 1403872a0
// Size: 1 bytes


undefined1 FUN_1403872a0(undefined8 param_1,uint param_2)

{
  char cVar1;
  
  if (param_2 < 0x80) {
    cVar1 = FUN_1403c9950();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

