// Function: FUN_14006ebc0
// Addr: 14006ebc0
// Size: 28 bytes


void FUN_14006ebc0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    DAT_1404e53b4 = DAT_1404e53b4 | 1;
    FUN_140073a70();
    return;
  }
  DAT_1404e53b4 = DAT_1404e53b4 & 0xfffffffe;
  FUN_140073a70();
  return;
}

