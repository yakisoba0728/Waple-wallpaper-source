// Function: FUN_140313920
// Addr: 140313920
// Size: 414 bytes


int FUN_140313920(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  
  if (*(code **)(param_1 + 0x2a0) != (code *)0x0) {
    iVar6 = (**(code **)(param_1 + 0x2a0))
                      (param_1,*(undefined4 *)
                                (*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 0x10),
                       *(undefined8 *)(param_1 + 0xa0),0);
    if (iVar6 == 0) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc + (ulonglong)param_2 * 0x10);
      iVar7 = FUN_1402f4fe0(lVar4,uVar11);
      iVar6 = 0;
      if (iVar7 == 0) {
        pbVar10 = *(byte **)(lVar4 + 0x38);
        iVar7 = 0;
        if (3 < uVar11) {
          iVar12 = 0;
          iVar14 = 0;
          pbVar9 = pbVar10;
          uVar5 = uVar11 & 0xfffffffc;
          while (7 < uVar5) {
            pbVar10 = pbVar9 + 5;
            iVar12 = iVar12 + CONCAT31(CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]),pbVar9[3]);
            pbVar1 = pbVar9 + 4;
            pbVar2 = pbVar9 + 6;
            pbVar3 = pbVar9 + 7;
            pbVar9 = pbVar9 + 8;
            iVar14 = iVar14 + CONCAT31(CONCAT21(CONCAT11(*pbVar1,*pbVar10),*pbVar2),*pbVar3);
            uVar11 = uVar11 - 8;
            uVar5 = uVar11;
          }
          pbVar10 = pbVar9;
          if (3 < uVar11) {
            pbVar10 = pbVar9 + 4;
            iVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]),pbVar9[3]);
            uVar11 = uVar11 - 4;
          }
          iVar7 = iVar7 + iVar14 + iVar12;
        }
        iVar14 = 0;
        bVar13 = 0x18;
        for (; 1 < uVar11; uVar11 = uVar11 - 2) {
          iVar6 = iVar6 + ((uint)*pbVar10 << (bVar13 & 0x1f));
          bVar8 = bVar13 - 8;
          pbVar9 = pbVar10 + 1;
          bVar13 = bVar13 - 0x10;
          pbVar10 = pbVar10 + 2;
          iVar14 = iVar14 + ((uint)*pbVar9 << (bVar8 & 0x1f));
        }
        if (uVar11 != 0) {
          iVar7 = iVar7 + ((uint)*pbVar10 << (bVar13 & 0x1f));
        }
        FUN_1402f5100(lVar4);
        iVar6 = iVar6 + iVar14 + iVar7;
      }
      return iVar6;
    }
  }
  return 0;
}

