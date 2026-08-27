// Function: FUN_1403abb00
// Addr: 1403abb00
// Size: 232 bytes


ulonglong FUN_1403abb00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  code *local_18;
  longlong local_10;
  
  uVar2 = (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1403c70f0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto LAB_1403abb78;
    uVar1 = FUN_1403c7170();
  }
  if ((int)uVar1 != -1) {
    iVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    local_18 = FUN_1403ec150;
    local_10 = param_1;
    uVar1 = FUN_1403720a0(param_2,iVar4,param_1 + 8,
                          (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100,
                          (byte *)(param_1 + 6) + (uint)(iVar4 * 2),&local_18);
    return uVar1;
  }
LAB_1403abb78:
  return uVar1 & 0xffffffffffffff00;
}

