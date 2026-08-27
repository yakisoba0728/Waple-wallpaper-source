// Function: FUN_1402de940
// Addr: 1402de940
// Size: 29 bytes


void FUN_1402de940(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

