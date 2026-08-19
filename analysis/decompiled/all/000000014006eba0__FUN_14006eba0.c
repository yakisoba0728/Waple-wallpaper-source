// Function: FUN_14006eba0
// Addr: 14006eba0
// Size: 28 bytes


void FUN_14006eba0(void)

{
  if ((DAT_1404e53b4 >> 0x14 & 1) != 0) {
    DAT_1404e53b4 = DAT_1404e53b4 & 0xffefffff;
    FUN_140062f10();
    return;
  }
  return;
}

