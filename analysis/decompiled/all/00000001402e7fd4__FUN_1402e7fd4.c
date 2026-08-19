// Function: FUN_1402e7fd4
// Addr: 1402e7fd4
// Size: 2824 bytes


void FUN_1402e7fd4(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
                  longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  double dVar20;
  undefined1 auStackY_828 [32];
  uint local_7ec;
  uint local_7e8;
  uint local_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  byte local_7c0 [8];
  char local_7b8;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  int local_3f8;
  int local_3f4 [231];
  ulonglong local_58;
  
  local_58 = DAT_1404dc110 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_1402eb6e0(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1402eb770(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_1402eb670(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_1402e8122:
      iVar4 = FUN_1402d9090();
joined_r0x0001402e8168:
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1402e9200;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar14 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar14 = 4;
    }
    else {
      uVar14 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar14 == 1) {
      iVar4 = FUN_1402d9090();
      goto joined_r0x0001402e8168;
    }
    if (((uVar14 == 2) || (uVar14 == 3)) || (uVar14 == 4)) goto LAB_1402e8122;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  FUN_1402eb670(&local_7d0,0,0);
  FUN_1402eb670(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar6 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  lVar11 = (-(ulonglong)(uVar6 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  uVar18 = (2 - (uint)(uVar6 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  FUN_1402eb8a0(-uVar6);
  dVar20 = (double)FUN_1402eb7d0();
  uVar5 = -(uint)(((int)dVar20 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar20;
  uVar13 = (uint)((ulonglong)lVar11 >> 0x20);
  local_794 = lVar11;
  uVar14 = (uint)(uVar13 != 0);
  uVar9 = uVar14 + 1;
  if (uVar18 < 0x434) {
    if (uVar18 != 0x36) {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar13 != 0) {
        uVar6 = 0;
        while (local_3f4[uVar6] == *(int *)((longlong)&local_794 + uVar6 * 4)) {
          uVar14 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar14;
          if (uVar14 == 2) {
            local_7e8 = 0;
            iVar4 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            if (uVar13 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 1;
            }
            local_798 = (0x20U - iVar4 < 2) + uVar9;
            if (local_798 < 0x74) {
              uVar14 = local_798 - 1;
              while (uVar14 != 0xffffffff) {
                uVar5 = uVar14 - 1;
                if (uVar14 < uVar9) {
                  iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar14 * 4);
                }
                else {
                  iVar4 = 0;
                }
                if (uVar5 < uVar9) {
                  uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
                }
                else {
                  uVar13 = 0;
                }
                *(uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4) = uVar13 >> 0x1e | iVar4 * 4
                ;
                uVar14 = uVar5;
              }
            }
            else {
              local_3f8 = 0;
              local_798 = 0;
              func_0x0001402d0784(&local_794,0x1cc,local_3f4,0);
            }
            func_0x000140421870(local_3f4,0,(0x436 - uVar18 >> 5) * 4);
            return;
          }
        }
      }
    }
    local_7e8 = 0;
    puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar13 != 0) & 4));
    iVar4 = 0x1f;
    bVar19 = *puVar1 == 0;
    if (!bVar19) {
      for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (bVar19) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    local_798 = (iVar4 == 0x20) + uVar9;
    if (local_798 < 0x74) {
      uVar14 = local_798 - 1;
      while (uVar14 != 0xffffffff) {
        uVar5 = uVar14 - 1;
        if (uVar14 < uVar9) {
          iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar14 * 4);
        }
        else {
          iVar4 = 0;
        }
        if (uVar5 < uVar9) {
          uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
        }
        else {
          uVar13 = 0;
        }
        *(uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4) = uVar13 >> 0x1f | iVar4 * 2;
        uVar14 = uVar5;
      }
    }
    else {
      local_798 = 0;
    }
    func_0x000140421870(local_3f4,0,(0x435 - uVar18 >> 5) * 4);
    return;
  }
  local_3f4[1] = 0x100000;
  local_3f4[0] = 0;
  local_3f8 = 2;
  if (uVar13 == 0) {
LAB_1402e83cd:
    local_7e8 = 0;
    uVar17 = uVar18 - 0x433 & 0x1f;
    uVar13 = uVar18 - 0x433 >> 5;
    sVar2 = (sbyte)uVar17;
    bVar7 = 0x20 - sVar2;
    uVar18 = (int)(1L << (bVar7 & 0x3f)) - 1;
    puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4);
    iVar4 = 0x1f;
    bVar19 = *puVar1 == 0;
    if (!bVar19) {
      for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (bVar19) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    if ((uVar9 + uVar13 < 0x74) &&
       (local_798 = (0x20U - iVar4 < uVar17) + uVar9 + uVar13, local_798 < 0x74)) {
      uVar14 = local_798;
      while (uVar14 = uVar14 - 1, uVar14 != uVar13 - 1) {
        uVar17 = uVar14 - uVar13;
        if (uVar17 < uVar9) {
          uVar16 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
        }
        else {
          uVar16 = 0;
        }
        if (uVar17 - 1 < uVar9) {
          uVar17 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar17 - 1) * 4);
        }
        else {
          uVar17 = 0;
        }
        *(uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4) =
             (uVar17 & ~uVar18) >> (bVar7 & 0x1f) | (uVar16 & uVar18) << sVar2;
      }
      uVar6 = 0;
      if (uVar13 != 0) {
        do {
          *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
          uVar14 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar14;
        } while (uVar14 != uVar13);
      }
    }
    else {
      local_3f8 = 0;
      local_798 = 0;
      func_0x0001402d0784(&local_794,0x1cc,local_3f4,0);
    }
    local_3f4[0] = 2;
  }
  else {
    uVar6 = 0;
    do {
      if (local_3f4[uVar6] != *(int *)((longlong)&local_794 + uVar6 * 4)) goto LAB_1402e83cd;
      uVar13 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar13;
    } while (uVar13 != 2);
    local_7e8 = 0;
    uVar17 = uVar18 - 0x432 & 0x1f;
    uVar13 = uVar18 - 0x432 >> 5;
    sVar2 = (sbyte)uVar17;
    bVar7 = 0x20 - sVar2;
    uVar18 = (int)(1L << (bVar7 & 0x3f)) - 1;
    puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4);
    iVar4 = 0x1f;
    bVar19 = *puVar1 == 0;
    if (!bVar19) {
      for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (bVar19) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    if ((uVar9 + uVar13 < 0x74) &&
       (local_798 = (0x20U - iVar4 < uVar17) + uVar9 + uVar13, local_798 < 0x74)) {
      uVar14 = local_798;
      while (uVar14 = uVar14 - 1, uVar14 != uVar13 - 1) {
        uVar17 = uVar14 - uVar13;
        if (uVar17 < uVar9) {
          uVar16 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
        }
        else {
          uVar16 = 0;
        }
        if (uVar17 - 1 < uVar9) {
          uVar17 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar17 - 1) * 4);
        }
        else {
          uVar17 = 0;
        }
        *(uint *)((longlong)&local_794 + (ulonglong)uVar14 * 4) =
             (uVar17 & ~uVar18) >> (bVar7 & 0x1f) | (uVar16 & uVar18) << sVar2;
      }
      uVar6 = 0;
      if (uVar13 != 0) {
        do {
          *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
          uVar14 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar14;
        } while (uVar14 != uVar13);
      }
    }
    else {
      local_3f8 = 0;
      local_798 = 0;
      func_0x0001402d0784(&local_794,0x1cc,local_3f4,0);
    }
    local_3f4[0] = 4;
  }
  uVar14 = local_798;
  local_3f4[1] = 0;
  local_3f8 = 1;
  local_5c8 = 1;
  func_0x0001402d0784(local_5c4,0x1cc,local_3f4);
  pcVar12 = local_7a8;
  if ((int)uVar5 < 0) {
    local_7e8 = -uVar5;
    local_7e0 = (uint)((ulonglong)local_7e8 / 10);
    if ((ulonglong)local_7e8 / 10 != 0) {
      if (0x26 < local_7e0) {
        local_7e0 = 0x26;
      }
      local_3f8 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_7e0 - 1) * 4] +
                  (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_7e0 - 1) * 4];
      func_0x000140421870(local_3f4,0,
                          (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_7e0 - 1) * 4] * 4);
      return;
    }
    if (local_7e8 % 10 != 0) {
      uVar9 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(local_7e8 % 10 - 1) * 4);
      if (uVar9 == 0) {
LAB_1402e8fc6:
        local_798 = 0;
        uVar14 = local_798;
      }
      else if ((uVar9 != 1) && (uVar14 != 0)) {
        uVar6 = 0;
        uVar15 = 0;
        do {
          uVar8 = (ulonglong)*(uint *)((longlong)&local_794 + uVar15 * 4) * (ulonglong)uVar9 + uVar6
          ;
          *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar8;
          uVar6 = uVar8 >> 0x20;
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while (uVar13 != uVar14);
        iVar4 = (int)(uVar8 >> 0x20);
        uVar14 = local_798;
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_1402e8fc6;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          uVar14 = local_798;
        }
      }
    }
  }
  else {
    local_7e0 = (uint)((ulonglong)uVar5 / 10);
    if ((ulonglong)uVar5 / 10 != 0) {
      if (0x26 < local_7e0) {
        local_7e0 = 0x26;
      }
      local_3f8 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_7e0 - 1) * 4] +
                  (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_7e0 - 1) * 4];
      func_0x000140421870(local_3f4,0,
                          (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_7e0 - 1) * 4] * 4);
      return;
    }
    if (uVar5 % 10 != 0) {
      uVar9 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar9 == 0) {
LAB_1402e8b9e:
        local_5c8 = 0;
LAB_1402e8ba1:
      }
      else if ((uVar9 != 1) && (local_5c8 != 0)) {
        uVar6 = 0;
        uVar15 = 0;
        do {
          uVar8 = (ulonglong)local_5c4[uVar15] * (ulonglong)uVar9 + uVar6;
          local_5c4[uVar15] = (uint)uVar8;
          uVar6 = uVar8 >> 0x20;
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while (uVar13 != local_5c8);
        uVar9 = (uint)(uVar8 >> 0x20);
        if (uVar9 != 0) {
          if (0x72 < local_5c8) goto LAB_1402e8b9e;
          local_5c4[local_5c8] = uVar9;
          local_5c8 = local_5c8 + 1;
          goto LAB_1402e8ba1;
        }
      }
    }
  }
  uVar9 = local_5c8;
  if (uVar14 != 0) {
    uVar6 = 0;
    uVar15 = 0;
    do {
      uVar8 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar15 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar8;
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
      uVar6 = uVar8 >> 0x20;
    } while (uVar13 != uVar14);
    iVar4 = (int)(uVar8 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_1402d02f0(&local_798,&local_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar12 = '1';
    pcVar10 = pcVar12 + 1;
    if (uVar9 != 0) {
      uVar6 = 0;
      uVar15 = 0;
      do {
        uVar8 = uVar6 + (ulonglong)local_5c4[uVar15] * 10;
        local_5c4[uVar15] = (uint)uVar8;
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        uVar6 = uVar8 >> 0x20;
      } while (uVar14 != uVar9);
      uVar14 = (uint)(uVar8 >> 0x20);
      if (uVar14 != 0) {
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar14;
          local_5c8 = local_5c8 + 1;
        }
        else {
          local_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar12;
  }
  else {
    pcVar10 = pcVar12 + 1;
    *pcVar12 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar14 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar14 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar14;
  if (param_6 - 1U < (ulonglong)uVar14) {
    uVar6 = param_6 - 1U;
  }
  pcVar12 = pcVar12 + uVar6;
  while ((pcVar10 != pcVar12 && (local_798 != 0))) {
    uVar6 = 0;
    uVar15 = 0;
    do {
      uVar8 = (ulonglong)*(uint *)((longlong)&local_794 + uVar15 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar8;
      uVar6 = uVar8 >> 0x20;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 != local_798);
    iVar4 = (int)(uVar8 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_1402d02f0(&local_798,&local_5c8);
    uVar14 = 8;
    do {
      uVar15 = (uVar6 & 0xffffffff) / 10;
      if (uVar14 < (uint)((int)pcVar12 - (int)pcVar10)) {
        pcVar10[uVar14] = (char)uVar6 + (char)uVar15 * -10 + '0';
      }
      uVar14 = uVar14 - 1;
      uVar6 = uVar15;
    } while (uVar14 != 0xffffffff);
    lVar11 = (longlong)pcVar12 - (longlong)pcVar10;
    if (9 < lVar11) {
      lVar11 = 9;
    }
    pcVar10 = pcVar10 + lVar11;
  }
  *pcVar10 = '\0';
  local_7dc = 0;
  FUN_1402eb670(&local_7dc,local_7d0,local_7cc);
LAB_1402e9200:
  if (local_7b8 != '\0') {
    FUN_1402eb700(local_7c0);
  }
  func_0x0001402ed2f0(local_58 ^ (ulonglong)auStackY_828);
  return;
}

