// Function: FUN_1403c8d90
// Addr: 1403c8d90
// Size: 295 bytes


int FUN_1403c8d90(uint *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = *param_1;
  uVar4 = (uVar4 >> 0x10 & 0xff) * 0x100 + (uVar4 >> 8 & 0xff) * 0x10000 + uVar4 * 0x1000000 +
          (uVar4 >> 0x18);
  if (uVar4 == 0) {
    puVar3 = (uint *)&DAT_14045dd10;
    lVar9 = 0x14045dd11;
    lVar10 = 0x14045dd12;
    lVar8 = 0x14045dd13;
  }
  else {
    puVar3 = param_1 + 1;
    lVar9 = (longlong)param_1 + 5;
    lVar10 = (longlong)param_1 + 6;
    lVar8 = (longlong)param_1 + 7;
  }
  iVar7 = 0;
  iVar6 = uVar4 - 2;
  if (-1 < iVar6) {
    do {
      uVar2 = (uint)(iVar6 + iVar7) >> 1;
      lVar1 = (ulonglong)uVar2 * 6;
      pbVar5 = (byte *)(lVar1 + (longlong)puVar3);
      if (param_2 < (uint)*(byte *)(lVar1 + lVar10) * 0x100 +
                    (uint)*(byte *)(lVar1 + lVar9) * 0x10000 + (uint)*pbVar5 * 0x1000000 +
                    (uint)*(byte *)(lVar1 + lVar8)) {
        iVar6 = uVar2 - 1;
      }
      else {
        if (param_2 < (uint)pbVar5[7] * 0x10000 + (uint)pbVar5[8] * 0x100 +
                      (uint)pbVar5[6] * 0x1000000 + (uint)pbVar5[9]) goto LAB_1403c8e9d;
        iVar7 = uVar2 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  if (uVar4 - 1 < uVar4) {
    pbVar5 = (byte *)((longlong)param_1 + (ulonglong)(uVar4 - 1) * 6 + 4);
  }
  else {
    pbVar5 = (byte *)&DAT_14045dd10;
  }
LAB_1403c8e9d:
  return (uint)pbVar5[4] * 0x100 + (uint)pbVar5[5];
}

