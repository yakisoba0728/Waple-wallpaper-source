// Function: FUN_1403518f0
// Addr: 1403518f0
// Size: 745 bytes


void FUN_1403518f0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 ******ppppppuVar5;
  uint uVar6;
  int *piVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  uint uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  int iVar13;
  int iVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  uint uVar17;
  uint uVar18;
  int local_res8;
  undefined8 *****local_res20;
  undefined8 *****local_68;
  undefined8 *****local_60;
  undefined8 *****local_58;
  
  ppppppuVar15 = (undefined8 ******)0x0;
  ppppppuVar9 = *(undefined8 *******)(param_1 + 0x60);
  ppppppuVar11 = (undefined8 ******)0x0;
  local_res8 = **(int **)(param_1 + 0x28);
  iVar14 = (*(int **)(param_1 + 0x28))[*(int *)(param_1 + 0x54)] + -1;
  local_res20 = (undefined8 ******)0x0;
  local_68 = (undefined8 ******)0x0;
  local_60 = ppppppuVar9;
  local_58 = ppppppuVar9;
  (**(code **)(param_1 + 0xc0))(param_1,local_res8,iVar14);
  while (local_res8 <= iVar14) {
    if (ppppppuVar9 != (undefined8 ******)0x0) {
      ppppppuVar8 = &local_60;
      do {
        if (*(int *)(ppppppuVar9 + 3) == local_res8) {
          *ppppppuVar8 = *ppppppuVar9;
          if ((*(byte *)((longlong)ppppppuVar9 + 0x1c) & 8) == 0) {
            ppppppuVar12 = &local_68;
            for (; (ppppppuVar11 != (undefined8 ******)0x0 &&
                   (*(int *)(ppppppuVar11 + 4) < *(int *)(ppppppuVar9 + 4)));
                ppppppuVar11 = (undefined8 ******)*ppppppuVar11) {
              ppppppuVar12 = ppppppuVar11;
            }
            *ppppppuVar9 = ppppppuVar11;
            *ppppppuVar12 = ppppppuVar9;
            ppppppuVar9 = ppppppuVar8;
            ppppppuVar11 = (undefined8 ******)local_68;
          }
          else {
            ppppppuVar12 = &local_res20;
            for (; (ppppppuVar15 != (undefined8 ******)0x0 &&
                   (*(int *)(ppppppuVar15 + 4) < *(int *)(ppppppuVar9 + 4)));
                ppppppuVar15 = (undefined8 ******)*ppppppuVar15) {
              ppppppuVar12 = ppppppuVar15;
            }
            *ppppppuVar9 = ppppppuVar15;
            *ppppppuVar12 = ppppppuVar9;
            ppppppuVar9 = ppppppuVar8;
            ppppppuVar15 = (undefined8 ******)local_res20;
          }
        }
        ppppppuVar12 = (undefined8 ******)*ppppppuVar9;
        ppppppuVar8 = ppppppuVar9;
        ppppppuVar9 = ppppppuVar12;
      } while (ppppppuVar12 != (undefined8 ******)0x0);
      local_58 = local_60;
    }
    piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
    *(int **)(param_1 + 0x28) = piVar7;
    iVar2 = *piVar7;
    do {
      iVar13 = 0;
      ppppppuVar9 = ppppppuVar15;
      for (ppppppuVar8 = ppppppuVar11;
          (ppppppuVar12 = ppppppuVar11, ppppppuVar16 = ppppppuVar15,
          ppppppuVar9 != (undefined8 ******)0x0 && (ppppppuVar8 != (undefined8 ******)0x0));
          ppppppuVar8 = (undefined8 ******)*ppppppuVar8) {
        uVar3 = *(uint *)(ppppppuVar9 + 4);
        uVar17 = *(uint *)(ppppppuVar8 + 4);
        iVar4 = *(int *)(param_1 + 4);
        uVar6 = uVar17;
        if ((int)uVar3 <= (int)uVar17) {
          uVar6 = uVar3;
          uVar3 = uVar17;
        }
        uVar18 = -iVar4;
        uVar10 = uVar18 & uVar3;
        uVar17 = iVar4 + -1 + uVar6 & uVar18;
        if ((int)uVar10 < (int)uVar17) {
          uVar1 = *(ushort *)((longlong)ppppppuVar9 + 0x1c);
          if (((uVar1 & 2) == 0) &&
             (((uVar1 & 1) == 0 ||
              ((((*(int *)((longlong)ppppppuVar9 + 0x14) != 1 ||
                 ((undefined8 ******)ppppppuVar9[1] != ppppppuVar8)) ||
                (((uVar1 & 0x10) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar3 - uVar6))))) &&
               (((*(int *)(ppppppuVar9 + 2) != 0 ||
                 ((undefined8 ******)ppppppuVar8[1] != ppppppuVar9)) ||
                (((uVar1 & 0x20) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar3 - uVar6))))))))))) {
            if ((uVar1 & 4) != 0) {
              uVar10 = (int)(((int)((iVar4 * 0x3f >> 0x1f & 0x3fU) + iVar4 * 0x3f) >> 6) + uVar6 +
                            uVar3) >> 1 & uVar18;
              uVar17 = iVar4 + uVar10;
              if ((int)uVar6 <= (int)uVar10) {
                uVar17 = uVar10 - iVar4;
              }
            }
            *(uint *)(ppppppuVar9 + 4) = uVar10;
            *(uint *)(ppppppuVar8 + 4) = uVar17;
            *(ushort *)((longlong)ppppppuVar9 + 0x1c) =
                 *(ushort *)((longlong)ppppppuVar9 + 0x1c) | 0x40;
            iVar13 = iVar13 + 1;
          }
        }
        else {
          (**(code **)(param_1 + 200))(param_1,local_res8);
        }
        ppppppuVar9 = (undefined8 ******)*ppppppuVar9;
      }
      while (iVar13 != 0) {
        if ((*(byte *)((longlong)ppppppuVar16 + 0x1c) & 0x40) != 0) {
          (**(code **)(param_1 + 0xd0))
                    (param_1,local_res8,*(undefined4 *)(ppppppuVar16 + 4),
                     *(undefined4 *)(ppppppuVar12 + 4));
          *(ushort *)((longlong)ppppppuVar16 + 0x1c) =
               *(ushort *)((longlong)ppppppuVar16 + 0x1c) & 0xffbf;
          iVar13 = iVar13 + -1;
        }
        ppppppuVar12 = (undefined8 ******)*ppppppuVar12;
        ppppppuVar16 = (undefined8 ******)*ppppppuVar16;
      }
      (**(code **)(param_1 + 0xd8))(param_1);
      if (ppppppuVar15 != (undefined8 ******)0x0) {
        ppppppuVar9 = &local_res20;
        ppppppuVar8 = ppppppuVar15;
        do {
          piVar7 = (int *)((longlong)ppppppuVar8 + 0x14);
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            ppppppuVar12 = (undefined8 ******)*ppppppuVar8;
            *ppppppuVar9 = ppppppuVar12;
          }
          else {
            iVar13 = *(int *)(ppppppuVar8 + 2);
            *(int *)(ppppppuVar8 + 2) = iVar13 + 1;
            *(undefined4 *)(ppppppuVar8 + 4) =
                 *(undefined4 *)((longlong)ppppppuVar8 + (longlong)iVar13 * 4 + 0x28);
            ppppppuVar12 = (undefined8 ******)*ppppppuVar8;
            ppppppuVar9 = ppppppuVar8;
          }
          ppppppuVar15 = (undefined8 ******)local_res20;
          ppppppuVar8 = ppppppuVar12;
        } while (ppppppuVar12 != (undefined8 ******)0x0);
      }
      if ((ppppppuVar15 != (undefined8 ******)0x0) &&
         ((undefined8 ******)*ppppppuVar15 != (undefined8 ******)0x0)) {
        ppppppuVar8 = ppppppuVar15;
        ppppppuVar9 = (undefined8 ******)*ppppppuVar15;
        ppppppuVar12 = &local_res20;
        do {
          ppppppuVar16 = ppppppuVar8;
          if (*(int *)(ppppppuVar9 + 4) < *(int *)(ppppppuVar8 + 4)) {
            *ppppppuVar12 = ppppppuVar9;
            *ppppppuVar8 = *ppppppuVar9;
            *ppppppuVar9 = ppppppuVar8;
            ppppppuVar9 = (undefined8 ******)local_res20;
            ppppppuVar15 = (undefined8 ******)local_res20;
            ppppppuVar16 = &local_res20;
          }
          ppppppuVar5 = (undefined8 ******)*ppppppuVar9;
          ppppppuVar8 = ppppppuVar9;
          ppppppuVar9 = ppppppuVar5;
          ppppppuVar12 = ppppppuVar16;
        } while (ppppppuVar5 != (undefined8 ******)0x0);
      }
      if (ppppppuVar11 != (undefined8 ******)0x0) {
        ppppppuVar9 = &local_68;
        ppppppuVar8 = ppppppuVar11;
        do {
          piVar7 = (int *)((longlong)ppppppuVar8 + 0x14);
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            ppppppuVar12 = (undefined8 ******)*ppppppuVar8;
            *ppppppuVar9 = ppppppuVar12;
          }
          else {
            iVar13 = *(int *)(ppppppuVar8 + 2);
            *(int *)(ppppppuVar8 + 2) = iVar13 + -1;
            *(undefined4 *)(ppppppuVar8 + 4) =
                 *(undefined4 *)((longlong)ppppppuVar8 + (longlong)iVar13 * 4 + 0x20);
            ppppppuVar12 = (undefined8 ******)*ppppppuVar8;
            ppppppuVar9 = ppppppuVar8;
          }
          ppppppuVar11 = (undefined8 ******)local_68;
          ppppppuVar8 = ppppppuVar12;
        } while (ppppppuVar12 != (undefined8 ******)0x0);
      }
      if ((ppppppuVar11 != (undefined8 ******)0x0) &&
         ((undefined8 ******)*ppppppuVar11 != (undefined8 ******)0x0)) {
        ppppppuVar8 = ppppppuVar11;
        ppppppuVar9 = (undefined8 ******)*ppppppuVar11;
        ppppppuVar12 = &local_68;
        do {
          ppppppuVar16 = ppppppuVar8;
          if (*(int *)(ppppppuVar9 + 4) < *(int *)(ppppppuVar8 + 4)) {
            *ppppppuVar12 = ppppppuVar9;
            *ppppppuVar8 = *ppppppuVar9;
            *ppppppuVar9 = ppppppuVar8;
            ppppppuVar9 = (undefined8 ******)local_68;
            ppppppuVar11 = (undefined8 ******)local_68;
            ppppppuVar16 = &local_68;
          }
          ppppppuVar5 = (undefined8 ******)*ppppppuVar9;
          ppppppuVar8 = ppppppuVar9;
          ppppppuVar9 = ppppppuVar5;
          ppppppuVar12 = ppppppuVar16;
        } while (ppppppuVar5 != (undefined8 ******)0x0);
      }
      local_res8 = local_res8 + 1;
      ppppppuVar9 = (undefined8 ******)local_58;
    } while (local_res8 < iVar2);
  }
  return;
}

