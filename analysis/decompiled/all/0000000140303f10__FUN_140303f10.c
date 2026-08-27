// Function: FUN_140303f10
// Addr: 140303f10
// Size: 417 bytes


int FUN_140303f10(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  bool bVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  longlong lVar13;
  ushort *puVar14;
  int iVar15;
  
  lVar13 = (longlong)param_2;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar13 * 4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar13 * 4);
  if (iVar2 != iVar3) {
    iVar15 = iVar3 - iVar2;
    bVar7 = false;
    iVar12 = 0x7fffffff;
    pbVar5 = *(byte **)(*(longlong *)(param_1 + 0x30) + lVar13 * 8);
    pbVar10 = pbVar5;
    do {
      pbVar10 = *(byte **)(pbVar10 + 0x20);
      if ((*pbVar10 & 3) == 0) {
        pbVar11 = *(byte **)(pbVar10 + 0x28);
        iVar9 = *(int *)(pbVar10 + 0x14);
        if (((((*(int *)(pbVar11 + 0x14) == iVar9) &&
              (pbVar8 = *(byte **)(pbVar10 + 0x20), *(int *)(pbVar8 + 0x14) == iVar9)) &&
             (iVar9 != iVar2)) && ((iVar9 != iVar3 && ((*pbVar11 & 3) != 0)))) &&
           ((*pbVar8 & 3) != 0)) {
          do {
            pbVar11 = *(byte **)(pbVar11 + 0x28);
          } while ((*pbVar11 & 3) != 0);
          do {
            pbVar8 = *(byte **)(pbVar8 + 0x20);
          } while ((*pbVar8 & 3) != 0);
          if (iVar9 < *(int *)(pbVar8 + 0x14)) {
            if (iVar9 < *(int *)(pbVar11 + 0x14)) {
              iVar9 = iVar9 - iVar2;
LAB_140303fd4:
              if (((int)((iVar15 >> 0x1f & 7U) + iVar15) >> 3 <= iVar9) &&
                 ((!bVar7 || (iVar9 < iVar12)))) {
                bVar7 = true;
                iVar12 = iVar9;
              }
            }
          }
          else if ((*(int *)(pbVar8 + 0x14) < iVar9) && (*(int *)(pbVar11 + 0x14) < iVar9)) {
            iVar9 = iVar3 - iVar9;
            goto LAB_140303fd4;
          }
        }
      }
    } while (pbVar10 != pbVar5);
    if (!bVar7) {
      iVar12 = 0;
    }
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        lVar13 = (longlong)iVar9;
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar13 * 4);
        if ((*(int *)(*(longlong *)(param_1 + 0x38) + lVar13 * 4) < iVar4) && (iVar4 <= iVar2)) {
          puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x30) + lVar13 * 8);
          puVar14 = puVar6;
          do {
            puVar14 = *(ushort **)(puVar14 + 0x10);
            uVar1 = *puVar14;
            *puVar14 = uVar1 | 0x40;
            if ((uVar1 & 3) == 0) {
              *puVar14 = uVar1 | 0x48;
            }
          } while (puVar14 != puVar6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2c));
    }
    iVar12 = iVar12 + 0x40;
    pbVar10 = pbVar5;
    if (iVar15 < iVar12) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 0x20);
        *(int *)(pbVar10 + 0x14) = ((*(int *)(pbVar10 + 0x14) - iVar3) * iVar12) / iVar15 + iVar3;
      } while (pbVar10 != pbVar5);
      return iVar12 - iVar15;
    }
  }
  return 0;
}

