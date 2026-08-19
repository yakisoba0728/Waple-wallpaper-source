// Function: FUN_1403cb4c0
// Addr: 1403cb4c0
// Size: 114 bytes


uint FUN_1403cb4c0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = (*(byte *)(param_1 + 0xf) - 1) +
          (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xc) * 0x1000000;
  if (-1 < iVar5) {
    do {
      uVar2 = (uint)(iVar5 + iVar7) >> 1;
      pbVar6 = (byte *)(param_1 + 0x1c + (ulonglong)uVar2 * 6);
      uVar4 = (uint)*(byte *)(param_1 + 0x1d + (ulonglong)uVar2 * 6) + (uint)*pbVar6 * 0x100;
      iVar3 = (uint)(uVar4 < param_2) - (uint)(param_2 < uVar4);
      if (iVar3 == 0) {
        uVar4 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
        iVar3 = (uint)(uVar4 < param_3) - (uint)(param_3 < uVar4);
      }
      if (iVar3 < 0) {
        iVar5 = uVar2 - 1;
      }
      else {
        if (iVar3 < 1) goto code_r0x0001403cb56f;
        iVar7 = uVar2 + 1;
      }
    } while (iVar7 <= iVar5);
  }
  pbVar6 = (byte *)&DAT_14045dde0;
code_r0x0001403cb56f:
  uVar2 = (uint)(short)((ushort)pbVar6[4] * 0x100 + (ushort)pbVar6[5]);
  iVar5 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
          (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
  if ((iVar5 != 0) && (param_4 != 0)) {
    pbVar6 = (byte *)((ulonglong)uVar2 + param_1);
    cVar1 = FUN_14036f190(param_4 + 0x28,pbVar6,iVar5,2);
    if (cVar1 == '\0') {
      return 0;
    }
    return (int)(short)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100);
  }
  return uVar2;
}

