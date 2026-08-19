// Function: FUN_140302cc0
// Addr: 140302cc0
// Size: 2829 bytes


void FUN_140302cc0(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  char cVar37;
  uint uVar38;
  undefined1 auStack_2f8 [32];
  char local_2d8;
  ushort local_2d6;
  uint local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  int *local_2a8;
  int local_2a0;
  longlong local_298;
  uint local_290;
  longlong local_288;
  undefined8 local_280;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  longlong local_268;
  uint local_260;
  undefined8 *local_258;
  longlong local_250;
  undefined8 *local_248;
  longlong local_240;
  char *local_238;
  uint *local_230;
  longlong local_228 [8];
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_2f8;
  puVar35 = (uint *)*param_1;
  uVar16 = *(uint *)(param_1 + 8);
  piVar15 = (int *)(&DAT_140438120 + (longlong)(int)puVar35[3] * 8);
  local_2a8 = piVar15;
  local_298 = param_2;
  local_258 = param_1;
  local_248 = param_1 + 0x49;
  local_230 = puVar35;
  uVar12 = FUN_1404145c0();
  iVar7 = *piVar15;
  puVar23 = param_1 + 0x49;
  local_280 = uVar12;
  if (iVar7 == 0x159b) {
LAB_1403036f0:
    uVar22 = 1;
    func_0x0001404146b0(uVar12);
    uVar16 = *(uint *)(puVar23 + 0x1b);
    if (uVar16 == 0) {
      lVar13 = param_1[6];
      uVar22 = 0;
      lVar14 = *(longlong *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 8) != 0) {
        do {
          if ((*(ushort *)(lVar14 + uVar22 * 2) & 0x1fff) == *puVar35) {
            *(undefined2 *)(lVar14 + uVar22 * 2) = 0x42;
          }
          uVar16 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(lVar13 + 8));
      }
    }
    else {
      uVar18 = 0;
      if (uVar16 != 0) {
        do {
          local_228[uVar18] = uVar18 * 0x24 + 0xdc + (longlong)puVar23;
          uVar29 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar29;
        } while (uVar29 < uVar16);
      }
      if (1 < uVar16) {
        do {
          uVar18 = uVar22;
          do {
            uVar29 = (int)uVar18 - 1;
            uVar30 = (ulonglong)uVar29;
            piVar31 = (int *)local_228[uVar30];
            piVar15 = piVar31;
            if ((*(byte *)(piVar31 + 8) & 6) == 0) {
              piVar15 = piVar31 + 3;
            }
            piVar3 = (int *)local_228[uVar18];
            piVar21 = piVar3;
            if ((*(byte *)(piVar3 + 8) & 6) == 0) {
              piVar21 = piVar3 + 3;
            }
            if (*piVar15 <= *piVar21) break;
            local_228[uVar18] = (longlong)piVar31;
            local_228[uVar30] = (longlong)piVar3;
            uVar18 = uVar30;
          } while (uVar29 != 0);
          uVar29 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar29;
        } while (uVar29 < uVar16);
      }
      uVar22 = 0;
      if (uVar16 != 1) {
        do {
          piVar15 = (int *)local_228[uVar22];
          if ((*(byte *)(piVar15 + 8) & 6) != 0) {
            piVar15 = piVar15 + 3;
          }
          uVar16 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar16;
          piVar31 = (int *)local_228[uVar22];
          if ((*(byte *)(piVar31 + 8) & 6) != 0) {
            piVar31 = piVar31 + 3;
          }
          if (*piVar31 < *piVar15) {
            *piVar15 = *piVar31;
          }
        } while (uVar16 < *(int *)(puVar23 + 0x1b) - 1U);
      }
    }
    func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_2f8);
    return;
  }
  local_260 = uVar16 / 0xe;
LAB_140302d70:
  cVar37 = (&DAT_140436b70)[iVar7];
  if (cVar37 != '\0') {
    uVar22 = 0;
    iVar25 = 0;
    local_26c = 0;
    iVar9 = 0;
    local_270 = 0;
    local_2cc = 0;
    local_2d0 = 0;
    pcVar6 = &DAT_140436b70 + iVar7;
    uVar18 = 0;
joined_r0x000140302da5:
    while (cVar37 == ' ') {
      cVar37 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    }
    local_238 = (char *)FUN_140305a30();
    uVar30 = uVar18;
    if (local_274 != 0) {
      local_2d8 = '\0';
      iVar7 = -0x80000000;
      if ((*(byte *)(piVar15 + 1) & 1) == 0) {
        iVar7 = 0x7fffffff;
      }
      local_2c8 = iVar7;
      if (local_274 != 0) {
        local_290 = 0;
LAB_140302e10:
        uVar16 = local_290;
        lVar13 = func_0x000140414970(uVar12,&local_278);
        lVar14 = func_0x000140414980(uVar12,&local_278);
        iVar24 = iVar7;
        if (uVar16 < local_278) {
          iVar7 = *(int *)(lVar13 + (ulonglong)uVar16 * 0x14);
          if (iVar7 == 0) goto LAB_140303191;
          iVar2 = *(int *)(lVar14 + 0xc + (ulonglong)uVar16 * 0x14);
          iVar7 = FUN_1402f13a0(param_2,iVar7);
          lVar13 = *(longlong *)(param_2 + 0x78);
          local_288 = *(longlong *)(lVar13 + 0xa8);
          param_2 = local_298;
          iVar24 = local_2c8;
          if ((iVar7 != 0) || (*(ushort *)(lVar13 + 0x9a) < 3)) goto LAB_140303191;
          uVar29 = 0xffffffff;
          local_268 = *(longlong *)(lVar13 + 0xa0);
          uVar16 = 0xffffffff;
          local_2d6 = local_2d6 & 0xff00;
          iVar7 = 0;
          local_2d4 = 0xffffffff;
          uVar22 = 0;
          local_2c4 = 0xffffffff;
          uVar32 = 0xffffffff;
          cVar37 = '\0';
          uVar12 = local_280;
          if (*(ushort *)(lVar13 + 0x98) != 0) {
            do {
              uVar33 = uVar32 + 1;
              uVar1 = *(ushort *)(*(longlong *)(lVar13 + 0xb0) + uVar22 * 2);
              uVar32 = (uint)uVar1;
              if ((int)uVar33 < (int)(uint)uVar1) {
                uVar26 = (uint)uVar1;
                uVar16 = uVar33;
                if ((*(byte *)(local_2a8 + 1) & 3) == 0) {
                  do {
                    if (((int)uVar29 < 0) ||
                       (iVar8 = *(int *)(local_268 + 4 + (longlong)(int)uVar16 * 8), iVar8 < iVar7))
                    {
                      iVar7 = *(int *)(local_268 + 4 + (longlong)(int)uVar16 * 8);
                      uVar29 = uVar16;
                      if (iVar7 + iVar2 <= iVar9) {
                        iVar9 = iVar7 + iVar2;
                      }
                    }
                    else {
                      iVar8 = iVar8 + iVar2;
                      if (iVar25 <= iVar8) {
                        iVar25 = iVar8;
                      }
                    }
                    uVar16 = uVar16 + 1;
                    local_2cc = iVar9;
                  } while ((int)uVar16 <= (int)uVar26);
                }
                else {
                  do {
                    if (((int)uVar29 < 0) ||
                       (iVar8 = *(int *)(local_268 + 4 + (longlong)(int)uVar16 * 8), iVar7 < iVar8))
                    {
                      iVar7 = *(int *)(local_268 + 4 + (longlong)(int)uVar16 * 8);
                      uVar29 = uVar16;
                      if (iVar25 <= iVar7 + iVar2) {
                        iVar25 = iVar7 + iVar2;
                      }
                    }
                    else {
                      iVar8 = iVar8 + iVar2;
                      if (iVar8 <= iVar9) {
                        iVar9 = iVar8;
                      }
                    }
                    uVar16 = uVar16 + 1;
                    local_2cc = iVar9;
                  } while ((int)uVar16 <= (int)uVar26);
                }
                uVar16 = local_2d4;
                local_2d0 = iVar25;
                iVar9 = local_2cc;
                if ((int)local_2d4 < (int)uVar29) {
                  uVar16 = uVar26;
                  local_2d4 = uVar26;
                  local_2c4 = uVar33;
                }
              }
              uVar33 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar33;
            } while ((int)uVar33 < (int)(uint)*(ushort *)(lVar13 + 0x98));
            local_2d6._0_1_ = '\0';
            cVar37 = (char)local_2d6;
            if ((int)uVar29 < 0) goto LAB_14030347a;
            local_250 = local_268 + 4;
            iVar8 = *(int *)(local_268 + (longlong)(int)uVar29 * 8);
            local_2c0 = uVar29;
            local_2b8 = 0xffffffff;
            local_2bc = 0xffffffff;
            if ((*(byte *)((int)uVar29 + local_288) & 3) == 1) {
              local_2b8 = uVar29;
              local_2bc = uVar29;
            }
            do {
              uVar32 = uVar16;
              if ((int)local_2c4 < (int)local_2c0) {
                uVar32 = local_2c0 - 1;
              }
              lVar13 = (longlong)(int)uVar32;
              iVar25 = *(int *)(local_250 + lVar13 * 8);
              iVar9 = iVar25 - iVar7;
              if (iVar9 < 0) {
                iVar9 = iVar7 - iVar25;
              }
              local_2b4 = uVar29;
              if (5 < iVar9) {
                iVar25 = *(int *)(local_268 + lVar13 * 8);
                iVar19 = iVar25 - iVar8;
                if (iVar19 < 0) {
                  iVar19 = iVar8 - iVar25;
                }
                if (iVar19 <= iVar9 * 0x14) break;
              }
              if (((*(byte *)(lVar13 + local_288) & 3) == 1) &&
                 (local_2bc = uVar32, (int)local_2b8 < 0)) {
                local_2b8 = uVar32;
              }
              uVar16 = local_2d4;
              local_2c0 = uVar32;
            } while (uVar32 != uVar29);
            do {
              uVar16 = local_2c4;
              if ((int)local_2b4 < (int)local_2d4) {
                uVar16 = local_2b4 + 1;
              }
              local_240 = (longlong)(int)uVar16 * 8;
              iVar25 = *(int *)(local_240 + local_250) - iVar7;
              if (iVar25 < 0) {
                iVar25 = iVar7 - *(int *)(local_240 + local_250);
              }
              if (5 < iVar25) {
                iVar9 = *(int *)(local_268 + local_240) - iVar8;
                if (iVar9 < 0) {
                  iVar9 = iVar8 - *(int *)(local_268 + local_240);
                }
                if (iVar9 <= iVar25 * 0x14) break;
              }
              if (((*(byte *)((int)uVar16 + local_288) & 3) == 1) &&
                 (local_2b8 = uVar16, (int)local_2bc < 0)) {
                local_2bc = uVar16;
              }
              local_2b4 = uVar16;
            } while (uVar16 != uVar29);
            local_2d6 = *(ushort *)(local_2a8 + 1);
            uVar16 = local_2bc;
            uVar32 = local_2b8;
            uVar33 = local_2b4;
            uVar26 = local_2c0;
            iVar25 = local_2d0;
            iVar9 = local_2cc;
            if ((local_2d6 & 0x10) != 0) {
              iVar19 = *(int *)(local_268 + (longlong)(int)local_2c0 * 8);
              uVar36 = *(uint *)(local_258 + 8) / 0x19;
              iVar11 = *(int *)(local_268 + (longlong)(int)local_2b4 * 8);
              iVar10 = iVar11 - iVar19;
              iVar19 = iVar19 - iVar11;
              if (-1 < iVar10) {
                iVar19 = iVar10;
              }
              if ((iVar19 < (int)uVar36) &&
                 (uVar38 = uVar29,
                 (int)((local_2b4 - local_2c0) + 2) <= (int)(local_2d4 - local_2c4))) {
                do {
                  uVar20 = local_2d4;
                  if ((int)local_2c4 < (int)uVar38) {
                    uVar20 = uVar38 - 1;
                  }
                  iVar19 = *(int *)(local_268 + (longlong)(int)uVar20 * 8);
                  if (iVar19 != iVar8) {
                    if (uVar20 != uVar29) {
                      uVar29 = 0;
                      uVar38 = 0;
                      bVar5 = false;
                      local_2b0 = local_2b4;
                      uVar20 = local_2b4;
                      uVar27 = local_2b4;
                      goto LAB_140303222;
                    }
                    break;
                  }
                  uVar38 = uVar20;
                } while (uVar20 != uVar29);
                goto LAB_140303191;
              }
            }
            goto LAB_140303411;
          }
          goto LAB_14030347a;
        }
        goto LAB_140303191;
      }
      goto LAB_1403031c8;
    }
    goto LAB_1403034ec;
  }
  goto LAB_1403036b9;
LAB_140303222:
  do {
    if (!bVar5) {
      bVar5 = true;
      uVar29 = 0xffffffff;
      uVar38 = 0xffffffff;
      local_2b0 = uVar27;
      uVar20 = uVar27;
      if ((*(byte *)((int)uVar27 + local_288) & 3) == 1) {
        uVar29 = uVar27;
        uVar38 = uVar27;
      }
    }
    uVar28 = local_2c4;
    if ((int)uVar27 < (int)local_2d4) {
      uVar28 = uVar27 + 1;
    }
    lVar13 = (longlong)(int)uVar20 * 8;
    iVar11 = *(int *)(local_250 + lVar13);
    iVar10 = iVar7 - iVar11;
    if (iVar10 < 0) {
      iVar10 = iVar11 - iVar7;
    }
    local_2a0 = iVar2;
    if ((int)(*(uint *)(local_258 + 8) >> 2) < iVar10) {
      bVar5 = false;
    }
    else {
      lVar14 = (longlong)(int)uVar28;
      iVar10 = *(int *)(local_268 + 4 + lVar14 * 8);
      iVar34 = iVar10 - iVar11;
      if (iVar34 < 0) {
        iVar34 = iVar11 - iVar10;
      }
      uVar20 = local_2b0;
      if (5 < iVar34) {
        iVar10 = *(int *)(local_268 + lVar14 * 8);
        iVar17 = iVar10 - *(int *)(local_268 + lVar13);
        iVar10 = *(int *)(local_268 + lVar13) - iVar10;
        if (-1 < iVar17) {
          iVar10 = iVar17;
        }
        if (iVar10 <= iVar34 * 0x14) {
          bVar5 = false;
          goto LAB_14030331c;
        }
      }
      if (((*(byte *)(lVar14 + local_288) & 3) == 1) && (uVar38 = uVar28, (int)uVar29 < 0)) {
        uVar29 = uVar28;
      }
      iVar10 = *(int *)(local_268 + lVar13);
      iVar17 = *(int *)(local_268 + lVar14 * 8);
      iVar4 = iVar10 - iVar17;
      if (-1 < iVar17 - iVar10) {
        iVar4 = iVar17 - iVar10;
      }
      if ((iVar10 < iVar17 == iVar19 < iVar8) && ((int)uVar36 <= iVar4)) goto LAB_140303350;
    }
LAB_14030331c:
    uVar27 = uVar28;
  } while (uVar28 != local_2c0);
  goto LAB_140303411;
LAB_140303350:
  do {
    uVar36 = local_2c4;
    if ((int)uVar28 < (int)local_2d4) {
      uVar36 = uVar28 + 1;
    }
    iVar7 = *(int *)(local_250 + (longlong)(int)uVar36 * 8);
    iVar8 = iVar7 - iVar11;
    if (iVar8 < 0) {
      iVar8 = iVar11 - iVar7;
    }
    iVar7 = iVar11;
    if (5 < iVar8) {
      iVar19 = *(int *)(local_240 + local_268) - iVar10;
      iVar8 = iVar10 - *(int *)(local_240 + local_268);
      if (-1 < iVar19) {
        iVar8 = iVar19;
      }
      if (iVar8 <= iVar34 * 0x14) {
        uVar16 = uVar29;
        uVar32 = uVar38;
        uVar33 = local_2d4;
        uVar26 = local_2b0;
        if ((int)local_2c4 < (int)uVar36) {
          uVar33 = uVar36 - 1;
          uVar26 = local_2b0;
        }
        break;
      }
    }
    if (((*(byte *)((int)uVar36 + local_288) & 3) == 1) && ((int)uVar29 < 0)) {
      uVar29 = uVar36;
    }
    uVar16 = uVar29;
    uVar38 = uVar36;
    uVar32 = uVar36;
    uVar33 = uVar36;
    uVar26 = local_2b0;
    uVar28 = uVar36;
  } while (uVar36 != local_2c0);
LAB_140303411:
  if (((int)uVar16 < 0) || ((int)uVar32 < 0)) {
LAB_140303442:
    if (((*(byte *)((int)uVar26 + local_288) & 3) == 1) &&
       ((*(byte *)((int)uVar33 + local_288) & 3) == 1)) {
      cVar37 = '\0';
      goto LAB_140303477;
    }
    if ((local_2d6 & 4) == 0) {
      cVar37 = '\x01';
      goto LAB_140303477;
    }
  }
  else {
    iVar8 = *(int *)(local_268 + (longlong)(int)uVar32 * 8);
    iVar19 = *(int *)(local_268 + (longlong)(int)uVar16 * 8);
    iVar11 = iVar8 - iVar19;
    iVar8 = iVar19 - iVar8;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    if (iVar8 <= (int)local_260) goto LAB_140303442;
    cVar37 = '\0';
LAB_140303477:
    iVar7 = iVar7 + iVar2;
LAB_14030347a:
    iVar25 = local_2d0;
    iVar2 = iVar7;
    iVar9 = local_2cc;
    if ((*(byte *)(local_2a8 + 1) & 1) == 0) {
      if (iVar7 < local_2c8) goto LAB_140303196;
    }
    else if (local_2c8 < iVar7) goto LAB_140303196;
  }
LAB_140303191:
  iVar7 = iVar24;
  cVar37 = local_2d8;
  iVar2 = local_2c8;
LAB_140303196:
  local_2c8 = iVar2;
  local_2d8 = cVar37;
  local_290 = local_290 + 1;
  if (local_274 <= local_290) goto code_r0x0001403031b0;
  goto LAB_140302e10;
code_r0x0001403031b0:
  uVar22 = (ulonglong)local_270;
  uVar18 = (ulonglong)local_26c;
  piVar15 = local_2a8;
LAB_1403031c8:
  uVar30 = uVar18;
  if (iVar7 + 0x7fffffffU < 0xfffffffe) {
    if (local_2d8 == '\0') {
      local_26c = (int)uVar18 + 1;
      uVar30 = (ulonglong)local_26c;
      local_118[uVar18] = iVar7;
    }
    else {
      local_270 = (int)uVar22 + 1;
      local_1e8[uVar22] = iVar7;
      uVar22 = (ulonglong)local_270;
    }
  }
LAB_1403034ec:
  cVar37 = *local_238;
  pcVar6 = local_238;
  uVar18 = uVar30;
  if (cVar37 == '\0') goto code_r0x0001403034f7;
  goto joined_r0x000140302da5;
code_r0x0001403034f7:
  uVar16 = (uint)uVar30;
  uVar29 = (uint)uVar22;
  if ((uVar16 != 0) || (uVar29 != 0)) {
    uVar32 = 1;
    if (1 < uVar29) {
      do {
        uVar18 = (ulonglong)uVar32;
        uVar33 = uVar32;
        while (uVar33 != 0) {
          iVar7 = local_1e8[uVar18];
          piVar31 = local_1e8 + uVar18;
          uVar33 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar33;
          if (local_1e8[uVar18] <= iVar7) break;
          *piVar31 = local_1e8[uVar18];
          local_1e8[uVar18] = iVar7;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar29);
    }
    uVar32 = 1;
    if (1 < uVar16) {
      do {
        uVar18 = (ulonglong)uVar32;
        uVar33 = uVar32;
        while (uVar33 != 0) {
          iVar7 = local_118[uVar18];
          piVar31 = local_118 + uVar18;
          uVar33 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar33;
          if (local_118[uVar18] <= iVar7) break;
          *piVar31 = local_118[uVar18];
          local_118[uVar18] = iVar7;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar16);
    }
    uVar32 = *(uint *)(local_248 + 0x1b);
    *(uint *)(local_248 + 0x1b) = uVar32 + 1;
    piVar31 = (int *)((longlong)local_248 + (ulonglong)uVar32 * 0x24 + 0xdc);
    if (uVar16 == 0) {
      iVar7 = local_1e8[uVar22 >> 1];
      piVar31[3] = iVar7;
      *piVar31 = iVar7;
    }
    else {
      iVar7 = local_118[uVar30 >> 1];
      if (uVar29 == 0) {
        piVar31[3] = iVar7;
        *piVar31 = iVar7;
      }
      else {
        *piVar31 = iVar7;
        piVar31[3] = local_1e8[uVar22 >> 1];
      }
    }
    iVar7 = *piVar31;
    iVar24 = piVar31[3];
    if ((iVar24 != iVar7) && (iVar7 < iVar24 != ((*(byte *)(piVar15 + 1) & 3) != 0))) {
      iVar7 = (iVar24 + iVar7) / 2;
      piVar31[3] = iVar7;
      *piVar31 = iVar7;
    }
    uVar16 = 0;
    piVar31[6] = iVar25;
    piVar31[7] = iVar9;
    piVar31[8] = 0;
    if ((*(byte *)(piVar15 + 1) & 1) != 0) {
      piVar31[8] = 2;
      uVar16 = 2;
    }
    if ((*(byte *)(piVar15 + 1) & 2) != 0) {
      uVar16 = uVar16 | 4;
      piVar31[8] = uVar16;
    }
    if ((*(byte *)(piVar15 + 1) & 4) != 0) {
      uVar16 = uVar16 | 8;
      piVar31[8] = uVar16;
    }
    if ((*(byte *)(piVar15 + 1) & 0x20) != 0) {
      uVar16 = uVar16 | 0x20;
      piVar31[8] = uVar16;
    }
    if ((*(byte *)(piVar15 + 1) & 0x40) != 0) {
      uVar16 = uVar16 | 0x40;
      piVar31[8] = uVar16;
    }
    if ((*(byte *)(piVar15 + 1) & 8) != 0) {
      piVar31[8] = uVar16 | 0x10;
    }
  }
LAB_1403036b9:
  iVar7 = piVar15[2];
  piVar15 = piVar15 + 2;
  puVar23 = local_248;
  puVar35 = local_230;
  param_1 = local_258;
  local_2a8 = piVar15;
  if (iVar7 == 0x159b) goto LAB_1403036f0;
  goto LAB_140302d70;
}

