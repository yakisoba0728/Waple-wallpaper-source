// Function: FUN_14030f580
// Addr: 14030f580
// Size: 2897 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14030f580(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint *puVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 in_ZMM1 [64];
  undefined1 in_XMM4 [16];
  uint local_118;
  uint local_114;
  uint local_110;
  ulonglong local_108;
  int local_100;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  uint local_c0;
  longlong local_b8;
  longlong local_b0;
  uint *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uVar33;
  
  local_88 = *param_1;
  uVar24 = *(uint *)((longlong)param_1 + 0x24);
  uVar19 = 0;
  local_118 = 0;
  plVar11 = *(longlong **)(local_88 + 0xa0);
  puVar34 = *(uint **)(local_88 + 0x408);
  local_e4 = (uint)*(ushort *)(param_2 + 2);
  uVar12 = (uint)*(ushort *)(param_2 + 2);
  uVar28 = uVar12 + 4;
  lVar18 = plVar11[6];
  local_f0 = 0;
  local_c8 = 0;
  uVar17 = uVar19;
  uVar27 = uVar19;
  if (uVar28 != 0) {
    do {
      uVar17 = uVar17 + 1;
      uVar29 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar29;
      *(int *)(param_3 + -8 + uVar17 * 8) =
           *(int *)(*(longlong *)(param_2 + 8) + -8 + uVar17 * 8) << 6;
      *(int *)(param_3 + -4 + uVar17 * 8) =
           *(int *)(*(longlong *)(param_2 + 8) + -4 + uVar17 * 8) << 6;
    } while (uVar29 < uVar28);
  }
  local_f8 = lVar18;
  local_a8 = puVar34;
  if (*(char *)(local_88 + 0x401) == '\0') {
LAB_14031007f:
    FUN_1402f7f90(lVar18,local_c8);
LAB_14031008a:
    FUN_1402f7f90(lVar18,uVar19);
LAB_140310095:
    FUN_1402f5100(plVar11);
    uVar17 = (ulonglong)local_118;
  }
  else {
    if (puVar34 == (uint *)0x0) {
      return 6;
    }
    if (uVar24 < puVar34[0x20]) {
      iVar8 = *(int *)(*(longlong *)(puVar34 + 0x22) + (ulonglong)(uVar24 + 1) * 4);
      iVar9 = *(int *)(*(longlong *)(puVar34 + 0x22) + (ulonglong)uVar24 * 4);
      if (iVar9 != iVar8) {
        uVar17 = FUN_1402f5c50(plVar11,iVar9);
        local_118 = (uint)uVar17;
        if (local_118 != 0) {
          return uVar17;
        }
        uVar24 = iVar8 - iVar9;
        uVar17 = FUN_1402f4fe0(plVar11,uVar24);
        local_118 = (uint)uVar17;
        if (local_118 != 0) {
          return uVar17;
        }
        lVar18 = plVar11[7];
        lVar13 = *plVar11;
        uVar15 = FUN_1402f52a0(plVar11);
        uVar16 = FUN_1402f52a0(plVar11);
        if ((uVar16 <= uVar24) && (local_e8 = uVar15 & 0xfff, local_e8 * 4 <= uVar24)) {
          local_110 = ((uint)uVar16 - (int)lVar13) + (int)lVar18;
          if ((short)uVar15 < 0) {
            uVar24 = (int)plVar11[7] - (int)*plVar11;
            if (local_110 < (uint)((int)plVar11[8] - (int)*plVar11)) {
              lVar18 = (ulonglong)local_110 + *plVar11;
            }
            else {
              lVar18 = plVar11[8];
            }
            plVar11[7] = lVar18;
            local_c8 = FUN_1403114e0(plVar11,&local_f0);
            local_110 = (int)plVar11[7] - (int)*plVar11;
            if (uVar24 < (uint)((int)plVar11[8] - (int)*plVar11)) {
              lVar18 = (ulonglong)uVar24 + *plVar11;
            }
            else {
              lVar18 = plVar11[8];
            }
            plVar11[7] = lVar18;
          }
          lVar18 = local_f8;
          uVar17 = (ulonglong)(uVar28 * 8);
          uVar24 = *puVar34 * 0xc + 7 & 0xfffffff8;
          uVar19 = FUN_1402f7e90(local_f8,uVar28 * 0x18 + (uVar12 + 0xb & 0xfffffff8) + uVar24,
                                 &local_118);
          local_d0 = uVar19;
          if (local_118 == 0) {
            uVar27 = uVar24 + uVar19;
            local_a0 = 0;
            lVar18 = uVar17 + uVar27;
            local_e0 = lVar18 + uVar17;
            local_b8 = uVar17 + local_e0;
            local_108 = uVar27;
            local_b0 = lVar18;
            FUN_1404217a0(uVar27);
            local_d8 = (ulonglong)uVar28 * 4 + uVar27;
            uVar17 = 0;
            local_90 = uVar19 + (ulonglong)*puVar34 * 4;
            local_98 = local_90 + (ulonglong)*puVar34 * 4;
            if (uVar28 != 0) {
              do {
                lVar13 = uVar17 * 8;
                uVar24 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar24;
                *(int *)(lVar18 + lVar13) = *(int *)(lVar13 + *(longlong *)(param_2 + 8)) << 0x10;
                *(int *)(lVar18 + 4 + lVar13) =
                     *(int *)(lVar13 + 4 + *(longlong *)(param_2 + 8)) << 0x10;
              } while (uVar24 < uVar28);
            }
            auVar14 = _DAT_140436950;
            lVar13 = _UNK_140436948;
            lVar18 = _DAT_140436940;
            pbVar26 = (byte *)plVar11[7];
            local_114 = 0;
            if (local_e8 != 0) {
              do {
                if (plVar11[8] - (longlong)pbVar26 < 4) {
LAB_14030fed3:
                  local_118 = 8;
                  lVar18 = local_f8;
                  uVar19 = local_d0;
                  goto LAB_140310071;
                }
                bVar4 = pbVar26[1];
                bVar5 = *pbVar26;
                pbVar25 = pbVar26 + 4;
                bVar6 = pbVar26[2];
                bVar7 = pbVar26[3];
                uVar24 = (uint)CONCAT11(bVar6,bVar7);
                lVar20 = 0;
                if ((bVar6 & 0x40) == 0) {
                  lVar20 = *(longlong *)(puVar34 + 0x1e);
                }
                if ((char)bVar6 < '\0') {
                  if ((uint)((int)plVar11[8] - (int)pbVar25) < *puVar34 * 2) goto LAB_14030fed3;
                  uVar29 = 0;
                  if (*puVar34 != 0) {
                    uVar17 = 0;
                    pbVar26 = pbVar25;
                    do {
                      pbVar25 = pbVar26 + 2;
                      *(uint *)(local_d0 + uVar17 * 4) =
                           ((int)(short)((ushort)*pbVar26 << 8) | (uint)pbVar26[1]) << 2;
                      uVar30 = (int)uVar17 + 1;
                      uVar17 = (ulonglong)uVar30;
                      uVar29 = *puVar34;
                      pbVar26 = pbVar25;
                    } while (uVar30 < uVar29);
                  }
                  lVar20 = 0;
                  uVar17 = local_d0;
LAB_14030f982:
                  if ((bVar6 & 0x40) != 0) {
                    if ((uint)((int)plVar11[8] - (int)pbVar25) < uVar29 * 4) goto LAB_14030fed3;
                    uVar19 = 0;
                    pbVar26 = pbVar25;
                    if (uVar29 != 0) {
                      do {
                        pbVar25 = pbVar26 + 2;
                        *(uint *)(local_90 + uVar19 * 4) =
                             ((int)(short)((ushort)*pbVar26 << 8) | (uint)pbVar26[1]) << 2;
                        uVar29 = (int)uVar19 + 1;
                        uVar19 = (ulonglong)uVar29;
                        pbVar26 = pbVar25;
                      } while (uVar29 < *puVar34);
                      uVar19 = 0;
                      if (*puVar34 != 0) {
                        do {
                          pbVar25 = pbVar26 + 2;
                          *(uint *)(local_98 + uVar19 * 4) =
                               ((int)(short)((ushort)*pbVar26 << 8) | (uint)pbVar26[1]) << 2;
                          uVar29 = (int)uVar19 + 1;
                          uVar19 = (ulonglong)uVar29;
                          pbVar26 = pbVar25;
                        } while (uVar29 < *puVar34);
                      }
                    }
                  }
                  local_100 = FUN_1403103e0(puVar34,CONCAT11(bVar6,bVar7),uVar17,local_90,local_98);
                  if (lVar20 != 0) {
                    *(int *)(lVar20 + (ulonglong)(uVar24 & 0xfff) * 4) = local_100;
                  }
                }
                else {
                  if (puVar34[0x1a] <= (uVar24 & 0xfff)) goto LAB_14030fed3;
                  if ((lVar20 == 0) ||
                     (local_100 = *(int *)(lVar20 + (ulonglong)(uVar24 & 0xfff) * 4),
                     local_100 == -0x20000)) {
                    uVar29 = *puVar34;
                    uVar17 = *(longlong *)(puVar34 + 0x1c) +
                             (ulonglong)((uVar24 & 0xfff) * uVar29) * 4;
                    goto LAB_14030f982;
                  }
                }
                local_c0 = (uint)CONCAT11(bVar5,bVar4);
                auVar36._4_4_ = local_100;
                auVar36._0_4_ = local_100;
                if (local_100 != 0) {
                  uVar24 = (int)plVar11[7] - (int)*plVar11;
                  if (local_110 < (uint)((int)plVar11[8] - (int)*plVar11)) {
                    lVar20 = (ulonglong)local_110 + *plVar11;
                  }
                  else {
                    lVar20 = plVar11[8];
                  }
                  plVar11[7] = lVar20;
                  if ((bVar6 >> 5 & 1) == 0) {
                    local_ec = local_f0;
                    lVar20 = local_c8;
                  }
                  else {
                    local_a0 = FUN_1403114e0(plVar11,&local_ec);
                    lVar20 = local_a0;
                  }
                  uVar30 = local_ec;
                  uVar29 = local_ec;
                  if (local_ec == 0) {
                    uVar29 = uVar28;
                  }
                  uVar17 = FUN_140311370(plVar11,uVar29);
                  uVar19 = FUN_140311370(plVar11);
                  if (((lVar20 != 0) && (uVar19 != 0)) && (uVar17 != 0)) {
                    if (lVar20 == -1) {
                      if (uVar28 != 0) {
                        uVar33 = 0;
                        uVar32 = 0;
                        uVar27 = uVar33;
                        if ((1 < uVar28) && (5 < DAT_1404dc008)) {
                          uVar21 = (ulonglong)(uVar12 + 3);
                          uVar1 = local_d8 + (ulonglong)(uVar12 + 3) * 4;
                          uVar23 = uVar21 * 4 + local_108;
                          if (((((uVar23 < local_d8) || (uVar1 < local_108)) &&
                               ((uVar2 = uVar19 + uVar21 * 4, uVar27 = uVar32, uVar2 < local_d8 ||
                                (uVar1 < uVar19)))) &&
                              ((uVar32 = uVar17 + uVar21 * 4, uVar32 < local_d8 || (uVar1 < uVar17))
                              )) && (((uVar2 < local_108 || (uVar23 < uVar19)) &&
                                     ((uVar32 < local_108 || (uVar23 < uVar17)))))) {
                            auVar36._8_8_ = 0;
                            in_XMM4 = pmovsxdq(in_XMM4,auVar36);
                            do {
                              auVar39 = pmovsxdq(in_ZMM1._0_16_,*(undefined8 *)(uVar17 + uVar33 * 4)
                                                );
                              auVar36 = vpmullq_avx512vl(auVar39,in_XMM4);
                              auVar39 = pmovsxdq(auVar39,*(undefined8 *)(uVar19 + uVar33 * 4));
                              auVar39 = vpmullq_avx512vl(auVar39,in_XMM4);
                              auVar35 = vpsraq_avx512vl(auVar36,0x3f);
                              auVar37._0_8_ = auVar35._0_8_ + auVar36._0_8_ + lVar18;
                              auVar37._8_8_ = auVar35._8_8_ + auVar36._8_8_ + lVar13;
                              auVar36 = vpsraq_avx512vl(auVar37,0x10);
                              uVar38 = *(undefined8 *)(local_108 + uVar33 * 4);
                              auVar36 = pshufb(auVar36,auVar14);
                              *(ulonglong *)(local_108 + uVar33 * 4) =
                                   CONCAT44(auVar36._4_4_ + (int)((ulonglong)uVar38 >> 0x20),
                                            auVar36._0_4_ + (int)uVar38);
                              auVar36 = vpsraq_avx512vl(auVar39,0x3f);
                              auVar35._0_8_ = auVar36._0_8_ + auVar39._0_8_ + lVar18;
                              auVar35._8_8_ = auVar36._8_8_ + auVar39._8_8_ + lVar13;
                              auVar36 = vpsraq_avx512vl(auVar35,0x10);
                              uVar38 = *(undefined8 *)(local_d8 + uVar33 * 4);
                              auVar36 = pshufb(auVar36,auVar14);
                              uVar38 = CONCAT44(auVar36._4_4_ + (int)((ulonglong)uVar38 >> 0x20),
                                                auVar36._0_4_ + (int)uVar38);
                              in_ZMM1 = ZEXT1664(CONCAT412(auVar36._12_4_,
                                                           CONCAT48(auVar36._8_4_,uVar38)));
                              *(undefined8 *)(local_d8 + uVar33 * 4) = uVar38;
                              uVar29 = (int)uVar33 + 2;
                              uVar33 = (ulonglong)uVar29;
                            } while (uVar29 < (uVar28 & 0xfffffffe));
                            uVar27 = uVar33;
                            if (uVar28 <= uVar29) goto LAB_14030fdf9;
                          }
                        }
                        do {
                          lVar20 = uVar27 * 4;
                          lVar22 = uVar27 * 4;
                          uVar29 = (int)uVar27 + 1;
                          uVar27 = (ulonglong)uVar29;
                          iVar8 = *(int *)(local_d8 + lVar22);
                          lVar20 = (longlong)*(int *)(uVar17 + lVar20) * (longlong)local_100;
                          lVar31 = (longlong)*(int *)(uVar19 + lVar22) * (longlong)local_100;
                          *(int *)(lVar22 + local_108) =
                               *(int *)(lVar22 + local_108) +
                               (int)((ulonglong)(lVar20 + (lVar20 >> 0x3f) + 0x8000) >> 0x10);
                          *(int *)(local_d8 + lVar22) =
                               (int)((ulonglong)(lVar31 + 0x8000 + (lVar31 >> 0x3f)) >> 0x10) +
                               iVar8;
                        } while (uVar29 < uVar28);
                      }
                    }
                    else {
                      uVar27 = 0;
                      if (uVar28 != 0) {
                        do {
                          *(undefined1 *)(local_b8 + uVar27) = 0;
                          lVar22 = uVar27 * 8;
                          uVar29 = (int)uVar27 + 1;
                          uVar27 = (ulonglong)uVar29;
                          *(undefined8 *)(local_e0 + lVar22) = *(undefined8 *)(lVar22 + local_b0);
                          puVar34 = local_a8;
                        } while (uVar29 < uVar28);
                      }
                      uVar27 = 0;
                      if (uVar30 != 0) {
                        do {
                          uVar15 = *(ushort *)(lVar20 + uVar27 * 2);
                          if (uVar15 < uVar28) {
                            *(undefined1 *)((ulonglong)uVar15 + local_b8) = 1;
                            piVar3 = (int *)(local_e0 + (ulonglong)uVar15 * 8);
                            lVar22 = (longlong)*(int *)(uVar17 + uVar27 * 4) * (longlong)local_100;
                            *piVar3 = *piVar3 + (int)((ulonglong)
                                                      (lVar22 + (lVar22 >> 0x3f) + 0x8000) >> 0x10);
                            lVar22 = (longlong)*(int *)(uVar19 + uVar27 * 4) * (longlong)local_100;
                            piVar3[1] = piVar3[1] +
                                        (int)((ulonglong)(lVar22 + 0x8000 + (lVar22 >> 0x3f)) >>
                                             0x10);
                          }
                          uVar29 = (int)uVar27 + 1;
                          uVar27 = (ulonglong)uVar29;
                          puVar34 = local_a8;
                        } while (uVar29 < uVar30);
                      }
                      FUN_140313bd0(param_2,local_e0,local_b0);
                      uVar27 = 0;
                      if (uVar28 != 0) {
                        do {
                          iVar8 = *(int *)(local_e0 + 4 + uVar27 * 8);
                          lVar22 = uVar27 * 4;
                          lVar20 = uVar27 * 8;
                          lVar31 = uVar27 * 8;
                          iVar9 = *(int *)(lVar31 + 4 + local_b0);
                          uVar29 = (int)uVar27 + 1;
                          uVar27 = (ulonglong)uVar29;
                          iVar10 = *(int *)(local_d8 + lVar22);
                          *(int *)(lVar22 + local_108) =
                               *(int *)(lVar22 + local_108) +
                               (*(int *)(local_e0 + lVar20) - *(int *)(lVar31 + local_b0));
                          *(int *)(local_d8 + lVar22) = iVar10 + (iVar8 - iVar9);
                          puVar34 = local_a8;
                        } while (uVar29 < uVar28);
                      }
                    }
                  }
LAB_14030fdf9:
                  lVar20 = local_f8;
                  uVar27 = local_108;
                  if (local_a0 != -1) {
                    FUN_1402f7f90(local_f8,local_a0);
                    local_a0 = 0;
                  }
                  FUN_1402f7f90(lVar20,uVar17);
                  FUN_1402f7f90(lVar20,uVar19);
                  if (uVar24 < (uint)((int)plVar11[8] - (int)*plVar11)) {
                    lVar20 = (ulonglong)uVar24 + *plVar11;
                  }
                  else {
                    lVar20 = plVar11[8];
                  }
                  plVar11[7] = lVar20;
                }
                local_110 = local_110 + local_c0;
                local_114 = local_114 + 1;
                pbVar26 = pbVar25;
                uVar19 = local_d0;
              } while (local_114 < local_e8);
            }
            if ((*(byte *)(local_88 + 0x410) & 2) != 0) {
              *(undefined4 *)(uVar27 + (ulonglong)(local_e4 & 0xffff) * 4) = 0;
              *(undefined4 *)(local_d8 + (ulonglong)(local_e4 & 0xffff) * 4) = 0;
              *(undefined4 *)(uVar27 + (ulonglong)(uVar12 + 1) * 4) = 0;
              *(undefined4 *)(local_d8 + (ulonglong)(uVar12 + 1) * 4) = 0;
            }
            if ((*(byte *)(local_88 + 0x410) & 0x10) != 0) {
              *(undefined4 *)(uVar27 + (ulonglong)(uVar12 + 2) * 4) = 0;
              *(undefined4 *)(local_d8 + (ulonglong)(uVar12 + 2) * 4) = 0;
              *(undefined4 *)(uVar27 + (ulonglong)(uVar12 + 3) * 4) = 0;
              *(undefined4 *)(local_d8 + (ulonglong)(uVar12 + 3) * 4) = 0;
            }
            uVar17 = 0;
            if (uVar28 != 0) {
              do {
                lVar18 = uVar17 * 8;
                lVar13 = uVar17 * 4;
                uVar24 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar24;
                *(int *)(lVar18 + param_3) =
                     *(int *)(lVar18 + param_3) + (*(int *)(lVar13 + uVar27) + 0x200 >> 10);
                piVar3 = (int *)(lVar18 + 4 + param_3);
                *piVar3 = *piVar3 + (*(int *)(local_d8 + lVar13) + 0x200 >> 10);
                piVar3 = (int *)(*(longlong *)(param_2 + 8) + lVar18);
                *piVar3 = *piVar3 + (int)(short)((uint)(*(int *)(lVar13 + uVar27) + 0x8000) >> 0x10)
                ;
                piVar3 = (int *)(*(longlong *)(param_2 + 8) + 4 + lVar18);
                *piVar3 = *piVar3 + (int)(short)((uint)(*(int *)(local_d8 + lVar13) + 0x8000) >>
                                                0x10);
              } while (uVar24 < uVar28);
            }
            if ((*(byte *)(local_88 + 0x410) & 2) == 0) {
              lVar18 = (ulonglong)(local_e4 & 0xffff) * 8;
              lVar13 = (ulonglong)(uVar12 + 1) * 8;
              param_1[0xb] = *(longlong *)(lVar18 + *(longlong *)(param_2 + 8));
              param_1[0xc] = *(longlong *)(lVar13 + *(longlong *)(param_2 + 8));
              uVar24 = (*(int *)(lVar13 + param_3) - *(int *)(lVar18 + param_3)) + 0x20;
              *(int *)(param_1 + 10) =
                   (int)((uVar24 & 0xffffffc0) + ((int)uVar24 >> 0x1f & 0x3fU)) >> 6;
            }
            lVar18 = local_f8;
            if ((*(byte *)(local_88 + 0x410) & 0x10) == 0) {
              lVar13 = (ulonglong)(uVar12 + 2) * 8;
              lVar20 = (ulonglong)(uVar12 + 3) * 8;
              param_1[0x1f] = *(longlong *)(lVar13 + *(longlong *)(param_2 + 8));
              param_1[0x20] = *(longlong *)(lVar20 + *(longlong *)(param_2 + 8));
              uVar24 = (*(int *)(lVar20 + 4 + param_3) - *(int *)(lVar13 + 4 + param_3)) + 0x20;
              *(int *)((longlong)param_1 + 0xf4) =
                   (int)((uVar24 & 0xffffffc0) + ((int)uVar24 >> 0x1f & 0x3fU)) >> 6;
            }
          }
LAB_140310071:
          if (local_c8 != -1) goto LAB_14031007f;
          goto LAB_14031008a;
        }
        local_118 = 8;
        goto LAB_140310095;
      }
    }
    uVar17 = 0;
  }
  return uVar17;
}

