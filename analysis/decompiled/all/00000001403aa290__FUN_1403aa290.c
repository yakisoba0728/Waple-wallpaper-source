// Function: FUN_1403aa290
// Addr: 1403aa290
// Size: 328 bytes


undefined8 FUN_1403aa290(byte *param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  iVar14 = (param_1[1] - 1) + (uint)*param_1 * 0x100;
  if (-1 < iVar14) {
    uVar12 = (uint)(byte)(&DAT_140470630)[*(byte *)(param_3 + 1) & 0xf] +
             (uint)(byte)(&DAT_140470630)[*(byte *)(param_3 + 1) >> 4];
    iVar15 = (uint)(byte)(&DAT_140470630)[*(byte *)(param_3 + 3) & 0xf] +
             (uint)(byte)(&DAT_140470630)[*(byte *)(param_3 + 3) >> 4];
    iVar13 = 0;
    uVar7 = *(uint *)((ulonglong)param_4 * 0x14 + *(longlong *)(lVar2 + 0x70));
    do {
      uVar6 = (uint)(iVar14 + iVar13) >> 1;
      lVar8 = (ulonglong)uVar6 * (ulonglong)((iVar15 + uVar12) * 2 + 2);
      pbVar11 = param_1 + lVar8 + 2;
      uVar10 = (uint)param_1[lVar8 + 3] + (uint)*pbVar11 * 0x100;
      iVar9 = (uint)(uVar10 < uVar7) - (uint)(uVar7 < uVar10);
      if (iVar9 < 0) {
        iVar14 = uVar6 - 1;
      }
      else {
        if (iVar9 < 1) {
          if ((uVar12 == 0) ||
             (cVar4 = FUN_1403b0d50(param_3,param_2,param_1,pbVar11 + 2,
                                    *(longlong *)(lVar2 + 0x80) +
                                    (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((iVar15 == 0) ||
             (cVar4 = FUN_1403b0d50(param_3 + 2,param_2,param_1,
                                    pbVar11 + ((ulonglong)uVar12 + 1) * 2,
                                    (ulonglong)param_4 * 0x14 + *(longlong *)(lVar2 + 0x80)),
             cVar4 == '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar3) || (bVar5)) {
            func_0x00014040efc0(lVar2,*(undefined4 *)(lVar2 + 0x5c),param_4 + 1);
          }
          if (iVar15 != 0) {
            func_0x00014040efc0(lVar2,*(undefined4 *)(lVar2 + 0x5c),param_4 + 2);
            param_4 = param_4 + 1;
          }
          *(uint *)(lVar2 + 0x5c) = param_4;
          return 1;
        }
        iVar13 = uVar6 + 1;
      }
    } while (iVar13 <= iVar14);
  }
  if ((*(byte *)(lVar2 + 0x18) & 0x40) != 0) {
    uVar7 = *(uint *)(lVar2 + 0x5c);
    param_4 = param_4 + 1;
    if ((param_4 == 0xffffffff) || (param_4 - uVar7 < 0x100)) {
      uVar12 = *(uint *)(lVar2 + 0x60);
      if (param_4 <= *(uint *)(lVar2 + 0x60)) {
        uVar12 = param_4;
      }
      for (; uVar7 < uVar12; uVar7 = uVar7 + 1) {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x70) + 4 + (ulonglong)uVar7 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
  return 0;
}

