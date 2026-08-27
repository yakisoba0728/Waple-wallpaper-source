// Function: FUN_140415c00
// Addr: 140415c00
// Size: 12 bytes


void FUN_140415c00(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}

