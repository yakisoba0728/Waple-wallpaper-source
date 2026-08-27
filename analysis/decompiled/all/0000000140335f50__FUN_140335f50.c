// Function: FUN_140335f50
// Addr: 140335f50
// Size: 717 bytes


void FUN_140335f50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20) = 0;
  uVar15 = *(uint *)(param_1 + 0x20);
  if (uVar15 != 0) {
    uVar10 = 0;
    do {
      lVar16 = uVar10 * 0x20;
      uVar1 = *(uint *)(lVar16 + 0x28 + param_1);
      uVar18 = uVar1 & 0xc;
      uVar17 = uVar10 + 1;
      if (uVar18 == 0) {
        uVar17 = uVar10;
      }
      if ((uVar1 & 0x10) == 0) {
        uVar1 = *(uint *)(lVar16 + 0x3c + param_1);
        uVar7 = uVar1 & 0xffff;
        lVar11 = uVar17 * 0x20 + param_1;
        uVar2 = *(uint *)(lVar11 + 0x3c);
        uVar13 = uVar2 & 0xffff;
        iVar14 = 0;
        if (uVar7 != 0) {
          iVar14 = 0x10000 - uVar7;
        }
        iVar12 = 0;
        if (uVar13 != 0) {
          iVar12 = 0x10000 - uVar13;
        }
        if (iVar14 < iVar12) {
          iVar12 = iVar14;
        }
        iVar14 = -uVar13;
        if ((int)-uVar13 < (int)-uVar7) {
          iVar14 = -uVar7;
        }
        if ((uVar17 < uVar15 - 1) && (*(int *)(lVar11 + 0x5c) < (int)(uVar2 + 0x8000 + iVar12))) {
          if ((uVar10 == 0) ||
             (*(int *)(lVar16 + 0x1c + param_1) <= (int)((uVar1 - 0x8000) + iVar14))) {
            bVar4 = -iVar14 <= iVar12;
            iVar12 = iVar14;
            if (bVar4) goto LAB_1403360c3;
          }
          else {
            iVar12 = 0;
          }
          if (((*(byte *)(uVar17 * 0x20 + 0x48 + param_1) & 0x10) == 0) &&
             ((lVar8 = *(longlong *)(param_1 + 0x10),
              *(longlong *)(lVar8 + 0x20) != *(longlong *)(lVar8 + 0x18) ||
              (cVar5 = FUN_140333ae0(lVar8), cVar5 != '\0')))) {
            FUN_1404210f0(*(longlong *)(lVar8 + 0x10) * *(longlong *)(lVar8 + 0x20) +
                          *(longlong *)(lVar8 + 0x30));
            *(longlong *)(lVar8 + 0x20) = *(longlong *)(lVar8 + 0x20) + 1;
          }
        }
        else if (((uVar10 == 0) ||
                 (*(int *)(lVar16 + 0x1c + param_1) <= (int)((uVar1 - 0x8000) + iVar14))) &&
                (-iVar14 < iVar12)) {
          iVar12 = iVar14;
        }
LAB_1403360c3:
        *(uint *)(lVar16 + 0x3c + param_1) = iVar12 + uVar1;
        if (uVar18 != 0) {
          *(uint *)(lVar11 + 0x3c) = uVar2 + iVar12;
        }
      }
      if ((uVar10 != 0) && (*(int *)(lVar16 + 0x38 + param_1) != *(int *)(lVar16 + 0x18 + param_1)))
      {
        uVar6 = FUN_1402efa10(*(int *)(lVar16 + 0x3c + param_1) - *(int *)(lVar16 + 0x1c + param_1))
        ;
        *(undefined4 *)(lVar16 + 0x20 + param_1) = uVar6;
      }
      if (uVar18 != 0) {
        lVar16 = uVar17 * 0x20;
        if (*(int *)(lVar16 + 0x38 + param_1) != *(int *)(lVar16 + 0x18 + param_1)) {
          uVar6 = FUN_1402efa10(*(int *)(lVar16 + 0x3c + param_1) -
                                *(int *)(lVar16 + 0x1c + param_1));
          *(undefined4 *)(lVar16 + 0x20 + param_1) = uVar6;
        }
        uVar10 = uVar10 + 1;
      }
      uVar15 = *(uint *)(param_1 + 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar15);
  }
  for (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20); lVar16 != 0;
      lVar16 = lVar16 + -1) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    uVar10 = lVar16 - 1;
    if (*(ulonglong *)(lVar11 + 0x20) <= uVar10) {
      piVar3 = *(int **)(lVar11 + 8);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        *piVar3 = 0x82;
      }
      uVar10 = 0;
    }
    lVar8 = uVar10 * *(longlong *)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar11 + 0x30);
    lVar9 = *(longlong *)(lVar11 + lVar8) * 0x20;
    iVar14 = *(int *)(lVar9 + 0x3c + param_1) + *(int *)(lVar11 + 8 + lVar8);
    if ((iVar14 + 0x8000 <= *(int *)(lVar9 + 0x5c + param_1)) &&
       (*(int *)(lVar9 + 0x3c + param_1) = iVar14, (*(byte *)(lVar9 + 0x28 + param_1) & 0xc) != 0))
    {
      piVar3 = (int *)(lVar9 + 0x1c + param_1);
      *piVar3 = *piVar3 + *(int *)(lVar11 + 8 + lVar8);
    }
  }
  return;
}

