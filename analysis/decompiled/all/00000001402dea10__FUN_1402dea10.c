// Function: FUN_1402dea10
// Addr: 1402dea10
// Size: 29 bytes


void FUN_1402dea10(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

