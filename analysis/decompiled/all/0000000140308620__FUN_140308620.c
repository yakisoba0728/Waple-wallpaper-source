// Function: FUN_140308620
// Addr: 140308620
// Size: 575 bytes


int FUN_140308620(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint *puVar17;
  
  if ((((*(longlong *)(param_1 + 0x408) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) == 0)) ||
      ((param_3 == 0xffff && (param_4 == 0xffff)))) ||
     (((*param_2 <= param_3 ||
       (puVar17 = (uint *)((ulonglong)param_3 * 0x20 + *(longlong *)(param_2 + 2)),
       *puVar17 <= param_4)) || (uVar8 = puVar17[1], uVar8 == 0)))) {
    return 0;
  }
  cVar1 = *(char *)((longlong)puVar17 + 0x1a);
  iVar6 = (ushort)puVar17[6] + uVar8;
  iVar16 = 0;
  iVar5 = iVar6 * 2;
  if (cVar1 == '\0') {
    iVar5 = iVar6;
  }
  uVar11 = 0;
  pbVar12 = (byte *)((ulonglong)(iVar5 * param_4) + *(longlong *)(puVar17 + 4));
  iVar5 = 0;
  if (uVar8 != 0) {
    do {
      iVar16 = iVar5;
      uVar15 = 0;
      uVar8 = param_2[4];
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10);
      iVar6 = 0x10000;
      piVar9 = *(int **)(*(longlong *)(param_2 + 6) +
                        (ulonglong)*(uint *)(*(longlong *)(puVar17 + 2) + uVar11 * 4) * 8);
      uVar10 = (uint)uVar11;
      iVar5 = 0x10000;
      if ((ushort)uVar8 == 0) {
LAB_14030877d:
        if (*(char *)((longlong)puVar17 + 0x1a) == '\0') {
          if (uVar10 < (ushort)puVar17[6]) {
            pbVar13 = pbVar12 + 2;
            uVar8 = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
          }
          else {
            uVar8 = (uint)(char)*pbVar12;
            pbVar13 = pbVar12 + 1;
          }
        }
        else if (uVar10 < (ushort)puVar17[6]) {
          pbVar13 = pbVar12 + 4;
          uVar8 = CONCAT31(CONCAT21(CONCAT11(*pbVar12,pbVar12[1]),pbVar12[2]),pbVar12[3]);
        }
        else {
          pbVar13 = pbVar12 + 2;
          uVar8 = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
        }
        iVar16 = iVar16 + iVar6 * uVar8;
      }
      else {
        do {
          iVar6 = iVar5;
          iVar5 = *(int *)(lVar4 + uVar15 * 4);
          iVar7 = piVar9[1];
          if ((iVar7 != iVar5) && (iVar7 != 0)) {
            iVar2 = *piVar9;
            if ((iVar5 <= iVar2) || (iVar3 = piVar9[2], iVar3 <= iVar5)) goto LAB_1403087b4;
            if (iVar5 < iVar7) {
              iVar7 = iVar7 - iVar2;
              iVar5 = iVar5 - iVar2;
            }
            else {
              iVar7 = iVar3 - iVar7;
              iVar5 = iVar3 - iVar5;
            }
            iVar6 = FUN_1402f20b0(iVar6,iVar5,iVar7);
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          piVar9 = piVar9 + 3;
          iVar5 = iVar6;
        } while (uVar14 < (ushort)uVar8);
        if (iVar6 != 0) goto LAB_14030877d;
LAB_1403087b4:
        pbVar13 = pbVar12 + ((cVar1 != '\0') + 1 << (uVar10 < (ushort)puVar17[6]));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      pbVar12 = pbVar13;
      iVar5 = iVar16;
    } while (uVar10 + 1 < puVar17[1]);
  }
  return iVar16 + 0x8000 >> 0x10;
}

