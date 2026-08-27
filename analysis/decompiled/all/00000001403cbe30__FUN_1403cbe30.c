// Function: FUN_1403cbe30
// Addr: 1403cbe30
// Size: 102 bytes


int FUN_1403cbe30(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (((iVar2 != 0) &&
      (uVar1 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * (iVar2 + -1),
      (uint)param_1[(ulonglong)uVar1 + 0xb] + (uint)param_1[(ulonglong)uVar1 + 10] * 0x100 == 0xffff
      )) && ((uint)param_1[(ulonglong)uVar1 + 0xd] + (uint)param_1[(ulonglong)uVar1 + 0xc] * 0x100
             == 0xffff)) {
    return iVar2 + -1;
  }
  return iVar2;
}

