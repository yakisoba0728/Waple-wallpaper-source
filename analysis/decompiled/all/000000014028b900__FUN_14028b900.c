// Function: FUN_14028b900
// Addr: 14028b900
// Size: 19 bytes


char * FUN_14028b900(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}

