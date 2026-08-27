// Function: FUN_140290e10
// Addr: 140290e10
// Size: 143 bytes


undefined8 FUN_140290e10(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  
  DVar4 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar4;
    }
    param_1[0x13] = param_1[0x13] + 1;
    return 0;
  }
  if ((param_1[0x12] != DVar4) &&
     (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4)), BVar3 == '\0')) {
    return 3;
  }
  uVar2 = param_1[0x13];
  uVar1 = uVar2 + 1;
  param_1[0x13] = uVar1;
  if ((int)uVar1 < 2) {
    param_1[0x12] = DVar4;
  }
  else if ((*param_1 & 0x100) == 0) {
    param_1[0x13] = uVar2;
    return 3;
  }
  return 0;
}

