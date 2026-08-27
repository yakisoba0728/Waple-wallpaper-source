// Function: FUN_1400864a0
// Addr: 1400864a0
// Size: 45 bytes


bool FUN_1400864a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8) & 0xff;
  if ((4 < uVar2 - 1) && (uVar2 < 8)) {
    iVar1 = FUN_1400863a0();
    return iVar1 == 0;
  }
  return false;
}

