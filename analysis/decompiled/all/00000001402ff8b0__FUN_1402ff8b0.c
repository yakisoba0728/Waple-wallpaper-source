// Function: FUN_1402ff8b0
// Addr: 1402ff8b0
// Size: 1195 bytes


void FUN_1402ff8b0(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int local_54;
  int local_50;
  
  if ((param_2 == 1) && (puVar6 = (uint *)FUN_1402f7790(param_3), puVar6 != (uint *)0x0)) {
    uVar12 = 0;
    uVar11 = 0x3a6;
    do {
      uVar7 = uVar11 + uVar12 >> 1;
      if ((uint)(&DAT_1404dcf90)[uVar7 * 2] < *puVar6) {
        uVar12 = uVar7 + 1;
      }
      else {
        if ((uint)(&DAT_1404dcf90)[uVar7 * 2] <= *puVar6) {
          uVar21 = *(uint *)(uVar7 * 8 + 0x1404dcf94);
          if (uVar21 == 0) {
            return;
          }
          uVar2 = uVar21 >> 1;
          uVar14 = uVar21 >> 3;
          uVar22 = uVar21 >> 2;
          if (((((uVar21 & 1) != 0) || ((uVar2 & 1) != 0)) && (1 < *(int *)(param_1 + 0x2c))) ||
             ((((uVar22 & 1) != 0 || ((uVar14 & 1) != 0)) && (2 < *(int *)(param_1 + 0x2c))))) {
            FUN_1402feb70(param_1);
          }
          piVar15 = (int *)(param_1 + 0x2c);
          if (((uVar21 & 1) == 0) || (iVar10 = *piVar15, iVar10 < 2)) {
            if (((uVar22 & 1) == 0) || (iVar10 = *piVar15, iVar10 < 3)) goto LAB_1402ffb76;
LAB_1402ff9d4:
            iVar3 = FUN_1402ff2f0(param_1);
          }
          else {
            if ((uVar22 & 1) != 0) goto LAB_1402ff9d4;
            iVar3 = FUN_1402ff210(param_1);
          }
          cVar1 = FUN_1402fcda0(param_1,iVar3);
          if (cVar1 == '\0') {
            return;
          }
          lVar17 = *(longlong *)(param_1 + 0x40);
          lVar18 = *(longlong *)(param_1 + 0x38);
          iVar20 = *(int *)(lVar18 + (longlong)iVar3 * 4);
          iVar19 = *(int *)(lVar17 + (longlong)iVar3 * 4) - iVar20;
          if (param_4 < iVar19) {
            return;
          }
          iVar13 = 0x40;
          local_54 = 0;
          uVar16 = uVar21 & 0x10;
          uVar4 = uVar21 & 0x40;
          iVar8 = 0;
          if (iVar10 != 0) {
            do {
              if (iVar8 != iVar3) {
                iVar5 = iVar20 - *(int *)((longlong)iVar8 * 4 + lVar17);
                if (((iVar5 < 0x40) && (iVar5 < iVar13)) &&
                   (*(int *)(lVar18 + (longlong)iVar8 * 4) < iVar20)) {
                  iVar13 = iVar5;
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10);
          }
          iVar13 = 0x40 - iVar13;
          if ((uVar16 != 0) || (uVar4 != 0)) {
            if (((uVar21 & 1) == 0) && (uVar4 == 0)) {
              iVar3 = FUN_1402ff210(param_1);
              lVar17 = *(longlong *)(param_1 + 0x40);
              lVar18 = *(longlong *)(param_1 + 0x38);
            }
            uVar9 = iVar13 + iVar20;
            if (((uVar22 & 1) != 0) && (uVar16 != 0)) {
              uVar9 = uVar9 + iVar19;
            }
            uVar9 = uVar9 & 0x8000003f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
            }
            if ((uVar9 == 0) &&
               (iVar10 = *(int *)(lVar17 + (longlong)iVar3 * 4) -
                         *(int *)(lVar18 + (longlong)iVar3 * 4), iVar10 < 0xc0)) {
              local_54 = (int)((iVar10 + 0x20U & 0xffffffc0) - iVar10) / 2;
            }
          }
          if ((((uVar21 & 1) != 0) && (uVar16 != 0)) ||
             ((iVar10 = iVar13, (uVar22 & 1) != 0 && (uVar4 != 0)))) {
            iVar10 = iVar13 + local_54;
          }
          if (((iVar10 != 0) && (-3 < iVar10)) && ((iVar10 < 0x43 || (iVar13 < 0x43)))) {
            iVar20 = iVar20 - ((int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3);
            FUN_1403052e0(param_1,iVar20,iVar13);
            if (((uVar22 & 1) != 0) && (uVar16 != 0)) {
              FUN_1403052e0(param_1,iVar19 + iVar20,local_54);
            }
          }
LAB_1402ffb76:
          if (((uVar2 & 1) == 0) || (iVar10 = *piVar15, iVar10 < 2)) {
            if ((uVar14 & 1) == 0) {
              return;
            }
            iVar10 = *piVar15;
            if (iVar10 < 3) {
              return;
            }
          }
          else if ((uVar14 & 1) == 0) {
            iVar3 = FUN_1402ff280(param_1);
            goto LAB_1402ffbaf;
          }
          iVar3 = FUN_1402ff380(param_1);
LAB_1402ffbaf:
          cVar1 = FUN_1402fcda0(param_1,iVar3);
          if (cVar1 == '\0') {
            return;
          }
          lVar17 = *(longlong *)(param_1 + 0x40);
          lVar18 = *(longlong *)(param_1 + 0x38);
          iVar20 = *(int *)(lVar17 + (longlong)iVar3 * 4);
          iVar19 = iVar20 - *(int *)(lVar18 + (longlong)iVar3 * 4);
          if (param_4 < iVar19) {
            return;
          }
          uVar22 = uVar21 & 0x20;
          local_50 = 0;
          uVar21 = uVar21 & 0x80;
          iVar8 = 0;
          iVar13 = 0x40;
          if (iVar10 != 0) {
            do {
              if (iVar8 != iVar3) {
                iVar5 = *(int *)((longlong)iVar8 * 4 + lVar18) - iVar20;
                if (((iVar5 < 0x40) && (iVar5 < iVar13)) &&
                   (iVar20 < *(int *)((longlong)iVar8 * 4 + lVar17))) {
                  iVar13 = iVar5;
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10);
          }
          iVar13 = 0x40 - iVar13;
          if ((uVar22 != 0) || (uVar21 != 0)) {
            if (((uVar2 & 1) == 0) && (uVar21 == 0)) {
              iVar3 = FUN_1402ff280(param_1);
              lVar17 = *(longlong *)(param_1 + 0x40);
            }
            uVar4 = iVar20 - iVar13;
            if (((uVar14 & 1) != 0) && (uVar22 != 0)) {
              uVar4 = uVar4 - iVar19;
            }
            uVar4 = uVar4 & 0x8000003f;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
            }
            if ((uVar4 == 0) &&
               (iVar10 = *(int *)(lVar17 + (longlong)iVar3 * 4) -
                         *(int *)(lVar18 + (longlong)iVar3 * 4), iVar10 < 0xc0)) {
              local_50 = (int)((iVar10 + 0x20U & 0xffffffc0) - iVar10) / 2;
            }
          }
          if ((((uVar2 & 1) != 0) && (uVar22 != 0)) ||
             ((iVar10 = iVar13, (uVar14 & 1) != 0 && (uVar21 != 0)))) {
            iVar10 = iVar13 + local_50;
          }
          if (iVar10 == 0) {
            return;
          }
          if (iVar10 < -2) {
            return;
          }
          if ((0x42 < iVar10) && (0x42 < iVar13)) {
            return;
          }
          iVar20 = ((int)((iVar19 >> 0x1f & 7U) + iVar19) >> 3) + iVar20;
          FUN_140305280(param_1,iVar20,iVar13);
          if ((uVar14 & 1) == 0) {
            return;
          }
          if (uVar22 == 0) {
            return;
          }
          FUN_140305280(param_1,iVar20 - iVar19,local_50);
          return;
        }
        uVar11 = uVar7 - 1;
      }
    } while (uVar12 <= uVar11);
  }
  return;
}

