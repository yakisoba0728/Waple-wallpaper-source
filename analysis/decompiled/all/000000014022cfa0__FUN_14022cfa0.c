// Function: FUN_14022cfa0
// Addr: 14022cfa0
// Size: 5172 bytes


void FUN_14022cfa0(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t _Size;
  code *pcVar6;
  float fVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  int *_Buf2;
  longlong *plVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  int *piVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 local_res10;
  int *local_res18;
  int *local_res20;
  ulonglong *local_c8;
  int *local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  int *local_88;
  int *local_80;
  ulonglong local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  fVar7 = DAT_140492974;
  if (*param_2 != param_2[1]) {
    local_res20 = (int *)param_1[0x39];
    local_70 = (int *)param_1[0x3a];
    local_68 = 0;
    uStack_60 = 0;
    if (local_res20 != local_70) {
      local_res10 = SUB81(param_2,0);
      local_78 = 0xcbf29ce484222325;
      do {
        piVar12 = (int *)*param_2;
        piVar11 = (int *)param_2[1];
        local_80 = piVar11;
        if (piVar12 != piVar11) {
          do {
            iVar8 = *local_res20;
            if (((piVar12[2] == iVar8) && (*piVar12 - 1U < 2)) &&
               (piVar12[1] == *(int *)((longlong)&local_68 + (longlong)iVar8 * 4))) {
              local_88 = piVar12;
              if (iVar8 == 1) {
                uVar23 = *(ulonglong *)(piVar12 + 4);
                piVar11 = piVar12 + 6;
                *piVar12 = 2;
                uVar24 = *param_1;
                plVar19 = *(longlong **)(uVar24 + 0x1b00);
                plVar20 = (longlong *)*plVar19;
                plVar9 = plVar20;
                local_b8 = uVar24;
                local_a8 = uVar23;
                if (plVar20 == plVar19) {
                  puVar28 = (ulonglong *)0x0;
                  local_b0 = (ulonglong *)0x0;
                  local_98 = (ulonglong *)0x0;
                }
                else {
                  do {
                    piVar29 = (int *)plVar9[2];
                    if (*(ulonglong *)(piVar29 + 4) == uVar23) {
                      piVar17 = piVar29 + 6;
                      _Buf2 = piVar11;
                      if (0xf < *(ulonglong *)(piVar12 + 0xc)) {
                        _Buf2 = *(int **)piVar11;
                      }
                      _Size = *(size_t *)(piVar29 + 10);
                      if (0xf < *(ulonglong *)(piVar29 + 0xc)) {
                        piVar17 = *(int **)piVar17;
                      }
                      uVar23 = local_a8;
                      if ((_Size == *(size_t *)(piVar12 + 10)) &&
                         ((_Size == 0 ||
                          (iVar8 = memcmp(piVar17,_Buf2,_Size), uVar23 = local_a8, iVar8 == 0)))) {
                        *piVar29 = *piVar29 + 1;
                        piVar29[1] = *(int *)(*(longlong *)(uVar24 + 0x1a60) + 0x144);
                        *(int **)(local_res20 + 2) = piVar29;
                        piVar11 = local_80;
                        goto LAB_14022e2eb;
                      }
                    }
                    plVar9 = (longlong *)*plVar9;
                  } while (plVar9 != plVar19);
                  puVar21 = (ulonglong *)0x0;
                  puVar10 = (ulonglong *)0x0;
                  local_b0 = (ulonglong *)0x0;
                  puVar18 = (ulonglong *)0x0;
                  do {
                    local_res18 = (int *)plVar20[2];
                    puVar28 = puVar18;
                    if (*local_res18 == 0) {
                      if (puVar21 == puVar10) {
                        uVar23 = (longlong)puVar21 - (longlong)puVar18;
                        if ((longlong)uVar23 >> 3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          FUN_140013050();
                        }
                        local_b0 = (ulonglong *)((longlong)puVar10 - (longlong)puVar18 >> 3);
                        if ((ulonglong *)(0x1fffffffffffffff - ((ulonglong)local_b0 >> 1)) <
                            local_b0) {
LAB_14022e3c3:
                    /* WARNING: Subroutine does not return */
                          FUN_140017370();
                        }
                        local_c0 = (int *)(((longlong)uVar23 >> 3) + 1);
                        piVar12 = (int *)(((ulonglong)local_b0 >> 1) + (longlong)local_b0);
                        piVar29 = local_c0;
                        if (local_c0 <= piVar12) {
                          piVar29 = piVar12;
                        }
                        if ((int *)0x1fffffffffffffff < piVar29) goto LAB_14022e3c3;
                        uVar24 = (longlong)piVar29 * 8;
                        if (uVar24 == 0) {
                          puVar28 = (ulonglong *)0x0;
                        }
                        else if (uVar24 < 0x1000) {
                          puVar28 = (ulonglong *)FUN_14028af20(uVar24);
                        }
                        else {
                          if (uVar24 + 0x27 <= uVar24) goto LAB_14022e3c3;
                          uVar24 = FUN_14028af20();
                          if (uVar24 == 0) goto LAB_14022e339;
                          puVar28 = (ulonglong *)(uVar24 + 0x27 & 0xffffffffffffffe0);
                          puVar28[-1] = uVar24;
                        }
                        *(int **)((longlong)puVar28 + (uVar23 & 0xfffffffffffffff8)) = local_res18;
                        FUN_1404210f0(puVar28,puVar18,uVar23);
                        if (puVar18 != (ulonglong *)0x0) {
                          uVar23 = (longlong)local_b0 * 8;
                          if (0xfff < uVar23) {
                            if (0x1f < (ulonglong)((longlong)puVar18 + (-8 - (longlong)puVar18[-1]))
                               ) goto LAB_14022e339;
                            uVar23 = uVar23 + 0x27;
                            puVar18 = (ulonglong *)puVar18[-1];
                          }
                          thunk_FUN_14028af80(puVar18,uVar23);
                        }
                        puVar10 = puVar28 + (longlong)piVar29;
                        puVar21 = puVar28 + (longlong)local_c0;
                        local_b0 = puVar10;
                      }
                      else {
                        *puVar21 = (ulonglong)local_res18;
                        puVar21 = puVar21 + 1;
                      }
                    }
                    plVar20 = (longlong *)*plVar20;
                    puVar18 = puVar28;
                  } while (plVar20 != plVar19);
                  uVar23 = (longlong)puVar21 - (longlong)puVar28 >> 3;
                  local_98 = puVar28;
                  if (3 < uVar23) {
                    FUN_1401d9fa0(puVar28,puVar21,uVar23,local_res10);
                    uVar23 = local_b8;
                    do {
                      uVar24 = *puVar28;
                      local_a0 = (longlong *)(uVar24 >> 0x20);
                      local_90 = uVar24 >> 0x18;
                      local_c0 = (int *)(uVar24 >> 0x10);
                      local_res18 = (int *)(uVar24 >> 8);
                      if (uVar24 != 0) {
                        FUN_14000d9e0(uVar24 + 0x80);
                        FUN_1401d9d50(uVar24 + 0x68);
                        FUN_140017240(uVar24 + 0x18);
                        thunk_FUN_14028af80(uVar24,0xd8);
                      }
                      lVar16 = *(longlong *)(uVar23 + 0x1b10);
                      uVar25 = ((((((((uVar24 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                                     (ulonglong)local_res18 & 0xff) * 0x100000001b3 ^
                                    (ulonglong)local_c0 & 0xff) * 0x100000001b3 ^ local_90 & 0xff) *
                                   0x100000001b3 ^ (ulonglong)local_a0 & 0xff) * 0x100000001b3 ^
                                 uVar24 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar24 >> 0x30 & 0xff) *
                                0x100000001b3 ^ uVar24 >> 0x38) * 0x100000001b3;
                      uVar27 = uVar25 & *(ulonglong *)(uVar23 + 0x1b28);
                      plVar19 = *(longlong **)(lVar16 + 8 + uVar27 * 0x10);
                      if (plVar19 == *(longlong **)(uVar23 + 0x1b00)) {
LAB_14022dbf1:
                        plVar19 = (longlong *)0x0;
                      }
                      else {
                        uVar15 = plVar19[2];
                        while (uVar24 != uVar15) {
                          if (plVar19 == *(longlong **)(lVar16 + uVar27 * 0x10)) goto LAB_14022dbf1;
                          plVar19 = (longlong *)plVar19[1];
                          uVar15 = plVar19[2];
                        }
                      }
                      if (plVar19 != (longlong *)0x0) {
                        uVar25 = *(ulonglong *)(uVar23 + 0x1b28) & uVar25;
                        plVar20 = *(longlong **)(lVar16 + uVar25 * 0x10);
                        if (*(longlong **)(lVar16 + 8 + uVar25 * 0x10) == plVar19) {
                          if (plVar20 == plVar19) {
                            uVar13 = *(undefined8 *)(uVar23 + 0x1b00);
                            *(undefined8 *)(lVar16 + uVar25 * 0x10) = uVar13;
                            *(undefined8 *)(lVar16 + 8 + uVar25 * 0x10) = uVar13;
                          }
                          else {
                            *(longlong *)(lVar16 + 8 + uVar25 * 0x10) = plVar19[1];
                          }
                        }
                        else if (plVar20 == plVar19) {
                          *(longlong *)(lVar16 + uVar25 * 0x10) = *plVar19;
                        }
                        lVar16 = *plVar19;
                        *(longlong *)(uVar23 + 0x1b08) = *(longlong *)(uVar23 + 0x1b08) + -1;
                        *(longlong *)plVar19[1] = lVar16;
                        *(longlong *)(lVar16 + 8) = plVar19[1];
                        thunk_FUN_14028af80(plVar19,0x18);
                      }
                      FUN_1404210f0(puVar28,puVar28 + 1,(longlong)puVar21 - (longlong)(puVar28 + 1))
                      ;
                      puVar21 = puVar21 + -1;
                    } while (3 < (ulonglong)((longlong)puVar21 - (longlong)puVar28 >> 3));
                  }
                }
                uVar23 = local_b8;
                piVar12 = (int *)FUN_14028af20(0xd8);
                piVar29 = local_88;
                piVar12[0] = 0;
                piVar12[1] = 0;
                piVar12[2] = 0;
                piVar12[6] = 0;
                piVar12[7] = 0;
                piVar12[8] = 0;
                piVar12[9] = 0;
                piVar12[10] = 0;
                piVar12[0xb] = 0;
                piVar12[0xc] = 0xf;
                piVar12[0xd] = 0;
                *(undefined1 *)(piVar12 + 6) = 0;
                piVar12[0xe] = 0;
                piVar12[0xf] = 0;
                piVar12[0x10] = 0;
                piVar12[0x11] = 0;
                piVar12[0x12] = 0;
                piVar12[0x13] = 0;
                piVar12[0x14] = 0;
                piVar12[0x15] = 0;
                piVar12[0x16] = 0x3f800000;
                piVar12[0x17] = 0;
                piVar12[0x18] = 0;
                piVar12[0x1a] = 0;
                piVar12[0x1b] = 0;
                piVar12[0x1c] = 0;
                piVar12[0x1d] = 0;
                piVar12[0x1e] = 0;
                piVar12[0x1f] = 0;
                piVar12[0x20] = 0;
                piVar12[0x21] = 0;
                piVar12[0x22] = 0;
                piVar12[0x23] = 0;
                piVar12[0x24] = 0;
                piVar12[0x25] = 0;
                *piVar12 = 1;
                *(ulonglong *)(piVar12 + 4) = local_a8;
                local_res18 = piVar12;
                local_c0 = piVar12;
                if (piVar12 != local_88) {
                  piVar17 = piVar11;
                  if (0xf < *(ulonglong *)(local_88 + 0xc)) {
                    piVar17 = *(int **)piVar11;
                  }
                  FUN_14000f880(piVar12 + 6,piVar17,*(undefined8 *)(local_88 + 10));
                }
                piVar12[1] = *(int *)(*(longlong *)(uVar23 + 0x1a60) + 0x144);
                if (*(longlong *)(piVar29 + 10) != 0) {
                  if (0xf < *(ulonglong *)(piVar29 + 0xc)) {
                    piVar11 = *(int **)piVar11;
                  }
                  uVar13 = FUN_14014cf90(*(longlong *)(uVar23 + 0x1a60) + 0x1520,piVar11,0);
                  *(undefined8 *)(piVar12 + 0x10) = uVar13;
                }
                puVar22 = *(undefined8 **)(uVar23 + 0x1b00);
                local_a0 = (longlong *)(uVar23 + 0x1b10);
                uVar24 = (((((((((ulonglong)piVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               (ulonglong)local_res18 >> 8 & 0xff) * 0x100000001b3 ^
                              (ulonglong)local_res18 >> 0x10 & 0xff) * 0x100000001b3 ^
                             (ulonglong)local_res18 >> 0x18 & 0xff) * 0x100000001b3 ^
                            (ulonglong)local_res18 >> 0x20 & 0xff) * 0x100000001b3 ^
                           (ulonglong)local_res18 >> 0x28 & 0xff) * 0x100000001b3 ^
                          (ulonglong)local_res18 >> 0x30 & 0xff) * 0x100000001b3 ^
                         (ulonglong)local_res18 >> 0x38) * 0x100000001b3;
                uVar27 = uVar24 & *(ulonglong *)(uVar23 + 0x1b28);
                puVar1 = *(undefined8 **)(*local_a0 + 8 + uVar27 * 0x10);
                local_90 = uVar24;
                if (puVar1 == puVar22) {
LAB_14022debf:
                  if (*(longlong *)(uVar23 + 0x1b08) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
                    FUN_14028c2e0("unordered_map/set too long");
                  }
                  local_res18 = (int *)FUN_14028af20(0x18);
                  *(int **)(local_res18 + 4) = piVar12;
                  fVar31 = (float)(*(longlong *)(uVar23 + 0x1b08) + 1);
                  uVar27 = *(ulonglong *)(uVar23 + 0x1b30);
                  if (*(float *)(uVar23 + 0x1af8) < fVar31 / (float)uVar27) {
                    fVar31 = (float)FUN_140419fa0(fVar31 / *(float *)(uVar23 + 0x1af8));
                    lVar16 = 0;
                    if ((fVar7 <= fVar31) && (fVar31 = fVar31 - fVar7, fVar31 < fVar7)) {
                      lVar16 = -0x8000000000000000;
                    }
                    uVar25 = 8;
                    if (8 < (ulonglong)((longlong)fVar31 + lVar16)) {
                      uVar25 = (longlong)fVar31 + lVar16;
                    }
                    uVar15 = uVar27;
                    if ((uVar27 < uVar25) &&
                       ((0x1ff < uVar27 || (uVar15 = uVar27 * 8, uVar27 * 8 < uVar25)))) {
                      uVar15 = uVar25;
                    }
                    for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                    if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < uVar15) {
                    /* WARNING: Subroutine does not return */
                      FUN_14028c2e0("invalid hash bucket count");
                    }
                    plVar19 = *(longlong **)(uVar23 + 0x1b00);
                    uVar27 = uVar15 - 1 | 1;
                    lVar16 = 0x3f;
                    if (uVar27 != 0) {
                      for (; uVar27 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    bVar14 = (char)lVar16 + 1;
                    lVar16 = 1L << (bVar14 & 0x3f);
                    FUN_14004f190(uVar23 + 0x1b10,2L << (bVar14 & 0x3f),plVar19);
                    *(longlong *)(uVar23 + 0x1b30) = lVar16;
                    *(longlong *)(uVar23 + 0x1b28) = lVar16 + -1;
                    plVar20 = (longlong *)**(undefined8 **)(uVar23 + 0x1b00);
joined_r0x00014022e02f:
                    if (plVar20 != plVar19) {
                      plVar9 = (longlong *)*plVar20;
                      lVar16 = *local_a0;
                      uVar27 = ((((((((*(byte *)(plVar20 + 2) ^ local_78) * 0x100000001b3 ^
                                     (ulonglong)*(byte *)((longlong)plVar20 + 0x11)) * 0x100000001b3
                                    ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x12)) *
                                    0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x13))
                                   * 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x14))
                                  * 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x15))
                                 * 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x16)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x17)) *
                               0x100000001b3 & *(ulonglong *)(local_b8 + 0x1b28);
                      plVar26 = *(longlong **)(lVar16 + uVar27 * 0x10);
                      uVar23 = local_b8;
                      uVar24 = local_90;
                      piVar12 = local_c0;
                      if (plVar26 == plVar19) {
                        *(longlong **)(lVar16 + uVar27 * 0x10) = plVar20;
                        *(longlong **)(lVar16 + 8 + uVar27 * 0x10) = plVar20;
                        plVar20 = plVar9;
                      }
                      else {
                        plVar2 = *(longlong **)(lVar16 + 8 + uVar27 * 0x10);
                        if (plVar20[2] == plVar2[2]) {
                          plVar2 = (longlong *)*plVar2;
                          if (plVar2 != plVar20) {
                            plVar26 = (longlong *)plVar20[1];
                            *plVar26 = (longlong)plVar9;
                            puVar1 = (undefined8 *)plVar9[1];
                            *puVar1 = plVar2;
                            puVar22 = (undefined8 *)plVar2[1];
                            *puVar22 = plVar20;
                            plVar2[1] = (longlong)puVar1;
                            plVar9[1] = (longlong)plVar26;
                            plVar20[1] = (longlong)puVar22;
                          }
                          *(longlong **)(lVar16 + 8 + uVar27 * 0x10) = plVar20;
                          plVar20 = plVar9;
                        }
                        else {
                          do {
                            if (plVar26 == plVar2) {
                              plVar26 = (longlong *)plVar20[1];
                              *plVar26 = (longlong)plVar9;
                              puVar1 = (undefined8 *)plVar9[1];
                              *puVar1 = plVar2;
                              puVar22 = (undefined8 *)plVar2[1];
                              *puVar22 = plVar20;
                              plVar2[1] = (longlong)puVar1;
                              plVar9[1] = (longlong)plVar26;
                              plVar20[1] = (longlong)puVar22;
                              *(longlong **)(lVar16 + uVar27 * 0x10) = plVar20;
                              plVar20 = plVar9;
                              goto joined_r0x00014022e02f;
                            }
                            plVar2 = (longlong *)plVar2[1];
                          } while (plVar20[2] != plVar2[2]);
                          lVar16 = *plVar2;
                          plVar26 = (longlong *)plVar20[1];
                          *plVar26 = (longlong)plVar9;
                          plVar2 = (longlong *)plVar9[1];
                          *plVar2 = lVar16;
                          puVar1 = *(undefined8 **)(lVar16 + 8);
                          *puVar1 = plVar20;
                          *(longlong **)(lVar16 + 8) = plVar2;
                          plVar9[1] = (longlong)plVar26;
                          plVar20[1] = (longlong)puVar1;
                          plVar20 = plVar9;
                        }
                      }
                      goto joined_r0x00014022e02f;
                    }
                    local_a0 = (longlong *)0x0;
                    FUN_14005b0e0(&local_a0);
                    uVar27 = uVar24 & *(ulonglong *)(uVar23 + 0x1b28);
                    puVar22 = *(undefined8 **)(uVar23 + 0x1b00);
                    puVar1 = *(undefined8 **)(*(longlong *)(uVar23 + 0x1b10) + 8 + uVar27 * 0x10);
                    if (puVar1 != puVar22) {
                      lVar16 = puVar1[2];
                      puVar22 = puVar1;
                      while (*(longlong *)(local_res18 + 4) != lVar16) {
                        if (puVar22 ==
                            *(undefined8 **)(*(longlong *)(uVar23 + 0x1b10) + uVar27 * 0x10))
                        goto LAB_14022e1f6;
                        puVar22 = (undefined8 *)puVar22[1];
                        lVar16 = puVar22[2];
                      }
                      puVar22 = (undefined8 *)*puVar22;
                    }
                  }
LAB_14022e1f6:
                  puVar1 = (undefined8 *)puVar22[1];
                  *(longlong *)(uVar23 + 0x1b08) = *(longlong *)(uVar23 + 0x1b08) + 1;
                  *(undefined8 **)local_res18 = puVar22;
                  *(undefined8 **)(local_res18 + 2) = puVar1;
                  *puVar1 = local_res18;
                  puVar22[1] = local_res18;
                  uVar24 = uVar24 & *(ulonglong *)(uVar23 + 0x1b28);
                  lVar16 = *(longlong *)(uVar23 + 0x1b10);
                  puVar5 = *(undefined8 **)(lVar16 + uVar24 * 0x10);
                  if (puVar5 == *(undefined8 **)(uVar23 + 0x1b00)) {
                    *(int **)(lVar16 + uVar24 * 0x10) = local_res18;
LAB_14022e27c:
                    *(int **)(lVar16 + 8 + uVar24 * 0x10) = local_res18;
                  }
                  else if (puVar5 == puVar22) {
                    *(int **)(lVar16 + uVar24 * 0x10) = local_res18;
                  }
                  else if (*(undefined8 **)(lVar16 + 8 + uVar24 * 0x10) == puVar1)
                  goto LAB_14022e27c;
                }
                else {
                  piVar11 = (int *)puVar1[2];
                  puVar22 = puVar1;
                  while (piVar12 != piVar11) {
                    if (puVar22 == *(undefined8 **)(*local_a0 + uVar27 * 0x10)) goto LAB_14022debf;
                    puVar22 = (undefined8 *)puVar22[1];
                    piVar11 = (int *)puVar22[2];
                  }
                }
                if (puVar28 != (ulonglong *)0x0) {
                  uVar23 = ((longlong)local_b0 - (longlong)puVar28 >> 3) * 8;
                  if (0xfff < uVar23) {
                    if (0x1f < (ulonglong)((longlong)puVar28 + (-8 - (longlong)local_98[-1]))) {
LAB_14022e339:
                      pcVar6 = (code *)swi(0x29);
                      (*pcVar6)(5);
                      return;
                    }
                    uVar23 = uVar23 + 0x27;
                    puVar28 = (ulonglong *)local_98[-1];
                  }
                  thunk_FUN_14028af80(puVar28,uVar23);
                }
                *(int **)(local_res20 + 2) = piVar12;
                piVar11 = local_80;
                piVar12 = local_88;
              }
              else if (iVar8 == 3) {
                local_c0 = *(int **)(piVar12 + 4);
                *piVar12 = 2;
                local_res18 = (int *)*param_1;
                plVar19 = *(longlong **)(local_res18 + 0x6d0);
                plVar20 = (longlong *)*plVar19;
                plVar9 = plVar20;
                if (plVar20 == plVar19) {
                  puVar10 = (ulonglong *)0x0;
                  puVar28 = (ulonglong *)0x0;
                }
                else {
                  do {
                    piVar29 = (int *)plVar9[2];
                    if (*(int **)(piVar29 + 4) == local_c0) {
                      *piVar29 = *piVar29 + 1;
                      piVar29[1] = *(int *)(*(longlong *)(local_res18 + 0x698) + 0x144);
                      *(int **)(local_res20 + 4) = piVar29;
                      goto LAB_14022e2eb;
                    }
                    plVar9 = (longlong *)*plVar9;
                  } while (plVar9 != plVar19);
                  puVar21 = (ulonglong *)0x0;
                  puVar28 = (ulonglong *)0x0;
                  local_c8 = (ulonglong *)0x0;
                  puVar18 = (ulonglong *)0x0;
                  do {
                    local_98 = (ulonglong *)plVar20[2];
                    puVar10 = puVar18;
                    if ((int)*local_98 == 0) {
                      if (puVar21 == puVar28) {
                        uVar23 = (longlong)puVar21 - (longlong)puVar18;
                        if ((longlong)uVar23 >> 3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          FUN_140013050();
                        }
                        uVar24 = ((longlong)uVar23 >> 3) + 1;
                        uVar27 = (longlong)puVar28 - (longlong)puVar18 >> 3;
                        if (0x1fffffffffffffff - (uVar27 >> 1) < uVar27) {
                          uVar15 = 0x1fffffffffffffff;
                        }
                        else {
                          uVar25 = (uVar27 >> 1) + uVar27;
                          uVar15 = uVar24;
                          if (uVar24 <= uVar25) {
                            uVar15 = uVar25;
                          }
                          if (0x1fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
                            FUN_140017370();
                          }
                        }
                        local_a8 = uVar15 * 8;
                        puVar10 = (ulonglong *)FUN_140017390(local_a8);
                        *(ulonglong **)((longlong)puVar10 + (uVar23 & 0xfffffffffffffff8)) =
                             local_98;
                        uVar30 = FUN_1404210f0(puVar10,puVar18,uVar23);
                        if (puVar18 != (ulonglong *)0x0) {
                          FUN_140037480(uVar30,puVar18,uVar27);
                        }
                        puVar28 = (ulonglong *)(local_a8 + (longlong)puVar10);
                        puVar21 = puVar10 + uVar24;
                        local_c8 = puVar28;
                      }
                      else {
                        *puVar21 = (ulonglong)local_98;
                        puVar21 = puVar21 + 1;
                      }
                    }
                    plVar20 = (longlong *)*plVar20;
                    puVar18 = puVar10;
                  } while (plVar20 != plVar19);
                  uVar23 = (longlong)puVar21 - (longlong)puVar10 >> 3;
                  if (3 < uVar23) {
                    FUN_1401d9fa0(puVar10,puVar21,uVar23,local_res10);
                    piVar12 = local_res18;
                    do {
                      uVar23 = *puVar10;
                      local_90 = uVar23 >> 0x28;
                      local_b8 = uVar23 >> 0x20;
                      local_b0 = (ulonglong *)(uVar23 >> 0x18);
                      local_a8 = uVar23 >> 0x10;
                      local_98 = (ulonglong *)(uVar23 >> 8);
                      if (uVar23 != 0) {
                        FUN_1401d4520(uVar23 + 0x128);
                        FUN_1401d4520(uVar23 + 0x68);
                        FUN_140031b80(uVar23 + 0x50);
                        FUN_1401d9410(uVar23 + 0x38);
                        FUN_1401d9410(uVar23 + 0x20);
                        thunk_FUN_14028af80(uVar23,0x1e8);
                      }
                      uVar24 = ((((((((uVar23 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                                     (ulonglong)local_98 & 0xff) * 0x100000001b3 ^ local_a8 & 0xff)
                                    * 0x100000001b3 ^ (ulonglong)local_b0 & 0xff) * 0x100000001b3 ^
                                  local_b8 & 0xff) * 0x100000001b3 ^ local_90 & 0xff) *
                                 0x100000001b3 ^ uVar23 >> 0x30 & 0xff) * 0x100000001b3 ^
                               uVar23 >> 0x38) * 0x100000001b3 & *(ulonglong *)(piVar12 + 0x6da);
                      plVar19 = *(longlong **)(*(longlong *)(piVar12 + 0x6d4) + 8 + uVar24 * 0x10);
                      if (plVar19 == *(longlong **)(piVar12 + 0x6d0)) {
LAB_14022d363:
                        plVar19 = (longlong *)0x0;
                      }
                      else {
                        uVar27 = plVar19[2];
                        while (uVar23 != uVar27) {
                          if (plVar19 ==
                              *(longlong **)(*(longlong *)(piVar12 + 0x6d4) + uVar24 * 0x10))
                          goto LAB_14022d363;
                          plVar19 = (longlong *)plVar19[1];
                          uVar27 = plVar19[2];
                        }
                      }
                      if (plVar19 != (longlong *)0x0) {
                        FUN_1401dc3b0(piVar12 + 0x6ce,plVar19);
                        lVar16 = *plVar19;
                        *(longlong *)(piVar12 + 0x6d2) = *(longlong *)(piVar12 + 0x6d2) + -1;
                        *(longlong *)plVar19[1] = lVar16;
                        *(longlong *)(lVar16 + 8) = plVar19[1];
                        thunk_FUN_14028af80(plVar19,0x18);
                      }
                      FUN_1404210f0(puVar10,puVar10 + 1,(longlong)puVar21 - (longlong)(puVar10 + 1))
                      ;
                      puVar21 = puVar21 + -1;
                      puVar28 = local_c8;
                    } while (3 < (ulonglong)((longlong)puVar21 - (longlong)puVar10 >> 3));
                  }
                }
                piVar12 = local_res18;
                piVar11 = (int *)FUN_14028af20(0x1e8);
                piVar11[1] = 0;
                piVar11[2] = 0;
                piVar11[6] = 0;
                piVar11[7] = 0;
                piVar11[8] = 0;
                piVar11[9] = 0;
                piVar11[10] = 0;
                piVar11[0xb] = 0;
                piVar11[0xc] = 0;
                piVar11[0xd] = 0;
                piVar11[0xe] = 0;
                piVar11[0xf] = 0;
                piVar11[0x10] = 0;
                piVar11[0x11] = 0;
                piVar11[0x12] = 0;
                piVar11[0x13] = 0;
                piVar11[0x14] = 0;
                piVar11[0x15] = 0;
                piVar11[0x16] = 0;
                piVar11[0x17] = 0;
                piVar11[0x18] = 0;
                piVar11[0x19] = 0;
                FUN_1401d44a0(piVar11 + 0x1a);
                FUN_1401d44a0(piVar11 + 0x4a);
                *piVar11 = 1;
                *(int **)(piVar11 + 4) = local_c0;
                iVar8 = *(int *)(*(longlong *)(piVar12 + 0x698) + 0x144);
                piVar11[1] = iVar8;
                local_res18 = piVar11;
                uVar23 = FUN_14007c330(iVar8,&local_res18);
                puVar22 = *(undefined8 **)(piVar12 + 0x6d0);
                uVar24 = uVar23 & *(ulonglong *)(piVar12 + 0x6da);
                lVar16 = uVar24 * 2;
                puVar1 = *(undefined8 **)(*(longlong *)(piVar12 + 0x6d4) + 8 + uVar24 * 0x10);
                if (puVar1 == puVar22) {
LAB_14022d4f5:
                  if (*(longlong *)(piVar12 + 0x6d2) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
                    FUN_14028c2e0("unordered_map/set too long");
                  }
                  local_res18 = (int *)FUN_14028af20(0x18);
                  *(int **)(local_res18 + 4) = piVar11;
                  uVar24 = *(ulonglong *)(piVar12 + 0x6dc);
                  if ((float)piVar12[0x6ce] <
                      (float)(*(longlong *)(piVar12 + 0x6d2) + 1) / (float)uVar24) {
                    fVar31 = (float)FUN_140419fa0((float)(*(longlong *)(piVar12 + 0x6d2) + 1) /
                                                  (float)piVar12[0x6ce]);
                    lVar16 = 0;
                    if ((fVar7 <= fVar31) && (fVar31 = fVar31 - fVar7, fVar31 < fVar7)) {
                      lVar16 = -0x8000000000000000;
                    }
                    uVar27 = 8;
                    if (8 < (ulonglong)((longlong)fVar31 + lVar16)) {
                      uVar27 = (longlong)fVar31 + lVar16;
                    }
                    uVar25 = uVar24;
                    if ((uVar24 < uVar27) &&
                       ((0x1ff < uVar24 || (uVar25 = uVar24 * 8, uVar24 * 8 < uVar27)))) {
                      uVar25 = uVar27;
                    }
                    for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                    if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < uVar25) {
                    /* WARNING: Subroutine does not return */
                      FUN_14028c2e0("invalid hash bucket count");
                    }
                    plVar19 = *(longlong **)(piVar12 + 0x6d0);
                    uVar24 = uVar25 - 1 | 1;
                    lVar16 = 0x3f;
                    if (uVar24 != 0) {
                      for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    bVar14 = (char)lVar16 + 1;
                    lVar16 = 1L << (bVar14 & 0x3f);
                    FUN_14004f190(piVar12 + 0x6d4,2L << (bVar14 & 0x3f),plVar19);
                    *(longlong *)(piVar12 + 0x6dc) = lVar16;
                    *(longlong *)(piVar12 + 0x6da) = lVar16 + -1;
                    plVar20 = (longlong *)**(undefined8 **)(piVar12 + 0x6d0);
joined_r0x00014022d665:
                    if (plVar20 != plVar19) {
                      plVar26 = (longlong *)*plVar20;
                      plVar9 = plVar20 + 2;
                      lVar16 = *(longlong *)(piVar12 + 0x6d4);
                      uVar24 = FUN_14007c330();
                      uVar24 = uVar24 & *(ulonglong *)(piVar12 + 0x6da);
                      plVar2 = *(longlong **)(lVar16 + uVar24 * 0x10);
                      if (plVar2 == plVar19) {
                        *(longlong **)(lVar16 + uVar24 * 0x10) = plVar20;
                        *(longlong **)(lVar16 + 8 + uVar24 * 0x10) = plVar20;
                        plVar20 = plVar26;
                      }
                      else {
                        plVar3 = *(longlong **)(lVar16 + 8 + uVar24 * 0x10);
                        if (*plVar9 == plVar3[2]) {
                          plVar3 = (longlong *)*plVar3;
                          if (plVar3 != plVar20) {
                            puVar1 = (undefined8 *)plVar20[1];
                            *puVar1 = plVar26;
                            puVar22 = (undefined8 *)plVar26[1];
                            *puVar22 = plVar3;
                            puVar5 = (undefined8 *)plVar3[1];
                            *puVar5 = plVar20;
                            plVar3[1] = (longlong)puVar22;
                            plVar26[1] = (longlong)puVar1;
                            plVar20[1] = (longlong)puVar5;
                          }
                          *(longlong **)(lVar16 + 8 + uVar24 * 0x10) = plVar20;
                          plVar20 = plVar26;
                        }
                        else {
                          do {
                            if (plVar2 == plVar3) {
                              puVar1 = (undefined8 *)plVar20[1];
                              *puVar1 = plVar26;
                              puVar22 = (undefined8 *)plVar26[1];
                              *puVar22 = plVar3;
                              puVar5 = (undefined8 *)plVar3[1];
                              *puVar5 = plVar20;
                              plVar3[1] = (longlong)puVar22;
                              plVar26[1] = (longlong)puVar1;
                              plVar20[1] = (longlong)puVar5;
                              *(longlong **)(lVar16 + uVar24 * 0x10) = plVar20;
                              plVar20 = plVar26;
                              goto joined_r0x00014022d665;
                            }
                            plVar3 = (longlong *)plVar3[1];
                          } while (*plVar9 != plVar3[2]);
                          lVar16 = *plVar3;
                          puVar1 = (undefined8 *)plVar20[1];
                          *puVar1 = plVar26;
                          plVar9 = (longlong *)plVar26[1];
                          *plVar9 = lVar16;
                          puVar22 = *(undefined8 **)(lVar16 + 8);
                          *puVar22 = plVar20;
                          *(longlong **)(lVar16 + 8) = plVar9;
                          plVar26[1] = (longlong)puVar1;
                          plVar20[1] = (longlong)puVar22;
                          plVar20 = plVar26;
                        }
                      }
                      goto joined_r0x00014022d665;
                    }
                    local_c0 = (int *)0x0;
                    FUN_14005b0e0(&local_c0);
                    puVar22 = *(undefined8 **)(piVar12 + 0x6d0);
                    puVar1 = *(undefined8 **)
                              (*(longlong *)(piVar12 + 0x6d4) + 8 +
                              (uVar23 & *(ulonglong *)(piVar12 + 0x6da)) * 0x10);
                    if (puVar1 != puVar22) {
                      lVar16 = puVar1[2];
                      puVar22 = puVar1;
                      while (*(longlong *)(local_res18 + 4) != lVar16) {
                        if (puVar22 ==
                            *(undefined8 **)
                             (*(longlong *)(piVar12 + 0x6d4) +
                             (uVar23 & *(ulonglong *)(piVar12 + 0x6da)) * 0x10)) goto LAB_14022d7dd;
                        puVar22 = (undefined8 *)puVar22[1];
                        lVar16 = puVar22[2];
                      }
                      puVar22 = (undefined8 *)*puVar22;
                    }
                  }
LAB_14022d7dd:
                  puVar1 = (undefined8 *)puVar22[1];
                  *(longlong *)(piVar12 + 0x6d2) = *(longlong *)(piVar12 + 0x6d2) + 1;
                  *(undefined8 **)local_res18 = puVar22;
                  *(undefined8 **)(local_res18 + 2) = puVar1;
                  *puVar1 = local_res18;
                  puVar22[1] = local_res18;
                  uVar23 = uVar23 & *(ulonglong *)(piVar12 + 0x6da);
                  lVar4 = *(longlong *)(piVar12 + 0x6d4);
                  lVar16 = uVar23 * 2;
                  puVar5 = *(undefined8 **)(lVar4 + uVar23 * 0x10);
                  if (puVar5 == *(undefined8 **)(piVar12 + 0x6d0)) {
                    *(int **)(lVar4 + uVar23 * 0x10) = local_res18;
LAB_14022d835:
                    *(int **)(lVar4 + 8 + uVar23 * 0x10) = local_res18;
                  }
                  else if (puVar5 == puVar22) {
                    *(int **)(lVar4 + uVar23 * 0x10) = local_res18;
                  }
                  else if (*(undefined8 **)(lVar4 + 8 + uVar23 * 0x10) == puVar1)
                  goto LAB_14022d835;
                }
                else {
                  piVar29 = (int *)puVar1[2];
                  puVar22 = puVar1;
                  while (piVar11 != piVar29) {
                    if (puVar22 == *(undefined8 **)(*(longlong *)(piVar12 + 0x6d4) + uVar24 * 0x10))
                    goto LAB_14022d4f5;
                    puVar22 = (undefined8 *)puVar22[1];
                    piVar29 = (int *)puVar22[2];
                  }
                }
                if (puVar10 != (ulonglong *)0x0) {
                  FUN_140037480(lVar16,puVar10,(longlong)puVar28 - (longlong)puVar10 >> 3);
                }
                *(int **)(local_res20 + 4) = piVar11;
                piVar11 = local_80;
                piVar12 = local_88;
              }
            }
LAB_14022e2eb:
            piVar12 = piVar12 + 0xe;
          } while (piVar12 != piVar11);
        }
        iVar8 = *local_res20;
        local_res20 = local_res20 + 6;
        piVar12 = (int *)((longlong)&local_68 + (longlong)iVar8 * 4);
        *piVar12 = *piVar12 + 1;
      } while (local_res20 != local_70);
    }
  }
  return;
}

