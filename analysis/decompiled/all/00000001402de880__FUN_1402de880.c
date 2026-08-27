// Function: FUN_1402de880
// Addr: 1402de880
// Size: 29 bytes


uint FUN_1402de880(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

