// Function: FUN_14036f580
// Addr: 14036f580
// Size: 188 bytes


longlong FUN_14036f580(byte *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1] + -1;
  if (iVar4 == 0) {
    uVar6 = (ulonglong)param_1[2] << 8;
    uVar7 = (uint)param_1[3] + (int)uVar6;
    if (uVar7 != 0) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar8 = 0;
      param_1 = param_1 + 4;
      do {
        pbVar1 = param_1 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *param_1;
        param_1 = param_1 + 2;
        uVar3 = CONCAT11(bVar2,*pbVar1);
        uVar9 = uVar9 | 1L << (uVar3 >> 4 & 0x3f);
        uVar6 = (ulonglong)(uVar3 & 0x3f);
        *param_2 = uVar9;
        uVar11 = uVar11 | 1L << (uVar3 >> 6 & 0x3f);
        uVar10 = uVar10 | 1L << uVar6;
        param_2[2] = uVar11;
        param_2[1] = uVar10;
      } while (uVar8 < uVar7);
    }
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
  if (iVar4 == 1) {
    lVar5 = FUN_14036f3d0();
    return lVar5;
  }
  return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
}

