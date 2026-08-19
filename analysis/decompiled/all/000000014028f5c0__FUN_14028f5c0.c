// Function: FUN_14028f5c0
// Addr: 14028f5c0
// Size: 42 bytes


char * FUN_14028f5c0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_140429bf0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != (int *)&DAT_14042a0e0);
  return "unknown error";
}

