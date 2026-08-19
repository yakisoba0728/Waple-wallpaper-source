// Function: FUN_1402ce544
// Addr: 1402ce544
// Size: 3570 bytes


/* WARNING: Removing unreachable block (ram,0x0001402cfdc2) */
/* WARNING: Removing unreachable block (ram,0x0001402cfe19) */
/* WARNING: Removing unreachable block (ram,0x0001402cfdfd) */
/* WARNING: Removing unreachable block (ram,0x0001402cfe2a) */

void FUN_1402ce544(uint *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  uint local_d38;
  uint local_d30;
  uint *local_d28;
  undefined8 *local_d20;
  uint *local_d10;
  uint *local_d08;
  undefined4 local_cf8;
  undefined1 local_cf4 [924];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint auStack_784 [231];
  uint local_3e8;
  undefined8 local_3e4 [57];
  int local_218;
  undefined1 local_214 [460];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_d78;
  uVar13 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar19 = param_1 + 2;
  uVar12 = 0;
  local_d44 = *param_1;
  if ((int)*param_1 < 0) {
    local_d44 = 0;
  }
  uVar22 = 0;
  uVar21 = 0;
  uVar16 = local_d44;
  if (uVar13 <= local_d44) {
    uVar16 = uVar13;
  }
  local_d44 = local_d44 - uVar16;
  puVar18 = (uint *)((longlong)param_1 + (ulonglong)uVar16 + 8);
  puVar5 = (uint *)((longlong)param_1 + (ulonglong)uVar13 + 8);
  local_d48 = (int)puVar5 - (int)puVar18;
  local_d28 = param_1;
  local_d20 = param_2;
  local_d10 = puVar5;
  local_d08 = puVar18;
  if (puVar19 != puVar18) {
    do {
      uVar13 = (uint)uVar22;
      if (uVar21 == 9) {
        if (uVar12 != 0) {
          uVar15 = 0;
          uVar9 = 0;
          do {
            uVar16 = (int)uVar9 + 1;
            uVar8 = (ulonglong)auStack_784[uVar9] * 1000000000 + uVar15;
            auStack_784[uVar9] = (uint)uVar8;
            uVar15 = uVar8 >> 0x20;
            uVar9 = (ulonglong)uVar16;
          } while (uVar16 != uVar12);
          uVar16 = (uint)(uVar8 >> 0x20);
          uVar12 = local_788;
          if (uVar16 != 0) {
            if (local_788 < 0x73) {
              auStack_784[local_788] = uVar16;
              local_788 = local_788 + 1;
              uVar12 = local_788;
            }
            else {
              local_788 = 0;
              uVar12 = 0;
            }
          }
        }
        if (uVar13 != 0) {
          uVar16 = 0;
          uVar21 = 0;
          if (uVar12 != 0) {
            do {
              uVar12 = uVar21 + 1;
              uVar9 = auStack_784[uVar21] + uVar22;
              auStack_784[uVar21] = (uint)uVar9;
              uVar22 = uVar9 >> 0x20;
              uVar13 = (uint)(uVar9 >> 0x20);
              uVar21 = uVar12;
            } while (uVar12 != local_788);
            uVar12 = local_788;
            uVar16 = local_788;
            if (uVar13 == 0) goto LAB_1402ce6ef;
          }
          if (uVar16 < 0x73) {
            auStack_784[uVar16] = uVar13;
            uVar12 = local_788 + 1;
            local_788 = uVar12;
          }
          else {
            uVar12 = 0;
            local_788 = 0;
          }
        }
LAB_1402ce6ef:
        uVar13 = 0;
        uVar21 = 0;
      }
      uVar16 = *puVar19;
      uVar21 = uVar21 + 1;
      puVar19 = (uint *)((longlong)puVar19 + 1);
      uVar13 = (uint)(byte)uVar16 + uVar13 * 10;
      uVar22 = (ulonglong)uVar13;
    } while (puVar19 != puVar18);
    if (uVar21 != 0) {
      local_d3c = uVar21 / 10;
      if (local_d3c != 0) {
        local_d40 = local_d3c;
        if (0x26 < local_d3c) {
          local_d40 = 0x26;
        }
        local_218 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_d40 - 1) * 4] +
                    (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_d40 - 1) * 4];
        func_0x000140421870(local_214,0,
                            (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_d40 - 1) * 4] * 4);
        return;
      }
      if (uVar21 % 10 != 0) {
        uVar16 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(uVar21 % 10 - 1) * 4);
        if (uVar16 == 0) {
LAB_1402cebb0:
          local_788 = 0;
          uVar12 = 0;
        }
        else if ((uVar16 != 1) && (uVar12 != 0)) {
          uVar15 = 0;
          uVar9 = 0;
          do {
            uVar21 = (int)uVar9 + 1;
            uVar8 = (ulonglong)auStack_784[uVar9] * (ulonglong)uVar16 + uVar15;
            auStack_784[uVar9] = (uint)uVar8;
            uVar15 = uVar8 >> 0x20;
            uVar9 = (ulonglong)uVar21;
          } while (uVar21 != uVar12);
          uVar16 = (uint)(uVar8 >> 0x20);
          uVar12 = local_788;
          if (uVar16 != 0) {
            if (0x72 < local_788) goto LAB_1402cebb0;
            auStack_784[local_788] = uVar16;
            local_788 = local_788 + 1;
            uVar12 = local_788;
          }
        }
      }
      if (uVar13 != 0) {
        uVar9 = 0;
        uVar16 = 0;
        if (uVar12 != 0) {
          do {
            uVar12 = (int)uVar9 + 1;
            uVar13 = auStack_784[uVar9];
            auStack_784[uVar9] = (uint)(uVar13 + uVar22);
            uVar13 = (uint)(uVar13 + uVar22 >> 0x20);
            uVar22 = (ulonglong)uVar13;
            uVar9 = (ulonglong)uVar12;
          } while (uVar12 != local_788);
          uVar12 = local_788;
          uVar16 = local_788;
          if (uVar13 == 0) goto LAB_1402cec3c;
        }
        if (uVar16 < 0x73) {
          auStack_784[uVar16] = uVar13;
          local_788 = local_788 + 1;
          uVar12 = local_788;
        }
        else {
          local_788 = 0;
          uVar12 = 0;
        }
      }
    }
  }
LAB_1402cec3c:
  if (local_d44 == 0) {
LAB_1402cf16d:
    if (uVar12 == 0) goto LAB_1402cf172;
    local_d38 = 0;
    iVar7 = 0x1f;
    bVar23 = auStack_784[uVar12 - 1] == 0;
    if (!bVar23) {
      for (; auStack_784[uVar12 - 1] >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (bVar23) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar7 + 1;
    }
    local_d3c = (uVar12 - 1) * 0x20 + iVar7;
  }
  else {
    local_d3c = local_d44 / 10;
    if (local_d44 / 10 != 0) {
      local_d40 = local_d3c;
      if (0x26 < local_d3c) {
        local_d40 = 0x26;
      }
      local_218 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_d40 - 1) * 4] +
                  (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_d40 - 1) * 4];
      func_0x000140421870(local_214,0,
                          (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_d40 - 1) * 4] * 4);
      return;
    }
    if (local_d44 % 10 == 0) goto LAB_1402cf16d;
    uVar13 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(local_d44 % 10 - 1) * 4);
    if (uVar13 == 0) {
      local_788 = 0;
      uVar12 = 0;
      goto LAB_1402cf16d;
    }
    if (uVar13 == 1) goto LAB_1402cf16d;
    if (uVar12 != 0) {
      uVar9 = 0;
      uVar22 = 0;
      do {
        uVar16 = (int)uVar22 + 1;
        uVar15 = (ulonglong)auStack_784[uVar22] * (ulonglong)uVar13 + uVar9;
        auStack_784[uVar22] = (uint)uVar15;
        uVar9 = uVar15 >> 0x20;
        uVar22 = (ulonglong)uVar16;
      } while (uVar16 != uVar12);
      uVar13 = (uint)(uVar15 >> 0x20);
      uVar12 = local_788;
      if (uVar13 != 0) {
        if (0x72 < local_788) {
          puVar1 = (ulonglong *)*param_2;
          if (*(char *)(param_2 + 1) == '\0') {
            *(uint *)puVar1 =
                 (-(uint)((char)param_1[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar1 & 0x7f800000;
          }
          else {
            *puVar1 = (-(ulonglong)((char)param_1[0xc2] != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *puVar1 & 0x7ff0000000000000;
          }
          goto LAB_1402d021a;
        }
        auStack_784[local_788] = uVar13;
        local_788 = local_788 + 1;
        uVar12 = local_788;
      }
      goto LAB_1402cf16d;
    }
LAB_1402cf172:
    local_d3c = 0;
  }
  if ((local_d3c < local_d30) && (local_d48 != 0)) {
    uVar13 = 0;
    uVar22 = 0;
    local_958 = 0;
    uVar16 = 0;
    if (puVar18 != puVar5) {
      do {
        uVar21 = (uint)uVar22;
        if (uVar16 == 9) {
          if (uVar13 != 0) {
            uVar15 = 0;
            uVar9 = 0;
            do {
              uVar16 = (int)uVar9 + 1;
              uVar8 = (ulonglong)local_954[uVar9] * 1000000000 + uVar15;
              local_954[uVar9] = (uint)uVar8;
              uVar15 = uVar8 >> 0x20;
              uVar9 = (ulonglong)uVar16;
            } while (uVar16 != uVar13);
            uVar16 = (uint)(uVar8 >> 0x20);
            uVar13 = local_958;
            if (uVar16 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar16;
                local_958 = local_958 + 1;
                uVar13 = local_958;
              }
              else {
                local_218 = 0;
                local_958 = 0;
                func_0x0001402d0784(local_954,0x1cc,local_214);
                uVar13 = local_958;
              }
            }
          }
          if (uVar21 != 0) {
            uVar9 = 0;
            uVar16 = 0;
            if (uVar13 != 0) {
              do {
                uVar13 = (int)uVar9 + 1;
                uVar15 = local_954[uVar9] + uVar22;
                local_954[uVar9] = (uint)uVar15;
                uVar22 = uVar15 >> 0x20;
                uVar21 = (uint)(uVar15 >> 0x20);
                uVar9 = (ulonglong)uVar13;
              } while (uVar13 != local_958);
              uVar16 = local_958;
              uVar13 = local_958;
              if (uVar21 == 0) goto LAB_1402cf30d;
            }
            if (uVar16 < 0x73) {
              local_954[uVar16] = uVar21;
              local_958 = local_958 + 1;
              uVar13 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              func_0x0001402d0784(local_954,0x1cc,local_214);
              uVar13 = local_958;
            }
          }
LAB_1402cf30d:
          uVar21 = 0;
          uVar16 = 0;
        }
        uVar17 = *puVar18;
        uVar16 = uVar16 + 1;
        puVar18 = (uint *)((longlong)puVar18 + 1);
        uVar21 = (uint)(byte)uVar17 + uVar21 * 10;
        uVar22 = (ulonglong)uVar21;
      } while (puVar18 != puVar5);
      if (uVar16 != 0) {
        local_d40 = (uint)((ulonglong)uVar16 / 10);
        if ((ulonglong)uVar16 / 10 != 0) {
          local_d38 = local_d40;
          if (0x26 < local_d40) {
            local_d38 = 0x26;
          }
          local_218 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_d38 - 1) * 4] +
                      (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_d38 - 1) * 4];
          func_0x000140421870(local_214,0,
                              (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_d38 - 1) * 4] * 4)
          ;
          return;
        }
        if (uVar16 % 10 != 0) {
          uVar16 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(uVar16 % 10 - 1) * 4);
          if (uVar16 == 0) {
LAB_1402cf7ad:
            local_cf8 = 0;
            local_958 = 0;
            func_0x0001402d0784(local_954,0x1cc,local_cf4);
            uVar13 = local_958;
          }
          else if ((uVar16 != 1) && (uVar13 != 0)) {
            uVar15 = 0;
            uVar9 = 0;
            do {
              uVar17 = (int)uVar9 + 1;
              uVar8 = (ulonglong)local_954[uVar9] * (ulonglong)uVar16 + uVar15;
              local_954[uVar9] = (uint)uVar8;
              uVar15 = uVar8 >> 0x20;
              uVar9 = (ulonglong)uVar17;
            } while (uVar17 != uVar13);
            uVar16 = (uint)(uVar8 >> 0x20);
            uVar13 = local_958;
            if (uVar16 != 0) {
              if (0x72 < local_958) goto LAB_1402cf7ad;
              local_954[local_958] = uVar16;
              local_958 = local_958 + 1;
              uVar13 = local_958;
            }
          }
        }
        if (uVar21 != 0) {
          uVar16 = 0;
          uVar17 = 0;
          if (uVar13 != 0) {
            do {
              uVar17 = uVar16 + 1;
              uVar13 = local_954[uVar16];
              local_954[uVar16] = (uint)(uVar13 + uVar22);
              uVar21 = (uint)(uVar13 + uVar22 >> 0x20);
              uVar22 = (ulonglong)uVar21;
              uVar16 = uVar17;
            } while (uVar17 != local_958);
            uVar17 = local_958;
            uVar13 = local_958;
            if (uVar21 == 0) goto LAB_1402cf86a;
          }
          if (uVar17 < 0x73) {
            local_954[uVar17] = uVar21;
            local_958 = local_958 + 1;
            uVar13 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            func_0x0001402d0784(local_954,0x1cc,local_cf4);
            uVar13 = local_958;
          }
        }
      }
    }
LAB_1402cf86a:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    local_3e4[0] = 1;
    local_3e8 = 1;
    if (local_d48 / 10 != 0) {
      local_d38 = local_d48 / 10;
      if (0x26 < local_d48 / 10) {
        local_d38 = 0x26;
      }
      local_218 = (uint)(byte)(&DAT_14042e413)[(ulonglong)(local_d38 - 1) * 4] +
                  (uint)(byte)(&DAT_14042e412)[(ulonglong)(local_d38 - 1) * 4];
      func_0x000140421870(local_214,0,
                          (ulonglong)(byte)(&DAT_14042e412)[(ulonglong)(local_d38 - 1) * 4] * 4);
      return;
    }
    if (local_d48 % 10 != 0) {
      uVar16 = *(uint *)(&DAT_14042e4a8 + (ulonglong)(local_d48 % 10 - 1) * 4);
      if (uVar16 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        func_0x0001402d0784(local_3e4,0x1cc);
      }
      else if (uVar16 != 1) {
        uVar9 = 0;
        uVar22 = 0;
        do {
          uVar21 = (int)uVar22 + 1;
          uVar15 = (ulonglong)*(uint *)((longlong)local_3e4 + uVar22 * 4) * (ulonglong)uVar16 +
                   uVar9;
          *(int *)((longlong)local_3e4 + uVar22 * 4) = (int)uVar15;
          uVar9 = uVar15 >> 0x20;
          uVar22 = (ulonglong)uVar21;
        } while (uVar21 != 1);
        if ((int)(uVar15 >> 0x20) != 0) {
          local_3e8 = 2;
        }
      }
    }
    uVar16 = local_3e8;
    if (uVar13 == 0) {
      uVar21 = 0;
    }
    else {
      local_d38 = 0;
      iVar7 = 0x1f;
      bVar23 = local_954[uVar13 - 1] == 0;
      if (!bVar23) {
        for (; local_954[uVar13 - 1] >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (bVar23) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 1;
      }
      uVar21 = (uVar13 - 1) * 0x20 + iVar7;
    }
    if (local_3e8 == 0) {
      uVar17 = 0;
    }
    else {
      local_d38 = 0;
      puVar19 = (uint *)((longlong)local_3e4 + (ulonglong)(local_3e8 - 1) * 4);
      iVar7 = 0x1f;
      bVar23 = *puVar19 == 0;
      if (!bVar23) {
        for (; *puVar19 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (bVar23) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 1;
      }
      uVar17 = (local_3e8 - 1) * 0x20 + iVar7;
    }
    uVar21 = -(uint)(uVar21 < uVar17) & uVar17 - uVar21;
    local_d44 = uVar21;
    if (uVar21 != 0) {
      local_d48 = 0;
      uVar17 = uVar21 & 0x1f;
      local_d38 = 0x20 - uVar17;
      uVar14 = uVar21 >> 5;
      uVar10 = (1 << ((byte)local_d38 & 0x3f)) - 1;
      local_d40 = ~uVar10;
      iVar7 = 0x1f;
      bVar23 = local_954[uVar13 - 1] == 0;
      if (!bVar23) {
        for (; local_954[uVar13 - 1] >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (bVar23) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + 1;
      }
      if ((uVar14 + uVar13 < 0x74) &&
         (local_d48 = (0x20U - iVar7 < uVar17) + uVar14 + uVar13, local_d48 < 0x74)) {
        uVar20 = local_d48 - 1;
        if (uVar20 != uVar14 - 1) {
          do {
            uVar4 = uVar20 - uVar14;
            if (uVar4 < uVar13) {
              uVar11 = local_954[uVar4];
            }
            else {
              uVar11 = 0;
            }
            if (uVar4 - 1 < uVar13) {
              uVar13 = local_954[uVar4 - 1];
            }
            else {
              uVar13 = 0;
            }
            local_954[uVar20] =
                 (uVar13 & local_d40) >> ((byte)local_d38 & 0x1f) |
                 (uVar11 & uVar10) << (sbyte)uVar17;
            uVar20 = uVar20 - 1;
            uVar13 = local_958;
          } while (uVar20 != uVar14 - 1);
        }
        uVar17 = 0;
        local_958 = local_d48;
        uVar13 = local_d48;
        if (uVar14 != 0) {
          do {
            uVar22 = (ulonglong)uVar17;
            uVar17 = uVar17 + 1;
            local_954[uVar22] = 0;
          } while (uVar17 != uVar14);
        }
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        func_0x0001402d0784(local_954,0x1cc,local_cf4,0);
        uVar13 = local_958;
      }
    }
    uVar17 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVar10 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVar21) {
        bVar23 = true;
        goto LAB_1402d01f8;
      }
      uVar10 = local_d30 - uVar21;
    }
    if (uVar16 < uVar13) {
LAB_1402d0016:
      bVar23 = false;
    }
    else {
      uVar14 = uVar13;
      if (uVar13 < uVar16) {
        bVar23 = true;
      }
      else {
        do {
          uVar14 = uVar14 - 1;
          if (uVar14 == 0xffffffff) goto LAB_1402d0016;
          uVar16 = *(uint *)((longlong)local_3e4 + (ulonglong)uVar14 * 4);
        } while (local_954[uVar14] == uVar16);
        bVar23 = local_954[uVar14] <= uVar16;
      }
    }
    if (bVar23) {
      uVar21 = uVar21 + 1;
    }
    uVar14 = uVar10 >> 5;
    sVar3 = (sbyte)(uVar10 & 0x1f);
    bVar6 = 0x20 - sVar3;
    uVar16 = (int)(1L << (bVar6 & 0x3f)) - 1;
    local_d38 = ~uVar16;
    iVar7 = 0x1f;
    bVar23 = local_954[uVar13 - 1] == 0;
    if (!bVar23) {
      for (; local_954[uVar13 - 1] >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (bVar23) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar7 + 1;
    }
    local_d44 = uVar21;
    if ((uVar14 + uVar13 < 0x74) &&
       (uVar10 = (0x20U - iVar7 < (uVar10 & 0x1f)) + uVar14 + uVar13, uVar10 < 0x74)) {
      uVar20 = uVar10;
      while (uVar20 = uVar20 - 1, uVar20 != uVar14 - 1) {
        uVar4 = uVar20 - uVar14;
        if (uVar4 < uVar13) {
          uVar11 = local_954[uVar4];
        }
        else {
          uVar11 = 0;
        }
        if (uVar4 - 1 < uVar13) {
          uVar13 = local_954[uVar4 - 1];
        }
        else {
          uVar13 = 0;
        }
        local_954[uVar20] = (uVar13 & local_d38) >> (bVar6 & 0x1f) | (uVar11 & uVar16) << sVar3;
        uVar13 = local_958;
      }
      uVar13 = 0;
      local_958 = uVar10;
      if (uVar14 != 0) {
        do {
          uVar22 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          local_954[uVar22] = 0;
        } while (uVar13 != uVar14);
      }
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      func_0x0001402d0784(local_954,0x1cc,local_cf4,0);
    }
    uVar22 = FUN_1402d02f0(&local_958,&local_3e8);
    bVar23 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar22 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (int)lVar2 + 1;
    }
    if (local_d30 < uVar13) {
      bVar6 = (char)uVar13 - (byte)local_d30;
      if ((!bVar23) || (bVar23 = true, (uVar22 & (1L << (bVar6 & 0x3f)) - 1U) != 0)) {
        bVar23 = false;
      }
      uVar22 = uVar22 >> (bVar6 & 0x3f);
    }
    local_d58 = local_d20;
    uVar9 = 0;
    if (uVar12 != 0) {
      uVar9 = (ulonglong)auStack_784[0];
    }
    uVar15 = 0;
    if (1 < uVar12) {
      uVar15 = (ulonglong)auStack_784[1];
    }
    uVar13 = ~uVar21;
    if (uVar17 != 0) {
      uVar13 = uVar17 - 2;
    }
    FUN_1402ce02c(uVar22 + ((uVar15 << 0x20) + uVar9 << ((byte)local_d30 & 0x3f)),uVar13,
                  (char)local_d28[0xc2],bVar23);
  }
  else {
    bVar23 = local_d48 != 0;
LAB_1402d01f8:
    local_d58 = local_d20;
    FUN_1402ce3e4(&local_788,local_d3c,(char)local_d28[0xc2],bVar23);
  }
LAB_1402d021a:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_d78);
  return;
}

