// Function: FUN_14033f9e0
// Addr: 14033f9e0
// Size: 1109 bytes


void FUN_14033f9e0(int *param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int local_res8;
  
  if ((param_1[4] & 8U) != 0) {
    return;
  }
  iVar4 = *param_1;
  lVar6 = (longlong)param_3 * 0xcc + param_2;
  lVar14 = (longlong)*(int *)(lVar6 + 0xcc);
  uVar15 = (int)((ulonglong)(iVar4 * lVar14 + 0x8000 + (iVar4 * lVar14 >> 0x3f)) >> 0x10) +
           *(int *)(lVar6 + 0xd0);
  lVar5 = param_1[1] * lVar14;
  uVar3 = (uint)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xc0) == '\0') {
LAB_14033fbb6:
      param_1[2] = uVar15;
      param_1[4] = param_1[4] | 8;
      param_1[3] = uVar3;
      return;
    }
    if (*(char *)(param_4 + 0xc2) == '\0') goto LAB_14033fa9b;
LAB_14033fbd6:
    bVar2 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0xc1) == '\0') goto LAB_14033fbb6;
      if (*(char *)(param_4 + 0xc3) != '\0') goto LAB_14033fbd6;
    }
LAB_14033fa9b:
    bVar2 = false;
  }
  uVar8 = 0;
  uVar7 = 0x40;
  param_1[3] = uVar3;
  local_res8 = 0;
  if (param_3 == 1) {
    iVar11 = *(int *)(param_2 + 0x1a0);
    if (iVar11 != 0) {
      iVar12 = param_1[1] + iVar4;
      lVar5 = param_2 + 0x1a4;
      while (iVar9 = iVar12 - *(int *)(lVar5 + 0xc), -*(int *)(param_2 + 0x9bc) <= iVar9) {
        if (iVar12 <= *(int *)(lVar5 + 8) + *(int *)(param_2 + 0x9bc)) {
          if ((*(char *)(param_2 + 0x9c0) != '\0') || (iVar9 <= *(int *)(param_2 + 0x9b8))) {
            local_res8 = *(int *)(lVar5 + 0x10);
            uVar8 = 1;
          }
          break;
        }
        lVar5 = lVar5 + 0x20;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) break;
      }
    }
    uVar10 = *(uint *)(param_2 + 0x3a4);
    uVar13 = 0;
    if (uVar10 != 0) {
      lVar5 = (ulonglong)uVar10 * 0x20 + 0x388 + param_2;
      do {
        iVar11 = *(int *)(lVar5 + 8) - iVar4;
        if (iVar11 < -*(int *)(param_2 + 0x9bc)) break;
        if (*(int *)(lVar5 + 0xc) - *(int *)(param_2 + 0x9bc) <= iVar4) {
          if ((*(char *)(param_2 + 0x9c0) != '\0') ||
             (uVar13 = 0, iVar11 < *(int *)(param_2 + 0x9b8))) {
            uVar13 = *(uint *)(lVar5 + 0x10);
            uVar8 = uVar8 | 2;
          }
          goto LAB_14033fb77;
        }
        lVar5 = lVar5 + -0x20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar13 = 0;
    }
LAB_14033fb77:
    if (uVar8 == 1) {
      uVar13 = local_res8 - uVar3;
    }
    else if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_14033fc47;
      param_1[3] = local_res8 - uVar13;
    }
  }
  else {
LAB_14033fc47:
    piVar1 = *(int **)(param_1 + 6);
    iVar4 = (int)uVar3 >> 1;
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)(piVar1 + 4) & 8) == 0) {
        FUN_14033f9e0(piVar1,param_2,param_3,param_4);
      }
      lVar14 = ((((param_1[1] >> 1) - (piVar1[1] >> 1)) - *piVar1) + *param_1) * lVar14;
      uVar15 = (((int)((ulonglong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10) + (piVar1[3] >> 1))
               - iVar4) + piVar1[2];
    }
    param_1[3] = uVar3;
    param_1[2] = uVar15;
    uVar10 = uVar15;
    if (*(char *)(param_4 + 0xc4) != '\0') {
      if ((int)uVar3 < 0x41) {
        if ((int)uVar3 < 0x20) {
          uVar13 = uVar15 + 0x20 & 0xffffffc0;
          uVar10 = uVar13;
          if (0 < (int)uVar3) {
            uVar10 = uVar3 + 0x20 + uVar15 & 0xffffffc0;
            iVar4 = (uVar10 - uVar3) - uVar15;
            iVar11 = uVar13 - uVar15;
            if (iVar11 < 0) {
              iVar11 = uVar15 - uVar13;
            }
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            if (iVar11 <= iVar4) {
              uVar10 = uVar13;
            }
          }
        }
        else {
          uVar3 = 0x40;
          uVar10 = uVar15 + iVar4 & 0xffffffc0;
        }
      }
      else {
        uVar15 = *(uint *)(lVar6 + 0x10);
        iVar4 = uVar3 - uVar15;
        if (iVar4 < 0) {
          iVar4 = uVar15 - uVar3;
        }
        if ((iVar4 < 0x28) && (uVar3 = uVar15, (int)uVar15 < 0x30)) {
          uVar3 = 0x36;
        }
        else if (uVar3 < 0xc0) {
          uVar15 = uVar3 & 0xffffffc0;
          uVar3 = uVar3 & 0x3f;
          if (uVar3 < 10) {
LAB_14033fd5d:
            uVar3 = uVar15 + uVar3;
          }
          else if (uVar3 < 0x20) {
            uVar3 = uVar15 + 10;
          }
          else {
            if (0x35 < uVar3) goto LAB_14033fd5d;
            uVar3 = uVar15 + 0x36;
          }
        }
        else {
          uVar3 = uVar3 + 0x20 & 0xffffffc0;
        }
      }
    }
    param_1[3] = uVar3;
    uVar13 = uVar10 + 0x20 & 0xffffffc0;
    uVar3 = (uVar10 + 0x20 + uVar3 & 0xffffffc0) - uVar3;
    iVar11 = uVar3 - uVar10;
    iVar4 = -iVar11;
    if (iVar4 < 0) {
      iVar4 = iVar11;
    }
    iVar12 = uVar13 - uVar10;
    iVar11 = -iVar12;
    if (iVar11 < 0) {
      iVar11 = iVar12;
    }
    if (iVar4 < iVar11) {
      uVar13 = uVar3;
    }
  }
  param_1[2] = uVar13;
  if (!bVar2) goto LAB_14033fe17;
  if (0x3f < param_1[3]) {
    uVar7 = param_1[3] + 0x20U & 0xffffffc0;
  }
  if (uVar8 == 1) {
    uVar3 = local_res8 - uVar7;
LAB_14033fe11:
    param_1[2] = uVar3;
  }
  else if (uVar8 != 2) {
    if (uVar8 == 3) goto LAB_14033fe17;
    iVar4 = (int)uVar7 >> 1;
    if ((uVar7 & 0x40) == 0) {
      uVar3 = (iVar4 + uVar13 + 0x20 & 0xffffffc0) - iVar4;
    }
    else {
      uVar3 = ((iVar4 + uVar13 & 0xffffffc0) + 0x20) - iVar4;
    }
    goto LAB_14033fe11;
  }
  param_1[3] = uVar7;
LAB_14033fe17:
  param_1[4] = param_1[4] | 8;
  return;
}

