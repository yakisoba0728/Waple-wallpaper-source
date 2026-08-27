// Function: FUN_140398f40
// Addr: 140398f40
// Size: 231 bytes


longlong FUN_140398f40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 4) == 1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else if (*(int *)(param_1 + 4) == 2) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 < (uint)*(byte *)(lVar3 + 2) * 0x100 + (uint)*(byte *)(lVar3 + 3)) {
      pbVar4 = (byte *)(lVar3 + ((ulonglong)uVar5 + 1) * 6);
    }
    else {
      pbVar4 = &DAT_14045f0ea;
    }
    if ((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] <= *(uint *)(param_1 + 0x18)) {
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)uVar5;
      *(uint *)(param_1 + 0x10) = uVar5;
      if (uVar5 < (uint)*(byte *)(lVar3 + 2) * 0x100 + (uint)*(byte *)(lVar3 + 3)) {
        iVar2 = *(int *)(param_1 + 0x14);
        lVar1 = lVar3 + uVar7 * 6;
        *(uint *)(param_1 + 0x18) =
             (uint)*(byte *)(lVar3 + 5 + uVar7 * 6) + (uint)*(byte *)(lVar3 + 4 + uVar7 * 6) * 0x100
        ;
        iVar6 = (uint)*(byte *)(lVar1 + 8) * 0x100 + (uint)*(byte *)(lVar1 + 9);
        *(int *)(param_1 + 0x14) = iVar6;
        if (iVar6 == iVar2 + 1) {
          return param_1;
        }
        *(uint *)(param_1 + 0x10) = (uint)*(byte *)(lVar3 + 2) * 0x100 + (uint)*(byte *)(lVar3 + 3);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      return param_1;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + 1;
    return param_1;
  }
  return param_1;
}

