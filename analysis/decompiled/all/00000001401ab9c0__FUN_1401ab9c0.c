// Function: FUN_1401ab9c0
// Addr: 1401ab9c0
// Size: 1891 bytes


void FUN_1401ab9c0(longlong param_1,longlong *param_2,float param_3,double *param_4,double *param_5)

{
  float *pfVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  int local_res8 [2];
  longlong *local_res10;
  int local_138;
  int local_134;
  float local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int local_11c;
  float local_118;
  float local_114;
  longlong *local_110;
  int local_108;
  longlong *local_100;
  undefined4 *local_f8;
  int *local_f0;
  int *local_e8;
  undefined4 **local_e0;
  
  uVar6 = DAT_140492978;
  local_res8[0] = *(int *)(param_1 + 0x2c);
  local_138 = *(int *)(param_1 + 0x28);
  if ((((0 < local_res8[0]) && (0 < local_138)) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((local_11c = (int)param_2[1], 0 < local_11c &&
      (local_108 = *(int *)((longlong)param_2 + 0xc), 0 < local_108)))) {
    local_124 = *(int *)(param_1 + 0x20);
    iVar9 = *(int *)(param_1 + 0x30);
    iVar10 = local_res8[0] * local_138;
    iVar13 = local_res8[0];
    if (local_res8[0] < local_138) {
      iVar13 = local_138;
    }
    local_120 = *(int *)(param_1 + 0x24);
    lVar3 = *(longlong *)ThreadLocalStoragePointer;
    local_128 = 0x60ad78ec;
    local_res10 = param_2;
    local_134 = iVar9;
    if ((*(uint *)(lVar3 + 0x2ac) & 1) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 1;
      FUN_14028b030(&LAB_140424fd0);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 2) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 2;
      FUN_14028b030(&LAB_140424fb0);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 4) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 4;
      FUN_14028b030(&LAB_140424f90);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 8) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 8;
      FUN_14028b030(&LAB_140424f70);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 0x10) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 0x10;
      FUN_14028b030(&LAB_140424f50);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 0x20) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 0x20;
      FUN_14028b030(&LAB_140424f30);
    }
    if ((*(uint *)(lVar3 + 0x2ac) & 0x40) == 0) {
      *(uint *)(lVar3 + 0x2ac) = *(uint *)(lVar3 + 0x2ac) | 0x40;
      FUN_14028b030(&LAB_140424f10);
    }
    plVar14 = (longlong *)(lVar3 + 0x1f8);
    lVar11 = (longlong)iVar10;
    FUN_1401aa940(plVar14,lVar11);
    plVar17 = (longlong *)(lVar3 + 0x240);
    local_110 = plVar17;
    FUN_1401aa940(plVar17,lVar11);
    local_100 = (longlong *)(lVar3 + 0x210);
    FUN_1401aa940(local_100,lVar11);
    FUN_1401310e0(lVar3 + 0x288,(longlong)iVar13);
    FUN_1401aa940(lVar3 + 0x270,(longlong)(iVar13 + 1));
    FUN_1401aa940(lVar3 + 600,(longlong)iVar13);
    FUN_1401aa940(lVar3 + 0x228,(longlong)local_138);
    iVar13 = 0;
    if (0 < local_138) {
      do {
        if (0 < local_res8[0]) {
          lVar3 = *plVar14;
          lVar11 = *plVar17;
          iVar10 = 0;
          do {
            if (*(byte *)((longlong)(iVar13 * iVar9 + iVar10 * 4) + 3 +
                         *(longlong *)(param_1 + 0x38)) < 0x80) {
              uVar18 = 0;
              *(undefined4 *)(lVar3 + (longlong)(iVar13 * local_res8[0] + iVar10) * 4) = 0x60ad78ec;
            }
            else {
              *(undefined4 *)(lVar3 + (longlong)(iVar13 * local_res8[0] + iVar10) * 4) = 0;
              uVar18 = uVar6;
            }
            iVar8 = iVar13 * local_res8[0] + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined4 *)(lVar11 + (longlong)iVar8 * 4) = uVar18;
          } while (iVar10 < local_res8[0]);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_138);
    }
    local_f8 = &local_128;
    local_f0 = local_res8;
    local_e8 = &local_138;
    local_e0 = &local_f8;
    FUN_1401ac3b0(&local_f0,*plVar14);
    FUN_1401ac3b0(&local_f0);
    uVar7 = DAT_140492ff0;
    fVar4 = DAT_1404926c0;
    iVar10 = 0;
    iVar13 = local_res8[0];
    if (local_138 < 1) {
      dVar24 = DAT_140492778 / (double)param_3;
    }
    else {
      do {
        if (0 < iVar13) {
          iVar8 = 0;
          iVar15 = iVar10 * iVar9;
          lVar3 = *local_100;
          do {
            if (*(byte *)((longlong)(iVar15 + iVar8 * 4) + 3 + *(longlong *)(param_1 + 0x38)) < 0x80
               ) {
              fVar19 = *(float *)(*plVar14 + (longlong)(iVar10 * iVar13 + iVar8) * 4);
              if (fVar19 < 0.0) {
                fVar19 = (float)FUN_14041ad10();
              }
              else {
                fVar19 = SQRT(fVar19);
              }
              fVar19 = (float)((uint)fVar19 ^ uVar7) + fVar4;
            }
            else {
              fVar19 = *(float *)(*local_110 + (longlong)(iVar10 * iVar13 + iVar8) * 4);
              if (fVar19 < 0.0) {
                fVar19 = (float)FUN_14041ad10();
                fVar19 = fVar19 - fVar4;
              }
              else {
                fVar19 = SQRT(fVar19) - fVar4;
              }
            }
            iVar9 = iVar10 * iVar13 + iVar8;
            iVar8 = iVar8 + 1;
            *(float *)(lVar3 + (longlong)iVar9 * 4) = fVar19;
            iVar9 = local_134;
            iVar13 = local_res8[0];
          } while (iVar8 < local_res8[0]);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_138);
      dVar24 = DAT_140492778 / (double)param_3;
    }
    dVar5 = DAT_140492758;
    local_130 = (float)dVar24;
    local_134 = 0;
    do {
      dVar24 = *param_4;
      dVar2 = *param_5;
      local_12c = 0;
      local_118 = (float)local_124;
      local_114 = (float)local_120;
      fVar19 = (float)(((double)local_134 + dVar5) / param_4[1] - param_5[1]);
      local_110 = (longlong *)CONCAT44(local_110._4_4_,fVar19);
      while( true ) {
        iVar9 = iVar13 + -1;
        fVar19 = local_114 - fVar19;
        fVar22 = (float)iVar9;
        fVar26 = (float)(((double)local_12c + dVar5) / dVar24 - dVar2) - local_118;
        fVar23 = fVar22;
        if (fVar26 < fVar22) {
          fVar23 = fVar26;
        }
        if (fVar23 <= 0.0) {
          fVar22 = 0.0;
        }
        else if (fVar26 < fVar22) {
          fVar22 = fVar26;
        }
        iVar10 = local_138 + -1;
        fVar23 = (float)iVar10;
        fVar20 = fVar23;
        if (fVar19 < fVar23) {
          fVar20 = fVar19;
        }
        if (fVar20 <= 0.0) {
          fVar23 = 0.0;
        }
        else if (fVar19 < fVar23) {
          fVar23 = fVar19;
        }
        fVar20 = (float)FUN_14041a5c0();
        fVar21 = (float)FUN_14041a5c0();
        iVar15 = (int)fVar20;
        fVar20 = fVar22 - fVar20;
        iVar8 = (int)fVar21 + 1;
        iVar12 = (int)fVar21 * iVar13;
        fVar25 = DAT_140492704 - fVar20;
        fVar19 = (fVar19 - fVar23) * (fVar19 - fVar23) + (fVar26 - fVar22) * (fVar26 - fVar22);
        if (iVar8 <= iVar10) {
          iVar10 = iVar8;
        }
        iVar16 = iVar12 + iVar15;
        iVar8 = iVar13 * iVar10 + iVar15;
        if (fVar19 < 0.0) {
          fVar19 = (float)FUN_14041ad10();
        }
        else {
          fVar19 = SQRT(fVar19);
        }
        iVar10 = iVar13 * iVar10 + -1 + iVar13;
        if (iVar15 + 1 <= iVar9) {
          iVar10 = iVar8 + 1;
        }
        lVar3 = *local_100;
        iVar13 = iVar12 + -1 + iVar13;
        if (iVar15 + 1 <= iVar9) {
          iVar13 = iVar16 + 1;
        }
        iVar9 = local_134 * (int)local_res10[1] + local_12c;
        local_12c = local_12c + 1;
        fVar19 = (((fVar25 * *(float *)(lVar3 + (longlong)iVar16 * 4) +
                   fVar20 * *(float *)(lVar3 + (longlong)iVar13 * 4)) *
                   (DAT_140492704 - (fVar23 - fVar21)) +
                  (fVar25 * *(float *)(lVar3 + (longlong)iVar8 * 4) +
                  fVar20 * *(float *)(lVar3 + (longlong)iVar10 * 4)) * (fVar23 - fVar21)) - fVar19)
                 * local_130 + fVar4;
        pfVar1 = (float *)(*local_res10 + (longlong)(iVar9 * 4) * 4);
        *pfVar1 = fVar19;
        pfVar1[1] = fVar19;
        pfVar1[2] = fVar19;
        pfVar1[3] = fVar19;
        iVar13 = local_res8[0];
        if (local_11c <= local_12c) break;
        fVar19 = local_110._0_4_;
      }
      local_134 = local_134 + 1;
    } while (local_134 < local_108);
  }
  return;
}

