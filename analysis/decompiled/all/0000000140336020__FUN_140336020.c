// Function: FUN_140336020
// Addr: 140336020
// Size: 457 bytes


void FUN_140336020(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong local_48;
  int local_40;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20) = 0;
  uVar15 = *(uint *)(param_1 + 0x20);
  if (uVar15 != 0) {
    uVar9 = 0;
    do {
      lVar16 = uVar9 * 0x20;
      uVar1 = *(uint *)(lVar16 + 0x28 + param_1);
      uVar18 = uVar1 & 0xc;
      uVar17 = uVar9 + 1;
      if (uVar18 == 0) {
        uVar17 = uVar9;
      }
      if ((uVar1 & 0x10) == 0) {
        uVar1 = *(uint *)(lVar16 + 0x3c + param_1);
        uVar6 = uVar1 & 0xffff;
        lVar10 = uVar17 * 0x20 + param_1;
        uVar2 = *(uint *)(lVar10 + 0x3c);
        uVar12 = uVar2 & 0xffff;
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = 0x10000 - uVar6;
        }
        iVar13 = 0;
        if (uVar12 != 0) {
          iVar13 = 0x10000 - uVar12;
        }
        if (iVar14 < iVar13) {
          iVar13 = iVar14;
        }
        iVar14 = -uVar12;
        if ((int)-uVar12 < (int)-uVar6) {
          iVar14 = -uVar6;
        }
        iVar11 = iVar14;
        if ((uVar17 < uVar15 - 1) && (*(int *)(lVar10 + 0x5c) < (int)(uVar2 + 0x8000 + iVar13))) {
          if ((uVar9 == 0) ||
             (*(int *)(lVar16 + 0x1c + param_1) <= (int)((uVar1 - 0x8000) + iVar14))) {
            if (-iVar14 <= iVar13) goto LAB_140336193;
          }
          else {
            iVar11 = 0;
          }
          if ((*(byte *)(uVar17 * 0x20 + 0x48 + param_1) & 0x10) == 0) {
            lVar7 = *(longlong *)(param_1 + 0x10);
            local_40 = iVar13 - iVar11;
            local_48 = uVar17;
            if ((*(longlong *)(lVar7 + 0x20) != *(longlong *)(lVar7 + 0x18)) ||
               (cVar4 = func_0x000140333bb0(lVar7), cVar4 != '\0')) {
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(*(longlong *)(lVar7 + 0x10) * *(longlong *)(lVar7 + 0x20) +
                            *(longlong *)(lVar7 + 0x30),&local_48);
            }
          }
        }
        else {
          iVar11 = iVar13;
          if (((uVar9 == 0) ||
              (*(int *)(lVar16 + 0x1c + param_1) <= (int)((uVar1 - 0x8000) + iVar14))) &&
             (-iVar14 < iVar13)) {
            iVar11 = iVar14;
          }
        }
LAB_140336193:
        *(uint *)(lVar16 + 0x3c + param_1) = iVar11 + uVar1;
        if (uVar18 != 0) {
          *(uint *)(lVar10 + 0x3c) = uVar2 + iVar11;
        }
      }
      if (uVar9 != 0) {
        iVar14 = *(int *)(lVar16 + 0x38 + param_1);
        iVar13 = *(int *)(lVar16 + 0x18 + param_1);
        if (iVar14 != iVar13) {
          func_0x0001402efae0(*(int *)(lVar16 + 0x3c + param_1) - *(int *)(lVar16 + 0x1c + param_1),
                              iVar14 - iVar13);
          return;
        }
      }
      if (uVar18 != 0) {
        lVar16 = uVar17 * 0x20;
        if (*(int *)(lVar16 + 0x38 + param_1) != *(int *)(lVar16 + 0x18 + param_1)) {
          uVar5 = func_0x0001402efae0(*(int *)(lVar16 + 0x3c + param_1) -
                                      *(int *)(lVar16 + 0x1c + param_1));
          *(undefined4 *)(lVar16 + 0x20 + param_1) = uVar5;
        }
        uVar9 = uVar9 + 1;
      }
      uVar15 = *(uint *)(param_1 + 0x20);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar15);
  }
  for (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20); lVar16 != 0;
      lVar16 = lVar16 + -1) {
    lVar10 = *(longlong *)(param_1 + 0x10);
    uVar9 = lVar16 - 1;
    if (*(ulonglong *)(lVar10 + 0x20) <= uVar9) {
      piVar3 = *(int **)(lVar10 + 8);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        *piVar3 = 0x82;
      }
      uVar9 = 0;
    }
    lVar7 = uVar9 * *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar10 + 0x30);
    lVar8 = *(longlong *)(lVar10 + lVar7) * 0x20;
    iVar14 = *(int *)(lVar8 + 0x3c + param_1) + *(int *)(lVar10 + 8 + lVar7);
    if ((iVar14 + 0x8000 <= *(int *)(lVar8 + 0x5c + param_1)) &&
       (*(int *)(lVar8 + 0x3c + param_1) = iVar14, (*(byte *)(lVar8 + 0x28 + param_1) & 0xc) != 0))
    {
      piVar3 = (int *)(lVar8 + 0x1c + param_1);
      *piVar3 = *piVar3 + *(int *)(lVar10 + 8 + lVar7);
    }
  }
  return;
}

