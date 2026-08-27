// Function: FUN_1403871a0
// Addr: 1403871a0
// Size: 38 bytes


undefined1 FUN_1403871a0(undefined8 param_1,uint param_2)

{
  char cVar1;
  
  if (param_2 < 0x80) {
    cVar1 = FUN_1403c9430();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

