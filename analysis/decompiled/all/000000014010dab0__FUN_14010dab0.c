// Function: FUN_14010dab0
// Addr: 14010dab0
// Size: 31 bytes


void FUN_14010dab0(longlong param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb4) | 1;
  if (param_2 == '\0') {
    uVar1 = *(uint *)(param_1 + 0xb4) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0xb4) = uVar1;
  return;
}

