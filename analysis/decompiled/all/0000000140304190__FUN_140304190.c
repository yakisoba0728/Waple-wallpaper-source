// Function: FUN_140304190
// Addr: 140304190
// Size: 47 bytes


int FUN_140304190(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  
  lVar11 = (longlong)param_2;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar11 * 4);
  iVar13 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar11 * 4);
  if (iVar2 != iVar13) {
    iVar14 = iVar13 - iVar2;
    iVar10 = 0x7fffffff;
    bVar5 = false;
    pbVar3 = *(byte **)(*(longlong *)(param_1 + 0x30) + lVar11 * 8);
    pbVar8 = pbVar3;
    do {
      pbVar8 = *(byte **)(pbVar8 + 0x20);
      if ((*pbVar8 & 3) == 0) {
        pbVar9 = *(byte **)(pbVar8 + 0x28);
        iVar7 = *(int *)(pbVar8 + 0x14);
        if (((((*(int *)(pbVar9 + 0x14) == iVar7) &&
              (pbVar6 = *(byte **)(pbVar8 + 0x20), *(int *)(pbVar6 + 0x14) == iVar7)) &&
             (iVar7 != iVar2)) && ((iVar7 != iVar13 && ((*pbVar9 & 3) != 0)))) &&
           ((*pbVar6 & 3) != 0)) {
          do {
            pbVar9 = *(byte **)(pbVar9 + 0x28);
          } while ((*pbVar9 & 3) != 0);
          do {
            pbVar6 = *(byte **)(pbVar6 + 0x20);
          } while ((*pbVar6 & 3) != 0);
          if (iVar7 < *(int *)(pbVar6 + 0x14)) {
            if (iVar7 < *(int *)(pbVar9 + 0x14)) {
              iVar7 = iVar7 - iVar2;
code_r0x000140304256:
              if (((int)((iVar14 >> 0x1f & 7U) + iVar14) >> 3 <= iVar7) &&
                 ((!bVar5 || (iVar7 < iVar10)))) {
                bVar5 = true;
                iVar10 = iVar7;
              }
            }
          }
          else if ((*(int *)(pbVar6 + 0x14) < iVar7) && (*(int *)(pbVar9 + 0x14) < iVar7)) {
            iVar7 = iVar13 - iVar7;
            goto code_r0x000140304256;
          }
        }
      }
    } while (pbVar8 != pbVar3);
    if (!bVar5) {
      iVar10 = 0;
    }
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        lVar11 = (longlong)iVar13;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar11 * 4);
        if ((iVar7 < *(int *)(*(longlong *)(param_1 + 0x40) + lVar11 * 4)) && (iVar2 <= iVar7)) {
          puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x30) + lVar11 * 8);
          puVar12 = puVar4;
          do {
            puVar12 = *(ushort **)(puVar12 + 0x10);
            uVar1 = *puVar12;
            *puVar12 = uVar1 | 0x40;
            if ((uVar1 & 3) == 0) {
              *puVar12 = uVar1 | 0x48;
            }
          } while (puVar12 != puVar4);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x2c));
    }
    iVar10 = iVar10 + 0x40;
    pbVar8 = pbVar3;
    if (iVar14 < iVar10) {
      do {
        pbVar8 = *(byte **)(pbVar8 + 0x20);
        *(int *)(pbVar8 + 0x14) = ((*(int *)(pbVar8 + 0x14) - iVar2) * iVar10) / iVar14 + iVar2;
      } while (pbVar8 != pbVar3);
      return iVar10 - iVar14;
    }
  }
  return 0;
}

