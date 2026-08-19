// Function: FUN_1403e51b0
// Addr: 1403e51b0
// Size: 197 bytes


float FUN_1403e51b0(longlong param_1,uint param_2,float param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pbVar9 = (byte *)&DAT_14045dde0;
  lVar5 = (ulonglong)*(byte *)(param_1 + 6) * 0x100 + (ulonglong)*(byte *)(param_1 + 7) + param_4;
  if (param_2 < *(uint *)(param_5 + 0x10)) {
    pbVar3 = (byte *)(*(longlong *)(param_5 + 8) + (ulonglong)param_2 * 4);
  }
  else {
    pbVar3 = (byte *)&DAT_14045dde0;
  }
  uVar4 = (ulonglong)(param_2 + 1);
  fVar10 = ((float)(int)((((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 0x100 + (uint)pbVar3[2]) *
                         0x100 + (uint)pbVar3[3]) + 0.0) * DAT_1404926c0;
  if (param_2 + 1 < *(uint *)(param_5 + 0x10)) {
    pbVar9 = (byte *)(*(longlong *)(param_5 + 8) + uVar4 * 4);
  }
  sVar6 = (ushort)*(byte *)(lVar5 + (ulonglong)param_2 * 2) * 0x100 +
          (ushort)*(byte *)(lVar5 + 1 + (ulonglong)param_2 * 2);
  sVar8 = (ushort)*(byte *)(lVar5 + 1 + uVar4 * 2) + (ushort)*(byte *)(lVar5 + uVar4 * 2) * 0x100;
  fVar12 = ((float)(int)((((uint)*pbVar9 * 0x100 + (uint)pbVar9[1]) * 0x100 + (uint)pbVar9[2]) *
                         0x100 + (uint)pbVar9[3]) + 0.0) * DAT_1404926c0;
  sVar7 = sVar8;
  fVar11 = fVar10;
  if (fVar12 < fVar10) {
    sVar7 = sVar6;
    fVar11 = fVar12;
    sVar6 = sVar8;
    fVar12 = fVar10;
  }
  iVar2 = (int)sVar6;
  if (param_3 < fVar11) {
    return (float)iVar2;
  }
  iVar1 = (int)sVar7;
  if (fVar12 < param_3) {
    return (float)iVar1;
  }
  if (fVar11 == fVar12) {
    return (float)(iVar1 + iVar2) * DAT_140492790;
  }
  return ((param_3 - fVar11) / (fVar12 - fVar11)) * (float)(iVar1 - iVar2) + (float)iVar2;
}

