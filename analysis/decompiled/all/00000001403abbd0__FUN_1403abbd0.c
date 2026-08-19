// Function: FUN_1403abbd0
// Addr: 1403abbd0
// Size: 22 bytes


ulonglong FUN_1403abbd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  code *pcStack_18;
  longlong lStack_10;
  
  uVar2 = (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1403c71c0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto code_r0x0001403abc48;
    uVar1 = FUN_1403c7240();
  }
  if ((int)uVar1 != -1) {
    iVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    pcStack_18 = FUN_1403ec220;
    lStack_10 = param_1;
    uVar1 = FUN_140372170(param_2,iVar4,param_1 + 8,
                          (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100,
                          (byte *)(param_1 + 6) + (uint)(iVar4 * 2),&pcStack_18);
    return uVar1;
  }
code_r0x0001403abc48:
  return uVar1 & 0xffffffffffffff00;
}

