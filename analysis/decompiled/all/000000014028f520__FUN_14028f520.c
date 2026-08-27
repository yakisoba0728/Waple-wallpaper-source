// Function: FUN_14028f520
// Addr: 14028f520
// Size: 36 bytes


int FUN_14028f520(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_14042a010;
  do {
    if (*piVar1 == param_1) {
      return piVar1[1];
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != (int *)"success");
  return 0;
}

