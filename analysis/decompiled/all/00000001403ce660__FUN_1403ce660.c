// Function: FUN_1403ce660
// Addr: 1403ce660
// Size: 241 bytes


int FUN_1403ce660(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar3;
  
  uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar3 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    return 2;
  }
  uVar4 = (uint)param_1[2];
  if (uVar4 == 1) {
    return (uVar2 + 1) * (uint)param_1[2] + 2 + (uint)param_1[uVar3 + 3];
  }
  if (uVar4 == 2) {
    return (uVar2 + 1) * 2 + 2 + (uint)param_1[uVar3 * 2 + 4] + (uint)param_1[uVar3 * 2 + 3] * 0x100
    ;
  }
  if (uVar4 != 3) {
    if (uVar4 != 4) {
      return (uVar2 + 1) * uVar4 + 2;
    }
    pbVar1 = param_1 + uVar3 * 4 + 3;
    return (uVar2 + 1) * 4 + 2 +
           (uint)param_1[uVar3 * 4 + 4] * 0x10000 + (uint)pbVar1[2] * 0x100 +
           (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[3];
  }
  return (uVar2 + 1) * 3 + 2 +
         (uint)param_1[uVar3 * 3 + 4] * 0x100 + (uint)param_1[uVar3 * 3 + 3] * 0x10000 +
         (uint)param_1[uVar3 * 3 + 5];
}

