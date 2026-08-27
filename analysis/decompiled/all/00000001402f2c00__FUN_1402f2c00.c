// Function: FUN_1402f2c00
// Addr: 1402f2c00
// Size: 1096 bytes


undefined8 FUN_1402f2c00(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  int local_res20;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  int local_70;
  int local_60;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  param_2 = param_2 / 2;
  param_3 = param_3 / 2;
  if ((param_2 != 0) || (param_3 != 0)) {
    iVar9 = FUN_1402f3120(param_1);
    if (iVar9 == 2) {
      if (*param_1 != 0) {
        return 6;
      }
    }
    else {
      uVar18 = 0xffffffff;
      lVar3 = *(longlong *)(param_1 + 4);
      local_60 = 0;
      if (*param_1 != 0) {
        do {
          uVar23 = uVar18 + 1;
          local_78 = 0;
          local_74 = 0;
          local_88 = 0;
          uVar18 = (uint)*(ushort *)(*(longlong *)(param_1 + 0xc) + (longlong)local_60 * 2);
          iVar13 = 0;
          local_84 = 0;
          local_70 = 0;
          uVar19 = 0xffffffff;
          uVar17 = uVar18;
          uVar20 = uVar23;
          if (uVar23 != uVar18) {
            do {
              if (uVar17 == uVar19) break;
              iVar14 = local_70;
              iVar15 = local_74;
              local_res20 = local_78;
              if (uVar20 == uVar19) {
LAB_1402f2d9e:
                uVar5 = uVar20;
                iVar6 = iVar15;
                iVar7 = iVar14;
                iVar8 = local_res20;
                if (iVar13 != 0) {
                  local_50 = (longlong)iVar14;
                  bVar24 = -1 < (int)uVar19;
                  iVar10 = local_88;
                  iVar11 = local_84;
                  if (bVar24) {
                    iVar10 = local_74;
                    iVar11 = local_70;
                  }
                  local_70 = iVar11;
                  uVar5 = uVar17;
                  if (bVar24) {
                    uVar5 = uVar19;
                  }
                  uVar19 = uVar5;
                  iVar11 = iVar13;
                  if (bVar24) {
                    iVar11 = local_78;
                  }
                  lVar16 = (longlong)iVar15 * (longlong)local_88;
                  iVar12 = (int)((ulonglong)
                                 ((local_50 * local_84 >> 0x3f) + 0x8000 + local_50 * local_84) >>
                                0x10) +
                           (int)((ulonglong)((lVar16 >> 0x3f) + 0x8000 + lVar16) >> 0x10);
                  if (iVar12 < -0xefff) {
                    iVar14 = 0;
                    iVar13 = 0;
                  }
                  else {
                    uVar5 = iVar12 + 0x10000;
                    iVar12 = iVar14 + local_84;
                    if (iVar9 != 0) {
                      iVar12 = -(iVar14 + local_84);
                    }
                    iVar14 = -(iVar15 + local_88);
                    if (iVar9 != 0) {
                      iVar14 = iVar15 + local_88;
                    }
                    local_50 = local_88 * local_50;
                    lVar16 = (longlong)iVar15 * (longlong)local_84;
                    iVar15 = (int)((ulonglong)(local_50 + 0x8000 + (local_50 >> 0x3f)) >> 0x10);
                    iVar21 = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
                    uVar4 = iVar21 - iVar15;
                    if (iVar9 != 0) {
                      uVar4 = iVar15 - iVar21;
                    }
                    local_40 = (ulonglong)uVar4;
                    local_50 = (longlong)(int)uVar4;
                    if (iVar13 < local_res20) {
                      local_res20 = iVar13;
                    }
                    lVar16 = (longlong)local_res20 * (longlong)(int)uVar5 + 0x8000 +
                             ((longlong)local_res20 * (longlong)(int)uVar5 >> 0x3f);
                    local_48 = lVar16 >> 0x10;
                    uVar22 = local_40;
                    iVar13 = local_res20;
                    if ((int)((ulonglong)
                              (param_2 * local_50 + 0x8000 + (param_2 * local_50 >> 0x3f)) >> 0x10)
                        <= (int)((ulonglong)lVar16 >> 0x10)) {
                      uVar22 = (ulonglong)uVar5;
                      iVar13 = param_2;
                    }
                    iVar13 = FUN_1402f20b0(iVar14,iVar13,uVar22);
                    iVar14 = param_3;
                    if ((int)local_48 <
                        (int)((ulonglong)
                              (param_3 * local_50 + 0x8000 + (param_3 * local_50 >> 0x3f)) >> 0x10))
                    {
                      uVar5 = (uint)local_40;
                      iVar14 = local_res20;
                    }
                    iVar14 = FUN_1402f20b0(iVar12,iVar14,uVar5);
                  }
                  uVar5 = uVar17;
                  local_78 = iVar11;
                  local_74 = iVar10;
                  if (uVar17 != uVar20) {
                    do {
                      piVar1 = (int *)(lVar3 + (longlong)(int)uVar17 * 8);
                      *piVar1 = *piVar1 + param_2 + iVar13;
                      piVar1 = (int *)(lVar3 + 4 + (longlong)(int)uVar17 * 8);
                      *piVar1 = *piVar1 + param_3 + iVar14;
                      uVar5 = uVar23;
                      if ((int)uVar17 < (int)uVar18) {
                        uVar5 = uVar17 + 1;
                      }
                      uVar17 = uVar5;
                      uVar5 = uVar17;
                    } while (uVar17 != uVar20);
                  }
                }
              }
              else {
                piVar1 = (int *)(lVar3 + (longlong)(int)uVar20 * 8);
                piVar2 = (int *)(lVar3 + (longlong)(int)uVar17 * 8);
                local_58 = *piVar1 - *piVar2;
                local_54 = piVar1[1] - piVar2[1];
                local_res20 = FUN_1402f5e70(&local_58);
                uVar5 = uVar17;
                iVar14 = local_58;
                iVar15 = local_54;
                iVar6 = local_88;
                iVar7 = local_84;
                iVar8 = iVar13;
                if (local_res20 != 0) goto LAB_1402f2d9e;
              }
              iVar13 = iVar8;
              local_84 = iVar7;
              local_88 = iVar6;
              uVar17 = uVar5;
              uVar5 = uVar23;
              if ((int)uVar20 < (int)uVar18) {
                uVar5 = uVar20 + 1;
              }
              uVar20 = uVar5;
            } while (uVar20 != uVar17);
          }
          local_60 = local_60 + 1;
        } while (local_60 < (int)(uint)*param_1);
      }
    }
  }
  return 0;
}

