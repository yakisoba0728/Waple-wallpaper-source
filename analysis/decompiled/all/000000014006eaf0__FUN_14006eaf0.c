// Function: FUN_14006eaf0
// Addr: 14006eaf0
// Size: 28 bytes


void FUN_14006eaf0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    DAT_1404e52e4 = DAT_1404e52e4 | 1;
    FUN_1400739a0();
    return;
  }
  DAT_1404e52e4 = DAT_1404e52e4 & 0xfffffffe;
  FUN_1400739a0();
  return;
}

