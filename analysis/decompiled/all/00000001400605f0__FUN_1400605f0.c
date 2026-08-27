// Function: FUN_1400605f0
// Addr: 1400605f0
// Size: 21 bytes


void FUN_1400605f0(undefined8 param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    DAT_1404e52e4 = DAT_1404e52e4 | param_2;
    return;
  }
  DAT_1404e52e4 = DAT_1404e52e4 & ~param_2;
  return;
}

