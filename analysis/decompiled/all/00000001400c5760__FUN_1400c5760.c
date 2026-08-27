// Function: FUN_1400c5760
// Addr: 1400c5760
// Size: 3925 bytes


/* WARNING: Removing unreachable block (ram,0x0001400c63a6) */
/* WARNING: Removing unreachable block (ram,0x0001400c63b7) */

undefined1
FUN_1400c5760(longlong param_1,char *param_2,char param_3,ulonglong *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  char *_Str;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 *_Buf1;
  byte bVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *_Buf1_00;
  longlong *plVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  longlong *plVar32;
  undefined8 *******pppppppuVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  uint uVar36;
  undefined4 uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  longlong local_res8;
  char *local_res10;
  char local_res18;
  ulonglong *local_res20;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [40];
  uint local_1c8;
  undefined8 ******local_1c0;
  undefined8 uStack_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 *local_180;
  undefined4 *local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined4 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong *local_120;
  longlong local_118;
  ulonglong local_110;
  undefined4 *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  
  puVar34 = auStack_1f8;
  local_f0 = param_1 + 0x450;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar9 = FUN_140290d80(local_f0);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar15 = (longlong *)(param_1 + 0x938);
  if (*(longlong *)(param_1 + 0x9d0) == 0) {
    uVar10 = FUN_140005ee0(&local_1c0);
    uVar10 = FUN_140005d20(uVar10,&DAT_140473850);
    uVar10 = FUN_140005d20(uVar10,"thumbnail.cache");
    puVar11 = (undefined8 *)FUN_140018ce0(uVar10,local_e8);
    puVar29 = (undefined8 *)(param_1 + 0xa50);
    if (puVar29 != puVar11) {
      puVar26 = puVar11;
      if (0xf < (ulonglong)puVar11[3]) {
        puVar26 = (undefined8 *)*puVar11;
      }
      FUN_14000f880(puVar29,puVar26,puVar11[2]);
    }
    FUN_1400f1120(plVar15,puVar29,0x23);
    if (*(longlong *)(param_1 + 0x9d0) == 0) {
      FUN_1400f1120(plVar15,puVar29,0x33);
    }
    FUN_140017240(local_e8);
    FUN_140016770(&local_1c0);
    puVar35 = auStack_1f8;
    if (*(longlong *)(param_1 + 0x9d0) != 0) goto LAB_1400c58a7;
  }
  else {
LAB_1400c58a7:
    local_1b0 = 0;
    local_1c0 = (undefined8 *******)0x0;
    uStack_1b8 = 0;
    local_1a8 = 0;
    sVar12 = strlen(param_2);
    FUN_140017480(&local_1c0,param_2,sVar12);
    if ((*(longlong *)(param_1 + 0xa70) == 0) && (*(longlong *)(param_1 + 0x9d0) != 0)) {
      FUN_1400f1000(param_1 + 0xa78);
      lVar21 = *(longlong *)(param_1 + 0xa70);
      while (lVar21 != 0) {
        lVar19 = *(longlong *)(lVar21 + 0x3408);
        thunk_FUN_14028af80(lVar21,0x3410);
        lVar21 = lVar19;
      }
      FUN_14004a920(plVar15,0,2);
      FUN_14004a840(plVar15,&local_1a0);
      FUN_14004a920(plVar15,0,0);
      if (7 < local_1a0 + uStack_198) {
        local_150 = 0;
        local_148 = 0;
        FUN_14004aa50(plVar15,&local_150,8);
        iVar9 = FUN_1402c10d0(&local_150,"SHTC0001");
        if (iVar9 == 0) {
          uVar10 = FUN_14028af20(0x3410);
          uVar10 = FUN_1400f0fc0(uVar10);
          *(undefined8 *)(param_1 + 0xa70) = uVar10;
          plVar13 = (longlong *)FUN_14004aa50(plVar15,uVar10,0x3410);
          if (((*(uint *)((longlong)*(int *)(*plVar13 + 4) + 0x10 + (longlong)plVar13) >> 2 & 1) ==
               0) && (0x340f < (ulonglong)(uStack_198 + local_1a0))) {
            lVar21 = *(longlong *)(param_1 + 0xa70);
            uVar36 = *(uint *)(lVar21 + 0x3400);
            if (*(uint *)(lVar21 + 0x3400) != 0) {
              while ((longlong)(ulonglong)uVar36 < uStack_198 + local_1a0) {
                FUN_14004a920(plVar15,(ulonglong)uVar36,0);
                lVar14 = FUN_14028af20(0x3410);
                lVar27 = 0x100;
                lVar19 = lVar14;
                do {
                  *(undefined8 *)(lVar19 + 0x20) = 0;
                  *(undefined8 *)(lVar19 + 0x28) = 0;
                  *(undefined4 *)(lVar19 + 0x30) = 0;
                  lVar19 = lVar19 + 0x34;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                *(undefined4 *)(lVar14 + 0x3400) = 0;
                *(undefined8 *)(lVar14 + 0x3408) = 0;
                *(longlong *)(lVar21 + 0x3408) = lVar14;
                FUN_14004aa50(plVar15,lVar14,0x3410);
                lVar21 = *(longlong *)(lVar21 + 0x3408);
                uVar2 = *(uint *)(lVar21 + 0x3400);
                if ((uVar2 == 0) || (bVar3 = uVar2 <= uVar36, uVar36 = uVar2, bVar3)) break;
              }
            }
            *(undefined8 *)(lVar21 + 0x3408) = 0;
            fVar7 = DAT_140492974;
            _Buf1 = *(undefined4 **)(param_1 + 0xa70);
            local_108 = _Buf1;
            while (local_108 = _Buf1, _Buf1 != (undefined4 *)0x0) {
              local_1c8 = 0;
              do {
                uVar36 = local_1c8;
                puVar25 = _Buf1 + (longlong)(int)local_1c8 * 0xd;
                local_180 = puVar25;
                if ((puVar25[10] == 0) ||
                   (local_1a0 + uStack_198 < (longlong)(ulonglong)(uint)(puVar25[0xb] + puVar25[10])
                   )) break;
                local_130 = 0;
                uStack_138 = 0;
                local_140 = (undefined4 *)0x0;
                local_128 = 0xf;
                local_140 = (undefined4 *)FUN_14028af20();
                uVar37 = puVar25[1];
                uVar5 = puVar25[2];
                uVar6 = puVar25[3];
                local_130 = 0x20;
                local_128 = 0x2f;
                uVar38 = 0xcbf29ce484222325;
                *local_140 = *puVar25;
                local_140[1] = uVar37;
                local_140[2] = uVar5;
                local_140[3] = uVar6;
                local_110 = 0xcbf29ce484222325;
                uVar37 = puVar25[5];
                uVar5 = puVar25[6];
                uVar6 = puVar25[7];
                local_140[4] = puVar25[4];
                local_140[5] = uVar37;
                local_140[6] = uVar5;
                local_140[7] = uVar6;
                *(undefined1 *)(local_140 + 8) = 0;
                uVar20 = 0;
                do {
                  pbVar1 = (byte *)((longlong)local_140 + uVar20);
                  uVar20 = uVar20 + 1;
                  uVar38 = (uVar38 ^ *pbVar1) * 0x100000001b3;
                } while (uVar20 < 0x20);
                local_110 = uVar38;
                FUN_1400110a0((float *)(param_1 + 0xa78),&local_100,&local_140,uVar38);
                plVar15 = local_f8;
                if (local_f8 == (longlong *)0x0) {
                  if (*(longlong *)(param_1 + 0xa88) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                    FUN_14028c2e0("unordered_map/set too long");
                  }
                  plVar15 = (longlong *)FUN_14028af20(0x38);
                  FUN_140016fc0(plVar15 + 2,&local_140);
                  plVar15[6] = 0;
                  fVar40 = *(float *)(param_1 + 0xa78);
                  fVar39 = (float)(*(longlong *)(param_1 + 0xa88) + 1);
                  uVar20 = *(ulonglong *)(param_1 + 0xab0);
                  if (fVar40 < fVar39 / (float)uVar20) {
                    fVar40 = (float)FUN_140419fa0(fVar39 / fVar40);
                    lVar21 = 0;
                    if ((fVar7 <= fVar40) && (fVar40 = fVar40 - fVar7, fVar40 < fVar7)) {
                      lVar21 = -0x8000000000000000;
                    }
                    uVar22 = 8;
                    if (8 < (ulonglong)((longlong)fVar40 + lVar21)) {
                      uVar22 = (longlong)fVar40 + lVar21;
                    }
                    uVar28 = uVar20;
                    if ((uVar20 < uVar22) &&
                       ((0x1ff < uVar20 || (uVar28 = uVar20 * 8, uVar20 * 8 < uVar22)))) {
                      uVar28 = uVar22;
                    }
                    for (lVar21 = 0x3f; 0xfffffffffffffffU >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                    if ((ulonglong)(1L << ((byte)lVar21 & 0x3f)) < uVar28) {
                    /* WARNING: Subroutine does not return */
                      FUN_14028c2e0("invalid hash bucket count");
                    }
                    plVar13 = *(longlong **)(param_1 + 0xa80);
                    uVar20 = uVar28 - 1 | 1;
                    lVar21 = 0x3f;
                    if (uVar20 != 0) {
                      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    bVar18 = (char)lVar21 + 1;
                    lVar21 = 1L << (bVar18 & 0x3f);
                    FUN_14004f190(param_1 + 0xa90,2L << (bVar18 & 0x3f),plVar13);
                    *(longlong *)(param_1 + 0xab0) = lVar21;
                    *(longlong *)(param_1 + 0xaa8) = lVar21 + -1;
                    plVar17 = (longlong *)**(undefined8 **)(param_1 + 0xa80);
joined_r0x0001400c5d46:
                    if (plVar17 != plVar13) {
                      uVar38 = plVar17[5];
                      plVar16 = plVar17 + 2;
                      plVar24 = (longlong *)*plVar17;
                      if (0xf < uVar38) {
                        plVar16 = (longlong *)plVar17[2];
                      }
                      uVar20 = plVar17[4];
                      uVar22 = 0;
                      uVar28 = 0xcbf29ce484222325;
                      if (uVar20 != 0) {
                        do {
                          pbVar1 = (byte *)((longlong)plVar16 + uVar22);
                          uVar22 = uVar22 + 1;
                          uVar28 = (uVar28 ^ *pbVar1) * 0x100000001b3;
                          param_1 = local_res8;
                        } while (uVar22 < uVar20);
                      }
                      local_118 = *(longlong *)(param_1 + 0xa90);
                      uVar28 = *(ulonglong *)(param_1 + 0xaa8) & uVar28;
                      local_120 = *(longlong **)(local_118 + uVar28 * 0x10);
                      if (local_120 == plVar13) {
                        *(longlong **)(local_118 + uVar28 * 0x10) = plVar17;
                        *(longlong **)(local_118 + 8 + uVar28 * 0x10) = plVar17;
                        uVar38 = local_110;
                        plVar17 = plVar24;
                        param_1 = local_res8;
                      }
                      else {
                        plVar32 = *(longlong **)(local_118 + 8 + uVar28 * 0x10);
                        plVar16 = plVar32 + 2;
                        if (0xf < (ulonglong)plVar32[5]) {
                          plVar16 = (longlong *)*plVar16;
                        }
                        plVar23 = plVar17 + 2;
                        if (0xf < uVar38) {
                          plVar23 = (longlong *)plVar17[2];
                        }
                        if (uVar20 == plVar32[4]) {
                          if ((uVar20 != 0) && (iVar9 = memcmp(plVar23,plVar16,uVar20), iVar9 != 0))
                          {
                            uVar38 = plVar17[5];
                            goto LAB_1400c5e55;
                          }
                          plVar32 = (longlong *)*plVar32;
                          if (plVar32 != plVar17) {
                            plVar16 = (longlong *)plVar17[1];
                            *plVar16 = (longlong)plVar24;
                            puVar29 = (undefined8 *)plVar24[1];
                            *puVar29 = plVar32;
                            puVar11 = (undefined8 *)plVar32[1];
                            *puVar11 = plVar17;
                            plVar32[1] = (longlong)puVar29;
                            plVar24[1] = (longlong)plVar16;
                            plVar17[1] = (longlong)puVar11;
                          }
                          *(longlong **)(local_118 + 8 + uVar28 * 0x10) = plVar17;
                          uVar38 = local_110;
                          plVar17 = plVar24;
                          param_1 = local_res8;
                        }
                        else {
LAB_1400c5e55:
                          plVar16 = local_120;
                          if (local_120 != plVar32) {
                            do {
                              plVar32 = (longlong *)plVar32[1];
                              plVar23 = plVar32 + 2;
                              if (0xf < (ulonglong)plVar32[5]) {
                                plVar23 = (longlong *)*plVar23;
                              }
                              if (uVar38 < 0x10) {
                                _Buf1_00 = plVar17 + 2;
                              }
                              else {
                                _Buf1_00 = (longlong *)plVar17[2];
                              }
                              if (uVar20 == plVar32[4]) {
                                if ((uVar20 == 0) ||
                                   (iVar9 = memcmp(_Buf1_00,plVar23,uVar20), iVar9 == 0)) {
                                  lVar21 = *plVar32;
                                  plVar16 = (longlong *)plVar17[1];
                                  *plVar16 = (longlong)plVar24;
                                  plVar32 = (longlong *)plVar24[1];
                                  *plVar32 = lVar21;
                                  puVar29 = *(undefined8 **)(lVar21 + 8);
                                  *puVar29 = plVar17;
                                  *(longlong **)(lVar21 + 8) = plVar32;
                                  plVar24[1] = (longlong)plVar16;
                                  plVar17[1] = (longlong)puVar29;
                                  uVar38 = local_110;
                                  plVar17 = plVar24;
                                  param_1 = local_res8;
                                  goto joined_r0x0001400c5d46;
                                }
                                uVar38 = plVar17[5];
                                plVar16 = local_120;
                              }
                            } while (plVar16 != plVar32);
                          }
                          plVar16 = (longlong *)plVar17[1];
                          *plVar16 = (longlong)plVar24;
                          puVar29 = (undefined8 *)plVar24[1];
                          *puVar29 = plVar32;
                          puVar11 = (undefined8 *)plVar32[1];
                          *puVar11 = plVar17;
                          plVar32[1] = (longlong)puVar29;
                          plVar24[1] = (longlong)plVar16;
                          plVar17[1] = (longlong)puVar11;
                          *(longlong **)(local_118 + uVar28 * 0x10) = plVar17;
                          uVar38 = local_110;
                          plVar17 = plVar24;
                          param_1 = local_res8;
                        }
                      }
                      goto joined_r0x0001400c5d46;
                    }
                    local_158 = 0;
                    FUN_14003a070(&local_158);
                    uVar20 = uVar38 & *(ulonglong *)(param_1 + 0xaa8);
                    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0xa90) + 8 + uVar20 * 0x10);
                    plVar17 = *(longlong **)(param_1 + 0xa80);
                    if (plVar13 != plVar17) {
                      uVar22 = plVar15[5];
                      sVar12 = plVar15[4];
                      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0xa90) + uVar20 * 0x10);
                      plVar17 = plVar13;
                      while( true ) {
                        plVar13 = plVar17 + 2;
                        if (0xf < (ulonglong)plVar17[5]) {
                          plVar13 = (longlong *)*plVar13;
                        }
                        if (uVar22 < 0x10) {
                          plVar24 = plVar15 + 2;
                        }
                        else {
                          plVar24 = (longlong *)plVar15[2];
                        }
                        if ((sVar12 == plVar17[4]) &&
                           ((sVar12 == 0 || (iVar9 = memcmp(plVar24,plVar13,sVar12), iVar9 == 0))))
                        {
                          local_100 = (longlong *)*plVar17;
                          goto LAB_1400c5fb5;
                        }
                        if (plVar17 == plVar16) break;
                        plVar17 = (longlong *)plVar17[1];
                      }
                    }
                    local_100 = plVar17;
                    plVar17 = (longlong *)0x0;
LAB_1400c5fb5:
                    local_f8 = plVar17;
                    _Buf1 = local_108;
                    puVar25 = local_180;
                  }
                  puVar29 = (undefined8 *)local_100[1];
                  *(longlong *)(param_1 + 0xa88) = *(longlong *)(param_1 + 0xa88) + 1;
                  *plVar15 = (longlong)local_100;
                  plVar15[1] = (longlong)puVar29;
                  *puVar29 = plVar15;
                  local_100[1] = (longlong)plVar15;
                  uVar20 = uVar38 & *(ulonglong *)(param_1 + 0xaa8);
                  lVar21 = *(longlong *)(param_1 + 0xa90);
                  plVar13 = *(longlong **)(lVar21 + uVar20 * 0x10);
                  uVar36 = local_1c8;
                  if (plVar13 == *(longlong **)(param_1 + 0xa80)) {
                    *(longlong **)(lVar21 + uVar20 * 0x10) = plVar15;
LAB_1400c602d:
                    *(longlong **)(lVar21 + 8 + uVar20 * 0x10) = plVar15;
                    uVar38 = uVar20 * 2;
                  }
                  else if (plVar13 == local_100) {
                    *(longlong **)(lVar21 + uVar20 * 0x10) = plVar15;
                    uVar38 = uVar20;
                  }
                  else {
                    uVar38 = uVar20 * 2;
                    if (*(undefined8 **)(lVar21 + 8 + uVar20 * 0x10) == puVar29) goto LAB_1400c602d;
                  }
                }
                plVar15[6] = (longlong)puVar25;
                if (0xf < local_128) {
                  uVar20 = local_128 + 1;
                  puVar25 = local_140;
                  if (0xfff < uVar20) {
                    puVar25 = *(undefined4 **)(local_140 + -2);
                    if (0x1f < (ulonglong)((longlong)local_140 + (-8 - (longlong)puVar25)))
                    goto LAB_1400c63bd;
                    uVar20 = local_128 + 0x28;
                  }
                  thunk_FUN_14028af80(puVar25,uVar20);
                }
                local_1c8 = uVar36 + 1;
              } while (local_1c8 < 0x100);
              _Buf1 = *(undefined4 **)(_Buf1 + 0xd02);
              local_108 = _Buf1;
            }
          }
          else {
            uVar10 = 4;
            if (*(longlong *)((longlong)*(int *)(*plVar15 + 4) + 0x980 + param_1) != 0) {
              uVar10 = 0;
            }
            FUN_140013b50(param_1 + 0x938 + (longlong)*(int *)(*plVar15 + 4),uVar10,0);
            thunk_FUN_14028af80(*(undefined8 *)(param_1 + 0xa70),0x3410);
            *(undefined8 *)(param_1 + 0xa70) = 0;
          }
        }
      }
    }
    uVar38 = 0;
    uVar20 = 0xcbf29ce484222325;
    pppppppuVar33 = &local_1c0;
    if (0xf < local_1a8) {
      pppppppuVar33 = (undefined8 *******)local_1c0;
    }
    local_c8 = 0;
    local_c0 = 0;
    local_78 = 0x6a09e667;
    local_74 = 0xbb67ae85;
    local_70 = 0x3c6ef372;
    local_6c = 0xa54ff53a;
    local_68 = 0x510e527f;
    local_64 = 0x9b05688c;
    local_60 = 0x1f83d9ab;
    local_5c = 0x5be0cd19;
    uVar22 = local_1b0;
    if (local_1b0 != 0) {
      for (; 0x3f < uVar22; uVar22 = uVar22 - 0x40) {
        FUN_140141a80(&local_c8,pppppppuVar33);
        local_c8 = local_c8 + 0x40;
        pppppppuVar33 = pppppppuVar33 + 8;
      }
      for (; uVar22 != 0; uVar22 = uVar22 - 1) {
        uVar8 = *(undefined1 *)pppppppuVar33;
        pppppppuVar33 = (undefined8 *******)((longlong)pppppppuVar33 + 1);
        auStack_b8[local_c0] = uVar8;
        local_c0 = local_c0 + 1;
      }
    }
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    FUN_140144f10(&local_c8,&local_1a0);
    local_168 = 0;
    uStack_170 = 0;
    local_178 = (undefined4 *)0x0;
    local_160 = 0xf;
    _Buf1 = (undefined4 *)FUN_14028af20(0x30);
    param_1 = local_res8;
    local_168 = 0x20;
    local_160 = 0x2f;
    *_Buf1 = (undefined4)local_1a0;
    _Buf1[1] = local_1a0._4_4_;
    _Buf1[2] = (undefined4)uStack_198;
    _Buf1[3] = uStack_198._4_4_;
    *(undefined8 *)(_Buf1 + 4) = local_190;
    *(undefined8 *)(_Buf1 + 6) = uStack_188;
    *(undefined1 *)(_Buf1 + 8) = 0;
    local_178 = _Buf1;
    do {
      pbVar1 = (byte *)((longlong)_Buf1 + uVar38);
      uVar38 = uVar38 + 1;
      uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
    } while (uVar38 < 0x20);
    local_180 = (undefined4 *)(uVar20 & *(ulonglong *)(local_res8 + 0xaa8));
    lVar21 = *(longlong *)(local_res8 + 0xa80);
    lVar19 = *(longlong *)(*(longlong *)(local_res8 + 0xa90) + 8 + (longlong)local_180 * 0x10);
    if (lVar19 != lVar21) {
      lVar14 = *(longlong *)(*(longlong *)(local_res8 + 0xa90) + (longlong)local_180 * 0x10);
      while( true ) {
        puVar29 = (undefined8 *)(lVar19 + 0x10);
        if (0xf < *(ulonglong *)(lVar19 + 0x28)) {
          puVar29 = (undefined8 *)*puVar29;
        }
        if ((*(longlong *)(lVar19 + 0x20) == 0x20) &&
           (iVar9 = memcmp(_Buf1,puVar29,0x20), iVar9 == 0)) goto LAB_1400c62e7;
        if (lVar19 == lVar14) break;
        lVar19 = *(longlong *)(lVar19 + 8);
      }
    }
    lVar19 = 0;
LAB_1400c62e7:
    uVar38 = 0;
    puVar35 = auStack_1f8;
    uVar20 = uVar38;
    if ((lVar19 == 0) || (puVar35 = auStack_1f8, lVar19 == lVar21)) {
LAB_1400c63c4:
      puVar34 = puVar35;
      *(undefined8 *)(puVar34 + -8) = 0x1400c63cc;
      thunk_FUN_14028af80(_Buf1);
      _Buf1 = (undefined4 *)(uVar20 & 0xffffffff);
      bVar3 = false;
      uVar38 = uVar20;
    }
    else {
      uVar20 = thunk_FUN_14028af20(*(undefined4 *)(*(longlong *)(lVar19 + 0x30) + 0x2c));
      _Buf1 = (undefined4 *)(ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x30) + 0x2c);
      FUN_14004a920(param_1 + 0x938,*(undefined4 *)(*(longlong *)(lVar19 + 0x30) + 0x28),0);
      FUN_14004aa50(param_1 + 0x938,uVar20,*(undefined4 *)(*(longlong *)(lVar19 + 0x30) + 0x2c));
      *param_5 = *(undefined4 *)(*(longlong *)(lVar19 + 0x30) + 0x20);
      *param_6 = *(undefined4 *)(*(longlong *)(lVar19 + 0x30) + 0x24);
      if (0xf < local_160) {
        uVar22 = local_160 + 1;
        puVar25 = local_178;
        if (0xfff < uVar22) {
          puVar25 = *(undefined4 **)(local_178 + -2);
          if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar25))) {
LAB_1400c63bd:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar35 = auStack_1f0;
            uVar20 = uVar38;
            goto LAB_1400c63c4;
          }
          uVar22 = local_160 + 0x28;
        }
        thunk_FUN_14028af80(puVar25,uVar22);
      }
      bVar3 = true;
    }
    local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffffffffff00);
    local_160 = 0xf;
    local_168 = uVar38;
    if (0xf < *(ulonglong *)(puVar34 + 0x50)) {
      *(undefined8 *)(puVar34 + -8) = 0x1400c63fe;
      FUN_140017200(puVar34 + 0x38,*(undefined8 *)(puVar34 + 0x38));
    }
    _Str = local_res10;
    *(ulonglong *)(puVar34 + 0x48) = uVar38;
    *(undefined8 *)(puVar34 + 0x50) = 0xf;
    puVar34[0x38] = 0;
    uVar37 = (undefined4)uVar38;
    puVar35 = puVar34;
    if (bVar3) {
      *(undefined4 *)(puVar34 + 0x30) = uVar37;
      local_res8 = CONCAT44(local_res8._4_4_,uVar37);
      *local_res20 = uVar38;
      *(ulonglong **)(puVar34 + 0x20) = local_res20;
      *(undefined8 *)(puVar34 + -8) = 0x1400c6446;
      uVar8 = FUN_1400c0710(uVar20,_Buf1,puVar34 + 0x30,&local_res8);
      *(undefined8 *)(puVar34 + -8) = 0x1400c6451;
      thunk_FUN_14028af80(uVar20);
      goto LAB_1400c6638;
    }
    if (*(longlong *)(param_1 + 0x668) != -1) {
      *(ulonglong *)(puVar34 + 0x48) = uVar38;
      *(undefined8 *)(puVar34 + 0x38) = 0;
      *(undefined8 *)(puVar34 + 0x40) = 0;
      *(ulonglong *)(puVar34 + 0x50) = uVar38;
      *(undefined8 *)(puVar34 + -8) = 0x1400c6485;
      sVar12 = strlen(local_res10);
      *(undefined8 *)(puVar34 + -8) = 0x1400c6495;
      FUN_140017480(puVar34 + 0x38,_Str,sVar12);
      *(undefined8 *)(puVar34 + -8) = 0x1400c64a3;
      FUN_1400f0c30(local_e8,puVar34 + 0x38);
      if (0xf < *(ulonglong *)(puVar34 + 0x50)) {
        *(undefined8 *)(puVar34 + -8) = 0x1400c64bd;
        FUN_140017200(puVar34 + 0x38,*(undefined8 *)(puVar34 + 0x38));
      }
      *(undefined8 *)(puVar34 + -8) = 0x1400c64d2;
      plVar15 = (longlong *)FUN_1400313b0(param_1 + 0xab8,puVar34 + 0x78,local_e8);
      if (*plVar15 == *(longlong *)(local_res8 + 0xac0)) {
        *(undefined8 *)(puVar34 + -8) = 0x1400c64f1;
        sVar12 = strlen(_Str);
        *(ulonglong *)(puVar34 + 0x68) = uVar38;
        *(ulonglong *)(puVar34 + 0x70) = uVar38;
        *(undefined8 *)(puVar34 + 0x58) = 0;
        *(undefined8 *)(puVar34 + 0x60) = 0;
        *(undefined8 *)(puVar34 + -8) = 0x1400c6513;
        FUN_140017480(puVar34 + 0x58,_Str,sVar12);
        uVar20 = *(ulonglong *)(puVar34 + 0x68);
        *(ulonglong *)(puVar34 + 0x40) = uVar38;
        *(undefined4 *)(puVar34 + 0x48) = uVar37;
        *(ulonglong *)(puVar34 + 0x50) = uVar38;
        uVar37 = (undefined4)uVar20;
        if (local_res18 == '\0') {
          uVar22 = *(ulonglong *)(puVar34 + 0x70);
          puVar30 = *(undefined1 **)(puVar34 + 0x58);
          *(undefined8 *)(puVar34 + 0x38) = 8;
          if (uVar20 != 0) {
            *(undefined4 *)(puVar34 + 0x48) = uVar37;
            *(undefined8 *)(puVar34 + -8) = 0x1400c65c1;
            uVar38 = thunk_FUN_14028af20(uVar20 & 0xffffffff);
            *(ulonglong *)(puVar34 + 0x50) = uVar38;
            puVar31 = puVar34 + 0x58;
            if (0xf < uVar22) {
              puVar31 = puVar30;
            }
            *(undefined8 *)(puVar34 + -8) = 0x1400c65e1;
            FUN_1404210f0(uVar38,puVar31,uVar20 & 0xffffffff);
            *(ulonglong *)(puVar34 + 0x40) = uVar38;
            *(undefined4 *)(puVar34 + 0x3c) = uVar37;
          }
          *(undefined8 *)(puVar34 + -8) = 0x1400c65fb;
          FUN_1400182d0(param_1 + 0x668,puVar34 + 0x38);
          *(undefined8 *)(puVar34 + -8) = 0x1400c6603;
          thunk_FUN_14028af80(uVar38);
          if (0xf < uVar22) {
            *(undefined8 *)(puVar34 + -8) = 0x1400c6619;
            FUN_140017200(puVar34 + 0x58,puVar30,uVar22);
          }
        }
        else {
          *(undefined8 *)(puVar34 + 0x38) = 9;
          if (uVar20 != 0) {
            *(undefined4 *)(puVar34 + 0x48) = uVar37;
            *(undefined8 *)(puVar34 + -8) = 0x1400c654c;
            uVar38 = thunk_FUN_14028af20(uVar20 & 0xffffffff);
            puVar30 = puVar34 + 0x58;
            if (0xf < *(ulonglong *)(puVar34 + 0x70)) {
              puVar30 = *(undefined1 **)(puVar34 + 0x58);
            }
            *(ulonglong *)(puVar34 + 0x50) = uVar38;
            *(undefined8 *)(puVar34 + -8) = 0x1400c6570;
            FUN_1404210f0(uVar38,puVar30,uVar20 & 0xffffffff);
            *(ulonglong *)(puVar34 + 0x40) = uVar38;
            *(undefined4 *)(puVar34 + 0x3c) = uVar37;
          }
          *(undefined8 *)(puVar34 + -8) = 0x1400c658a;
          FUN_1400182d0(param_1 + 0x668,puVar34 + 0x38);
          *(undefined8 *)(puVar34 + -8) = 0x1400c6592;
          thunk_FUN_14028af80(uVar38);
          *(undefined8 *)(puVar34 + -8) = 0x1400c659c;
          FUN_140017240(puVar34 + 0x58);
        }
        *(undefined8 *)(puVar34 + -8) = 0x1400c662d;
        FUN_140032bc0(param_1 + 0xab8,&local_100,local_e8);
      }
      *(undefined8 *)(puVar34 + -8) = 0x1400c6636;
      FUN_140017240(local_e8);
    }
  }
  uVar8 = 0;
LAB_1400c6638:
  *(undefined8 *)(puVar35 + -8) = 0x1400c6641;
  FUN_140290ea0(local_f0);
  return uVar8;
}

