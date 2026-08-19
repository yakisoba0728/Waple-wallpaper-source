// Function: FUN_140089d30
// Addr: 140089d30
// Size: 191 bytes


void FUN_140089d30(undefined8 *param_1,double param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (((uint)((ulonglong)param_2 >> 0x34) & 0x7ff) == 0x7ff) {
    *param_1 = 0;
    param_1[1] = 0;
    if (NAN(param_2) || NAN(param_2)) {
      pcVar1 = "NaN";
      pcVar2 = "null";
    }
    else if (0.0 <= param_2) {
      pcVar1 = "Infinity";
      pcVar2 = "1e+9999";
    }
    else {
      pcVar1 = "-Infinity";
      pcVar2 = "-1e+9999";
    }
    if (param_3 != '\0') {
      pcVar2 = pcVar1;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    func_0x000140421ed0(pcVar2);
    return;
  }
  func_0x00014028aff0(0x30);
  return;
}

