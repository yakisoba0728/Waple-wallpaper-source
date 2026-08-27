// Function: FUN_140290ea0
// Addr: 140290ea0
// Size: 34 bytes


undefined8 FUN_140290ea0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  }
  return 0;
}

