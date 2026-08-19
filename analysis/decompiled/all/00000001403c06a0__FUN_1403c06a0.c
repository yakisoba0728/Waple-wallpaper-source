// Function: FUN_1403c06a0
// Addr: 1403c06a0
// Size: 128 bytes


longlong FUN_1403c06a0(longlong param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar4) {
    uVar5 = (param_2 & 0xff00) + (param_2 & 0xff);
    do {
      uVar1 = (uint)(iVar4 + iVar8) >> 1;
      pbVar7 = (byte *)(param_1 + 4 + (ulonglong)uVar1 * 8);
      uVar3 = (ushort)*(byte *)(param_1 + 5 + (ulonglong)uVar1 * 8) + (ushort)*pbVar7 * 0x100;
      iVar2 = (uint)(uVar3 < uVar5) - (uint)(uVar5 < uVar3);
      if ((iVar2 == 0) &&
         (((uint)(param_3 >> 8) * 0x100 + (uint)(byte)param_3 == 0xffff ||
          (uVar6 = (ushort)pbVar7[3] + (ushort)pbVar7[2] * 0x100,
          uVar3 = (param_3 & 0xff00) + (param_3 & 0xff),
          iVar2 = (uint)(uVar6 < uVar3) - (uint)(uVar3 < uVar6), iVar2 == 0))))
      goto code_r0x0001403c07b6;
      if (iVar2 < 0) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (iVar2 < 1) goto code_r0x0001403c07b6;
        iVar8 = uVar1 + 1;
      }
    } while (iVar8 <= iVar4);
  }
  pbVar7 = (byte *)&DAT_14045dde0;
code_r0x0001403c07b6:
  uVar1 = (uint)pbVar7[5] * 0x10000 + (uint)pbVar7[6] * 0x100 + (uint)pbVar7[4] * 0x1000000 +
          (uint)pbVar7[7];
  if (uVar1 == 0) {
    return 0;
  }
  return (ulonglong)uVar1 + param_1;
}

