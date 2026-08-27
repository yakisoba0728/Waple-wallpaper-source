// Function: FUN_14006ed90
// Addr: 14006ed90
// Size: 57 bytes


void FUN_14006ed90(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    DAT_1404e52e4 = DAT_1404e52e4 & 0xffffffdf;
    FUN_1400739a0();
    return;
  }
  if (DAT_1404e53cc != 2) {
    if (DAT_1404e53cc == 4) {
      DAT_1404e52e4 = DAT_1404e52e4 | 0x20;
      FUN_1400666c0();
      return;
    }
    return;
  }
  DAT_1404e52e4 = DAT_1404e52e4 | 0x20;
  FUN_1400739a0();
  return;
}

