// Function: FUN_14036f3d0
// Addr: 14036f3d0
// Size: 429 bytes


ulonglong FUN_14036f3d0(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  pbVar4 = (byte *)(param_1 + 4);
  uVar3 = (ulonglong)*(byte *)(param_1 + 2) << 8;
  pbVar1 = (byte *)(param_1 + 2 +
                   ((ulonglong)CONCAT11(*(byte *)(param_1 + 2),*(undefined1 *)(param_1 + 3)) * 3 + 1
                   ) * 2);
  if (pbVar4 != pbVar1) {
    uVar5 = param_2[2];
    do {
      uVar6 = *param_2;
      uVar3 = CONCAT71((int7)(uVar3 >> 8),uVar6 != 0xffffffffffffffff);
      if ((uVar5 == 0xffffffffffffffff) &&
         (param_2[1] == 0xffffffffffffffff && uVar6 == 0xffffffffffffffff)) {
LAB_14036f51e:
        return uVar3 & 0xffffffffffffff00;
      }
      uVar9 = (uint)pbVar4[3] + (uint)pbVar4[2] * 0x100;
      uVar8 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
      bVar10 = (uVar9 >> 4) - (uVar8 >> 4) < 0x3f;
      if (bVar10) {
        uVar7 = 1L << ((byte)(uVar8 >> 4) & 0x3f);
        uVar3 = 1L << ((byte)(uVar9 >> 4) & 0x3f);
        *param_2 = (uVar3 * 2 - (ulonglong)(uVar3 < uVar7)) - uVar7 | uVar6;
      }
      else {
        *param_2 = 0xffffffffffffffff;
      }
      bVar11 = uVar9 - uVar8 < 0x3f;
      if (bVar11) {
        uVar6 = 1L << ((byte)uVar8 & 0x3f);
        uVar3 = 1L << ((byte)uVar9 & 0x3f);
        param_2[1] = (uVar3 * 2 - (ulonglong)(uVar3 < uVar6)) - uVar6 | param_2[1];
      }
      else {
        param_2[1] = 0xffffffffffffffff;
      }
      uVar2 = (uVar9 >> 6) - (uVar8 >> 6);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 < 0x3f) {
        uVar7 = 1L << ((byte)(uVar8 >> 6) & 0x3f);
        uVar6 = 1L << ((byte)(uVar9 >> 6) & 0x3f);
        uVar3 = (ulonglong)(uVar6 < uVar7);
        uVar5 = (uVar6 * 2 - uVar3) - uVar7 | uVar5;
        param_2[2] = uVar5;
      }
      else {
        param_2[2] = 0xffffffffffffffff;
        uVar5 = 0xffffffffffffffff;
        if (!bVar11 && !bVar10) goto LAB_14036f51e;
      }
      pbVar4 = pbVar4 + 6;
    } while (pbVar4 != pbVar1);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

