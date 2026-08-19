// Function: FUN_14006efc0
// Addr: 14006efc0
// Size: 4612 bytes


/* WARNING: Removing unreachable block (ram,0x00014006f20e) */
/* WARNING: Removing unreachable block (ram,0x00014007074c) */
/* WARNING: Removing unreachable block (ram,0x00014006f275) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006efc0(ulonglong param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *****pppppuVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong *unaff_R14;
  longlong *plVar26;
  uint uVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined8 local_res8;
  char local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  longlong *local_2a8;
  int local_2a0;
  longlong *local_298;
  char *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270;
  int local_260;
  int local_25c;
  int local_258 [2];
  undefined4 local_250 [2];
  undefined4 local_248 [2];
  longlong *local_240 [3];
  undefined4 local_228;
  undefined4 local_224;
  longlong *local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 ****local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 ****local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  uint auStack_168 [14];
  longlong alStack_130 [25];
  undefined1 local_68 [40];
  
  puVar11 = PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670;
  local_res8 = param_1 & 0xffffffff00000000;
  if ((DAT_1404e53b4 >> 0xe & 1) == 0) {
    local_288 = (char *)0x0;
    uStack_280 = 0;
    local_278 = 0;
    local_270 = 0;
    local_res10 = param_2;
    uVar13 = func_0x000140421ed0(PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670);
    func_0x000140017550(&local_288,puVar11,uVar13);
    uVar13 = FUN_140079cb0(&DAT_1404e6540,&local_288);
    FUN_140079f50(uVar13);
    if (0xf < local_270) {
      func_0x0001400172d0(&local_288,local_288);
    }
    plVar28 = (longlong *)PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670;
    plVar18 = (longlong *)*DAT_1404e5400;
    uVar27 = 0;
    if (plVar18 != DAT_1404e5400) {
      do {
        if (1 < (ulonglong)((plVar18[8] - plVar18[7] >> 3) * -0x71c71c71c71c71c7)) {
          local_224 = (undefined4)plVar18[0xf];
          lVar15 = plVar18[6];
          local_228 = 0;
          local_220 = (longlong *)0x0;
          local_218 = 0;
          uStack_210 = 0;
          local_1f8 = 0;
          local_1f0 = 0xf;
          local_1d8 = 0;
          local_1d0 = 0xf;
          uStack_200 = 0;
          local_208 = (undefined8 *****)0x0;
          uStack_1e0 = 0;
          local_1e8 = (undefined8 *****)0x0;
          if (lVar15 != 0) {
            pppppuVar22 = (undefined8 *****)(lVar15 + 0xe0);
            if (&local_208 != pppppuVar22) {
              if (0xf < *(ulonglong *)(lVar15 + 0xf8)) {
                pppppuVar22 = (undefined8 *****)*pppppuVar22;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(&local_208,pppppuVar22,*(undefined8 *)(lVar15 + 0xf0));
            }
            lVar15 = plVar18[6];
            pppppuVar22 = (undefined8 *****)(lVar15 + 0x120);
            if (&local_1e8 != pppppuVar22) {
              if (0xf < *(ulonglong *)(lVar15 + 0x138)) {
                pppppuVar22 = (undefined8 *****)*pppppuVar22;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(&local_1e8,pppppuVar22,*(undefined8 *)(lVar15 + 0x130));
            }
          }
          plVar19 = (longlong *)plVar18[0xb];
          plVar29 = (longlong *)plVar18[10];
          local_240[0] = plVar19;
          if (plVar29 != plVar19) {
            local_1a8 = 0;
            local_1a0 = 0xf;
            local_188 = 0;
            local_180 = 0xf;
            uStack_1b0 = 0;
            local_1b8 = 0;
            uStack_190 = 0;
            local_198 = 0;
            if (&local_1b8 != plVar29) {
              plVar18 = plVar29;
              if (0xf < (ulonglong)plVar29[3]) {
                plVar18 = (longlong *)*plVar29;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(&local_1b8,plVar18,plVar29[2]);
            }
            plVar18 = plVar29 + 5;
            if (&local_198 == plVar18) {
              local_res20 = (longlong *)0x0;
              local_res18 = (longlong *)0x1;
              local_res18 = (longlong *)FUN_14007c9e0(0,&local_res18);
                    /* WARNING: Subroutine does not return */
              FUN_140017090(local_res18,&local_1b8);
            }
            if (0xf < (ulonglong)plVar29[8]) {
              plVar18 = (longlong *)*plVar18;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(&local_198,plVar18,plVar29[7]);
          }
          local_278 = 0;
          local_288 = (char *)0x0;
          uStack_280 = 0;
          local_270 = 0;
          uVar13 = func_0x000140421ed0(PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670)
          ;
          func_0x000140017550(&local_288,plVar28,uVar13);
          uVar13 = FUN_140079cb0(&DAT_1404e6540,&local_288);
          puVar14 = (undefined4 *)FUN_14007a2a0(uVar13,plVar18 + 2);
          plVar29 = local_220;
          *puVar14 = local_228;
          puVar14[1] = local_224;
          if ((longlong **)(puVar14 + 2) == &local_220) goto LAB_14006f706;
          unaff_R14 = *(longlong **)(puVar14 + 2);
          local_res20 = (longlong *)(local_218 - (longlong)local_220);
          plVar19 = (longlong *)(*(longlong *)(puVar14 + 6) - (longlong)unaff_R14 >> 6);
          plVar25 = (longlong *)((longlong)local_res20 >> 6);
          if (plVar19 < plVar25) {
            if ((longlong *)0x3ffffffffffffff < plVar25) {
                    /* WARNING: Subroutine does not return */
              FUN_140013120();
            }
            if ((longlong *)(0x3ffffffffffffff - ((ulonglong)plVar19 >> 1)) < plVar19) {
              plVar19 = (longlong *)0x3ffffffffffffff;
            }
            else {
              plVar19 = (longlong *)(((ulonglong)plVar19 >> 1) + (longlong)plVar19);
              if (plVar19 < plVar25) {
                plVar19 = plVar25;
              }
            }
            plVar28 = plVar29;
            if (unaff_R14 != (longlong *)0x0) {
              if (unaff_R14 != *(longlong **)(puVar14 + 4)) {
                    /* WARNING: Subroutine does not return */
                FUN_140017310(unaff_R14 + 4);
              }
              lVar15 = *(longlong *)(puVar14 + 2);
              uVar21 = *(longlong *)(puVar14 + 6) - lVar15 & 0xffffffffffffffc0;
              if (0xfff < uVar21) {
                if (0x1f < (lVar15 - *(longlong *)(lVar15 + -8)) - 8U) goto LAB_14006fd82;
                uVar21 = uVar21 | 0x27;
                lVar15 = *(longlong *)(lVar15 + -8);
              }
              func_0x00014028b040(lVar15,uVar21);
              *(undefined8 *)(puVar14 + 2) = 0;
              *(undefined8 *)(puVar14 + 4) = 0;
              *(undefined8 *)(puVar14 + 6) = 0;
            }
            plVar26 = (longlong *)0x0;
            if ((longlong *)0x3ffffffffffffff < plVar19) {
LAB_140070752:
                    /* WARNING: Subroutine does not return */
              FUN_140017440();
            }
            plVar19 = (longlong *)((longlong)plVar19 * 0x40);
            if (plVar19 != (longlong *)0x0) {
              if (plVar19 < (longlong *)0x1000) {
                plVar26 = (longlong *)func_0x00014028aff0(plVar19);
              }
              else {
                if ((longlong *)((longlong)plVar19 + 0x27U) <= plVar19) goto LAB_140070752;
                lVar15 = func_0x00014028aff0();
                if (lVar15 == 0) goto LAB_14006fd82;
                plVar26 = (longlong *)(lVar15 + 0x27U & 0xffffffffffffffe0);
                plVar26[-1] = lVar15;
              }
            }
            *(longlong **)(puVar14 + 2) = plVar26;
            *(longlong **)(puVar14 + 4) = plVar26;
            *(longlong **)(puVar14 + 6) = (longlong *)((longlong)plVar19 + (longlong)plVar26);
            if (local_res20 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_140017090(plVar26,plVar29);
            }
            *(longlong **)(puVar14 + 4) = plVar26;
            unaff_R14 = plVar26;
          }
          else {
            plVar19 = *(longlong **)(puVar14 + 4);
            local_res18 = (longlong *)((longlong)plVar19 - (longlong)unaff_R14 >> 6);
            if (local_res18 < plVar25) {
              plVar28 = local_220;
              if (unaff_R14 != plVar19) {
                do {
                  if (unaff_R14 != plVar28) {
                    plVar18 = plVar28;
                    if (0xf < (ulonglong)plVar28[3]) {
                      plVar18 = (longlong *)*plVar28;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_14000f950(unaff_R14,plVar18,plVar28[2]);
                  }
                  plVar19 = *(longlong **)(puVar14 + 4);
                  unaff_R14 = unaff_R14 + 8;
                  plVar28 = plVar28 + 8;
                } while (unaff_R14 != plVar19);
              }
              if (plVar25 != local_res18) {
                    /* WARNING: Subroutine does not return */
                FUN_140017090(plVar19,plVar28);
              }
            }
            else {
              plVar28 = (longlong *)
                        (((ulonglong)local_res20 & 0xffffffffffffffc0) + (longlong)unaff_R14);
              plVar19 = local_220;
              plVar29 = local_res20;
              while (plVar29 != (longlong *)0x0) {
                if (unaff_R14 != plVar19) {
                  plVar18 = plVar19;
                  if (0xf < (ulonglong)plVar19[3]) {
                    plVar18 = (longlong *)*plVar19;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_14000f950(unaff_R14,plVar18,plVar19[2]);
                }
                unaff_R14 = unaff_R14 + 8;
                plVar19 = plVar19 + 8;
                plVar25 = (longlong *)((longlong)plVar25 + -1);
                plVar29 = plVar25;
              }
              unaff_R14 = *(longlong **)(puVar14 + 4);
              plVar19 = plVar28;
              if (plVar28 != unaff_R14) {
                    /* WARNING: Subroutine does not return */
                FUN_140017310(plVar28 + 4);
              }
            }
            *(longlong **)(puVar14 + 4) = plVar19;
          }
LAB_14006f706:
          plVar25 = (longlong *)0x0;
          if ((undefined8 *****)(puVar14 + 8) != &local_208) {
            pppppuVar22 = &local_208;
            if (0xf < local_1f0) {
              pppppuVar22 = (undefined8 *****)local_208;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(puVar14 + 8,pppppuVar22,local_1f8);
          }
          if ((undefined8 *****)(puVar14 + 0x10) != &local_1e8) {
            pppppuVar22 = &local_1e8;
            if (0xf < local_1d0) {
              pppppuVar22 = (undefined8 *****)local_1e8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(puVar14 + 0x10,pppppuVar22,local_1d8);
          }
          if (0xf < local_270) {
            uVar21 = local_270 + 1;
            pcVar16 = local_288;
            if (0xfff < uVar21) {
              pcVar16 = *(char **)(local_288 + -8);
              if ((char *)0x1f < local_288 + (-8 - (longlong)pcVar16)) {
LAB_14006fd82:
                pcVar6 = (code *)swi(0x29);
                (*pcVar6)(5);
LAB_14006fd89:
                FUN_14007ae70(&local_178,&local_res20);
                do {
                  if (0xf < (ulonglong)plVar28[5]) {
                    plVar18 = (longlong *)*plVar18;
                    local_2a8 = plVar18;
                  }
                  uVar27 = (uint)plVar19;
                  if (plVar25 == (longlong *)0x0) {
                    FUN_14007ae70(&local_178,plVar18);
                  }
                  else {
                    uVar23 = (int)local_res20 + (int)puVar14;
                    plVar18 = plVar19;
                    if (uVar27 < uVar23) {
                      do {
                        uVar27 = (int)plVar18 * 2;
                        plVar18 = (longlong *)(ulonglong)uVar27;
                      } while (uVar27 < uVar23);
                      uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                    }
                    if (0 < (int)local_res20) {
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,local_2a8,
                                    (longlong)(int)local_res20);
                    }
                  }
                  local_250[0] = (undefined4)plVar28[8];
                  if (plVar25 == (longlong *)0x0) {
                    FUN_14007ae70(&local_178,local_250);
                  }
                  else {
                    uVar23 = (int)puVar14 + 4;
                    plVar18 = plVar19;
                    if (uVar27 < uVar23) {
                      do {
                        uVar27 = (int)plVar18 * 2;
                        plVar18 = (longlong *)(ulonglong)uVar27;
                      } while (uVar27 < uVar23);
                      uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                    }
                    uVar21 = (ulonglong)puVar14 & 0xffffffff;
                    puVar14 = (undefined4 *)(ulonglong)uVar23;
                    *(undefined4 *)(uVar21 + (longlong)plVar25) = local_250[0];
                  }
                  puVar4 = (undefined8 *)plVar28[7];
                  for (puVar5 = (undefined8 *)*puVar4; iVar12 = (int)puVar14, puVar5 != puVar4;
                      puVar5 = (undefined8 *)*puVar5) {
                    local_260 = *(int *)(puVar5 + 4);
                    plVar18 = puVar5 + 2;
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,&local_260);
                    }
                    else {
                      uVar23 = iVar12 + 4;
                      plVar29 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar29 * 2;
                          plVar29 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      uVar21 = (ulonglong)puVar14 & 0xffffffff;
                      puVar14 = (undefined4 *)(ulonglong)uVar23;
                      *(int *)(uVar21 + (longlong)plVar25) = local_260;
                    }
                    if (0xf < (ulonglong)puVar5[5]) {
                      plVar18 = (longlong *)*plVar18;
                    }
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,plVar18);
                    }
                    else {
                      uVar23 = local_260 + (int)puVar14;
                      plVar29 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar29 * 2;
                          plVar29 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      if (0 < local_260) {
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,plVar18,
                                      (longlong)local_260);
                      }
                    }
                    local_248[0] = *(undefined4 *)((longlong)puVar5 + 0x34);
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,local_248);
                    }
                    else {
                      uVar23 = (int)puVar14 + 4;
                      plVar18 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar18 * 2;
                          plVar18 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      uVar21 = (ulonglong)puVar14 & 0xffffffff;
                      puVar14 = (undefined4 *)(ulonglong)uVar23;
                      *(undefined4 *)(uVar21 + (longlong)plVar25) = local_248[0];
                    }
                    local_25c = *(int *)(puVar5 + 0xc);
                    plVar18 = puVar5 + 10;
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,&local_25c);
                    }
                    else {
                      uVar23 = (int)puVar14 + 4;
                      plVar29 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar29 * 2;
                          plVar29 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      uVar21 = (ulonglong)puVar14 & 0xffffffff;
                      puVar14 = (undefined4 *)(ulonglong)uVar23;
                      *(int *)(uVar21 + (longlong)plVar25) = local_25c;
                    }
                    if (0xf < (ulonglong)puVar5[0xd]) {
                      plVar18 = (longlong *)*plVar18;
                    }
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,plVar18,(longlong)local_25c);
                      local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(puVar5 + 0x10));
LAB_1400701ea:
                      FUN_14007ae70(&local_178,&local_res8);
                    }
                    else {
                      uVar23 = local_25c + (int)puVar14;
                      plVar29 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar29 * 2;
                          plVar29 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      if (0 < local_25c) {
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,plVar18,
                                      (longlong)local_25c);
                      }
                      local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(puVar5 + 0x10));
                      if (plVar25 == (longlong *)0x0) goto LAB_1400701ea;
                      uVar23 = (int)puVar14 + 4;
                      plVar18 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar18 * 2;
                          plVar18 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      uVar21 = (ulonglong)puVar14 & 0xffffffff;
                      puVar14 = (undefined4 *)(ulonglong)uVar23;
                      *(undefined4 *)(uVar21 + (longlong)plVar25) = *(undefined4 *)(puVar5 + 0x10);
                    }
                    local_298 = puVar5 + 0xe;
                    if (0xf < (ulonglong)puVar5[0x11]) {
                      local_298 = (longlong *)puVar5[0xe];
                    }
                    if (plVar25 == (longlong *)0x0) {
                      FUN_14007ae70(&local_178,local_298,(longlong)(int)(uint)local_res8);
                      local_258[0] = (int)((longlong)(puVar5[8] - puVar5[7]) >> 6);
LAB_140070320:
                      FUN_14007ae70(&local_178,local_258);
                    }
                    else {
                      uVar23 = (uint)local_res8 + (int)puVar14;
                      plVar18 = plVar19;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar18 * 2;
                          plVar18 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      if (0 < (int)(uint)local_res8) {
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,
                                      local_298,(longlong)(int)(uint)local_res8);
                      }
                      local_258[0] = (int)((longlong)(puVar5[8] - puVar5[7]) >> 6);
                      if (plVar25 == (longlong *)0x0) goto LAB_140070320;
                      uVar23 = (int)puVar14 + 4;
                      if (uVar27 < uVar23) {
                        do {
                          uVar27 = (int)plVar18 * 2;
                          plVar18 = (longlong *)(ulonglong)uVar27;
                        } while (uVar27 < uVar23);
                        uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                        FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                      }
                      uVar21 = (ulonglong)puVar14 & 0xffffffff;
                      puVar14 = (undefined4 *)(ulonglong)uVar23;
                      *(int *)(uVar21 + (longlong)plVar25) = local_258[0];
                    }
                    lVar15 = puVar5[7];
                    local_2a0 = 0;
                    if (puVar5[8] - lVar15 >> 6 != 0) {
                      do {
                        plVar18 = (longlong *)((longlong)local_2a0 * 0x40 + lVar15);
                        local_258[0] = (int)plVar18[2];
                        if (plVar25 == (longlong *)0x0) {
                          FUN_14007ae70(&local_178,local_258,4);
                        }
                        else {
                          uVar23 = (int)puVar14 + 4;
                          plVar29 = plVar19;
                          if (uVar27 < uVar23) {
                            do {
                              uVar27 = (int)plVar29 * 2;
                              plVar29 = (longlong *)(ulonglong)uVar27;
                            } while (uVar27 < uVar23);
                            uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                          }
                          uVar21 = (ulonglong)puVar14 & 0xffffffff;
                          puVar14 = (undefined4 *)(ulonglong)uVar23;
                          *(int *)(uVar21 + (longlong)plVar25) = local_258[0];
                        }
                        local_240[0] = plVar18;
                        if (0xf < (ulonglong)plVar18[3]) {
                          local_240[0] = (longlong *)*plVar18;
                        }
                        if (plVar25 == (longlong *)0x0) {
                          FUN_14007ae70(&local_178,local_240[0],(longlong)local_258[0]);
                          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,(int)plVar18[6]);
LAB_140070535:
                          FUN_14007ae70(&local_178,&local_res18,4);
                        }
                        else {
                          uVar23 = local_258[0] + (int)puVar14;
                          local_288 = (char *)CONCAT44(local_288._4_4_,uVar23);
                          plVar29 = plVar19;
                          if (uVar27 < uVar23) {
                            do {
                              uVar27 = (int)plVar29 * 2;
                              plVar29 = (longlong *)(ulonglong)uVar27;
                            } while (uVar27 < uVar23);
                            uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                          }
                          if (0 < local_258[0]) {
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,
                                          local_240[0],(longlong)local_258[0]);
                          }
                          uVar21 = (ulonglong)puVar14 & 0xffffffff;
                          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,(int)plVar18[6]);
                          if (plVar25 == (longlong *)0x0) goto LAB_140070535;
                          uVar23 = (int)puVar14 + 4;
                          puVar14 = (undefined4 *)(ulonglong)uVar23;
                          if (uVar27 < uVar23) {
                            local_288 = (char *)CONCAT44(local_288._4_4_,uVar27);
                            do {
                              uVar27 = (int)plVar19 * 2;
                              plVar19 = (longlong *)(ulonglong)uVar27;
                            } while (uVar27 < uVar23);
                            local_240[0] = plVar25;
                            uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(uVar13,local_240[0],(ulonglong)local_288 & 0xffffffff);
                          }
                          *(int *)(uVar21 + (longlong)plVar25) = (int)plVar18[6];
                        }
                        local_298 = plVar18 + 4;
                        if (0xf < (ulonglong)plVar18[7]) {
                          local_298 = (longlong *)*local_298;
                        }
                        if (plVar25 == (longlong *)0x0) {
                          FUN_14007ae70(&local_178,local_298,(longlong)(int)local_res18);
                        }
                        else {
                          uVar23 = (int)local_res18 + (int)puVar14;
                          if (uVar27 < uVar23) {
                            local_288 = (char *)CONCAT44(local_288._4_4_,uVar27);
                            do {
                              uVar27 = (int)plVar19 * 2;
                              plVar19 = (longlong *)(ulonglong)uVar27;
                            } while (uVar27 < uVar23);
                            local_240[0] = plVar25;
                            uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(uVar13,local_240[0],(ulonglong)local_288 & 0xffffffff);
                          }
                          if (0 < (int)local_res18) {
                    /* WARNING: Subroutine does not return */
                            FUN_1404211c0(((ulonglong)puVar14 & 0xffffffff) + (longlong)plVar25,
                                          local_298,(longlong)(int)local_res18);
                          }
                        }
                        lVar15 = puVar5[7];
                        local_2a0 = local_2a0 + 1;
                      } while ((ulonglong)(longlong)local_2a0 < (ulonglong)(puVar5[8] - lVar15 >> 6)
                              );
                    }
                  }
                  plVar28 = (longlong *)*plVar28;
                  if (plVar28 == unaff_R14) {
                    if ((plVar25 != (longlong *)0x0) && (iVar12 != 0)) {
                      FUN_14007ae70(&local_178,plVar25,(ulonglong)puVar14 & 0xffffffff);
                    }
                    lVar15 = FUN_14004c490(local_170);
                    if (lVar15 == 0) {
                      lVar15 = (longlong)*(int *)(local_178 + 4);
                      uVar27 = 6;
                      if (*(longlong *)((longlong)alStack_130 + lVar15) != 0) {
                        uVar27 = 2;
                      }
                      func_0x000140013c20(local_170 + lVar15 + -8,
                                          uVar27 | *(uint *)((longlong)auStack_168 + lVar15),0);
                    }
                    func_0x00014028b040(plVar25);
                    func_0x00014028b040(0);
                    *(undefined **)(local_170 + (longlong)*(int *)(local_178 + 4) + -8) =
                         &DAT_140475ed8;
                    *(int *)((longlong)&local_180 + (longlong)*(int *)(local_178 + 4) + 4) =
                         *(int *)(local_178 + 4) + -0xa8;
                    /* WARNING: Subroutine does not return */
                    FUN_14004a860(local_170);
                  }
                  plVar18 = plVar28 + 2;
                  uVar21 = (ulonglong)local_res20 >> 0x20;
                  local_res20 = (longlong *)CONCAT44((int)uVar21,(int)plVar28[4]);
                  local_2a8 = plVar18;
                  if (plVar25 == (longlong *)0x0) goto LAB_14006fd89;
                  uVar23 = iVar12 + 4;
                  plVar29 = plVar19;
                  if (uVar27 < uVar23) {
                    do {
                      uVar27 = (int)plVar29 * 2;
                      plVar29 = (longlong *)(ulonglong)uVar27;
                    } while (uVar27 < uVar23);
                    uVar13 = FUN_14028b190(uVar27);
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(uVar13,plVar25,(ulonglong)plVar19 & 0xffffffff);
                  }
                  uVar21 = (ulonglong)puVar14 & 0xffffffff;
                  puVar14 = (undefined4 *)(ulonglong)uVar23;
                  *(int *)(uVar21 + (longlong)plVar25) = (int)plVar28[4];
                } while( true );
              }
              uVar21 = local_270 + 0x28;
            }
            func_0x00014028b040(pcVar16,uVar21);
          }
                    /* WARNING: Subroutine does not return */
          FUN_140017310(&local_1e8);
        }
        plVar18 = (longlong *)*plVar18;
      } while (plVar18 != DAT_1404e5400);
      uVar27 = (uint)local_res8;
    }
    if (local_res10 != '\0') {
      plVar18 = (longlong *)*DAT_1404e6548;
      if (plVar18 != DAT_1404e6548) {
        do {
          uStack_280 = 0;
          pcVar16 = (char *)func_0x00014028aff0(0x20);
          uVar10 = s_wallpaperconfigvd_140476ce0._12_4_;
          uVar9 = s_wallpaperconfigvd_140476ce0._8_4_;
          uVar8 = s_wallpaperconfigvd_140476ce0._4_4_;
          local_278 = 0x11;
          *(undefined4 *)pcVar16 = s_wallpaperconfigvd_140476ce0._0_4_;
          *(undefined4 *)(pcVar16 + 4) = uVar8;
          *(undefined4 *)(pcVar16 + 8) = uVar9;
          *(undefined4 *)(pcVar16 + 0xc) = uVar10;
          pcVar16[0x10] = s_wallpaperconfigvd_140476ce0[0x10];
          pcVar16[0x11] = '\0';
          local_270 = 0x1f;
          local_288 = pcVar16;
          if ((ulonglong)plVar18[4] < 0x11) {
LAB_14006f947:
            bVar7 = false;
          }
          else {
            uVar21 = plVar18[5];
            plVar28 = plVar18 + 2;
            if (0xf < uVar21) {
              plVar28 = (longlong *)plVar18[2];
            }
            iVar12 = func_0x0001404210c0(plVar28,pcVar16,0x11);
            if (iVar12 != 0) goto LAB_14006f947;
            if (uVar21 < 0x10) {
              plVar28 = plVar18 + 2;
            }
            else {
              plVar28 = (longlong *)plVar18[2];
            }
            iVar12 = FUN_1402c9f30(plVar28,"wallpaperconfigvd",0x11);
            if (iVar12 == 0) {
              uVar23 = func_0x0001402c8390((longlong)plVar28 + 0x11);
              uVar21 = (((((ulonglong)(uVar23 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)((int)uVar23 >> 8 & 0xff)) * 0x100000001b3 ^
                        (ulonglong)((int)uVar23 >> 0x10 & 0xff)) * 0x100000001b3 ^
                       (ulonglong)((int)uVar23 >> 0x18 & 0xff)) * 0x100000001b3 & _DAT_1404df740;
              lVar15 = *(longlong *)(DAT_1404df728 + 8 + uVar21 * 0x10);
              if (lVar15 == DAT_1404df718) {
LAB_14006f931:
                lVar15 = 0;
              }
              else {
                uVar2 = *(uint *)(lVar15 + 0x10);
                while (uVar23 != uVar2) {
                  if (lVar15 == *(longlong *)(DAT_1404df728 + uVar21 * 0x10)) goto LAB_14006f931;
                  lVar15 = *(longlong *)(lVar15 + 8);
                  uVar2 = *(uint *)(lVar15 + 0x10);
                }
              }
              lVar17 = DAT_1404df718;
              if (lVar15 != 0) {
                lVar17 = lVar15;
              }
              if (lVar17 != DAT_1404df718) goto LAB_14006f947;
            }
            bVar7 = true;
          }
          func_0x0001400172d0(&local_288,pcVar16,0x1f);
          local_res8 = CONCAT44(local_res8._4_4_,uVar27) & 0xfffffffffffffffe;
          if (bVar7) {
            lVar17 = func_0x00014007d180(&DAT_1404e6540,plVar18 + 2);
            lVar15 = DAT_1404e6558;
            plVar19 = DAT_1404e6548;
            plVar28 = *(longlong **)(DAT_1404e6558 + lVar17 * 0x10);
            if (*(longlong **)(DAT_1404e6558 + 8 + lVar17 * 0x10) == plVar18) {
              if (plVar28 == plVar18) {
                *(longlong **)(DAT_1404e6558 + lVar17 * 0x10) = DAT_1404e6548;
                *(longlong **)(lVar15 + 8 + lVar17 * 0x10) = plVar19;
              }
              else {
                *(longlong *)(DAT_1404e6558 + 8 + lVar17 * 0x10) = plVar18[1];
              }
            }
            else if (plVar28 == plVar18) {
              *(longlong *)(DAT_1404e6558 + lVar17 * 0x10) = *plVar18;
            }
            lVar15 = *plVar18;
            _DAT_1404e6550 = _DAT_1404e6550 + -1;
            *(longlong *)plVar18[1] = lVar15;
            *(longlong *)(lVar15 + 8) = plVar18[1];
            func_0x00014000dab0(plVar18 + 9);
            FUN_14003a670(plVar18 + 7);
                    /* WARNING: Subroutine does not return */
            FUN_140017310(plVar18 + 2);
          }
          plVar28 = *(longlong **)plVar18[7];
          uVar27 = uVar27 & 0xfffffffe;
          if (plVar28 != (longlong *)plVar18[7]) {
            do {
              uVar21 = plVar28[5];
              plVar19 = plVar28 + 2;
              if (0xf < uVar21) {
                plVar19 = (longlong *)plVar28[2];
              }
              uVar3 = plVar28[4];
              uVar20 = 0;
              uVar24 = 0xcbf29ce484222325;
              if (uVar3 != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar19 + uVar20);
                  uVar20 = uVar20 + 1;
                  uVar24 = (uVar24 ^ *pbVar1) * 0x100000001b3;
                } while (uVar20 < uVar3);
              }
              lVar15 = func_0x000140011170(&DAT_1404e5438,local_240,plVar28 + 2,uVar24);
              if ((*(longlong *)(lVar15 + 8) == 0) || (*(longlong *)(lVar15 + 8) == DAT_1404e5440))
              {
                plVar19 = plVar28 + 2;
                if (0xf < uVar21) {
                  plVar19 = (longlong *)plVar28[2];
                }
                uVar20 = 0;
                uVar21 = 0xcbf29ce484222325;
                if (uVar3 != 0) {
                  do {
                    pbVar1 = (byte *)(uVar20 + (longlong)plVar19);
                    uVar20 = uVar20 + 1;
                    uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
                  } while (uVar20 < uVar3);
                }
                lVar15 = plVar18[9];
                uVar21 = plVar18[0xc] & uVar21;
                plVar19 = *(longlong **)(lVar15 + uVar21 * 0x10);
                if (*(longlong **)(lVar15 + 8 + uVar21 * 0x10) == plVar28) {
                  if (plVar19 == plVar28) {
                    lVar17 = plVar18[7];
                    *(longlong *)(lVar15 + uVar21 * 0x10) = lVar17;
                    *(longlong *)(lVar15 + 8 + uVar21 * 0x10) = lVar17;
                  }
                  else {
                    *(longlong *)(lVar15 + 8 + uVar21 * 0x10) = plVar28[1];
                  }
                }
                else if (plVar19 == plVar28) {
                  *(longlong *)(lVar15 + uVar21 * 0x10) = *plVar28;
                }
                lVar15 = *plVar28;
                plVar18[8] = plVar18[8] + -1;
                *(longlong *)plVar28[1] = lVar15;
                *(longlong *)(lVar15 + 8) = plVar28[1];
                    /* WARNING: Subroutine does not return */
                FUN_140017310(plVar28 + 0xe);
              }
              plVar28 = (longlong *)*plVar28;
            } while (plVar28 != (longlong *)plVar18[7]);
            uVar27 = (uint)local_res8;
          }
          plVar18 = (longlong *)*plVar18;
        } while (plVar18 != DAT_1404e6548);
      }
      uVar13 = FUN_140005fb0(&local_288);
      uVar13 = FUN_140005df0(uVar13,"bin/playliststate.bin");
                    /* WARNING: Subroutine does not return */
      FUN_1400166d0(local_68,uVar13);
    }
  }
  return;
}

