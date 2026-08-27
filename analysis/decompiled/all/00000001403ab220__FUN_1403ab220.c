// Function: FUN_1403ab220
// Addr: 1403ab220
// Size: 176 bytes


undefined8 FUN_1403ab220(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14);
  uVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    iVar4 = FUN_1403c70f0(pbVar3,iVar1);
  }
  else {
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = FUN_1403c7170(pbVar3,iVar1);
  }
  if (iVar4 == -1) {
    return 0;
  }
  FUN_1403f7ec0(param_2,(uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100 + iVar1
                        & 0xffff);
  return 1;
}

