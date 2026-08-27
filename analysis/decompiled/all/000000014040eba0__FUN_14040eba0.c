// Function: FUN_14040eba0
// Addr: 14040eba0
// Size: 353 bytes


undefined8 * FUN_14040eba0(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  
  lVar4 = param_1[2];
  uVar3 = *(uint *)(param_1 + 3);
  pbVar1 = (byte *)(lVar4 + (ulonglong)uVar3);
  uVar6 = 0;
  pbVar10 = (byte *)((ulonglong)
                     ((short)((ushort)*(byte *)*param_1 * 0x100 + (ushort)((byte *)*param_1)[1]) * 2
                     + 10) + lVar4);
  if (pbVar1 <= pbVar10 + 2) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  uVar9 = 0;
  uVar7 = (uint)pbVar10[-2] * 0x100 + pbVar10[-1] + 1;
  pbVar10 = pbVar10 + (ulonglong)*pbVar10 * 0x100 + (ulonglong)pbVar10[1] + 2;
  pbVar11 = pbVar10;
  uVar8 = uVar6;
  if (pbVar10 < pbVar1) {
    do {
      bVar2 = *pbVar11;
      iVar12 = 1;
      pbVar10 = pbVar11 + 1;
      if ((bVar2 & 8) != 0) {
        if (pbVar1 <= pbVar10) {
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          return param_2;
        }
        iVar12 = *pbVar10 + 1;
        pbVar10 = pbVar11 + 2;
      }
      if ((bVar2 & 2) == 0) {
        uVar9 = (byte)~bVar2 >> 3 & 2;
      }
      else {
        uVar9 = 1;
      }
      if ((bVar2 & 4) == 0) {
        uVar5 = (byte)~bVar2 >> 4 & 2;
      }
      else {
        uVar5 = 1;
      }
      uVar6 = uVar6 + iVar12;
      uVar9 = uVar8 + (uVar9 + uVar5) * iVar12;
      if (uVar7 <= uVar6) goto LAB_14040ecbf;
      pbVar11 = pbVar10;
      uVar8 = uVar9;
    } while (pbVar10 < pbVar1);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar6 = 0;
LAB_14040ecbf:
    if (uVar6 == uVar7) {
      param_2[1] = lVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      uVar9 = (uVar3 - (int)pbVar1) + (int)pbVar10 + uVar9;
      if (uVar3 <= uVar9) {
        uVar9 = uVar3;
      }
      *(uint *)(param_2 + 2) = uVar9;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  return param_2;
}

