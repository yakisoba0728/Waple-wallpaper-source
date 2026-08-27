// Function: FUN_14028f4f0
// Addr: 14028f4f0
// Size: 42 bytes


char * FUN_14028f4f0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_140429b20;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != &DAT_14042a010);
  return "unknown error";
}

