// Function: FUN_1403dd530
// Addr: 1403dd530
// Size: 938 bytes


void FUN_1403dd530(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar14 = (*(uint *)(param_1 + 0x18) & 0x40 | 0xa0) >> 5;
  if ((char)*(uint *)(param_1 + 0x18) < '\0') {
    if (uVar3 != 0) {
      uVar13 = 0;
      uVar6 = 0;
      do {
        uVar12 = (int)uVar6 + 1;
        uVar7 = (ulonglong)uVar12;
        if (uVar3 <= uVar12) break;
        lVar1 = uVar6 * 0x14;
        uVar6 = uVar7;
      } while (*(int *)(lVar4 + 8 + lVar1) == *(int *)(lVar4 + 8 + uVar7 * 0x14));
      if (uVar3 != 0) {
        do {
          uVar11 = 0;
          uVar12 = (uint)uVar7;
          if (uVar13 < uVar12) {
            uVar6 = (ulonglong)uVar13;
            if (7 < uVar12 - uVar13) {
              uVar17 = 0;
              uVar18 = 0;
              uVar19 = 0;
              uVar20 = 0;
              uVar11 = 0;
              uVar8 = 0;
              uVar15 = 0;
              uVar16 = 0;
              do {
                iVar5 = (int)uVar6;
                uVar17 = uVar17 | *(uint *)(lVar4 + 4 + uVar6 * 0x14);
                uVar18 = uVar18 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 1) * 0x14);
                uVar19 = uVar19 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 2) * 0x14);
                uVar20 = uVar20 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 3) * 0x14);
                uVar9 = iVar5 + 8;
                uVar6 = (ulonglong)uVar9;
                uVar11 = uVar11 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 4) * 0x14);
                uVar8 = uVar8 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 5) * 0x14);
                uVar15 = uVar15 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 6) * 0x14);
                uVar16 = uVar16 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 7) * 0x14);
              } while (uVar9 < uVar12 - (uVar12 - uVar13 & 7));
              uVar11 = uVar11 | uVar17 | uVar15 | uVar19 | uVar8 | uVar18 | uVar16 | uVar20;
              if (uVar12 <= uVar9) goto LAB_1403dd861;
            }
            do {
              uVar8 = (int)uVar6 + 1;
              uVar11 = uVar11 | *(uint *)(lVar4 + 4 + uVar6 * 0x14);
              uVar6 = (ulonglong)uVar8;
            } while (uVar8 < uVar12);
          }
LAB_1403dd861:
          uVar8 = uVar11 & 0xfffffffb;
          if ((uVar11 & 1) == 0) {
            uVar8 = uVar11;
          }
          uVar11 = uVar8 | 3;
          if ((uVar8 & 4) == 0) {
            uVar11 = uVar8;
          }
          for (; uVar13 < uVar12; uVar13 = uVar13 + 1) {
            *(uint *)(lVar4 + 4 + (ulonglong)uVar13 * 0x14) = uVar11 & uVar14;
          }
          uVar6 = uVar7;
          do {
            uVar13 = (int)uVar6 + 1;
            uVar7 = (ulonglong)uVar13;
            if (*(uint *)(param_1 + 0x60) <= uVar13) break;
            lVar1 = uVar6 * 0x14;
            uVar6 = uVar7;
          } while (*(int *)(*(longlong *)(param_1 + 0x70) + 8 + lVar1) ==
                   *(int *)(*(longlong *)(param_1 + 0x70) + 8 + uVar7 * 0x14));
          uVar13 = uVar12;
        } while (uVar12 < uVar3);
      }
    }
  }
  else if (uVar3 != 0) {
    uVar13 = 0;
    uVar6 = 0;
    do {
      uVar12 = (int)uVar6 + 1;
      uVar7 = (ulonglong)uVar12;
      if (uVar3 <= uVar12) break;
      lVar1 = uVar6 * 0x14;
      uVar6 = uVar7;
    } while (*(int *)(lVar4 + 8 + lVar1) == *(int *)(lVar4 + 8 + uVar7 * 0x14));
    if (uVar3 != 0) {
      do {
        uVar11 = (uint)uVar7;
        uVar12 = uVar11 - uVar13;
        if (uVar12 == 1) {
          puVar2 = (uint *)(lVar4 + 4 + (ulonglong)uVar13 * 0x14);
          *puVar2 = *puVar2 & uVar14;
        }
        else {
          uVar8 = 0;
          if (uVar13 < uVar11) {
            uVar6 = (ulonglong)uVar13;
            if (7 < uVar12) {
              uVar18 = 0;
              uVar19 = 0;
              uVar20 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar15 = 0;
              uVar16 = 0;
              uVar17 = 0;
              do {
                iVar5 = (int)uVar6;
                uVar18 = uVar18 | *(uint *)(lVar4 + 4 + uVar6 * 0x14);
                uVar19 = uVar19 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 1) * 0x14);
                uVar20 = uVar20 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 2) * 0x14);
                uVar9 = uVar9 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 3) * 0x14);
                uVar10 = iVar5 + 8;
                uVar6 = (ulonglong)uVar10;
                uVar8 = uVar8 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 4) * 0x14);
                uVar15 = uVar15 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 5) * 0x14);
                uVar16 = uVar16 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 6) * 0x14);
                uVar17 = uVar17 | *(uint *)(lVar4 + 4 + (ulonglong)(iVar5 + 7) * 0x14);
              } while (uVar10 < uVar11 - (uVar12 & 7));
              uVar8 = uVar8 | uVar18 | uVar16 | uVar20 | uVar15 | uVar19 | uVar17 | uVar9;
              if (uVar11 <= uVar10) goto LAB_1403dd6bb;
            }
            do {
              uVar12 = (int)uVar6 + 1;
              uVar8 = uVar8 | *(uint *)(lVar4 + 4 + uVar6 * 0x14);
              uVar6 = (ulonglong)uVar12;
            } while (uVar12 < uVar11);
            uVar8 = uVar14 & uVar8;
          }
          else {
LAB_1403dd6bb:
            uVar8 = uVar8 & uVar14;
            if (uVar11 <= uVar13) goto LAB_1403dd6e2;
          }
          do {
            uVar6 = (ulonglong)uVar13;
            uVar13 = uVar13 + 1;
            *(uint *)(lVar4 + 4 + uVar6 * 0x14) = uVar8;
          } while (uVar13 < uVar11);
        }
LAB_1403dd6e2:
        uVar6 = uVar7;
        do {
          uVar13 = (int)uVar6 + 1;
          uVar7 = (ulonglong)uVar13;
          if (*(uint *)(param_1 + 0x60) <= uVar13) break;
          lVar1 = uVar6 * 0x14;
          uVar6 = uVar7;
        } while (*(int *)(*(longlong *)(param_1 + 0x70) + 8 + lVar1) ==
                 *(int *)(*(longlong *)(param_1 + 0x70) + 8 + uVar7 * 0x14));
        uVar13 = uVar11;
        if (uVar3 <= uVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

