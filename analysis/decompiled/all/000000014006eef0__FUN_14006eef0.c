// Function: FUN_14006eef0
// Addr: 14006eef0
// Size: 6037 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006eef0(ulonglong param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  size_t sVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  char ****ppppcVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 ****ppppuVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong *unaff_RSI;
  int *piVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined4 *unaff_R13;
  longlong *unaff_R14;
  longlong *plVar27;
  undefined4 uVar28;
  undefined8 local_res8;
  char local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [32];
  longlong *local_2b0;
  char ***local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270;
  int local_258;
  int local_254;
  undefined4 local_250 [2];
  undefined4 local_248 [2];
  longlong *local_240 [3];
  undefined4 local_228;
  undefined4 local_224;
  longlong *local_220;
  longlong *local_218;
  longlong *plStack_210;
  undefined8 ***local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 ***local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined4 local_1c8 [4];
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  uint auStack_168 [14];
  longlong alStack_130 [8];
  longlong local_f0;
  undefined **local_d0 [13];
  undefined8 ***local_68 [3];
  ulonglong local_50;
  
  puVar6 = PTR_s_wallpaperconfig_1404df5a0;
  puVar22 = auStack_2d8;
  puVar23 = auStack_2d8;
  plVar17 = (longlong *)0x0;
  local_res8 = param_1 & 0xffffffff00000000;
  if ((DAT_1404e52e4 >> 0xe & 1) == 0) {
    local_288 = (char ***)0x0;
    uStack_280 = 0;
    local_278 = 0;
    local_270 = 0;
    local_res10 = param_2;
    sVar9 = strlen(PTR_s_wallpaperconfig_1404df5a0);
    FUN_140017480(&local_288,puVar6,sVar9);
    uVar10 = FUN_140079be0(&DAT_1404e6470,&local_288);
    FUN_140079e80(uVar10);
    if (0xf < local_270) {
      FUN_140017200(&local_288,local_288);
    }
    plVar21 = (longlong *)*DAT_1404e5330;
    local_2b0 = DAT_1404e5330;
    plVar15 = DAT_1404e5330;
    if (plVar21 != DAT_1404e5330) {
      do {
        if (1 < (ulonglong)((plVar21[8] - plVar21[7] >> 3) * -0x71c71c71c71c71c7)) {
          local_224 = (undefined4)plVar21[0xf];
          lVar12 = plVar21[6];
          local_228 = 0;
          local_220 = (longlong *)0x0;
          local_218 = (longlong *)0x0;
          plStack_210 = (longlong *)0x0;
          local_1f8 = 0;
          local_1f0 = 0xf;
          local_1d8 = 0;
          local_1d0 = 0xf;
          uStack_200 = 0;
          local_208 = (undefined8 ****)0x0;
          uStack_1e0 = 0;
          local_1e8 = (undefined8 ****)0x0;
          if (lVar12 != 0) {
            ppppuVar20 = (undefined8 ****)(lVar12 + 0xe0);
            if (&local_208 != ppppuVar20) {
              if (0xf < *(ulonglong *)(lVar12 + 0xf8)) {
                ppppuVar20 = (undefined8 ****)*ppppuVar20;
              }
              FUN_14000f880(&local_208,ppppuVar20,*(undefined8 *)(lVar12 + 0xf0));
            }
            lVar12 = plVar21[6];
            ppppuVar20 = (undefined8 ****)(lVar12 + 0x120);
            if (&local_1e8 != ppppuVar20) {
              if (0xf < *(ulonglong *)(lVar12 + 0x138)) {
                ppppuVar20 = (undefined8 ****)*ppppuVar20;
              }
              FUN_14000f880(&local_1e8,ppppuVar20,*(undefined8 *)(lVar12 + 0x130));
            }
          }
          plVar17 = (longlong *)plVar21[0xb];
          unaff_RSI = (longlong *)plVar21[10];
          local_240[0] = plVar17;
          if (unaff_RSI != plVar17) {
            do {
              local_1a8 = 0;
              local_1a0 = 0xf;
              local_188 = 0;
              local_180 = 0xf;
              uStack_1b0 = 0;
              local_1b8 = 0;
              uStack_190 = 0;
              local_198 = 0;
              if (&local_1b8 != unaff_RSI) {
                plVar26 = unaff_RSI;
                if (0xf < (ulonglong)unaff_RSI[3]) {
                  plVar26 = (longlong *)*unaff_RSI;
                }
                FUN_14000f880(&local_1b8,plVar26,unaff_RSI[2]);
              }
              plVar26 = unaff_RSI + 5;
              if (&local_198 != plVar26) {
                if (0xf < (ulonglong)unaff_RSI[8]) {
                  plVar26 = (longlong *)*plVar26;
                }
                FUN_14000f880(&local_198,plVar26,unaff_RSI[7]);
              }
              unaff_R14 = local_218;
              if (local_218 == plStack_210) {
                local_res20 = local_218;
                uVar18 = (longlong)local_218 - (longlong)local_220;
                lVar12 = (longlong)uVar18 >> 6;
                if (lVar12 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_140013050();
                }
                plVar17 = (longlong *)(lVar12 + 1);
                uVar25 = (longlong)plStack_210 - (longlong)local_220 >> 6;
                if (0x3ffffffffffffff - (uVar25 >> 1) < uVar25) {
                  plVar26 = (longlong *)0x3ffffffffffffff;
                }
                else {
                  plVar26 = (longlong *)((uVar25 >> 1) + uVar25);
                  if (plVar26 < plVar17) {
                    plVar26 = plVar17;
                  }
                }
                local_res18 = plVar26;
                plVar11 = (longlong *)FUN_14007c910(uVar25,&local_res18);
                uVar18 = uVar18 & 0xffffffffffffffc0;
                local_res18 = (longlong *)((longlong)plVar11 + uVar18);
                FUN_140016fc0(local_res18,&local_1b8);
                FUN_140016fc0((uVar18 | 0x20) + (longlong)plVar11,&local_198);
                plVar27 = local_220;
                plVar19 = plVar11;
                if (local_res20 != local_218) {
                  plVar27 = local_res20;
                  FUN_14007d630(local_220,local_res20,plVar11);
                  plVar19 = local_res18 + 8;
                }
                FUN_14007d630(plVar27,local_218,plVar19);
                if (local_220 != (longlong *)0x0) {
                  uVar28 = FUN_14003a6d0(local_220,local_218);
                  FUN_14003a710(uVar28,local_220,(longlong)plStack_210 - (longlong)local_220 >> 6);
                }
                local_218 = plVar11 + (longlong)plVar17 * 8;
                unaff_R14 = plVar11 + (longlong)plVar26 * 8;
                plVar17 = local_240[0];
                local_220 = plVar11;
                plStack_210 = unaff_R14;
              }
              else {
                FUN_140016fc0(local_218,&local_1b8);
                FUN_140016fc0(unaff_R14 + 4,&local_198);
                local_218 = local_218 + 8;
              }
              plVar26 = (longlong *)0x0;
              unaff_R13 = (undefined4 *)0x3ffffffffffffff;
              if (0xf < local_180) {
                uVar18 = local_180 + 1;
                lVar12 = local_198;
                if (0xfff < uVar18) {
                  lVar12 = *(longlong *)(local_198 + -8);
                  if (0x1f < (local_198 - lVar12) - 8U) goto LAB_14006fcb2;
                  uVar18 = local_180 + 0x28;
                }
                thunk_FUN_14028af80(lVar12,uVar18);
              }
              if (0xf < local_1a0) {
                uVar18 = local_1a0 + 1;
                lVar12 = local_1b8;
                if (0xfff < uVar18) {
                  lVar12 = *(longlong *)(local_1b8 + -8);
                  if (0x1f < (local_1b8 - lVar12) - 8U) goto LAB_14006fcb2;
                  uVar18 = local_1a0 + 0x28;
                }
                thunk_FUN_14028af80(lVar12,uVar18);
              }
              unaff_RSI = unaff_RSI + 9;
            } while (unaff_RSI != plVar17);
          }
          unaff_RSI = (longlong *)PTR_s_wallpaperconfig_1404df5a0;
          local_278 = 0;
          local_288 = (char ***)0x0;
          uStack_280 = 0;
          local_270 = 0;
          sVar9 = strlen(PTR_s_wallpaperconfig_1404df5a0);
          FUN_140017480(&local_288,unaff_RSI,sVar9);
          uVar10 = FUN_140079be0(&DAT_1404e6470,&local_288);
          unaff_R13 = (undefined4 *)FUN_14007a1d0(uVar10,plVar21 + 2);
          *unaff_R13 = local_228;
          unaff_R13[1] = local_224;
          if ((longlong **)(unaff_R13 + 2) != &local_220) {
            unaff_R14 = *(longlong **)(unaff_R13 + 2);
            local_res20 = (longlong *)((longlong)local_218 - (longlong)local_220);
            plVar17 = (longlong *)(*(longlong *)(unaff_R13 + 6) - (longlong)unaff_R14 >> 6);
            plVar26 = (longlong *)((longlong)local_res20 >> 6);
            if (plVar17 < plVar26) {
              if ((longlong *)0x3ffffffffffffff < plVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              if ((longlong *)(0x3ffffffffffffff - ((ulonglong)plVar17 >> 1)) < plVar17) {
                plVar17 = (longlong *)0x3ffffffffffffff;
              }
              else {
                plVar17 = (longlong *)(((ulonglong)plVar17 >> 1) + (longlong)plVar17);
                if (plVar17 < plVar26) {
                  plVar17 = plVar26;
                }
              }
              unaff_RSI = local_220;
              if (unaff_R14 != (longlong *)0x0) {
                plVar27 = *(longlong **)(unaff_R13 + 4);
                for (; unaff_R14 != plVar27; unaff_R14 = unaff_R14 + 8) {
                  FUN_140017240(unaff_R14 + 4);
                  FUN_140017240(unaff_R14);
                  plVar15 = local_2b0;
                }
                lVar12 = *(longlong *)(unaff_R13 + 2);
                uVar18 = *(longlong *)(unaff_R13 + 6) - lVar12 & 0xffffffffffffffc0;
                if (0xfff < uVar18) {
                  if (0x1f < (lVar12 - *(longlong *)(lVar12 + -8)) - 8U) goto LAB_14006fcb2;
                  uVar18 = uVar18 | 0x27;
                  lVar12 = *(longlong *)(lVar12 + -8);
                }
                thunk_FUN_14028af80(lVar12,uVar18);
                *(undefined8 *)(unaff_R13 + 2) = 0;
                *(undefined8 *)(unaff_R13 + 4) = 0;
                *(undefined8 *)(unaff_R13 + 6) = 0;
              }
              plVar27 = (longlong *)0x0;
              if ((longlong *)0x3ffffffffffffff < plVar17) {
LAB_140070682:
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              plVar17 = (longlong *)((longlong)plVar17 * 0x40);
              if (plVar17 != (longlong *)0x0) {
                if (plVar17 < (longlong *)0x1000) {
                  plVar27 = (longlong *)FUN_14028af20(plVar17);
                }
                else {
                  if ((longlong *)((longlong)plVar17 + 0x27) <= plVar17) goto LAB_140070682;
                  lVar12 = FUN_14028af20();
                  if (lVar12 == 0) goto LAB_14006fcb2;
                  plVar27 = (longlong *)(lVar12 + 0x27U & 0xffffffffffffffe0);
                  plVar27[-1] = lVar12;
                }
              }
              *(longlong **)(unaff_R13 + 2) = plVar27;
              *(longlong **)(unaff_R13 + 4) = plVar27;
              *(longlong **)(unaff_R13 + 6) = (longlong *)((longlong)plVar17 + (longlong)plVar27);
              unaff_R14 = plVar27;
              plVar27 = local_res20;
              while (plVar27 != (longlong *)0x0) {
                FUN_140016fc0(unaff_R14,unaff_RSI);
                FUN_140016fc0(unaff_R14 + 4,unaff_RSI + 4);
                unaff_R14 = unaff_R14 + 8;
                unaff_RSI = unaff_RSI + 8;
                plVar26 = (longlong *)((longlong)plVar26 + -1);
                plVar27 = plVar26;
              }
              *(longlong **)(unaff_R13 + 4) = unaff_R14;
            }
            else {
              plVar17 = *(longlong **)(unaff_R13 + 4);
              local_res18 = (longlong *)((longlong)plVar17 - (longlong)unaff_R14 >> 6);
              if (local_res18 < plVar26) {
                unaff_RSI = local_220;
                if (unaff_R14 != plVar17) {
                  do {
                    if (unaff_R14 != unaff_RSI) {
                      plVar17 = unaff_RSI;
                      if (0xf < (ulonglong)unaff_RSI[3]) {
                        plVar17 = (longlong *)*unaff_RSI;
                      }
                      FUN_14000f880(unaff_R14,plVar17,unaff_RSI[2]);
                      plVar17 = unaff_RSI + 4;
                      if (0xf < (ulonglong)unaff_RSI[7]) {
                        plVar17 = (longlong *)*plVar17;
                      }
                      FUN_14000f880(unaff_R14 + 4,plVar17,unaff_RSI[6]);
                    }
                    plVar17 = *(longlong **)(unaff_R13 + 4);
                    unaff_R14 = unaff_R14 + 8;
                    unaff_RSI = unaff_RSI + 8;
                  } while (unaff_R14 != plVar17);
                }
                for (lVar12 = (longlong)plVar26 - (longlong)local_res18; lVar12 != 0;
                    lVar12 = lVar12 + -1) {
                  FUN_140016fc0(plVar17,unaff_RSI);
                  FUN_140016fc0(plVar17 + 4,unaff_RSI + 4);
                  plVar17 = plVar17 + 8;
                  unaff_RSI = unaff_RSI + 8;
                }
              }
              else {
                plVar17 = (longlong *)
                          (((ulonglong)local_res20 & 0xffffffffffffffc0) + (longlong)unaff_R14);
                plVar27 = local_220;
                plVar19 = local_res20;
                while (plVar19 != (longlong *)0x0) {
                  if (unaff_R14 != plVar27) {
                    plVar19 = plVar27;
                    if (0xf < (ulonglong)plVar27[3]) {
                      plVar19 = (longlong *)*plVar27;
                    }
                    FUN_14000f880(unaff_R14,plVar19,plVar27[2]);
                    plVar19 = plVar27 + 4;
                    if (0xf < (ulonglong)plVar27[7]) {
                      plVar19 = (longlong *)*plVar19;
                    }
                    FUN_14000f880(unaff_R14 + 4,plVar19,plVar27[6]);
                  }
                  unaff_R14 = unaff_R14 + 8;
                  plVar27 = plVar27 + 8;
                  plVar26 = (longlong *)((longlong)plVar26 + -1);
                  plVar19 = plVar26;
                }
                unaff_R14 = *(longlong **)(unaff_R13 + 4);
                for (unaff_RSI = plVar17; unaff_RSI != unaff_R14; unaff_RSI = unaff_RSI + 8) {
                  FUN_140017240(unaff_RSI + 4);
                  FUN_140017240(unaff_RSI);
                }
              }
              *(longlong **)(unaff_R13 + 4) = plVar17;
            }
          }
          plVar26 = (longlong *)0x0;
          if ((undefined8 ****)(unaff_R13 + 8) != &local_208) {
            ppppuVar20 = &local_208;
            if (0xf < local_1f0) {
              ppppuVar20 = (undefined8 ****)local_208;
            }
            FUN_14000f880(unaff_R13 + 8,ppppuVar20,local_1f8);
          }
          if ((undefined8 ****)(unaff_R13 + 0x10) != &local_1e8) {
            ppppuVar20 = &local_1e8;
            if (0xf < local_1d0) {
              ppppuVar20 = (undefined8 ****)local_1e8;
            }
            FUN_14000f880(unaff_R13 + 0x10,ppppuVar20,local_1d8);
          }
          if (0xf < local_270) {
            uVar18 = local_270 + 1;
            ppppcVar13 = (char ****)local_288;
            if (0xfff < uVar18) {
              ppppcVar13 = (char ****)local_288[-1];
              if ((char *)0x1f < (char *)((longlong)local_288 + (-8 - (longlong)ppppcVar13)))
              goto LAB_14006fcb2;
              uVar18 = local_270 + 0x28;
            }
            thunk_FUN_14028af80(ppppcVar13,uVar18);
          }
          FUN_140017240(&local_1e8);
          FUN_140017240(&local_208);
          FUN_14003a630(&local_220);
        }
        unaff_R13 = (undefined4 *)0x3ffffffffffffff;
        plVar21 = (longlong *)*plVar21;
      } while (plVar21 != plVar15);
      plVar17 = (longlong *)(local_res8 & 0xffffffff);
    }
    plVar26 = (longlong *)0x0;
    if (local_res10 != '\0') {
      if ((longlong *)*DAT_1404e6478 != DAT_1404e6478) {
        unaff_R13 = (undefined4 *)0xcbf29ce484222325;
        plVar26 = (longlong *)0x100000001b3;
        plVar21 = (longlong *)*DAT_1404e6478;
        do {
          uStack_280 = 0;
          ppppcVar13 = (char ****)FUN_14028af20(0x20);
          uVar10 = s_wallpaperconfigvd_140476c10._8_8_;
          local_278 = 0x11;
          *ppppcVar13 = (char ***)s_wallpaperconfigvd_140476c10._0_8_;
          ppppcVar13[1] = (char ***)uVar10;
          *(char *)(ppppcVar13 + 2) = s_wallpaperconfigvd_140476c10[0x10];
          *(char *)((longlong)ppppcVar13 + 0x11) = '\0';
          local_270 = 0x1f;
          local_288 = (char ***)ppppcVar13;
          if ((ulonglong)plVar21[4] < 0x11) {
LAB_14006f877:
            unaff_R14 = (longlong *)((ulonglong)unaff_R14 & 0xffffffffffffff00);
          }
          else {
            unaff_R14 = (longlong *)plVar21[5];
            plVar15 = plVar21 + 2;
            if ((longlong *)0xf < unaff_R14) {
              plVar15 = (longlong *)plVar21[2];
            }
            iVar7 = memcmp(plVar15,ppppcVar13,0x11);
            if (iVar7 != 0) goto LAB_14006f877;
            if (unaff_R14 < &DAT_00000010) {
              unaff_R14 = plVar21 + 2;
            }
            else {
              unaff_R14 = (longlong *)plVar21[2];
            }
            iVar7 = FUN_1402c9e60(unaff_R14,"wallpaperconfigvd",0x11);
            if (iVar7 == 0) {
              uVar8 = FUN_1402c82c0((undefined1 *)((longlong)unaff_R14 + 0x11));
              uVar18 = (((((ulonglong)(uVar8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)((int)uVar8 >> 8 & 0xff)) * 0x100000001b3 ^
                        (ulonglong)((int)uVar8 >> 0x10 & 0xff)) * 0x100000001b3 ^
                       (ulonglong)((int)uVar8 >> 0x18 & 0xff)) * 0x100000001b3 & DAT_1404df670;
              lVar12 = *(longlong *)(DAT_1404df658 + 8 + uVar18 * 0x10);
              if (lVar12 == DAT_1404df648) {
LAB_14006f861:
                lVar12 = 0;
              }
              else {
                uVar2 = *(uint *)(lVar12 + 0x10);
                while (uVar8 != uVar2) {
                  if (lVar12 == *(longlong *)(DAT_1404df658 + uVar18 * 0x10)) goto LAB_14006f861;
                  lVar12 = *(longlong *)(lVar12 + 8);
                  uVar2 = *(uint *)(lVar12 + 0x10);
                }
              }
              lVar14 = DAT_1404df648;
              if (lVar12 != 0) {
                lVar14 = lVar12;
              }
              if (lVar14 != DAT_1404df648) goto LAB_14006f877;
            }
            unaff_R14 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
          }
          FUN_140017200(&local_288,ppppcVar13,0x1f);
          uVar8 = (uint)plVar17;
          plVar17 = (longlong *)(ulonglong)(uVar8 & 0xfffffffe);
          local_res8 = CONCAT44(local_res8._4_4_,uVar8) & 0xfffffffffffffffe;
          if ((char)unaff_R14 == '\0') {
            plVar15 = *(longlong **)plVar21[7];
            if (plVar15 != (longlong *)plVar21[7]) {
              do {
                uVar18 = plVar15[5];
                plVar17 = plVar15 + 2;
                if (0xf < uVar18) {
                  plVar17 = (longlong *)plVar15[2];
                }
                unaff_RSI = (longlong *)plVar15[4];
                plVar27 = (longlong *)0x0;
                uVar25 = 0xcbf29ce484222325;
                if (unaff_RSI != (longlong *)0x0) {
                  do {
                    pbVar1 = (byte *)((longlong)plVar17 + (longlong)plVar27);
                    plVar27 = (longlong *)((longlong)plVar27 + 1);
                    uVar25 = (uVar25 ^ *pbVar1) * 0x100000001b3;
                  } while (plVar27 < unaff_RSI);
                }
                lVar12 = FUN_1400110a0(&DAT_1404e5368,local_240,plVar15 + 2,uVar25);
                if ((*(longlong *)(lVar12 + 8) == 0) || (*(longlong *)(lVar12 + 8) == DAT_1404e5370)
                   ) {
                  plVar17 = plVar15 + 2;
                  if (0xf < uVar18) {
                    plVar17 = (longlong *)plVar15[2];
                  }
                  plVar27 = (longlong *)0x0;
                  uVar18 = 0xcbf29ce484222325;
                  if (unaff_RSI != (longlong *)0x0) {
                    do {
                      pbVar1 = (byte *)((longlong)plVar27 + (longlong)plVar17);
                      plVar27 = (longlong *)((longlong)plVar27 + 1);
                      uVar18 = (uVar18 ^ *pbVar1) * 0x100000001b3;
                    } while (plVar27 < unaff_RSI);
                  }
                  lVar12 = plVar21[9];
                  uVar18 = plVar21[0xc] & uVar18;
                  plVar17 = *(longlong **)(lVar12 + uVar18 * 0x10);
                  if (*(longlong **)(lVar12 + 8 + uVar18 * 0x10) == plVar15) {
                    if (plVar17 == plVar15) {
                      lVar14 = plVar21[7];
                      *(longlong *)(lVar12 + uVar18 * 0x10) = lVar14;
                      *(longlong *)(lVar12 + 8 + uVar18 * 0x10) = lVar14;
                    }
                    else {
                      *(longlong *)(lVar12 + 8 + uVar18 * 0x10) = plVar15[1];
                    }
                  }
                  else if (plVar17 == plVar15) {
                    *(longlong *)(lVar12 + uVar18 * 0x10) = *plVar15;
                  }
                  plVar17 = (longlong *)*plVar15;
                  plVar21[8] = plVar21[8] + -1;
                  *(longlong **)plVar15[1] = plVar17;
                  plVar17[1] = plVar15[1];
                  FUN_140017240(plVar15 + 0xe);
                  FUN_140017240(plVar15 + 10);
                  FUN_14003a630(plVar15 + 7);
                  FUN_140017240(plVar15 + 2);
                  thunk_FUN_14028af80(plVar15,0x90);
                  unaff_RSI = plVar17;
                }
                else {
                  plVar17 = (longlong *)*plVar15;
                }
                plVar15 = plVar17;
              } while (plVar17 != (longlong *)plVar21[7]);
              plVar17 = (longlong *)(local_res8 & 0xffffffff);
            }
            plVar15 = (longlong *)*plVar21;
          }
          else {
            lVar14 = FUN_14007d0b0(&DAT_1404e6470,plVar21 + 2);
            lVar12 = DAT_1404e6488;
            plVar27 = DAT_1404e6478;
            plVar15 = *(longlong **)(DAT_1404e6488 + lVar14 * 0x10);
            if (*(longlong **)(DAT_1404e6488 + 8 + lVar14 * 0x10) == plVar21) {
              if (plVar15 == plVar21) {
                *(longlong **)(DAT_1404e6488 + lVar14 * 0x10) = DAT_1404e6478;
                *(longlong **)(lVar12 + 8 + lVar14 * 0x10) = plVar27;
              }
              else {
                *(longlong *)(DAT_1404e6488 + 8 + lVar14 * 0x10) = plVar21[1];
              }
            }
            else if (plVar15 == plVar21) {
              *(longlong *)(DAT_1404e6488 + lVar14 * 0x10) = *plVar21;
            }
            plVar15 = (longlong *)*plVar21;
            _DAT_1404e6480 = _DAT_1404e6480 + -1;
            *(longlong **)plVar21[1] = plVar15;
            plVar15[1] = plVar21[1];
            FUN_14000d9e0(plVar21 + 9);
            FUN_14003a5a0(plVar21 + 7);
            FUN_140017240(plVar21 + 2);
            thunk_FUN_14028af80(plVar21,0x70);
          }
          plVar21 = plVar15;
        } while (plVar15 != DAT_1404e6478);
      }
      uVar10 = FUN_140005ee0(&local_288);
      uVar10 = FUN_140005d20(uVar10,"bin/playliststate.bin");
      FUN_140016600(local_68,uVar10);
      FUN_140016770(&local_288);
      FUN_14007aca0(&local_178);
      ppppuVar20 = local_68;
      if (7 < local_50) {
        ppppuVar20 = (undefined8 ****)local_68[0];
      }
      lVar12 = FUN_14004c4c0(local_170,ppppuVar20,0x22);
      plVar21 = (longlong *)0x6;
      piVar24 = (int *)(local_178 + 4);
      if (lVar12 == 0) {
        uVar8 = 6;
        if (*(longlong *)((longlong)alStack_130 + (longlong)*piVar24) != 0) {
          uVar8 = 2;
        }
        uVar8 = uVar8 | *(uint *)((longlong)auStack_168 + (longlong)*piVar24);
      }
      else {
        uVar8 = 4;
        if (*(longlong *)((longlong)alStack_130 + (longlong)*piVar24) != 0) {
          uVar8 = 0;
        }
      }
      FUN_140013b50(local_170 + (longlong)*piVar24 + -8,uVar8,0);
      if (local_f0 != 0) {
        local_278 = 8;
        local_288 = (char ***)s_PLPV0005_1404780b8._0_8_;
        uStack_280 = 0;
        local_270 = 0xf;
        local_254 = 8;
        FUN_14007ada0(&local_178,&local_254,4);
        ppppcVar13 = &local_288;
        if (0xf < local_270) {
          ppppcVar13 = (char ****)local_288;
        }
        FUN_14007ada0(&local_178,ppppcVar13,(longlong)local_254);
        if (0xf < local_270) {
          uVar18 = local_270 + 1;
          ppppcVar13 = (char ****)local_288;
          if (0xfff < uVar18) {
            ppppcVar13 = (char ****)local_288[-1];
            if ((char *)0x1f < (char *)((longlong)local_288 + (-8 - (longlong)ppppcVar13))) {
LAB_14006fcb2:
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar22 = auStack_2d0;
              goto LAB_14006fcb9;
            }
            uVar18 = local_270 + 0x28;
          }
          thunk_FUN_14028af80(ppppcVar13,uVar18);
        }
        plVar15 = (longlong *)0x0;
        local_270 = 0xf;
        local_278 = 0;
        local_288 = (char ***)((ulonglong)local_288 & 0xffffffffffffff00);
        unaff_R13 = (undefined4 *)0x0;
        local_1c8[0] = DAT_1404e6480;
        plVar17 = (longlong *)0x0;
        FUN_14007ada0(&local_178,local_1c8);
        unaff_RSI = (longlong *)*DAT_1404e6478;
        puVar23 = auStack_2d8;
        unaff_R14 = DAT_1404e6478;
        if (unaff_RSI != DAT_1404e6478) {
          do {
            lVar12 = unaff_RSI[4];
            plVar21 = unaff_RSI + 2;
            *(longlong **)(puVar22 + 0x28) = plVar21;
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,(int)lVar12);
            plVar26 = plVar15;
            if (plVar15 == (longlong *)0x0) {
LAB_14006fcb9:
              *(undefined8 *)(puVar22 + -8) = 0x14006fccf;
              FUN_14007ada0(&local_178,&local_res20);
            }
            else {
              uVar8 = (int)unaff_R13 + 4;
              uVar28 = (int)lVar12;
              if ((uint)plVar17 < uVar8) {
                *(uint *)(puVar22 + 0x30) = (uint)plVar17;
                do {
                  uVar2 = (int)plVar17 * 2;
                  plVar17 = (longlong *)(ulonglong)uVar2;
                } while (uVar2 < uVar8);
                *(undefined8 *)(puVar22 + -8) = 0x14006fc80;
                plVar26 = (longlong *)thunk_FUN_14028af20(uVar2);
                *(undefined8 *)(puVar22 + -8) = 0x14006fc93;
                FUN_1404210f0(plVar26,plVar15);
                *(undefined8 *)(puVar22 + -8) = 0x14006fc9b;
                thunk_FUN_14028af80(plVar15);
                uVar28 = (int)local_res20;
              }
              uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
              unaff_R13 = (undefined4 *)(ulonglong)uVar8;
              plVar21 = *(longlong **)(puVar22 + 0x28);
              *(undefined4 *)(uVar18 + (longlong)plVar26) = uVar28;
            }
            iVar7 = (int)local_res20;
            if (0xf < (ulonglong)unaff_RSI[5]) {
              plVar21 = (longlong *)*plVar21;
              *(longlong **)(puVar22 + 0x28) = plVar21;
            }
            if (plVar26 == (longlong *)0x0) {
              *(undefined8 *)(puVar22 + -8) = 0x14006fd5a;
              FUN_14007ada0(&local_178,plVar21);
            }
            else {
              uVar8 = (int)local_res20 + (int)unaff_R13;
              if ((uint)plVar17 < uVar8) {
                *(longlong **)(puVar22 + 0x38) = plVar26;
                *(uint *)(puVar22 + 0x30) = (uint)plVar17;
                do {
                  uVar2 = (int)plVar17 * 2;
                  plVar17 = (longlong *)(ulonglong)uVar2;
                } while (uVar2 < uVar8);
                *(undefined8 *)(puVar22 + -8) = 0x14006fd10;
                plVar26 = (longlong *)thunk_FUN_14028af20(uVar2);
                *(undefined8 *)(puVar22 + -8) = 0x14006fd25;
                FUN_1404210f0(plVar26,*(undefined8 *)(puVar22 + 0x38));
                *(undefined8 *)(puVar22 + -8) = 0x14006fd2f;
                thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x38));
              }
              if (0 < iVar7) {
                *(undefined8 *)(puVar22 + -8) = 0x14006fd46;
                FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar26,
                              *(undefined8 *)(puVar22 + 0x28));
                unaff_R13 = (undefined4 *)(ulonglong)uVar8;
              }
            }
            local_250[0] = (undefined4)unaff_RSI[8];
            if (plVar26 == (longlong *)0x0) {
              *(undefined8 *)(puVar22 + -8) = 0x14006fdc3;
              FUN_14007ada0(&local_178,local_250);
            }
            else {
              uVar8 = (int)unaff_R13 + 4;
              plVar21 = plVar26;
              if ((uint)plVar17 < uVar8) {
                *(uint *)(puVar22 + 0x30) = (uint)plVar17;
                do {
                  uVar2 = (int)plVar17 * 2;
                  plVar17 = (longlong *)(ulonglong)uVar2;
                } while (uVar2 < uVar8);
                *(undefined8 *)(puVar22 + -8) = 0x14006fd86;
                plVar21 = (longlong *)thunk_FUN_14028af20(uVar2);
                *(undefined8 *)(puVar22 + -8) = 0x14006fd99;
                FUN_1404210f0(plVar21,plVar26);
                *(undefined8 *)(puVar22 + -8) = 0x14006fda1;
                thunk_FUN_14028af80(plVar26);
              }
              uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
              unaff_R13 = (undefined4 *)(ulonglong)uVar8;
              *(undefined4 *)(uVar18 + (longlong)plVar21) = local_250[0];
              plVar26 = plVar21;
            }
            puVar3 = (undefined8 *)unaff_RSI[7];
            plVar15 = plVar26;
            for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
              uVar28 = *(undefined4 *)(puVar4 + 4);
              *(undefined8 **)(puVar22 + 0x38) = puVar4 + 2;
              *(undefined4 *)(puVar22 + 0x70) = uVar28;
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x14006fe65;
                FUN_14007ada0(&local_178,puVar22 + 0x70);
              }
              else {
                uVar8 = (int)unaff_R13 + 4;
                *(uint *)(puVar22 + 0x40) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x30) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x14006fe20;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x14006fe35;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x14006fe3f;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  uVar28 = *(undefined4 *)(puVar22 + 0x70);
                }
                uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                *(undefined4 *)(uVar18 + (longlong)plVar15) = uVar28;
              }
              uVar18 = puVar4[5];
              iVar7 = *(int *)(puVar22 + 0x70);
              puVar16 = *(undefined8 **)(puVar22 + 0x38);
              *(int *)(puVar22 + 0x30) = iVar7;
              if (0xf < uVar18) {
                puVar16 = (undefined8 *)*puVar16;
                *(undefined8 **)(puVar22 + 0x38) = puVar16;
              }
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x14006ff00;
                FUN_14007ada0(&local_178,puVar16);
              }
              else {
                uVar8 = iVar7 + (int)unaff_R13;
                *(uint *)(puVar22 + 0x20) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x40) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x14006feb0;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x14006fec5;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x14006fecf;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  iVar7 = *(int *)(puVar22 + 0x30);
                }
                if (0 < iVar7) {
                  *(undefined8 *)(puVar22 + -8) = 0x14006feea;
                  FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar15,
                                *(undefined8 *)(puVar22 + 0x38));
                  unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x20);
                }
              }
              local_248[0] = *(undefined4 *)((longlong)puVar4 + 0x34);
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x14006ff75;
                FUN_14007ada0(&local_178,local_248);
              }
              else {
                uVar8 = (int)unaff_R13 + 4;
                *(uint *)(puVar22 + 0x40) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x14006ff32;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x14006ff47;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x14006ff51;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                }
                uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                *(undefined4 *)(uVar18 + (longlong)plVar15) = local_248[0];
              }
              uVar28 = *(undefined4 *)(puVar4 + 0xc);
              *(undefined8 **)(puVar22 + 0x38) = puVar4 + 10;
              *(undefined4 *)(puVar22 + 0x74) = uVar28;
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x14006fff6;
                FUN_14007ada0(&local_178,puVar22 + 0x74);
              }
              else {
                uVar8 = (int)unaff_R13 + 4;
                *(uint *)(puVar22 + 0x40) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x14006ffb1;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x14006ffc6;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x14006ffd0;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  uVar28 = *(undefined4 *)(puVar22 + 0x74);
                }
                uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                *(undefined4 *)(uVar18 + (longlong)plVar15) = uVar28;
              }
              uVar18 = puVar4[0xd];
              iVar7 = *(int *)(puVar22 + 0x74);
              puVar16 = *(undefined8 **)(puVar22 + 0x38);
              *(int *)(puVar22 + 0x40) = iVar7;
              if (0xf < uVar18) {
                puVar16 = (undefined8 *)*puVar16;
                *(undefined8 **)(puVar22 + 0x38) = puVar16;
              }
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x140070105;
                FUN_14007ada0(&local_178,puVar16,(longlong)iVar7);
                uVar28 = *(undefined4 *)(puVar4 + 0x10);
                *(undefined8 **)(puVar22 + 0x38) = puVar4 + 0xe;
                local_res8 = CONCAT44(local_res8._4_4_,uVar28);
LAB_14007011a:
                *(undefined8 *)(puVar22 + -8) = 0x140070130;
                FUN_14007ada0(&local_178,&local_res8);
              }
              else {
                uVar8 = iVar7 + (int)unaff_R13;
                *(uint *)(puVar22 + 0x30) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x140070043;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x140070058;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x140070062;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  iVar7 = *(int *)(puVar22 + 0x40);
                }
                if (0 < iVar7) {
                  *(undefined8 *)(puVar22 + -8) = 0x14007007d;
                  FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar15,
                                *(undefined8 *)(puVar22 + 0x38));
                  unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x30);
                }
                uVar28 = *(undefined4 *)(puVar4 + 0x10);
                *(undefined8 **)(puVar22 + 0x38) = puVar4 + 0xe;
                local_res8 = CONCAT44(local_res8._4_4_,uVar28);
                if (plVar15 == (longlong *)0x0) goto LAB_14007011a;
                uVar8 = (int)unaff_R13 + 4;
                *(uint *)(puVar22 + 0x40) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x1400700c3;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x1400700d8;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x1400700e2;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  uVar28 = (int)local_res8;
                }
                uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                *(undefined4 *)(uVar18 + (longlong)plVar15) = uVar28;
              }
              uVar18 = puVar4[0x11];
              *(int *)(puVar22 + 0x40) = (int)local_res8;
              if (uVar18 < 0x10) {
                uVar10 = *(undefined8 *)(puVar22 + 0x38);
              }
              else {
                uVar10 = puVar4[0xe];
                *(undefined8 *)(puVar22 + 0x38) = uVar10;
              }
              if (plVar15 == (longlong *)0x0) {
                *(undefined8 *)(puVar22 + -8) = 0x140070240;
                FUN_14007ada0(&local_178,uVar10,(longlong)(int)local_res8);
                *(int *)(puVar22 + 0x78) = (int)((longlong)(puVar4[8] - puVar4[7]) >> 6);
LAB_140070250:
                *(undefined8 *)(puVar22 + -8) = 0x140070264;
                FUN_14007ada0(&local_178,puVar22 + 0x78);
              }
              else {
                uVar8 = (int)local_res8 + (int)unaff_R13;
                *(uint *)(puVar22 + 0x30) = uVar8;
                iVar7 = (int)local_res8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x140070185;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x14007019a;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x1400701a4;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  iVar7 = *(int *)(puVar22 + 0x40);
                }
                if (0 < iVar7) {
                  *(undefined8 *)(puVar22 + -8) = 0x1400701bf;
                  FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar15,
                                *(undefined8 *)(puVar22 + 0x38));
                  unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x30);
                }
                uVar28 = (undefined4)((longlong)(puVar4[8] - puVar4[7]) >> 6);
                *(undefined4 *)(puVar22 + 0x78) = uVar28;
                if (plVar15 == (longlong *)0x0) goto LAB_140070250;
                uVar8 = (int)unaff_R13 + 4;
                *(uint *)(puVar22 + 0x40) = uVar8;
                if ((uint)plVar17 < uVar8) {
                  *(longlong **)(puVar22 + 0x28) = plVar15;
                  *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                  do {
                    uVar2 = (int)plVar17 * 2;
                    plVar17 = (longlong *)(ulonglong)uVar2;
                  } while (uVar2 < uVar8);
                  *(undefined8 *)(puVar22 + -8) = 0x140070200;
                  plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                  *(undefined8 *)(puVar22 + -8) = 0x140070215;
                  FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x28));
                  *(undefined8 *)(puVar22 + -8) = 0x14007021f;
                  thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x28));
                  uVar28 = *(undefined4 *)(puVar22 + 0x78);
                }
                uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                *(undefined4 *)(uVar18 + (longlong)plVar15) = uVar28;
              }
              lVar14 = puVar4[7];
              iVar7 = 0;
              lVar12 = puVar4[8];
              *(undefined4 *)(puVar22 + 0x30) = 0;
              if (lVar12 - lVar14 >> 6 != 0) {
                do {
                  lVar14 = (longlong)iVar7 * 0x40 + lVar14;
                  *(longlong *)(puVar22 + 0x28) = lVar14;
                  local_258 = *(int *)(lVar14 + 0x10);
                  if (plVar15 == (longlong *)0x0) {
                    *(undefined8 *)(puVar22 + -8) = 0x140070314;
                    FUN_14007ada0(&local_178,&local_258,4);
                  }
                  else {
                    uVar8 = (int)unaff_R13 + 4;
                    *(uint *)(puVar22 + 0x40) = uVar8;
                    if ((uint)plVar17 < uVar8) {
                      *(longlong **)(puVar22 + 0x38) = plVar15;
                      *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                      do {
                        uVar2 = (int)plVar17 * 2;
                        plVar17 = (longlong *)(ulonglong)uVar2;
                      } while (uVar2 < uVar8);
                      *(undefined8 *)(puVar22 + -8) = 0x1400702d1;
                      plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                      *(undefined8 *)(puVar22 + -8) = 0x1400702e6;
                      FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x38),
                                    *(undefined4 *)(puVar22 + 0x20));
                      *(undefined8 *)(puVar22 + -8) = 0x1400702f0;
                      thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x38));
                    }
                    uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                    unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                    *(int *)(uVar18 + (longlong)plVar15) = local_258;
                  }
                  local_240[0] = *(longlong **)(puVar22 + 0x28);
                  *(int *)(puVar22 + 0x40) = local_258;
                  if (0xf < (ulonglong)local_240[0][3]) {
                    local_240[0] = (longlong *)*local_240[0];
                  }
                  if (plVar15 == (longlong *)0x0) {
                    *(undefined8 *)(puVar22 + -8) = 0x140070449;
                    FUN_14007ada0(&local_178,local_240[0],(longlong)local_258);
                    lVar12 = *(longlong *)(puVar22 + 0x28) + 0x20;
                    uVar28 = *(undefined4 *)(*(longlong *)(puVar22 + 0x28) + 0x30);
                    *(longlong *)(puVar22 + 0x40) = lVar12;
                    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar28);
                    *(longlong *)(puVar22 + 0x38) = lVar12;
LAB_140070465:
                    *(undefined8 *)(puVar22 + -8) = 0x14007047b;
                    FUN_14007ada0(&local_178,&local_res18,4);
                    puVar16 = *(undefined8 **)(puVar22 + 0x40);
                  }
                  else {
                    uVar8 = local_258 + (int)unaff_R13;
                    *(uint *)(puVar22 + 0x48) = uVar8;
                    iVar7 = local_258;
                    if ((uint)plVar17 < uVar8) {
                      *(longlong **)(puVar22 + 0x38) = plVar15;
                      *(uint *)(puVar22 + 0x20) = (uint)plVar17;
                      do {
                        uVar2 = (int)plVar17 * 2;
                        plVar17 = (longlong *)(ulonglong)uVar2;
                      } while (uVar2 < uVar8);
                      *(undefined8 *)(puVar22 + -8) = 0x140070360;
                      plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                      *(undefined8 *)(puVar22 + -8) = 0x140070375;
                      FUN_1404210f0(plVar15,*(undefined8 *)(puVar22 + 0x38),
                                    *(undefined4 *)(puVar22 + 0x20));
                      *(undefined8 *)(puVar22 + -8) = 0x14007037f;
                      thunk_FUN_14028af80(*(undefined8 *)(puVar22 + 0x38));
                      iVar7 = *(int *)(puVar22 + 0x40);
                    }
                    if (0 < iVar7) {
                      *(undefined8 *)(puVar22 + -8) = 0x140070399;
                      FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar15,
                                    local_240[0],(longlong)iVar7);
                      unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x48);
                    }
                    uVar18 = (ulonglong)unaff_R13 & 0xffffffff;
                    *(int *)(puVar22 + 0x20) = (int)unaff_R13;
                    uVar28 = *(undefined4 *)(*(longlong *)(puVar22 + 0x28) + 0x30);
                    puVar16 = (undefined8 *)(*(longlong *)(puVar22 + 0x28) + 0x20);
                    *(undefined8 **)(puVar22 + 0x40) = puVar16;
                    *(undefined8 **)(puVar22 + 0x38) = puVar16;
                    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar28);
                    if (plVar15 == (longlong *)0x0) goto LAB_140070465;
                    uVar8 = (int)unaff_R13 + 4;
                    unaff_R13 = (undefined4 *)(ulonglong)uVar8;
                    if ((uint)plVar17 < uVar8) {
                      *(uint *)(puVar22 + 0x48) = (uint)plVar17;
                      do {
                        uVar2 = (int)plVar17 * 2;
                        plVar17 = (longlong *)(ulonglong)uVar2;
                      } while (uVar2 < uVar8);
                      *(undefined8 *)(puVar22 + -8) = 0x1400703f2;
                      local_240[0] = plVar15;
                      plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                      *(undefined8 *)(puVar22 + -8) = 0x140070406;
                      FUN_1404210f0(plVar15,local_240[0],*(undefined4 *)(puVar22 + 0x48));
                      *(undefined8 *)(puVar22 + -8) = 0x14007040f;
                      thunk_FUN_14028af80(local_240[0]);
                      puVar16 = *(undefined8 **)(puVar22 + 0x40);
                      *(undefined8 **)(puVar22 + 0x38) = puVar16;
                      *(int *)((ulonglong)*(uint *)(puVar22 + 0x20) + (longlong)plVar15) =
                           (int)local_res18;
                    }
                    else {
                      *(undefined4 *)(uVar18 + (longlong)plVar15) = uVar28;
                    }
                  }
                  *(int *)(puVar22 + 0x20) = (int)local_res18;
                  if (*(ulonglong *)(*(longlong *)(puVar22 + 0x28) + 0x38) < 0x10) {
                    uVar10 = *(undefined8 *)(puVar22 + 0x38);
                  }
                  else {
                    uVar10 = *puVar16;
                    *(undefined8 *)(puVar22 + 0x38) = uVar10;
                  }
                  if (plVar15 == (longlong *)0x0) {
                    *(undefined8 *)(puVar22 + -8) = 0x14007051f;
                    FUN_14007ada0(&local_178,uVar10,(longlong)(int)local_res18);
                  }
                  else {
                    uVar8 = (int)local_res18 + (int)unaff_R13;
                    *(uint *)(puVar22 + 0x40) = uVar8;
                    iVar7 = (int)local_res18;
                    if ((uint)plVar17 < uVar8) {
                      *(uint *)(puVar22 + 0x48) = (uint)plVar17;
                      do {
                        uVar2 = (int)plVar17 * 2;
                        plVar17 = (longlong *)(ulonglong)uVar2;
                      } while (uVar2 < uVar8);
                      *(undefined8 *)(puVar22 + -8) = 0x1400704d1;
                      local_240[0] = plVar15;
                      plVar15 = (longlong *)thunk_FUN_14028af20(uVar2);
                      *(undefined8 *)(puVar22 + -8) = 0x1400704e5;
                      FUN_1404210f0(plVar15,local_240[0],*(undefined4 *)(puVar22 + 0x48));
                      *(undefined8 *)(puVar22 + -8) = 0x1400704ee;
                      thunk_FUN_14028af80(local_240[0]);
                      iVar7 = *(int *)(puVar22 + 0x20);
                    }
                    if (0 < iVar7) {
                      *(undefined8 *)(puVar22 + -8) = 0x140070509;
                      FUN_1404210f0(((ulonglong)unaff_R13 & 0xffffffff) + (longlong)plVar15,
                                    *(undefined8 *)(puVar22 + 0x38),(longlong)iVar7);
                      unaff_R13 = (undefined4 *)(ulonglong)*(uint *)(puVar22 + 0x40);
                    }
                  }
                  lVar14 = puVar4[7];
                  iVar7 = *(int *)(puVar22 + 0x30) + 1;
                  lVar12 = puVar4[8];
                  *(int *)(puVar22 + 0x30) = iVar7;
                } while ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar12 - lVar14 >> 6));
              }
            }
            unaff_RSI = (longlong *)*unaff_RSI;
          } while (unaff_RSI != unaff_R14);
          puVar23 = puVar22;
          if ((plVar15 != (longlong *)0x0) && ((int)unaff_R13 != 0)) {
            *(undefined8 *)(puVar22 + -8) = 0x140070578;
            FUN_14007ada0(&local_178,plVar15,(ulonglong)unaff_R13 & 0xffffffff);
          }
        }
        *(undefined8 *)(puVar23 + -8) = 0x14007058b;
        lVar12 = FUN_14004c3c0(local_170);
        if (lVar12 == 0) {
          lVar12 = (longlong)*(int *)(local_178 + 4);
          uVar8 = 6;
          if (*(longlong *)((longlong)alStack_130 + lVar12) != 0) {
            uVar8 = 2;
          }
          uVar2 = *(uint *)((longlong)auStack_168 + lVar12);
          *(undefined8 *)(puVar23 + -8) = 0x1400705ba;
          FUN_140013b50(local_170 + lVar12 + -8,uVar8 | uVar2,0);
        }
        *(undefined8 *)(puVar23 + -8) = 0x1400705c2;
        thunk_FUN_14028af80(plVar15);
        *(undefined8 *)(puVar23 + -8) = 0x1400705c9;
        thunk_FUN_14028af80(0);
      }
      *(undefined ***)(local_170 + (longlong)*(int *)(local_178 + 4) + -8) = &PTR_LAB_140475e08;
      *(int *)((longlong)&local_180 + (longlong)*(int *)(local_178 + 4) + 4) =
           *(int *)(local_178 + 4) + -0xa8;
      *(undefined8 *)(puVar23 + -8) = 0x1400705f8;
      FUN_14004a790(local_170);
      *(undefined ***)(local_170 + (longlong)*(int *)(local_178 + 4) + -8) =
           std::basic_ostream<char,std::char_traits<char>_>::vftable;
      *(int *)((longlong)&local_180 + (longlong)*(int *)(local_178 + 4) + 4) =
           *(int *)(local_178 + 4) + -0x10;
      local_d0[0] = std::ios_base::vftable;
      *(undefined8 *)(puVar23 + -8) = 0x140070635;
      FUN_14028c430(local_d0);
      *(undefined8 *)(puVar23 + -8) = 0x140070641;
      FUN_140016770(local_68);
    }
  }
  return;
}

