// Function: FUN_140415c10
// Addr: 140415c10
// Size: 12 bytes


void FUN_140415c10(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}

