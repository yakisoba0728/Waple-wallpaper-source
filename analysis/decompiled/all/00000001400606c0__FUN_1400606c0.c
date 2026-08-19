// Function: FUN_1400606c0
// Addr: 1400606c0
// Size: 21 bytes


void FUN_1400606c0(undefined8 param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    DAT_1404e53b4 = DAT_1404e53b4 | param_2;
    return;
  }
  DAT_1404e53b4 = DAT_1404e53b4 & ~param_2;
  return;
}

