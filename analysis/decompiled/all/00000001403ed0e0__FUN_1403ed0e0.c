// Function: FUN_1403ed0e0
// Addr: 1403ed0e0
// Size: 710 bytes


undefined1 FUN_1403ed0e0(longlong param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  ulonglong local_res18 [2];
  ulonglong uVar12;
  
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,*param_3);
  cVar5 = FUN_1403ecbf0(param_1,local_res18);
  if (cVar5 == '\0') {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return 0;
  }
  uVar14 = 0;
  *param_2 = (uint)local_res18[0];
  *param_3 = (uint)local_res18[0];
  uVar15 = (uint)local_res18[0];
LAB_1403ed134:
  uVar10 = 0;
  if (uVar15 != 0xffffffff) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0x14);
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar16 = uVar15 >> 9;
    if ((uVar2 <= *(uint *)(param_1 + 8)) || (*(uint *)(lVar3 + uVar12 * 8) != uVar16)) {
      iVar11 = uVar2 - 1;
      uVar13 = uVar14;
      if (-1 < iVar11) {
        do {
          uVar10 = (uint)(iVar11 + (int)uVar13) >> 1;
          uVar12 = (ulonglong)uVar10;
          iVar6 = uVar16 - *(int *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8);
          if (iVar6 < 0) {
            iVar11 = uVar10 - 1;
          }
          else {
            if (iVar6 < 1) goto LAB_1403ed245;
            uVar13 = (ulonglong)(uVar10 + 1);
          }
          uVar10 = (uint)uVar13;
        } while ((int)uVar10 <= iVar11);
      }
      uVar12 = (ulonglong)uVar10;
LAB_1403ed245:
      if (uVar2 <= (uint)uVar12) {
        return 1;
      }
      *(uint *)(param_1 + 8) = (uint)uVar12;
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar10 = *(uint *)(lVar3 + uVar12 * 8);
    if (uVar10 == uVar16) {
      uVar15 = uVar15 + 1 & 0x1ff;
      if (uVar15 != 0) {
        uVar13 = (ulonglong)(uVar15 >> 6);
        lVar9 = lVar4 + (ulonglong)*(uint *)(lVar3 + 4 + uVar12 * 8) * 0x48;
        puVar7 = local_res18;
        local_res18[0] =
             ~((1L << ((byte)uVar15 & 0x3f)) - 1U) & *(ulonglong *)(lVar9 + 8 + uVar13 * 8);
LAB_1403ed2a0:
        uVar8 = *puVar7;
        if (uVar8 == 0) goto code_r0x0001403ed2ac;
        lVar3 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
          }
        }
        uVar15 = (int)uVar13 * 0x40 + (int)lVar3 + uVar10 * 0x200;
        goto LAB_1403ed38e;
      }
LAB_1403ed2bf:
      uVar12 = (ulonglong)((int)uVar12 + 1);
    }
    if (*(uint *)(param_1 + 0x14) <= (uint)uVar12) {
      return 1;
    }
    do {
      uVar8 = (ulonglong)*(uint *)(lVar3 + 4 + uVar12 * 8);
      lVar9 = lVar4 + uVar8 * 0x48;
      uVar13 = uVar14;
      if ((((*(longlong *)(lVar4 + 8 + uVar8 * 0x48) != 0) ||
           (uVar13 = 1, *(longlong *)(lVar9 + 0x10) != 0)) ||
          (uVar13 = 2, *(longlong *)(lVar9 + 0x18) != 0)) ||
         (((uVar13 = 3, *(longlong *)(lVar9 + 0x20) != 0 ||
           (uVar13 = 4, *(longlong *)(lVar9 + 0x28) != 0)) ||
          ((uVar13 = 5, *(longlong *)(lVar9 + 0x30) != 0 ||
           ((uVar13 = 6, *(longlong *)(lVar9 + 0x38) != 0 ||
            (uVar13 = 7, *(longlong *)(lVar9 + 0x40) != 0)))))))) {
        uVar8 = *(ulonglong *)(lVar9 + 8 + uVar13 * 8);
        if (uVar8 == 0) {
          lVar9 = 0x40;
        }
        else {
          lVar9 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
            }
          }
        }
        iVar11 = (int)uVar13 * 0x40 + (int)lVar9;
        if (iVar11 != -1) goto LAB_1403ed380;
      }
      uVar15 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar15;
      if (*(uint *)(param_1 + 0x14) <= uVar15) {
        return 1;
      }
    } while( true );
  }
  uVar15 = *(uint *)(param_1 + 0x24);
  uVar12 = uVar14;
  if (uVar15 != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x18);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) +
                      (ulonglong)*(uint *)(lVar3 + 4 + uVar12 * 8) * 0x48);
      if (*piVar1 == -1) {
        if (((((*(longlong *)(piVar1 + 2) == 0) && (*(longlong *)(piVar1 + 4) == 0)) &&
             (*(longlong *)(piVar1 + 6) == 0)) &&
            ((*(longlong *)(piVar1 + 8) == 0 && (*(longlong *)(piVar1 + 10) == 0)))) &&
           ((*(longlong *)(piVar1 + 0xc) == 0 &&
            ((*(longlong *)(piVar1 + 0xe) == 0 && (*(longlong *)(piVar1 + 0x10) == 0)))))) {
          bVar17 = true;
          *piVar1 = 0;
        }
        else {
          bVar17 = false;
        }
      }
      else {
        bVar17 = *piVar1 == 0;
      }
      if (!bVar17) {
        iVar11 = *(int *)(lVar3 + uVar12 * 8);
        iVar6 = FUN_1403cbf80();
        uVar15 = iVar11 * 0x200 + iVar6;
        goto LAB_1403ed1c1;
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < uVar15);
  }
  uVar15 = 0xffffffff;
LAB_1403ed1c1:
  if (uVar15 == 0xffffffff) {
    return 1;
  }
  goto LAB_1403ed38e;
code_r0x0001403ed2ac:
  uVar15 = (int)uVar13 + 1;
  uVar13 = (ulonglong)uVar15;
  puVar7 = (ulonglong *)(lVar9 + (uVar13 + 1) * 8);
  if (7 < uVar15) goto LAB_1403ed2bf;
  goto LAB_1403ed2a0;
LAB_1403ed380:
  uVar15 = *(int *)(lVar3 + uVar12 * 8) * 0x200 + iVar11;
  *(int *)(param_1 + 8) = (int)uVar12;
LAB_1403ed38e:
  if (uVar15 != *param_3 + 1) {
    return 1;
  }
  *param_3 = *param_3 + 1;
  goto LAB_1403ed134;
}

