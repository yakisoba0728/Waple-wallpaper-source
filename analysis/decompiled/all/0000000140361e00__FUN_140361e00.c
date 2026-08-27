// Function: FUN_140361e00
// Addr: 140361e00
// Size: 396 bytes


void FUN_140361e00(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  
  lVar7 = param_2;
  if (param_2 == -1) {
    lVar7 = 0;
  }
  while (*(int *)(lVar7 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    pbVar4 = (byte *)&DAT_14045dd10;
    if (iVar1 != 0) {
      pbVar4 = *(byte **)(param_2 + 8);
    }
    uVar5 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
    if (uVar5 == 0) {
      pbVar4 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar4 = (byte *)((ulonglong)uVar5 + *(longlong *)(param_2 + 0x20));
    }
    pbVar11 = pbVar4 + 2;
    iVar10 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
    lVar2 = *param_1;
    while (iVar10 != 0) {
      uVar5 = (uint)*pbVar11 * 0x100 + (uint)pbVar11[1];
      if (uVar5 == 0) {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar9 = pbVar4 + uVar5;
      }
      iVar8 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      if (iVar6 == 0) {
        *(undefined8 *)(lVar2 + 0x200) = 0xffffffffffffffff;
        iVar10 = iVar10 + -1;
        *(undefined8 *)(lVar2 + 0x208) = 0xffffffffffffffff;
        pbVar11 = pbVar11 + 2;
        *(undefined8 *)(lVar2 + 0x210) = 0xffffffffffffffff;
      }
      else {
        iVar10 = iVar10 + -1;
        uVar3 = CONCAT11(pbVar9[4],pbVar9[5]);
        *(ulonglong *)(lVar2 + 0x200) = *(ulonglong *)(lVar2 + 0x200) | 1L << (uVar3 >> 4 & 0x3f);
        *(ulonglong *)(lVar2 + 0x208) = *(ulonglong *)(lVar2 + 0x208) | 1L << (uVar3 & 0x3f);
        *(ulonglong *)(lVar2 + 0x210) = *(ulonglong *)(lVar2 + 0x210) | 1L << (uVar3 >> 6 & 0x3f);
        pbVar11 = pbVar11 + 2;
      }
    }
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 2;
      *(int *)(param_2 + 0x10) = iVar1 + -1;
    }
  }
  return;
}

