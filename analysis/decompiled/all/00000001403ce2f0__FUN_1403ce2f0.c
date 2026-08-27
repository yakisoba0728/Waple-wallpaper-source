// Function: FUN_1403ce2f0
// Addr: 1403ce2f0
// Size: 186 bytes


int FUN_1403ce2f0(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar1 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar1 == 1) {
    return (uint)param_1[3] + (uint)param_1[2] * 0x100;
  }
  if (iVar1 != 2) {
    return -1;
  }
  iVar1 = 0;
  for (pbVar5 = param_1 + 4; pbVar5 != param_1 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 6 + 4;
      pbVar5 = pbVar5 + 6) {
    uVar4 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
    uVar3 = (uint)pbVar5[3] + (uint)pbVar5[2] * 0x100;
    iVar2 = (uVar3 - uVar4) + 1;
    if (uVar3 < uVar4) {
      iVar2 = 0;
    }
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

