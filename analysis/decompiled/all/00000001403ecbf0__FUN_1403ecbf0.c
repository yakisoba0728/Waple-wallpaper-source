// Function: FUN_1403ecbf0
// Addr: 1403ecbf0
// Size: 681 bytes


ulonglong FUN_1403ecbf0(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong local_res10;
  
  if (*param_2 == 0xffffffff) {
    uVar10 = *(uint *)(param_1 + 0x24);
    uVar7 = 0;
    if (uVar10 != 0) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x18);
        piVar1 = (int *)(*(longlong *)(param_1 + 0x28) +
                        (ulonglong)*(uint *)(lVar3 + 4 + uVar7 * 8) * 0x48);
        if (*piVar1 == -1) {
          if (((((*(longlong *)(piVar1 + 2) == 0) && (*(longlong *)(piVar1 + 4) == 0)) &&
               (*(longlong *)(piVar1 + 6) == 0)) &&
              ((*(longlong *)(piVar1 + 8) == 0 && (*(longlong *)(piVar1 + 10) == 0)))) &&
             ((*(longlong *)(piVar1 + 0xc) == 0 &&
              ((*(longlong *)(piVar1 + 0xe) == 0 && (*(longlong *)(piVar1 + 0x10) == 0)))))) {
            bVar16 = true;
            *piVar1 = 0;
          }
          else {
            bVar16 = false;
          }
        }
        else {
          bVar16 = *piVar1 == 0;
        }
        if (!bVar16) {
          iVar11 = *(int *)(lVar3 + uVar7 * 8);
          iVar5 = FUN_1403cbf80();
          uVar7 = (ulonglong)(uint)(iVar5 + iVar11 * 0x200);
          goto LAB_1403ecc9c;
        }
        uVar13 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar13;
      } while (uVar13 < uVar10);
    }
    uVar7 = 0xffffffff;
LAB_1403ecc9c:
    *param_2 = (uint)uVar7;
    return CONCAT71((int7)(uVar7 >> 8),(uint)uVar7 != 0xffffffff);
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x14);
  uVar13 = *param_2 >> 9;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((uVar10 <= *(uint *)(param_1 + 8)) || (*(uint *)(lVar3 + uVar7 * 8) != uVar13)) {
    iVar11 = uVar10 - 1;
    uVar9 = 0;
    if (-1 < iVar11) {
      do {
        uVar14 = iVar11 + uVar9 >> 1;
        uVar7 = (ulonglong)uVar14;
        uVar6 = uVar13 - *(int *)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
        in_RAX = (ulonglong)uVar6;
        if ((int)uVar6 < 0) {
          iVar11 = uVar14 - 1;
        }
        else {
          if ((int)uVar6 < 1) goto LAB_1403ecd15;
          uVar9 = uVar14 + 1;
        }
      } while ((int)uVar9 <= iVar11);
    }
    uVar7 = (ulonglong)uVar9;
LAB_1403ecd15:
    if (uVar10 <= (uint)uVar7) goto LAB_1403ece6a;
    *(uint *)(param_1 + 8) = (uint)uVar7;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  iVar11 = (int)uVar7;
  piVar1 = (int *)(lVar3 + uVar7 * 8);
  uVar15 = uVar7;
  if (*(uint *)(lVar3 + uVar7 * 8) == uVar13) {
    uVar10 = *param_2 + 1 & 0x1ff;
    if (uVar10 != 0) {
      uVar7 = (ulonglong)(uVar10 >> 6);
      lVar2 = lVar4 + (ulonglong)(uint)piVar1[1] * 0x48;
      puVar8 = &local_res10;
      local_res10 = ~((1L << ((byte)uVar10 & 0x3f)) - 1U) & *(ulonglong *)(lVar2 + 8 + uVar7 * 8);
      do {
        uVar15 = *puVar8;
        if (uVar15 != 0) {
          lVar3 = 0;
          if (uVar15 != 0) {
            for (; (uVar15 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
            }
          }
          uVar10 = (int)lVar3 + (int)uVar7 * 0x40;
          *param_2 = uVar10;
          uVar10 = *piVar1 * 0x200 + uVar10;
          *param_2 = uVar10;
          return CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
        }
        uVar10 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar10;
        puVar8 = (ulonglong *)(lVar2 + (uVar7 + 1) * 8);
      } while (uVar10 < 8);
    }
    uVar7 = 0xffffffff;
    uVar15 = (ulonglong)(iVar11 + 1);
    *param_2 = 0xffffffff;
  }
  uVar10 = (uint)uVar15;
  in_RAX = uVar7;
  while (uVar10 < *(uint *)(param_1 + 0x14)) {
    lVar12 = 0;
    in_RAX = (ulonglong)*(uint *)(lVar3 + 4 + uVar15 * 8);
    lVar2 = lVar4 + in_RAX * 0x48;
    if ((((*(longlong *)(lVar4 + 8 + in_RAX * 0x48) != 0) ||
         (lVar12 = 1, *(longlong *)(lVar2 + 0x10) != 0)) ||
        (lVar12 = 2, *(longlong *)(lVar2 + 0x18) != 0)) ||
       (((lVar12 = 3, *(longlong *)(lVar2 + 0x20) != 0 ||
         (lVar12 = 4, *(longlong *)(lVar2 + 0x28) != 0)) ||
        ((lVar12 = 5, *(longlong *)(lVar2 + 0x30) != 0 ||
         ((lVar12 = 6, *(longlong *)(lVar2 + 0x38) != 0 ||
          (lVar12 = 7, *(longlong *)(lVar2 + 0x40) != 0)))))))) {
      uVar7 = *(ulonglong *)(lVar2 + 8 + lVar12 * 8);
      if (uVar7 == 0) {
        in_RAX = 0x40;
      }
      else {
        in_RAX = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> in_RAX & 1) == 0; in_RAX = in_RAX + 1) {
          }
        }
      }
      iVar11 = (int)lVar12 * 0x40 + (int)in_RAX;
      if (iVar11 != -1) {
        uVar10 = *(int *)(lVar3 + uVar15 * 8) * 0x200 + iVar11;
        *param_2 = uVar10;
        *(int *)(param_1 + 8) = (int)uVar15;
        return CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
      }
    }
    uVar10 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar10;
  }
LAB_1403ece6a:
  *param_2 = 0xffffffff;
  return in_RAX & 0xffffffffffffff00;
}

