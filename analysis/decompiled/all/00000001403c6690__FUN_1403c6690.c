// Function: FUN_1403c6690
// Addr: 1403c6690
// Size: 39 bytes


byte * FUN_1403c6690(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  
  pbVar9 = (byte *)&DAT_14045dde0;
  uVar2 = (uint)*(byte *)(param_1 + 0xf) * 0x10000 + (uint)*(byte *)(param_1 + 0x10) * 0x100 +
          (uint)*(byte *)(param_1 + 0xe) * 0x1000000 + (uint)*(byte *)(param_1 + 0x11);
  if (uVar2 == 0) {
    pbVar6 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar6 = (byte *)((ulonglong)uVar2 + param_1);
  }
  iVar8 = 0;
  iVar7 = (pbVar6[3] - 1) +
          (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000;
  if (-1 < iVar7) {
    do {
      uVar2 = (uint)(iVar7 + iVar8) >> 1;
      lVar1 = (ulonglong)uVar2 * 3 + 2;
      uVar5 = (uint)pbVar6[lVar1 * 2];
      pbVar4 = pbVar6 + lVar1 * 2;
      uVar10 = (uint)pbVar6[(ulonglong)uVar2 * 6 + 5] + uVar5 * 0x100;
      if (param_2 < uVar10) {
        iVar7 = uVar2 - 1;
      }
      else {
        if (param_2 <= uVar10) goto code_r0x0001403c6737;
        iVar8 = uVar2 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  uVar5 = (uint)(byte)DAT_14045dde0;
  pbVar4 = (byte *)&DAT_14045dde0;
code_r0x0001403c6737:
  pbVar3 = (byte *)0x0;
  if ((uint)pbVar4[1] + uVar5 * 0x100 == param_2) {
    pbVar3 = pbVar4;
  }
  if (pbVar3 != (byte *)0x0) {
    uVar2 = (uint)pbVar3[5] +
            (uint)pbVar3[3] * 0x10000 + (uint)pbVar3[4] * 0x100 + (uint)pbVar3[2] * 0x1000000;
    if (uVar2 != 0) {
      pbVar9 = pbVar6 + uVar2;
    }
    return pbVar9;
  }
  return (byte *)0x0;
}

