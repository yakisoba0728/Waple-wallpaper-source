// Function: FUN_1403ad440
// Addr: 1403ad440
// Size: 54 bytes


undefined8 FUN_1403ad440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    uVar2 = FUN_1403c71c0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(lVar1 + 0x70) +
                                  (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14));
  }
  else {
    if (iVar4 != 2) {
      return 0;
    }
    uVar2 = FUN_1403c7240();
  }
  if ((uVar2 != 0xffffffff) &&
     (uVar2 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))) {
    FUN_1403b0d50(param_1 + 4,param_2,param_1,
                  param_1 + ((ulonglong)
                             (((uint)(byte)(&DAT_140470630)[*(byte *)(param_1 + 5) >> 4] +
                              (uint)(byte)(&DAT_140470630)[*(byte *)(param_1 + 5) & 0xf]) * uVar2) +
                            4) * 2,
                  *(longlong *)(lVar1 + 0x80) + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14);
    *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
    return 1;
  }
  return 0;
}

