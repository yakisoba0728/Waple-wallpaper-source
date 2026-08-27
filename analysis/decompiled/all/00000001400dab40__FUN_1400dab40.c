// Function: FUN_1400dab40
// Addr: 1400dab40
// Size: 5322 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1400dab40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong *param_7)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  size_t sVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *******pppppppuVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  int *piVar19;
  byte bVar20;
  ulonglong uVar21;
  undefined8 *******pppppppuVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  char *******pppppppcVar28;
  char *******pppppppcVar29;
  undefined1 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [24];
  uint local_398;
  uint local_394;
  undefined4 local_390;
  char *******local_388;
  undefined8 uStack_380;
  ulonglong local_378;
  ulonglong uStack_370;
  undefined8 *******local_368;
  undefined8 uStack_360;
  ulonglong local_358;
  ulonglong local_350;
  float local_348 [2];
  longlong *local_340;
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  ulonglong local_318;
  ulonglong local_310;
  char *******local_308;
  ulonglong uStack_300;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  longlong *plStack_2d0;
  undefined8 *******local_2c8;
  longlong lStack_2c0;
  ulonglong local_2b8;
  ulonglong uStack_2b0;
  int local_2a8;
  undefined1 local_2a4;
  undefined1 local_2a3;
  undefined8 *******local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulonglong local_288;
  undefined8 *******local_280;
  undefined8 uStack_278;
  ulonglong local_270;
  ulonglong local_268;
  undefined8 *******local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulonglong local_248;
  int local_240;
  int local_23c;
  float local_238 [2];
  longlong *local_230;
  longlong local_228;
  longlong local_220 [3];
  ulonglong local_208;
  ulonglong local_200;
  longlong *local_1f8;
  longlong *local_1f0 [2];
  longlong local_1e0 [2];
  ulonglong local_1d0 [3];
  char *******local_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  longlong local_148 [2];
  uint auStack_138 [14];
  longlong alStack_100 [24];
  
  puVar30 = auStack_3b8;
  local_348[0] = 0.0;
  local_340 = (longlong *)0x0;
  local_338 = 0;
  local_340 = (longlong *)FUN_14028af20(0x68);
  *local_340 = (longlong)local_340;
  local_340[1] = (longlong)local_340;
  local_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 7;
  local_310 = 8;
  local_348[0] = 1.0;
  FUN_1400374c0(&local_330,0x10,local_340);
  fVar6 = DAT_140492974;
  if (*(int *)(param_6 + 0x14) != 0) {
    local_394 = 0;
    do {
      plVar10 = (longlong *)(**(code **)(*param_5 + 0x20))(param_5,local_394);
      local_2d8 = plVar10;
      (**(code **)*plVar10)(plVar10,&local_388);
      local_390 = FUN_14016f740(local_388);
      local_398 = 0;
      if (uStack_380._4_4_ != 0) {
        do {
          uVar31 = local_398;
          uVar32 = 0xcbf29ce484222325;
          puVar11 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10,local_398);
          (**(code **)*puVar11)(puVar11,&local_308);
          pppppppcVar29 = local_308;
          if (local_308 != (char *******)0x0) {
            local_1b8 = local_308;
            local_2b8 = 0;
            uStack_1b0 = uStack_300;
            uStack_1a8 = uStack_2f8;
            uStack_2b0 = 0;
            uStack_1a0 = uStack_2f0;
            uStack_198 = uStack_2e8;
            local_190 = local_2e0;
            local_2c8 = (undefined8 *******)0x0;
            lStack_2c0 = 0;
            sVar12 = strlen((char *)local_308);
            FUN_140017480(&local_2c8,pppppppcVar29,sVar12);
            uVar24 = uStack_2b0;
            uVar14 = local_2b8;
            pppppppuVar15 = local_2c8;
            pppppppuVar22 = &local_2c8;
            if (0xf < uStack_2b0) {
              pppppppuVar22 = local_2c8;
            }
            local_1d0[0] = 0xcbf29ce484222325;
            uVar21 = 0;
            if (local_2b8 != 0) {
              do {
                pbVar1 = (byte *)(uVar21 + (longlong)pppppppuVar22);
                uVar21 = uVar21 + 1;
                uVar32 = (uVar32 ^ *pbVar1) * 0x100000001b3;
                local_1d0[0] = uVar32;
              } while (uVar21 < local_2b8);
            }
            uVar32 = local_1d0[0];
            plVar10 = *(longlong **)(local_330 + 8 + (local_1d0[0] & local_318) * 0x10);
            plVar18 = local_340;
            if (plVar10 != local_340) {
              plVar17 = *(longlong **)(local_330 + (local_1d0[0] & local_318) * 0x10);
              plVar18 = plVar10;
              while( true ) {
                plVar10 = plVar18 + 2;
                if (0xf < (ulonglong)plVar18[5]) {
                  plVar10 = (longlong *)*plVar10;
                }
                pppppppuVar22 = &local_2c8;
                if (0xf < uVar24) {
                  pppppppuVar22 = pppppppuVar15;
                }
                if ((uVar14 == plVar18[4]) &&
                   ((plVar13 = plVar18, uVar14 == 0 ||
                    (iVar8 = memcmp(pppppppuVar22,plVar10,uVar14), iVar8 == 0))))
                goto LAB_1400db1f6;
                if (plVar18 == plVar17) break;
                plVar18 = (longlong *)plVar18[1];
              }
            }
            if (local_338 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
              FUN_14028c2e0("unordered_map/set too long");
            }
            plVar13 = (longlong *)FUN_14028af20(0x68);
            uVar14 = local_310;
            plVar13[2] = (longlong)local_2c8;
            plVar13[3] = lStack_2c0;
            plVar13[4] = local_2b8;
            plVar13[5] = uStack_2b0;
            local_2b8 = 0;
            uStack_2b0 = 0xf;
            local_2c8 = (undefined8 *******)((ulonglong)local_2c8 & 0xffffffffffffff00);
            plVar13[6] = 0;
            plVar13[7] = 0;
            plVar13[8] = 0;
            plVar13[9] = 0;
            plVar13[10] = 0;
            plVar13[0xb] = 0;
            plVar13[0xc] = 0;
            local_1f0[0] = plVar13;
            if (local_348[0] < (float)(local_338 + 1) / (float)local_310) {
              fVar35 = (float)FUN_140419fa0((float)(local_338 + 1) / local_348[0]);
              plVar10 = local_340;
              lVar23 = 0;
              if ((fVar6 <= fVar35) && (fVar35 = fVar35 - fVar6, fVar35 < fVar6)) {
                lVar23 = -0x8000000000000000;
              }
              uVar24 = 8;
              if (8 < (ulonglong)((longlong)fVar35 + lVar23)) {
                uVar24 = (longlong)fVar35 + lVar23;
              }
              uVar21 = uVar14;
              if ((uVar14 < uVar24) &&
                 ((0x1ff < uVar14 || (uVar21 = uVar14 * 8, uVar14 * 8 < uVar24)))) {
                uVar21 = uVar24;
              }
              for (lVar23 = 0x3f; 0xfffffffffffffffU >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
              if ((ulonglong)(1L << ((byte)lVar23 & 0x3f)) < uVar21) {
                    /* WARNING: Subroutine does not return */
                FUN_14028c2e0("invalid hash bucket count");
              }
              uVar14 = uVar21 - 1 | 1;
              lVar23 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              bVar20 = (char)lVar23 + 1;
              uVar14 = 1L << (bVar20 & 0x3f);
              FUN_1400374c0(&local_330,2L << (bVar20 & 0x3f),local_340);
              local_318 = uVar14 - 1;
              local_310 = uVar14;
              plVar18 = (longlong *)*local_340;
joined_r0x0001400daf39:
              if (plVar18 != plVar10) {
                uVar32 = plVar18[5];
                plVar17 = plVar18 + 2;
                plVar13 = (longlong *)*plVar18;
                if (0xf < uVar32) {
                  plVar17 = (longlong *)plVar18[2];
                }
                uVar14 = plVar18[4];
                uVar24 = 0;
                uVar21 = 0xcbf29ce484222325;
                if (uVar14 != 0) {
                  do {
                    pbVar1 = (byte *)((longlong)plVar17 + uVar24);
                    uVar24 = uVar24 + 1;
                    uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
                  } while (uVar24 < uVar14);
                  uVar32 = plVar18[5];
                }
                uVar21 = local_318 & uVar21;
                local_1f8 = *(longlong **)(local_330 + uVar21 * 0x10);
                local_1e0[0] = local_330;
                if (local_1f8 == plVar10) {
                  *(longlong **)(local_330 + uVar21 * 0x10) = plVar18;
                  *(longlong **)(local_330 + 8 + uVar21 * 0x10) = plVar18;
                  plVar18 = plVar13;
                  plVar13 = local_1f0[0];
                  uVar32 = local_1d0[0];
                }
                else {
                  plVar27 = *(longlong **)(local_330 + 8 + uVar21 * 0x10);
                  plVar17 = plVar27 + 2;
                  if (0xf < (ulonglong)plVar27[5]) {
                    plVar17 = (longlong *)*plVar17;
                  }
                  plVar25 = plVar18 + 2;
                  if (0xf < uVar32) {
                    plVar25 = (longlong *)plVar18[2];
                  }
                  if (uVar14 == plVar27[4]) {
                    if ((uVar14 != 0) && (iVar8 = memcmp(plVar25,plVar17,uVar14), iVar8 != 0)) {
                      uVar32 = plVar18[5];
                      goto LAB_1400db044;
                    }
                    plVar27 = (longlong *)*plVar27;
                    if (plVar27 != plVar18) {
                      puVar11 = (undefined8 *)plVar18[1];
                      *puVar11 = plVar13;
                      puVar3 = (undefined8 *)plVar13[1];
                      *puVar3 = plVar27;
                      puVar4 = (undefined8 *)plVar27[1];
                      *puVar4 = plVar18;
                      plVar27[1] = (longlong)puVar3;
                      plVar13[1] = (longlong)puVar11;
                      plVar18[1] = (longlong)puVar4;
                    }
                    *(longlong **)(local_1e0[0] + 8 + uVar21 * 0x10) = plVar18;
                    plVar18 = plVar13;
                    plVar13 = local_1f0[0];
                    uVar32 = local_1d0[0];
                  }
                  else {
LAB_1400db044:
                    plVar17 = local_1f8;
                    if (local_1f8 != plVar27) {
                      do {
                        plVar27 = (longlong *)plVar27[1];
                        plVar25 = plVar27 + 2;
                        if (0xf < (ulonglong)plVar27[5]) {
                          plVar25 = (longlong *)*plVar25;
                        }
                        if (uVar32 < 0x10) {
                          plVar26 = plVar18 + 2;
                        }
                        else {
                          plVar26 = (longlong *)plVar18[2];
                        }
                        if (uVar14 == plVar27[4]) {
                          if ((uVar14 == 0) || (iVar8 = memcmp(plVar26,plVar25,uVar14), iVar8 == 0))
                          {
                            lVar23 = *plVar27;
                            puVar11 = (undefined8 *)plVar18[1];
                            *puVar11 = plVar13;
                            plVar17 = (longlong *)plVar13[1];
                            *plVar17 = lVar23;
                            puVar3 = *(undefined8 **)(lVar23 + 8);
                            *puVar3 = plVar18;
                            *(longlong **)(lVar23 + 8) = plVar17;
                            plVar13[1] = (longlong)puVar11;
                            plVar18[1] = (longlong)puVar3;
                            plVar18 = plVar13;
                            plVar13 = local_1f0[0];
                            uVar32 = local_1d0[0];
                            goto joined_r0x0001400daf39;
                          }
                          uVar32 = plVar18[5];
                          plVar17 = local_1f8;
                        }
                      } while (plVar17 != plVar27);
                    }
                    puVar11 = (undefined8 *)plVar18[1];
                    *puVar11 = plVar13;
                    puVar3 = (undefined8 *)plVar13[1];
                    *puVar3 = plVar27;
                    puVar4 = (undefined8 *)plVar27[1];
                    *puVar4 = plVar18;
                    plVar27[1] = (longlong)puVar3;
                    plVar13[1] = (longlong)puVar11;
                    plVar18[1] = (longlong)puVar4;
                    *(longlong **)(local_1e0[0] + uVar21 * 0x10) = plVar18;
                    plVar18 = plVar13;
                    plVar13 = local_1f0[0];
                    uVar32 = local_1d0[0];
                  }
                }
                goto joined_r0x0001400daf39;
              }
              local_1f0[0] = (longlong *)0x0;
              FUN_1400e6660(local_1f0);
              plVar10 = *(longlong **)(local_330 + 8 + (uVar32 & local_318) * 0x10);
              plVar18 = local_340;
              uVar31 = local_398;
              if (plVar10 != local_340) {
                uVar14 = plVar13[5];
                sVar12 = plVar13[4];
                plVar17 = *(longlong **)(local_330 + (uVar32 & local_318) * 0x10);
                while( true ) {
                  plVar18 = plVar10 + 2;
                  if (0xf < (ulonglong)plVar10[5]) {
                    plVar18 = (longlong *)*plVar18;
                  }
                  if (uVar14 < 0x10) {
                    plVar27 = plVar13 + 2;
                  }
                  else {
                    plVar27 = (longlong *)plVar13[2];
                  }
                  if ((sVar12 == plVar10[4]) &&
                     ((sVar12 == 0 || (iVar8 = memcmp(plVar27,plVar18,sVar12), iVar8 == 0)))) break;
                  plVar18 = plVar10;
                  uVar31 = local_398;
                  if (plVar10 == plVar17) goto LAB_1400db1a1;
                  plVar10 = (longlong *)plVar10[1];
                }
                plVar18 = (longlong *)*plVar10;
                uVar31 = local_398;
              }
            }
LAB_1400db1a1:
            puVar11 = (undefined8 *)plVar18[1];
            local_338 = local_338 + 1;
            *plVar13 = (longlong)plVar18;
            plVar13[1] = (longlong)puVar11;
            *puVar11 = plVar13;
            plVar18[1] = (longlong)plVar13;
            uVar32 = uVar32 & local_318;
            plVar10 = *(longlong **)(local_330 + uVar32 * 0x10);
            if (plVar10 == local_340) {
              *(longlong **)(local_330 + uVar32 * 0x10) = plVar13;
LAB_1400db1f1:
              *(longlong **)(local_330 + 8 + uVar32 * 0x10) = plVar13;
            }
            else if (plVar10 == plVar18) {
              *(longlong **)(local_330 + uVar32 * 0x10) = plVar13;
            }
            else if (*(undefined8 **)(local_330 + 8 + uVar32 * 0x10) == puVar11) goto LAB_1400db1f1;
LAB_1400db1f6:
            plVar13[6] = (longlong)local_1b8;
            plVar13[7] = uStack_1b0;
            *(undefined4 *)(plVar13 + 8) = (undefined4)uStack_1a8;
            *(undefined4 *)((longlong)plVar13 + 0x44) = uStack_1a8._4_4_;
            *(undefined4 *)(plVar13 + 9) = (undefined4)uStack_1a0;
            *(undefined4 *)((longlong)plVar13 + 0x4c) = uStack_1a0._4_4_;
            *(undefined4 *)(plVar13 + 10) = (undefined4)uStack_198;
            *(undefined4 *)((longlong)plVar13 + 0x54) = uStack_198._4_4_;
            *(undefined4 *)(plVar13 + 0xb) = (undefined4)local_190;
            *(undefined4 *)((longlong)plVar13 + 0x5c) = local_190._4_4_;
            *(undefined4 *)(plVar13 + 0xc) = local_390;
            *(undefined4 *)((longlong)plVar13 + 100) = local_188._4_4_;
            if (0xf < uStack_2b0) {
              uVar32 = uStack_2b0 + 1;
              pppppppuVar15 = local_2c8;
              if (0xfff < uVar32) {
                pppppppuVar15 = (undefined8 *******)local_2c8[-1];
                if (0x1f < (ulonglong)((longlong)local_2c8 + (-8 - (longlong)pppppppuVar15)))
                goto LAB_1400dbfd3;
                uVar32 = uStack_2b0 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar15,uVar32);
            }
          }
          local_398 = uVar31 + 1;
          plVar10 = local_2d8;
        } while (local_398 < uStack_380._4_4_);
      }
      local_394 = local_394 + 1;
    } while (local_394 < *(uint *)(param_6 + 0x14));
  }
  FUN_1400de740(local_148,param_2);
  local_358 = 0;
  uStack_360 = 0;
  local_368 = (undefined8 *******)0x0;
  local_350 = 0xf;
  FUN_1400dd810(local_238);
  do {
    bVar20 = FUN_140013490((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4),10);
    uVar31 = 0;
    plVar10 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    lVar23 = (longlong)*(int *)(local_148[0] + 4);
    if (*(uint *)((longlong)auStack_138 + lVar23) == 0) {
      if (*(longlong *)((longlong)alStack_100 + lVar23 + 8) != 0) {
        FUN_140012a00();
      }
      if (*(int *)((longlong)auStack_138 + (longlong)*(int *)(local_148[0] + 4)) != 0)
      goto LAB_1400db45d;
      local_358 = 0;
      bVar34 = false;
      pppppppuVar15 = &local_368;
      if (0xf < local_350) {
        pppppppuVar15 = local_368;
      }
      *(undefined1 *)pppppppuVar15 = 0;
      plVar10 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
      if ((*(byte **)plVar10[7] == (byte *)0x0) || (*(int *)plVar10[10] < 1)) {
        uVar9 = (**(code **)(*plVar10 + 0x30))();
      }
      else {
        uVar9 = (uint)**(byte **)plVar10[7];
      }
      while (uVar9 != 0xffffffff) {
        if (uVar9 == bVar20) {
          plVar10 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
          if (*(longlong *)plVar10[7] != 0) {
            iVar8 = *(int *)plVar10[10];
            if (0 < iVar8) {
              *(int *)plVar10[10] = iVar8 + -1;
              *(longlong *)plVar10[7] = *(longlong *)plVar10[7] + 1;
              goto LAB_1400db460;
            }
          }
          (**(code **)(*plVar10 + 0x38))();
          goto LAB_1400db460;
        }
        if (0x7ffffffffffffffe < local_358) {
          uVar31 = 2;
          goto LAB_1400db458;
        }
        FUN_1400534d0(&local_368,uVar9 & 0xff);
        bVar34 = true;
        uVar9 = FUN_14004f480(*(undefined8 *)
                               ((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4)));
      }
      uVar31 = 1;
LAB_1400db458:
      if (!bVar34) goto LAB_1400db45d;
    }
    else {
      uVar9 = 6;
      if (*(longlong *)((longlong)alStack_100 + lVar23) != 0) {
        uVar9 = 2;
      }
      FUN_140013b50((longlong)local_148 + lVar23,*(uint *)((longlong)auStack_138 + lVar23) | uVar9,0
                   );
LAB_1400db45d:
      uVar31 = uVar31 | 2;
    }
LAB_1400db460:
    lVar23 = (longlong)*(int *)(local_148[0] + 4);
    uVar9 = 4;
    if (*(longlong *)((longlong)alStack_100 + lVar23) != 0) {
      uVar9 = 0;
    }
    FUN_140013b50((longlong)local_148 + lVar23,
                  uVar9 | uVar31 | *(uint *)((longlong)auStack_138 + lVar23),0);
    plVar10 = *(longlong **)((longlong)alStack_100 + (longlong)*(int *)(local_148[0] + 4));
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    if ((*(byte *)((longlong)auStack_138 + (longlong)*(int *)(local_148[0] + 4)) & 6) != 0) {
      uVar14 = param_7[1] - *param_7 >> 1;
      uVar32 = param_7[4] - param_7[3] >> 1;
      bVar20 = (byte)uVar32;
      if (uVar32 <= uVar14) {
        bVar20 = (byte)uVar14;
      }
      if (0x7f < bVar20) {
        FUN_140098760("Shader data overflow %s\n",param_3);
      }
      FUN_14000d9e0(local_220);
      FUN_140049340(&local_230);
      if (0xf < local_350) {
        uVar32 = local_350 + 1;
        pppppppuVar15 = local_368;
        if (0xfff < uVar32) {
          pppppppuVar15 = (undefined8 *******)local_368[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_368 + (-8 - (longlong)pppppppuVar15))) {
LAB_1400dbfd3:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            puVar30 = auStack_3b0;
LAB_1400dbfda:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar30 + -8) = &UNK_1400dbfe6;
            FUN_14028c2e0("unordered_map/set too long");
          }
          uVar32 = local_350 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar15,uVar32);
      }
      local_358 = 0;
      local_350 = 0xf;
      local_368 = (undefined8 *******)((ulonglong)local_368 & 0xffffffffffffff00);
      FUN_14008d4b0(local_148);
      FUN_140030ce0(&local_330);
      FUN_1400dd880(&local_340);
      return;
    }
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uVar32 = 7;
    if (local_358 < 7) {
      uVar32 = local_358;
    }
    local_308 = (char *******)0x0;
    uStack_300 = 0;
    pppppppuVar15 = &local_368;
    if (0xf < local_350) {
      pppppppuVar15 = local_368;
    }
    FUN_140017480(&local_308,pppppppuVar15,uVar32);
    uVar32 = uStack_2f0;
    pppppppcVar29 = local_308;
    pppppppcVar28 = (char *******)&local_308;
    if (0xf < uStack_2f0) {
      pppppppcVar28 = local_308;
    }
    if (uStack_2f8 == 7) {
      iVar8 = memcmp(pppppppcVar28,"uniform",7);
      bVar34 = iVar8 == 0;
    }
    else {
      bVar34 = false;
    }
    if (0xf < uVar32) {
      uVar14 = uVar32 + 1;
      pppppppcVar28 = pppppppcVar29;
      if (0xfff < uVar14) {
        pppppppcVar28 = (char *******)pppppppcVar29[-1];
        if (0x1f < (ulonglong)((longlong)pppppppcVar29 + (-8 - (longlong)pppppppcVar28)))
        goto LAB_1400dbfd3;
        uVar14 = uVar32 + 0x28;
      }
      thunk_FUN_14028af80(pppppppcVar28,uVar14);
    }
    if (bVar34) {
      uVar32 = 0;
      uStack_370 = 0xf;
      local_378 = 0;
      local_1b8 = (char *******)0x0;
      uStack_380 = 0;
      local_388 = (char *******)0x0;
      uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      cVar7 = FUN_1400dc300(&local_368,&local_1b8,&DAT_1404e80d0);
      if ((cVar7 == '\0') || ((ulonglong)((longlong)(uStack_1a0 - uStack_1a8) / 0x18) < 2)) {
LAB_1400dbd4b:
        uVar32 = 0;
        uStack_298 = 0;
        local_290 = 0;
        local_288 = 0xf;
        local_2a0 = (undefined8 *******)0x0;
        uStack_278 = 0;
        local_270 = 0;
        local_268 = 0xf;
        local_280 = (undefined8 *******)0x0;
        uStack_258 = 0;
        local_250 = 0;
        local_248 = 0xf;
        local_260 = (undefined8 *******)0x0;
        cVar7 = FUN_1401636a0(param_1,&local_368);
        if (cVar7 != '\0') {
          uVar14 = 0xcbf29ce484222325;
          pppppppuVar15 = &local_280;
          if (0xf < local_268) {
            pppppppuVar15 = local_280;
          }
          if (local_270 != 0) {
            do {
              pbVar1 = (byte *)(uVar32 + (longlong)pppppppuVar15);
              uVar32 = uVar32 + 1;
              uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
            } while (uVar32 < local_270);
          }
          lVar23 = FUN_1400dfa90(local_348,local_1e0,&local_280,uVar14);
          plVar10 = *(longlong **)(lVar23 + 8);
          if ((((plVar10 != (longlong *)0x0) && (plVar10 != local_340)) &&
              ((*(byte *)(plVar10 + 8) & 2) != 0)) && ((int)plVar10[7] != -1)) {
            local_2a8 = (int)plVar10[7];
            piVar19 = (int *)FUN_1400ddb60(param_4,&local_260);
            *piVar19 = local_2a8;
            *(undefined1 *)(piVar19 + 1) = local_2a4;
            *(undefined1 *)((longlong)piVar19 + 5) = local_2a3;
            if ((undefined8 ********)(piVar19 + 2) != &local_2a0) {
              pppppppuVar15 = &local_2a0;
              if (0xf < local_288) {
                pppppppuVar15 = local_2a0;
              }
              FUN_14000f880(piVar19 + 2,pppppppuVar15,local_290);
            }
            if ((undefined8 ********)(piVar19 + 10) != &local_280) {
              pppppppuVar15 = &local_280;
              if (0xf < local_268) {
                pppppppuVar15 = local_280;
              }
              FUN_14000f880(piVar19 + 10,pppppppuVar15,local_270);
            }
            if ((undefined8 ********)(piVar19 + 0x12) != &local_260) {
              pppppppuVar15 = &local_260;
              if (0xf < local_248) {
                pppppppuVar15 = local_260;
              }
              FUN_14000f880(piVar19 + 0x12,pppppppuVar15,local_250);
            }
            piVar19[0x1a] = local_240;
            piVar19[0x1b] = local_23c;
          }
        }
        FUN_140017240(&local_260);
        FUN_140017240(&local_280);
        FUN_140017240(&local_2a0);
      }
      else {
        if (*(char *)(uStack_1a8 + 0x28) == '\0') {
          local_2d8 = (longlong *)0x0;
          plStack_2d0 = (longlong *)0x0;
        }
        else {
          local_2d8 = *(longlong **)(uStack_1a8 + 0x18);
          plStack_2d0 = *(longlong **)(uStack_1a8 + 0x20);
        }
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        local_308 = (char *******)0x0;
        uStack_300 = 0;
        if (local_2d8 == plStack_2d0) {
          uStack_2f0 = 0xf;
          local_308 = (char *******)0x0;
        }
        else {
          FUN_140017480(&local_308,local_2d8,(longlong)plStack_2d0 - (longlong)local_2d8);
        }
        if (0xf < uStack_370) {
          uVar14 = uStack_370 + 1;
          pppppppcVar29 = local_388;
          if (0xfff < uVar14) {
            pppppppcVar29 = (char *******)local_388[-1];
            if (0x1f < (ulonglong)((longlong)local_388 + (-8 - (longlong)pppppppcVar29)))
            goto LAB_1400dbfd3;
            uVar14 = uStack_370 + 0x28;
          }
          thunk_FUN_14028af80(pppppppcVar29,uVar14);
        }
        uStack_370 = uStack_2f0;
        local_378 = uStack_2f8;
        local_388 = local_308;
        uStack_2f8 = 0;
        uStack_2f0 = 0xf;
        local_308 = (char *******)((ulonglong)local_308 & 0xffffffffffffff00);
        uStack_380 = uStack_300;
        FUN_140017240(&local_308);
        uVar24 = uStack_370;
        uVar14 = local_378;
        pppppppcVar29 = local_388;
        uVar21 = 0xcbf29ce484222325;
        pppppppcVar28 = (char *******)&local_388;
        if (0xf < uStack_370) {
          pppppppcVar28 = local_388;
        }
        if (local_378 != 0) {
          do {
            pbVar1 = (byte *)((longlong)pppppppcVar28 + uVar32);
            uVar32 = uVar32 + 1;
            uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
          } while (uVar32 < local_378);
        }
        lVar16 = FUN_1400df9b0(uVar32,local_1f0,&local_388,uVar21);
        lVar23 = DAT_1404e8108;
        if (*(longlong *)(lVar16 + 8) != 0) {
          lVar23 = *(longlong *)(lVar16 + 8);
        }
        if ((lVar23 == DAT_1404e8108) ||
           (uVar31 = *(uint *)(lVar23 + 0x30), local_394 = uVar31, uVar31 == 0x8c))
        goto LAB_1400dbd4b;
        pppppppcVar28 = (char *******)&local_388;
        if (0xf < uVar24) {
          pppppppcVar28 = pppppppcVar29;
        }
        uVar24 = 0xcbf29ce484222325;
        uVar32 = 0;
        if (uVar14 != 0) {
          do {
            pbVar1 = (byte *)((longlong)pppppppcVar28 + uVar32);
            uVar32 = uVar32 + 1;
            uVar24 = (uVar24 ^ *pbVar1) * 0x100000001b3;
          } while (uVar32 < uVar14);
        }
        lVar23 = FUN_1400dfa90(local_348,local_1d0,&local_388,uVar24);
        plVar10 = *(longlong **)(lVar23 + 8);
        if (((plVar10 != (longlong *)0x0) && (plVar10 != local_340)) &&
           ((*(byte *)(plVar10 + 8) & 2) != 0)) {
          uVar32 = ((ulonglong)(uVar31 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3;
          uVar14 = local_208 & uVar32;
          plVar18 = *(longlong **)(local_220[0] + 8 + uVar14 * 0x10);
          cVar7 = (char)uVar31;
          if (plVar18 == local_230) {
LAB_1400db8b0:
            plVar17 = (longlong *)0x0;
          }
          else {
            cVar2 = (char)plVar18[2];
            plVar17 = plVar18;
            while (cVar7 != cVar2) {
              if (plVar17 == *(longlong **)(local_220[0] + uVar14 * 0x10)) goto LAB_1400db8b0;
              plVar17 = (longlong *)plVar17[1];
              cVar2 = (char)plVar17[2];
            }
          }
          if ((plVar17 == (longlong *)0x0) || (plVar17 == local_230)) {
            uVar33 = (undefined4)plVar10[7];
            plVar17 = local_230;
            local_390 = uVar33;
            if (plVar18 == local_230) {
LAB_1400db8f6:
              if (local_228 == 0xaaaaaaaaaaaaaaa) goto LAB_1400dbfda;
              plVar18 = (longlong *)FUN_14028af20(0x18);
              uVar14 = local_200;
              *(char *)(plVar18 + 2) = cVar7;
              *(undefined1 *)((longlong)plVar18 + 0x11) = 0;
              if (local_238[0] < (float)(local_228 + 1) / (float)local_200) {
                fVar35 = (float)FUN_140419fa0((float)(local_228 + 1) / local_238[0]);
                plVar17 = local_230;
                lVar23 = 0;
                if ((fVar6 <= fVar35) && (fVar35 = fVar35 - fVar6, fVar35 < fVar6)) {
                  lVar23 = -0x8000000000000000;
                }
                uVar24 = 8;
                if (8 < (ulonglong)((longlong)fVar35 + lVar23)) {
                  uVar24 = (longlong)fVar35 + lVar23;
                }
                uVar21 = uVar14;
                if ((uVar14 < uVar24) &&
                   ((0x1ff < uVar14 || (uVar21 = uVar14 * 8, uVar14 * 8 < uVar24)))) {
                  uVar21 = uVar24;
                }
                for (lVar23 = 0x3f; 0xfffffffffffffffU >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
                if ((ulonglong)(1L << ((byte)lVar23 & 0x3f)) < uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_14028c2e0("invalid hash bucket count");
                }
                uVar14 = uVar21 - 1 | 1;
                lVar23 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                  }
                }
                bVar20 = (char)lVar23 + 1;
                uVar14 = 1L << (bVar20 & 0x3f);
                FUN_14003e510(local_220,2L << (bVar20 & 0x3f),local_230);
                local_208 = uVar14 - 1;
                plVar13 = (longlong *)*local_230;
joined_r0x0001400dba63:
                if (plVar13 != plVar17) {
                  bVar20 = *(byte *)(plVar13 + 2);
                  plVar27 = (longlong *)*plVar13;
                  uVar24 = local_208 & ((ulonglong)bVar20 ^ 0xcbf29ce484222325) * 0x100000001b3;
                  plVar25 = *(longlong **)(local_220[0] + uVar24 * 0x10);
                  uVar31 = local_394;
                  uVar33 = local_390;
                  if (plVar25 == plVar17) {
                    *(longlong **)(local_220[0] + uVar24 * 0x10) = plVar13;
                    *(longlong **)(local_220[0] + 8 + uVar24 * 0x10) = plVar13;
                    plVar13 = plVar27;
                  }
                  else {
                    plVar26 = *(longlong **)(local_220[0] + 8 + uVar24 * 0x10);
                    if (bVar20 == *(byte *)(plVar26 + 2)) {
                      plVar26 = (longlong *)*plVar26;
                      if (plVar26 != plVar13) {
                        puVar11 = (undefined8 *)plVar13[1];
                        *puVar11 = plVar27;
                        puVar3 = (undefined8 *)plVar27[1];
                        *puVar3 = plVar26;
                        puVar4 = (undefined8 *)plVar26[1];
                        *puVar4 = plVar13;
                        plVar26[1] = (longlong)puVar3;
                        plVar27[1] = (longlong)puVar11;
                        plVar13[1] = (longlong)puVar4;
                      }
                      *(longlong **)(local_220[0] + 8 + uVar24 * 0x10) = plVar13;
                      plVar13 = plVar27;
                    }
                    else {
                      do {
                        if (plVar25 == plVar26) {
                          puVar11 = (undefined8 *)plVar13[1];
                          *puVar11 = plVar27;
                          puVar3 = (undefined8 *)plVar27[1];
                          *puVar3 = plVar26;
                          puVar4 = (undefined8 *)plVar26[1];
                          *puVar4 = plVar13;
                          plVar26[1] = (longlong)puVar3;
                          plVar27[1] = (longlong)puVar11;
                          plVar13[1] = (longlong)puVar4;
                          *(longlong **)(local_220[0] + uVar24 * 0x10) = plVar13;
                          plVar13 = plVar27;
                          goto joined_r0x0001400dba63;
                        }
                        plVar26 = (longlong *)plVar26[1];
                      } while (bVar20 != *(byte *)(plVar26 + 2));
                      lVar23 = *plVar26;
                      puVar11 = (undefined8 *)plVar13[1];
                      *puVar11 = plVar27;
                      plVar25 = (longlong *)plVar27[1];
                      *plVar25 = lVar23;
                      puVar3 = *(undefined8 **)(lVar23 + 8);
                      *puVar3 = plVar13;
                      *(longlong **)(lVar23 + 8) = plVar25;
                      plVar27[1] = (longlong)puVar11;
                      plVar13[1] = (longlong)puVar3;
                      plVar13 = plVar27;
                    }
                  }
                  goto joined_r0x0001400dba63;
                }
                local_2d8 = (longlong *)0x0;
                local_200 = uVar14;
                FUN_1400e6930(&local_2d8);
                plVar13 = *(longlong **)(local_220[0] + 8 + (local_208 & uVar32) * 0x10);
                plVar17 = local_230;
                if (plVar13 != local_230) {
                  cVar7 = (char)plVar13[2];
                  plVar17 = plVar13;
                  while ((char)plVar18[2] != cVar7) {
                    if (plVar17 == *(longlong **)(local_220[0] + (local_208 & uVar32) * 0x10))
                    goto LAB_1400dbbcc;
                    plVar17 = (longlong *)plVar17[1];
                    cVar7 = (char)plVar17[2];
                  }
                  plVar17 = (longlong *)*plVar17;
                }
              }
LAB_1400dbbcc:
              puVar11 = (undefined8 *)plVar17[1];
              local_228 = local_228 + 1;
              *plVar18 = (longlong)plVar17;
              plVar18[1] = (longlong)puVar11;
              *puVar11 = plVar18;
              plVar17[1] = (longlong)plVar18;
              uVar32 = local_208 & uVar32;
              plVar13 = *(longlong **)(local_220[0] + uVar32 * 0x10);
              if (plVar13 == local_230) {
                *(longlong **)(local_220[0] + uVar32 * 0x10) = plVar18;
LAB_1400dbc2f:
                *(longlong **)(local_220[0] + 8 + uVar32 * 0x10) = plVar18;
              }
              else if (plVar13 == plVar17) {
                *(longlong **)(local_220[0] + uVar32 * 0x10) = plVar18;
              }
              else if (*(undefined8 **)(local_220[0] + 8 + uVar32 * 0x10) == puVar11)
              goto LAB_1400dbc2f;
            }
            else {
              cVar2 = (char)plVar18[2];
              while (cVar7 != cVar2) {
                plVar17 = plVar18;
                if (plVar18 == *(longlong **)(local_220[0] + uVar14 * 0x10)) goto LAB_1400db8f6;
                plVar18 = (longlong *)plVar18[1];
                cVar2 = (char)plVar18[2];
              }
            }
            *(undefined1 *)((longlong)plVar18 + 0x11) = 1;
            switch(uVar31) {
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
              break;
            case 0x5d:
            case 0x5e:
            case 0x5f:
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x18;
              break;
            case 0x62:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
              *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
            }
            if ((9 < uVar31 - 0x20) && (lVar23 = plVar10[0xc], (int)lVar23 < 2)) {
              local_398._0_2_ = (short)uVar31;
              FUN_1400dd630(param_7 + (longlong)(int)lVar23 * 3,&local_398);
              local_398 = CONCAT22(local_398._2_2_,(short)uVar33);
              FUN_1400dd630(param_7 + (longlong)(int)lVar23 * 3,&local_398);
            }
          }
        }
      }
      FUN_1400dd8f0(&uStack_1a8);
      if (0xf < uStack_370) {
        uVar32 = uStack_370 + 1;
        pppppppcVar29 = local_388;
        if (0xfff < uVar32) {
          pppppppcVar29 = (char *******)local_388[-1];
          if (0x1f < (ulonglong)((longlong)local_388 + (-8 - (longlong)pppppppcVar29)))
          goto LAB_1400dbfd3;
          uVar32 = uStack_370 + 0x28;
        }
        thunk_FUN_14028af80(pppppppcVar29,uVar32);
      }
    }
  } while( true );
}

