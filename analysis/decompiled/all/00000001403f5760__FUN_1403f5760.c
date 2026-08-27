// Function: FUN_1403f5760
// Addr: 1403f5760
// Size: 153 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403f5760(undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  double *pdVar8;
  byte *pbVar9;
  
  uVar5 = *(uint *)(param_2 + 0x14);
  uVar6 = *(uint *)(param_2 + 0x10);
  if (uVar6 < uVar5 + 4) {
    return (ulonglong)(uint3)(uVar5 + 4 >> 8) << 8;
  }
  if (uVar5 < uVar6) {
    pbVar9 = (byte *)((ulonglong)uVar5 + *(longlong *)(param_2 + 8));
  }
  else {
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  bVar1 = pbVar9[1];
  bVar2 = pbVar9[2];
  bVar3 = *pbVar9;
  bVar4 = pbVar9[3];
  uVar7 = 0;
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 < 0x201) {
    uVar7 = (ulonglong)(uVar5 + 1);
    pdVar8 = (double *)(param_1 + (ulonglong)uVar5 * 8 + 8);
    *(uint *)(param_1 + 4) = uVar5 + 1;
  }
  else {
    *param_1 = 1;
    pdVar8 = (double *)&DAT_1404e4f20;
  }
  *pdVar8 = (double)(int)((uint)bVar1 * 0x10000 + (uint)bVar2 * 0x100 + (uint)bVar3 * 0x1000000 +
                         (uint)bVar4) * _DAT_140471a68;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 4;
  return CONCAT71((int7)(uVar7 >> 8),1);
}

