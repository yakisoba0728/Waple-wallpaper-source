// Function: FUN_14028b230
// Addr: 14028b230
// Size: 59 bytes


undefined1 FUN_14028b230(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1404e3a50 = 1;
  }
  FUN_14028b920();
  cVar1 = FUN_1402bb710();
  if (cVar1 != '\0') {
    cVar1 = FUN_1402d1eb4();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1402bb740(0);
  }
  return 0;
}

