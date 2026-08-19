// Function: FUN_1403c7240
// Addr: 1403c7240
// Size: 1 bytes


int FUN_1403c7240(longlong param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar4 + iVar5) >> 1;
      pbVar2 = (byte *)(param_1 + 4 + (ulonglong)uVar1 * 6);
      uVar3 = (uint)*pbVar2;
      if (param_2 < (uint)*(byte *)(param_1 + 5 + (ulonglong)uVar1 * 6) + uVar3 * 0x100) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (param_2 <= (uint)pbVar2[3] + (uint)pbVar2[2] * 0x100) goto code_r0x0001403c72c4;
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  uVar3 = (uint)UNK_14045f1b8;
  pbVar2 = &UNK_14045f1b8;
code_r0x0001403c72c4:
  uVar1 = uVar3 * 0x100 + (uint)pbVar2[1];
  if ((uint)pbVar2[3] + (uint)pbVar2[2] * 0x100 < uVar1) {
    return -1;
  }
  return (((uint)pbVar2[5] + (uint)pbVar2[4] * 0x100) - uVar1) + param_2;
}

