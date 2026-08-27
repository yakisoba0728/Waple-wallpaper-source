// Function: FUN_1403c96a0
// Addr: 1403c96a0
// Size: 476 bytes


bool FUN_1403c96a0(longlong param_1,uint param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  uVar3 = (uint)*(byte *)(param_1 + 4) * 0x10000 + (uint)*(byte *)(param_1 + 5) * 0x100 +
          (uint)*(byte *)(param_1 + 3) * 0x1000000 + (uint)*(byte *)(param_1 + 6);
  if (uVar3 == 0) {
    pbVar6 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar6 = (byte *)((ulonglong)uVar3 + param_4);
  }
  iVar8 = 0;
  iVar7 = (pbVar6[3] - 1) +
          (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000;
  if (-1 < iVar7) {
    do {
      uVar3 = (uint)(iVar7 + iVar8) >> 1;
      uVar2 = (ulonglong)uVar3;
      if (param_2 < (uint)pbVar6[uVar2 * 4 + 6] + (uint)pbVar6[uVar2 * 4 + 5] * 0x100 +
                    (uint)pbVar6[uVar2 * 4 + 4] * 0x10000) {
        iVar7 = uVar3 - 1;
      }
      else {
        if (param_2 <=
            (uint)pbVar6[(ulonglong)uVar3 * 4 + 7] + (uint)pbVar6[uVar2 * 4 + 6] +
            (uint)pbVar6[uVar2 * 4 + 5] * 0x100 + (uint)pbVar6[uVar2 * 4 + 4] * 0x10000) {
          return (bool)2;
        }
        iVar8 = uVar3 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  uVar3 = (uint)*(byte *)(param_1 + 8) * 0x10000 + (uint)*(byte *)(param_1 + 9) * 0x100 +
          (uint)*(byte *)(param_1 + 7) * 0x1000000 + (uint)*(byte *)(param_1 + 10);
  if (uVar3 == 0) {
    pbVar6 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar6 = (byte *)((ulonglong)uVar3 + param_4);
  }
  iVar8 = 0;
  iVar7 = (pbVar6[3] - 1) +
          (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000;
  if (-1 < iVar7) {
    do {
      uVar3 = (uint)(iVar7 + iVar8) >> 1;
      lVar1 = (ulonglong)uVar3 * 5;
      pbVar9 = pbVar6 + lVar1 + 4;
      uVar4 = (uint)pbVar6[lVar1 + 5] * 0x100 + (uint)pbVar6[lVar1 + 4] * 0x10000 +
              (uint)pbVar6[lVar1 + 6];
      iVar5 = (uint)(uVar4 < param_2) - (uint)(param_2 < uVar4);
      if (iVar5 < 0) {
        iVar7 = uVar3 - 1;
      }
      else {
        if (iVar5 < 1) goto LAB_1403c9843;
        iVar8 = uVar3 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  pbVar9 = (byte *)&DAT_14045dd10;
LAB_1403c9843:
  iVar7 = (uint)pbVar9[3] * 0x100 + (uint)pbVar9[4];
  if (iVar7 != 0) {
    *param_3 = iVar7;
  }
  return iVar7 != 0;
}

