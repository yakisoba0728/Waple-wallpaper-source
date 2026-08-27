// Function: FUN_14006ead0
// Addr: 14006ead0
// Size: 28 bytes


void FUN_14006ead0(void)

{
  if ((DAT_1404e52e4 >> 0x14 & 1) != 0) {
    DAT_1404e52e4 = DAT_1404e52e4 & 0xffefffff;
    FUN_140062e40();
    return;
  }
  return;
}

