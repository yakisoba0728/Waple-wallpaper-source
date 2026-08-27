// Function: FUN_1403ab2d0
// Addr: 1403ab2d0
// Size: 182 bytes


undefined8 FUN_1403ab2d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar1 == 0) {
    pbVar2 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar2 = (byte *)((ulonglong)uVar1 + param_1);
  }
  iVar3 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar3 == 1) {
    uVar1 = FUN_1403c70f0(pbVar2,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    uVar1 = FUN_1403c7170();
  }
  if ((uVar1 != 0xffffffff) &&
     (uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5))) {
    FUN_1403f7ec0(param_2,(uint)*(byte *)(param_1 + 7 + (ulonglong)uVar1 * 2) +
                          (uint)*(byte *)(param_1 + 6 + (ulonglong)uVar1 * 2) * 0x100);
    return 1;
  }
  return 0;
}

