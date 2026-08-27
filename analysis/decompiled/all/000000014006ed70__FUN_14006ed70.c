// Function: FUN_14006ed70
// Addr: 14006ed70
// Size: 28 bytes


void FUN_14006ed70(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    DAT_1404e52e4 = DAT_1404e52e4 | 0x40;
    FUN_1400739a0();
    return;
  }
  DAT_1404e52e4 = DAT_1404e52e4 & 0xffffffbf;
  FUN_1400739a0();
  return;
}

