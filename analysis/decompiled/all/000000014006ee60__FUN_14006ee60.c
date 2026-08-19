// Function: FUN_14006ee60
// Addr: 14006ee60
// Size: 57 bytes


void FUN_14006ee60(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    DAT_1404e53b4 = DAT_1404e53b4 & 0xffffffdf;
    FUN_140073a70();
    return;
  }
  if (DAT_1404e549c != 2) {
    if (DAT_1404e549c == 4) {
      DAT_1404e53b4 = DAT_1404e53b4 | 0x20;
      FUN_140066790();
      return;
    }
    return;
  }
  DAT_1404e53b4 = DAT_1404e53b4 | 0x20;
  FUN_140073a70();
  return;
}

