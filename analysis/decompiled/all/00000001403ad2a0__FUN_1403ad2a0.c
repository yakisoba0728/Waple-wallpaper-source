// Function: FUN_1403ad2a0
// Addr: 1403ad2a0
// Size: 197 bytes


undefined8 FUN_1403ad2a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    iVar4 = FUN_1403c70f0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(lVar1 + 0x70) +
                                  (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14));
  }
  else {
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = FUN_1403c7170();
  }
  if (iVar4 == -1) {
    return 0;
  }
  FUN_1403b0c80(param_1 + 4,param_2,param_1,param_1 + 6,
                *(longlong *)(lVar1 + 0x80) + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14);
  *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
  return 1;
}

