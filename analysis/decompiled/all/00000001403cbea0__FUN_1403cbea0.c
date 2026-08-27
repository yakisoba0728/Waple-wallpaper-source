// Function: FUN_1403cbea0
// Addr: 1403cbea0
// Size: 86 bytes


int FUN_1403cbea0(byte *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = (ulonglong)(((uint)*param_1 * 0x100 + (uint)param_1[1]) * (iVar2 + -1));
  return iVar2 - (uint)((uint)param_1[uVar1 + 0xb] + (uint)param_1[uVar1 + 10] * 0x100 == 0xffff);
}

