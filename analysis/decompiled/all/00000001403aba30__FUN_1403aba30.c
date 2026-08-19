// Function: FUN_1403aba30
// Addr: 1403aba30
// Size: 172 bytes


ulonglong FUN_1403aba30(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  uVar5 = (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  pbVar1 = (byte *)(param_1 + 4 + uVar5 * 2);
  pbVar6 = (byte *)&DAT_14045dde0;
  pbVar2 = (byte *)&DAT_14045dde0;
  if ((uint)*(byte *)(param_1 + 4 + uVar5 * 2) * 0x100 + (uint)pbVar1[1] != 0) {
    pbVar2 = pbVar1 + 2;
  }
  uVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (uVar4 != 0) {
    pbVar6 = (byte *)((ulonglong)uVar4 + param_1);
  }
  uVar5 = (ulonglong)*pbVar6 << 8;
  iVar3 = (uint)pbVar6[1] + (int)uVar5;
  if (iVar3 == 1) {
    uVar5 = FUN_1403c71c0(pbVar6,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar3 != 2) goto UNWIND_INFO_1403abadc;
    uVar5 = FUN_1403c7240(pbVar6);
  }
  if ((int)uVar5 != -1) {
    iVar7 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    pbVar2 = pbVar1 + (iVar7 * 2 + 2);
    iVar3 = (uint)pbVar2[1] + (uint)*pbVar2 * 0x100;
    pcStack_38 = FUN_1403ec220;
    pcStack_30 = FUN_1403ec220;
    pcStack_28 = FUN_1403ec220;
    uVar5 = (ulonglong)(iVar3 * 2 + 2);
    lStack_20 = param_1;
    lStack_18 = param_1;
    lStack_10 = param_1;
    uVar5 = FUN_14036e250(param_2,(uint)*(byte *)(param_1 + 2) * 0x100 +
                                  (uint)*(byte *)(param_1 + 3),param_1 + 4,iVar7,pbVar1 + 4,iVar3,
                          pbVar2 + 2,(uint)pbVar2[uVar5 + 1] + (uint)pbVar2[uVar5] * 0x100,
                          pbVar2 + uVar5 + 2,&pcStack_38);
    return uVar5;
  }
UNWIND_INFO_1403abadc:
  return uVar5 & 0xffffffffffffff00;
}

