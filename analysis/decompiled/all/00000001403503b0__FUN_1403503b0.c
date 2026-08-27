// Function: FUN_1403503b0
// Addr: 1403503b0
// Size: 781 bytes


void FUN_1403503b0(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar9 = *(uint *)(param_1 + 0x4c);
  iVar13 = (int)uVar9 >> 8;
  iVar18 = (int)param_3 >> 8;
  if (((*(int *)(param_1 + 0x1c) <= iVar13) && (*(int *)(param_1 + 0x1c) <= iVar18)) ||
     ((iVar13 < *(int *)(param_1 + 0x18) && (iVar18 < *(int *)(param_1 + 0x18))))) {
    *(uint *)(param_1 + 0x48) = param_2;
    *(uint *)(param_1 + 0x4c) = param_3;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  iVar8 = (int)param_2 >> 8;
  iVar11 = (int)uVar2 >> 8;
  uVar19 = uVar2 & 0xff;
  uVar20 = (ulonglong)uVar19;
  uVar10 = (ulonglong)uVar9 & 0xff;
  iVar6 = (int)uVar10;
  if ((iVar11 != iVar8) || (iVar13 != iVar18)) {
    iVar6 = param_3 - uVar9;
    if (iVar6 == 0) {
      FUN_1403506c0(param_1,iVar8,iVar18);
      goto LAB_14035069e;
    }
    iVar14 = param_2 - uVar2;
    if (iVar14 == 0) {
      if (iVar6 < 1) {
        do {
          iVar13 = iVar13 + -1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + -(int)uVar10;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + -(int)uVar10 * uVar19 * 2;
          uVar10 = 0x100;
          iVar6 = 0x100;
          FUN_1403506c0(param_1,iVar11,iVar13);
        } while (iVar13 != iVar18);
      }
      else {
        do {
          iVar8 = (int)uVar10;
          iVar13 = iVar13 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + (0x100 - iVar8);
          uVar10 = 0;
          iVar6 = 0;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + (0x100 - iVar8) * uVar19 * 2;
          FUN_1403506c0(param_1,iVar11,iVar13);
        } while (iVar13 != iVar18);
      }
    }
    else {
      if (iVar11 == iVar8) {
        lVar4 = 0;
      }
      else {
        lVar4 = SUB168(ZEXT816(0xffffffff) / SEXT816((longlong)iVar14),0);
      }
      if (iVar13 == iVar18) {
        lVar5 = 0;
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = SUB168(SEXT816(0xffffffff),8);
        lVar5 = SUB168((auVar3 << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar6),0);
      }
      lVar17 = (longlong)(iVar14 * 0x100);
      lVar16 = (longlong)(iVar6 * 0x100);
      lVar12 = uVar10 * (longlong)iVar14 - uVar20 * (longlong)iVar6;
      do {
        lVar15 = lVar12 - lVar17;
        iVar14 = (int)uVar20;
        iVar6 = (int)uVar10;
        if ((lVar15 < 1) || (0 < lVar12)) {
          lVar7 = (lVar16 - lVar17) + lVar12;
          if ((lVar7 < 1) || (0 < lVar15)) {
            lVar15 = lVar16 + lVar12;
            if ((lVar15 < 0) || (0 < lVar7)) {
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
              *piVar1 = *piVar1 + -iVar6;
              lVar15 = lVar12 + lVar17;
              uVar20 = (ulonglong)-(lVar5 * lVar12) >> 0x20;
              uVar10 = 0x100;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
              *piVar1 = *piVar1 + ((int)((ulonglong)-(lVar5 * lVar12) >> 0x20) + iVar14) * -iVar6;
              iVar13 = iVar13 + -1;
            }
            else {
              uVar9 = (uint)((ulonglong)(lVar15 * lVar4) >> 0x20);
              iVar6 = uVar9 - iVar6;
              uVar10 = (ulonglong)uVar9;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
              *piVar1 = *piVar1 + iVar6;
              uVar20 = 0;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
              *piVar1 = *piVar1 + (iVar14 + 0x100) * iVar6;
              iVar11 = iVar11 + 1;
            }
          }
          else {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
            *piVar1 = *piVar1 + (0x100 - iVar6);
            uVar10 = 0;
            uVar20 = (ulonglong)-(lVar15 * lVar5) >> 0x20;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
            *piVar1 = *piVar1 + ((int)((ulonglong)-(lVar15 * lVar5) >> 0x20) + iVar14) *
                                (0x100 - iVar6);
            iVar13 = iVar13 + 1;
          }
        }
        else {
          lVar15 = lVar12 - lVar16;
          uVar9 = (uint)((ulonglong)(lVar4 * lVar12) >> 0x20);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + (uVar9 - iVar6);
          uVar10 = (ulonglong)uVar9;
          uVar20 = 0x100;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + (uVar9 - iVar6) * iVar14;
          iVar11 = iVar11 + -1;
        }
        uVar19 = (uint)uVar20;
        iVar6 = (int)uVar10;
        FUN_1403506c0(param_1,iVar11,iVar13);
        lVar12 = lVar15;
      } while ((iVar11 != iVar8) || (iVar13 != iVar18));
    }
  }
  iVar6 = (param_3 & 0xff) - iVar6;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
  *piVar1 = *piVar1 + iVar6;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
  *piVar1 = *piVar1 + ((param_2 & 0xff) + uVar19) * iVar6;
LAB_14035069e:
  *(uint *)(param_1 + 0x4c) = param_3;
  *(uint *)(param_1 + 0x48) = param_2;
  return;
}

