// Function: FUN_14026f4c0
// Addr: 14026f4c0
// Size: 9285 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026f4c0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  uint *puVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint local_474;
  uint local_46c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  uint *local_408;
  float local_400;
  longlong local_3f8;
  longlong local_3f0;
  float local_3e8;
  float local_3e4;
  float local_3e0 [2];
  float local_3d8;
  float local_3d4;
  float local_3d0 [2];
  float local_3c8;
  float local_3c4;
  float local_3c0 [2];
  float local_3b8;
  float local_3b4;
  float local_3b0 [2];
  longlong local_3a8;
  uint *local_3a0;
  longlong local_398;
  float local_390;
  float local_38c;
  float local_388 [2];
  float local_380;
  float local_37c;
  float local_378 [2];
  float local_370;
  float local_36c;
  float local_368 [2];
  float local_360;
  float local_35c;
  float local_358 [4];
  undefined1 local_348 [12];
  float fStack_33c;
  float local_338;
  float local_334;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  float local_318;
  float local_314;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  longlong local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined4 local_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined4 local_28c;
  longlong local_288 [2];
  uint *local_278;
  uint *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_21c;
  float local_20c;
  float local_1fc;
  undefined1 local_1f8 [64];
  undefined1 local_1b8 [64];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [232];
  
  uVar5 = DAT_140492864;
  fVar4 = DAT_140492834;
  local_408 = *(uint **)(param_2 + 0x20);
  local_278 = *(uint **)(param_2 + 0x28);
  if (local_408 != local_278) {
    do {
      local_3f0 = *param_3;
      local_3f8 = (ulonglong)*local_408 * 0x80;
      local_270 = *(uint **)(local_3f0 + 0x70 + local_3f8);
      puVar15 = *(uint **)(local_3f0 + 0x68 + local_3f8);
      if (puVar15 != local_270) {
        do {
          puVar21 = local_408;
          uVar18 = *puVar15;
          local_3a0 = puVar15;
          if ((uVar18 >> 0x10 & 1) == 0) {
            if ((uVar18 & 2) == 0) {
              lVar8 = (ulonglong)puVar15[2] * 0x40 + *param_5;
              if ((uVar18 & 1) == 0) {
                fVar42 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                lVar12 = (ulonglong)*local_408 * 0x40 + *param_6;
                pfVar17 = (float *)FUN_14005f5b0(lVar12,3);
                local_414 = *pfVar17;
                fVar41 = pfVar17[1];
                fVar24 = pfVar17[2];
                pfVar17 = (float *)FUN_14005f5b0(lVar8,3);
                fVar39 = *pfVar17;
                fVar25 = pfVar17[1];
                fVar26 = pfVar17[2];
                FUN_1401e23d0(lVar12,local_358,&local_35c,&local_360,fVar39,fVar24);
                FUN_1401e23d0(lVar8,local_3e0,&local_3e4,&local_3e8);
                pfVar17 = (float *)FUN_14005f5b0(lVar12,2);
                fVar47 = *pfVar17;
                fVar44 = pfVar17[1];
                fVar23 = pfVar17[2];
                fVar37 = pfVar17[3];
                pfVar17 = (float *)FUN_14005f5b0(lVar12,1);
                fVar38 = *pfVar17;
                fVar43 = pfVar17[1];
                fVar45 = pfVar17[2];
                fVar27 = pfVar17[3];
                pfVar17 = (float *)FUN_14005f5b0(lVar12,0);
                fVar28 = pfVar17[3] * pfVar17[3] + pfVar17[2] * pfVar17[2] +
                         pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17;
                if (fVar28 < 0.0) {
                  fVar28 = (float)FUN_14041ad10();
                }
                else {
                  fVar28 = SQRT(fVar28);
                }
                fVar38 = fVar27 * fVar27 + fVar45 * fVar45 + fVar43 * fVar43 + fVar38 * fVar38;
                if (fVar38 < 0.0) {
                  fVar38 = (float)FUN_14041ad10();
                }
                else {
                  fVar38 = SQRT(fVar38);
                }
                fVar47 = fVar37 * fVar37 + fVar23 * fVar23 + fVar44 * fVar44 + fVar47 * fVar47;
                if (fVar47 < 0.0) {
                  fVar47 = (float)FUN_14041ad10();
                }
                else {
                  fVar47 = SQRT(fVar47);
                }
                uVar35 = FUN_14019d3e0(local_178,lVar8,2);
                local_410 = (float)FUN_1401e24b0(uVar35);
                uVar35 = FUN_14019d3e0(local_168,lVar8,1);
                local_40c = (float)FUN_1401e24b0(uVar35);
                uVar35 = FUN_14019d3e0(local_158,lVar8,0);
                fVar44 = (float)FUN_1401e24b0(uVar35);
                fVar23 = (float)FUN_14041d0c0();
                local_360 = fVar23;
                fVar37 = (float)FUN_14041d0c0();
                local_35c = fVar37;
                fVar43 = (float)FUN_14041d0c0();
                local_358[0] = fVar43;
                fVar45 = (float)FUN_14041d0c0();
                local_3e8 = fVar45;
                fVar27 = (float)FUN_14041d0c0();
                local_3e4 = fVar27;
                local_3e0[0] = (float)FUN_14041d0c0();
                if (fVar4 < fVar45 - fVar23) {
                  fVar45 = fVar45 - fVar4;
                  local_3e8 = fVar45;
                }
                if (fVar4 < fVar27 - fVar37) {
                  fVar27 = fVar27 - fVar4;
                  local_3e4 = fVar27;
                }
                if (fVar4 < local_3e0[0] - fVar43) {
                  local_3e0[0] = local_3e0[0] - fVar4;
                }
                fVar29 = DAT_140492704 - fVar42;
                local_2cc = fVar28 * fVar29 + fVar44 * fVar42;
                local_2c8 = fVar38 * fVar29 + local_40c * fVar42;
                local_2d8 = fVar23 * fVar29 + fVar45 * fVar42;
                local_2d4 = fVar37 * fVar29 + fVar27 * fVar42;
                local_2c4 = fVar47 * fVar29 + local_410 * fVar42;
                local_2d0 = fVar43 * fVar29 + local_3e0[0] * fVar42;
                FUN_140215020(local_1f8,&local_2d0,&local_2d4,&local_2d8);
                local_28c = 0x3f800000;
                local_298 = fVar39 * fVar42 + local_414 * fVar29;
                local_294 = fVar25 * fVar42 + fVar41 * fVar29;
                local_290 = fVar26 * fVar42 + fVar24 * fVar29;
                local_268 = _DAT_140492a60;
                uStack_260 = _UNK_140492a68;
                local_258 = _DAT_140492a90;
                uStack_250 = _UNK_140492a98;
                local_248 = _DAT_140492b40;
                uStack_240 = _UNK_140492b48;
                local_238 = _DAT_140492de0;
                uStack_230 = _UNK_140492de8;
                FUN_140214f80(local_1b8,&local_268,3,&local_298);
                uVar9 = FUN_14005ecb0(local_128,local_1b8,local_1f8);
                pfVar17 = (float *)FUN_14005f3f0(&local_2cc,0);
                fVar42 = *pfVar17;
                puVar10 = (undefined8 *)FUN_14005f5b0(uVar9,0);
                uVar35 = *puVar10;
                uVar1 = puVar10[1];
                puVar10 = (undefined8 *)FUN_14005f600(&local_458,0);
                fVar25 = local_2c8;
                *puVar10 = CONCAT44((float)((ulonglong)uVar35 >> 0x20) * fVar42,
                                    (float)uVar35 * fVar42);
                puVar10[1] = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar42,
                                      (float)uVar1 * fVar42);
                pfVar17 = (float *)FUN_14005f5b0(uVar9,1);
                fVar42 = *pfVar17;
                fVar41 = pfVar17[1];
                fVar24 = pfVar17[2];
                fVar39 = pfVar17[3];
                pfVar17 = (float *)FUN_14005f600(&local_458,1);
                fVar26 = local_2c4;
                *pfVar17 = fVar42 * fVar25;
                pfVar17[1] = fVar41 * fVar25;
                pfVar17[2] = fVar24 * fVar25;
                pfVar17[3] = fVar39 * fVar25;
                pfVar17 = (float *)FUN_14005f5b0(uVar9,2);
                fVar42 = *pfVar17;
                fVar41 = pfVar17[1];
                fVar24 = pfVar17[2];
                fVar39 = pfVar17[3];
                pfVar17 = (float *)FUN_14005f600(&local_458,2);
                *pfVar17 = fVar42 * fVar26;
                pfVar17[1] = fVar41 * fVar26;
                pfVar17[2] = fVar24 * fVar26;
                pfVar17[3] = fVar39 * fVar26;
                puVar10 = (undefined8 *)FUN_14005f5b0(uVar9,3);
                uVar35 = *puVar10;
                uVar1 = puVar10[1];
                puVar10 = (undefined8 *)FUN_14005f600(&local_458,3);
                *puVar10 = uVar35;
                puVar10[1] = uVar1;
                lVar8 = *param_6;
                auVar2._4_4_ = fStack_454;
                auVar2._0_4_ = local_458;
                auVar2._8_4_ = fStack_450;
                auVar2._12_4_ = fStack_44c;
                lVar12 = (ulonglong)*puVar21 * 0x40;
                *(undefined1 (*) [16])(lVar8 + lVar12) = auVar2;
                puVar10 = (undefined8 *)(lVar8 + 0x10 + lVar12);
                *puVar10 = local_448;
                puVar10[1] = uStack_440;
                puVar10 = (undefined8 *)(lVar8 + 0x20 + lVar12);
                *puVar10 = local_438;
                puVar10[1] = uStack_430;
                puVar10 = (undefined8 *)(lVar8 + 0x30 + lVar12);
                *puVar10 = local_428;
                puVar10[1] = uStack_420;
              }
              else {
                pfVar17 = (float *)FUN_14019d3e0(local_148,lVar8,3);
                fVar42 = *pfVar17;
                fVar41 = pfVar17[1];
                fVar24 = pfVar17[2];
                pfVar17 = (float *)FUN_14019d3e0(local_138,(ulonglong)*puVar21 * 0x40 + *param_6,3);
                fVar39 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                lVar8 = (ulonglong)*puVar21 * 0x40 + *param_6;
                fVar44 = DAT_140492704 - fVar39;
                fVar25 = *pfVar17;
                fVar26 = pfVar17[1];
                fVar47 = pfVar17[2];
                uVar35 = FUN_14005f600(lVar8,3);
                pfVar17 = (float *)FUN_14005f500(uVar35,0);
                *pfVar17 = fVar44 * fVar25 + fVar39 * fVar42;
                uVar35 = FUN_14005f600(lVar8,3);
                pfVar17 = (float *)FUN_14005f500(uVar35,1);
                *pfVar17 = fVar44 * fVar26 + fVar39 * fVar41;
                uVar35 = FUN_14005f600(lVar8,3);
                pfVar17 = (float *)FUN_14005f500(uVar35,2);
                *pfVar17 = fVar44 * fVar47 + fVar39 * fVar24;
              }
            }
            else {
              uVar7 = 0;
              lVar8 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
              local_474 = 0;
              lVar12 = local_3f8;
              lVar13 = local_3f0;
              local_2c0 = lVar8;
              if (0 < (int)lVar8) {
                do {
                  puVar15 = local_3a0;
                  lVar11 = *(longlong *)(param_2 + 8);
                  uVar16 = 0;
                  lVar22 = uVar7 * 0x20;
                  iVar19 = (int)(*(longlong *)(lVar11 + 0x10 + lVar22) -
                                 *(longlong *)(lVar11 + 8 + lVar22) >> 3) * -0x33333333;
                  uVar18 = (uint)uVar7;
                  if (0 < iVar19) {
                    do {
                      if (*(int *)(*(longlong *)(lVar11 + 8 + lVar22) + uVar16 * 0x28) ==
                          *(int *)(lVar13 + 0x60 + lVar12)) {
                        lVar12 = (ulonglong)puVar15[2] * 0x40;
                        lVar8 = *param_5;
                        fVar42 = *(float *)(lVar8 + lVar12);
                        fVar41 = *(float *)(lVar8 + 4 + lVar12);
                        fVar24 = *(float *)(lVar8 + 8 + lVar12);
                        fVar39 = *(float *)(lVar8 + 0xc + lVar12);
                        fVar39 = fVar39 * fVar39 + fVar24 * fVar24 +
                                 fVar41 * fVar41 + fVar42 * fVar42;
                        if (fVar39 < 0.0) {
                          fVar39 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar39 = SQRT(fVar39);
                        }
                        puVar21 = local_408;
                        local_328._0_4_ = *(float *)(lVar8 + 0x30 + lVar12);
                        local_328._4_4_ = *(float *)(lVar8 + 0x34 + lVar12);
                        fStack_320 = *(float *)(lVar8 + 0x38 + lVar12);
                        fVar39 = DAT_140492704 / fVar39;
                        pfVar17 = (float *)((ulonglong)*local_408 * 0x40 + *param_6);
                        fVar25 = pfVar17[0xc];
                        fVar26 = pfVar17[0xd];
                        fVar47 = pfVar17[0xe];
                        fVar44 = fVar25 - (float)local_328._0_4_;
                        fStack_31c = fVar42 * fVar39;
                        local_318 = fVar41 * fVar39;
                        fVar23 = fVar47 - fStack_320;
                        local_314 = fVar24 * fVar39;
                        fVar41 = fVar26 - (float)local_328._4_4_;
                        local_348._8_4_ = fVar47;
                        fVar42 = fVar44 * fStack_31c + fVar41 * local_318 + fVar23 * local_314;
                        local_348._0_8_ = *(undefined8 *)(pfVar17 + 0xc);
                        fVar44 = fVar44 - fVar42 * fStack_31c;
                        fVar41 = fVar41 - fVar42 * local_318;
                        fVar23 = fVar23 - fVar42 * local_314;
                        fVar42 = fVar44 * fVar44 + fVar41 * fVar41 + fVar23 * fVar23;
                        if (fVar42 < 0.0) {
                          fVar42 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar42 = SQRT(fVar42);
                        }
                        fVar42 = DAT_140492704 / fVar42;
                        local_338 = fVar42 * fVar41;
                        local_334 = fVar42 * fVar23;
                        fStack_33c = fVar42 * fVar44;
                        cVar6 = FUN_14026dce0(local_348,local_328,local_288,&local_2b8);
                        fVar42 = local_2b4;
                        lVar12 = local_3f8;
                        lVar13 = local_3f0;
                        if (cVar6 != '\0') {
                          local_448 = *(undefined8 *)(pfVar17 + 4);
                          uStack_440 = *(undefined8 *)(pfVar17 + 6);
                          local_410 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                          local_458 = (float)*(undefined8 *)pfVar17;
                          fStack_454 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                          fStack_450 = (float)*(undefined8 *)(pfVar17 + 2);
                          fStack_44c = (float)((ulonglong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                          local_438 = *(undefined8 *)(pfVar17 + 8);
                          uStack_430 = *(undefined8 *)(pfVar17 + 10);
                          local_414 = local_2b8;
                          uStack_420 = CONCAT44(0x3f800000,local_2b0);
                          fVar45 = local_2b0;
                          FUN_1401e23d0(pfVar17,local_388,&local_38c,&local_390);
                          FUN_1401e23d0(&local_458,local_3c0,&local_3c4,&local_3c8);
                          fVar41 = pfVar17[8];
                          fVar24 = pfVar17[9];
                          fVar39 = pfVar17[10];
                          fVar44 = pfVar17[0xb];
                          fVar23 = pfVar17[4];
                          fVar37 = pfVar17[5];
                          fVar38 = pfVar17[6];
                          fVar43 = pfVar17[7];
                          fVar27 = pfVar17[3] * pfVar17[3] + pfVar17[2] * pfVar17[2] +
                                   pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17;
                          if (fVar27 < 0.0) {
                            fVar27 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar27 = SQRT(fVar27);
                          }
                          fVar23 = fVar43 * fVar43 + fVar38 * fVar38 +
                                   fVar37 * fVar37 + fVar23 * fVar23;
                          if (fVar23 < 0.0) {
                            fVar23 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar23 = SQRT(fVar23);
                          }
                          fVar41 = fVar44 * fVar44 + fVar39 * fVar39 +
                                   fVar24 * fVar24 + fVar41 * fVar41;
                          if (fVar41 < 0.0) {
                            fVar41 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar41 = SQRT(fVar41);
                          }
                          fVar38 = (float)local_438;
                          fVar43 = local_438._4_4_;
                          fVar28 = uStack_430._4_4_;
                          fVar24 = (float)local_448;
                          fVar39 = local_448._4_4_;
                          fVar44 = (float)uStack_440;
                          fVar37 = uStack_440._4_4_;
                          local_40c = (float)uStack_430;
                          fVar29 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                                   fStack_454 * fStack_454 + local_458 * local_458;
                          if (fVar29 < 0.0) {
                            fVar29 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar29 = SQRT(fVar29);
                          }
                          fVar24 = fVar37 * fVar37 + fVar44 * fVar44 +
                                   fVar39 * fVar39 + fVar24 * fVar24;
                          if (fVar24 < 0.0) {
                            fVar24 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar24 = SQRT(fVar24);
                          }
                          fVar39 = fVar28 * fVar28 + local_40c * local_40c +
                                   fVar43 * fVar43 + fVar38 * fVar38;
                          if (fVar39 < 0.0) {
                            fVar39 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar39 = SQRT(fVar39);
                          }
                          fVar37 = (float)FUN_14041d0c0();
                          local_390 = fVar37;
                          fVar38 = (float)FUN_14041d0c0();
                          local_38c = fVar38;
                          fVar43 = (float)FUN_14041d0c0();
                          local_388[0] = fVar43;
                          fVar28 = (float)FUN_14041d0c0();
                          local_3c8 = fVar28;
                          fVar40 = (float)FUN_14041d0c0();
                          local_3c4 = fVar40;
                          local_3c0[0] = (float)FUN_14041d0c0();
                          fVar44 = local_410;
                          if (fVar4 < fVar28 - fVar37) {
                            fVar28 = fVar28 - fVar4;
                            local_3c8 = fVar28;
                          }
                          if (fVar4 < fVar40 - fVar38) {
                            fVar40 = fVar40 - fVar4;
                            local_3c4 = fVar40;
                          }
                          if (fVar4 < local_3c0[0] - fVar43) {
                            local_3c0[0] = local_3c0[0] - fVar4;
                          }
                          fVar30 = DAT_140492704 - local_410;
                          local_2e4 = local_410 * fVar28 + fVar30 * local_390;
                          local_2e0 = local_410 * fVar40 + fVar30 * fVar38;
                          local_2dc = local_410 * local_3c0[0] + fVar30 * fVar43;
                          FUN_140215020(local_1f8,&local_2dc,&local_2e0,&local_2e4);
                          local_458 = (float)_DAT_140492a60;
                          fStack_454 = (float)((ulonglong)_DAT_140492a60 >> 0x20);
                          fStack_450 = (float)_UNK_140492a68;
                          fStack_44c = (float)((ulonglong)_UNK_140492a68 >> 0x20);
                          local_448 = _DAT_140492a90;
                          uStack_440 = _UNK_140492a98;
                          local_438 = _DAT_140492b40;
                          uStack_430 = _UNK_140492b48;
                          local_428 = CONCAT44(fVar30 * fVar26 + fVar42 * fVar44,
                                               fVar30 * fVar25 + local_414 * fVar44);
                          uStack_420 = CONCAT44(0x3f800000,fVar30 * fVar47 + fVar45 * fVar44);
                          lVar8 = FUN_14005ecb0(local_1b8,&local_458,local_1f8);
                          pfVar17 = (float *)FUN_14005f5b0(lVar8,0);
                          fVar42 = *pfVar17;
                          fVar25 = pfVar17[1];
                          fVar26 = pfVar17[2];
                          fVar47 = pfVar17[3];
                          pfVar17 = (float *)FUN_14005f5b0(lVar8,1);
                          fVar37 = *pfVar17;
                          fVar38 = pfVar17[1];
                          fVar43 = pfVar17[2];
                          fVar45 = pfVar17[3];
                          fVar28 = fVar29 * fVar44 + fVar30 * fVar27;
                          fVar27 = fVar30 * fVar41 + fVar39 * fVar44;
                          fVar23 = fVar30 * fVar23 + fVar24 * fVar44;
                          pfVar17 = (float *)FUN_14005f5b0(lVar8,2);
                          auVar2 = *(undefined1 (*) [16])(lVar8 + 0x30);
                          lVar12 = (ulonglong)*puVar21 * 0x40;
                          fVar41 = *pfVar17;
                          fVar24 = pfVar17[1];
                          fVar39 = pfVar17[2];
                          fVar44 = pfVar17[3];
                          lVar8 = *param_6;
                          pfVar17 = (float *)(lVar8 + lVar12);
                          *pfVar17 = fVar42 * fVar28;
                          pfVar17[1] = fVar25 * fVar28;
                          pfVar17[2] = fVar26 * fVar28;
                          pfVar17[3] = fVar47 * fVar28;
                          pfVar17 = (float *)(lVar8 + 0x10 + lVar12);
                          *pfVar17 = fVar37 * fVar23;
                          pfVar17[1] = fVar38 * fVar23;
                          pfVar17[2] = fVar43 * fVar23;
                          pfVar17[3] = fVar45 * fVar23;
                          pfVar17 = (float *)(lVar8 + 0x20 + lVar12);
                          *pfVar17 = fVar41 * fVar27;
                          pfVar17[1] = fVar24 * fVar27;
                          pfVar17[2] = fVar39 * fVar27;
                          pfVar17[3] = fVar44 * fVar27;
                          *(undefined1 (*) [16])(lVar8 + 0x30 + lVar12) = auVar2;
                          lVar12 = local_3f8;
                          lVar13 = local_3f0;
                        }
                      }
                      uVar14 = (int)uVar16 + 1;
                      uVar16 = (ulonglong)uVar14;
                      lVar8 = local_2c0;
                      uVar18 = local_474;
                    } while ((int)uVar14 < iVar19);
                  }
                  local_474 = uVar18 + 1;
                  uVar7 = (ulonglong)local_474;
                  puVar15 = local_3a0;
                } while ((int)local_474 < (int)lVar8);
              }
            }
          }
          else {
            uVar7 = 0;
            local_2c0 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
            local_46c = 0;
            lVar8 = local_3f8;
            lVar12 = local_3f0;
            if (0 < (int)local_2c0) {
              do {
                lVar13 = *(longlong *)(param_2 + 8);
                uVar16 = 0;
                lVar11 = uVar7 * 0x20;
                local_288[0] = (*(longlong *)(lVar13 + 0x10 + lVar11) -
                                *(longlong *)(lVar13 + 8 + lVar11) >> 3) * -0x3333333333333333;
                local_3a8 = lVar11;
                local_398 = lVar13;
                if (0 < (int)local_288[0]) {
                  do {
                    lVar22 = *(longlong *)(lVar13 + 8 + lVar11);
                    if (*(int *)(lVar22 + uVar16 * 0x28) == *(int *)(lVar12 + 0x60 + lVar8)) {
                      lVar8 = *param_5;
                      pfVar17 = (float *)((ulonglong)puVar15[2] * 0x40 + lVar8);
                      fVar42 = *pfVar17;
                      fVar41 = pfVar17[1];
                      fVar24 = pfVar17[2];
                      fVar39 = pfVar17[3] * pfVar17[3] + fVar24 * fVar24 +
                               fVar41 * fVar41 + fVar42 * fVar42;
                      if (fVar39 < 0.0) {
                        fVar39 = (float)FUN_14041ad10();
                      }
                      else {
                        fVar39 = SQRT(fVar39);
                      }
                      fVar25 = pfVar17[0xd];
                      fVar26 = pfVar17[0xe];
                      fVar39 = DAT_140492704 / fVar39;
                      pfVar20 = (float *)((ulonglong)*puVar21 * 0x40 + *param_6);
                      lVar12 = (longlong)**(int **)(lVar22 + 0x10 + uVar16 * 0x28) * 0x40;
                      fVar47 = pfVar20[0xc];
                      fVar44 = pfVar20[0xd];
                      fVar37 = fVar26 - *(float *)(lVar8 + 0x38 + lVar12);
                      local_418 = fVar39 * fVar42;
                      fVar41 = fVar39 * fVar41;
                      fVar42 = pfVar20[0xe];
                      fVar23 = fVar25 - *(float *)(lVar8 + 0x34 + lVar12);
                      fVar39 = fVar39 * fVar24;
                      fVar24 = pfVar17[0xc];
                      fVar38 = fVar24 - *(float *)(lVar8 + 0x30 + lVar12);
                      fVar43 = (fVar47 - fVar24) * local_418;
                      fVar37 = fVar38 * fVar38 + fVar23 * fVar23 + fVar37 * fVar37;
                      fVar23 = (fVar42 - fVar26) * fVar39;
                      local_414 = fVar24;
                      local_410 = fVar25;
                      local_40c = fVar26;
                      if (fVar37 < 0.0) {
                        fVar37 = (float)FUN_14041ad10();
                      }
                      else {
                        fVar37 = SQRT(fVar37);
                      }
                      fVar38 = *(float *)(lVar22 + 8 + uVar16 * 0x28);
                      local_400 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                      if ((fVar38 <= fVar37) ||
                         (fVar23 = (fVar44 - fVar25) * fVar41 + fVar43 + fVar23, fVar23 < 0.0)) {
                        fVar41 = *pfVar20;
                        fVar24 = pfVar20[1];
                        fVar45 = pfVar20[3];
                        fVar39 = pfVar20[4];
                        fVar25 = pfVar20[5];
                        fVar26 = pfVar20[6];
                        fVar27 = pfVar20[7];
                        fVar23 = pfVar20[8];
                        fVar37 = pfVar20[10];
                        fVar28 = pfVar20[0xb];
                        FUN_14041c460((ulonglong)puVar15[1],fVar41);
                        fVar29 = (float)FUN_14041a9c0();
                        fVar40 = (float)FUN_14041a2e0();
                        fVar38 = pfVar20[0xb];
                        fVar30 = pfVar20[2] * pfVar20[2];
                        fVar37 = fVar37 * fVar37;
                        fVar43 = pfVar20[7];
                        fVar41 = fVar24 * fVar24 + fVar41 * fVar41;
                        fVar26 = fVar26 * fVar26;
                        fVar24 = pfVar20[3] * pfVar20[3] + fVar30 + fVar41;
                        if (fVar24 < 0.0) {
                          local_418 = (float)FUN_14041ad10();
                        }
                        else {
                          local_418 = SQRT(fVar24);
                        }
                        fVar39 = fVar25 * fVar25 + fVar39 * fVar39;
                        fVar24 = fVar43 * fVar43 + fVar26 + fVar39;
                        if (fVar24 < 0.0) {
                          fVar24 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar24 = SQRT(fVar24);
                        }
                        fVar43 = pfVar20[9] * pfVar20[9] + fVar23 * fVar23;
                        fVar23 = fVar38 * fVar38 + fVar37 + fVar43;
                        if (fVar23 < 0.0) {
                          fVar23 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar23 = SQRT(fVar23);
                        }
                        fVar41 = fVar45 * fVar45 + fVar30 + fVar41;
                        local_21c = fVar28;
                        local_20c = fVar27;
                        local_1fc = fVar45;
                        if (fVar41 < 0.0) {
                          fVar41 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar41 = SQRT(fVar41);
                        }
                        fVar39 = fVar27 * fVar27 + fVar26 + fVar39;
                        if (fVar39 < 0.0) {
                          fVar39 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar39 = SQRT(fVar39);
                        }
                        fVar43 = fVar28 * fVar28 + fVar37 + fVar43;
                        if (fVar43 < 0.0) {
                          fVar43 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar43 = SQRT(fVar43);
                        }
                        FUN_14041c460(pfVar20[8] * fVar29 - pfVar20[9] * fVar40,
                                      fVar25 * fVar40 - pfVar20[4] * fVar29);
                        fVar25 = (float)FUN_14041d0c0();
                        if (fVar26 + fVar37 < 0.0) {
                          FUN_14041ad10();
                        }
                        uVar35 = FUN_14041c460();
                        fVar38 = (float)FUN_14041d0c0(uVar35,uVar5);
                        auVar36._0_8_ = FUN_14041d0c0();
                        fVar26 = local_400;
                        fVar45 = (float)auVar36._0_8_;
                        auVar36._8_4_ = (undefined4)extraout_XMM0_Qb_03;
                        auVar36._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
                        fVar37 = fVar25;
                        if (fVar4 < fVar25 - fVar25) {
                          fVar37 = fVar25 - fVar4;
                        }
                        fVar27 = fVar38;
                        if (fVar4 < fVar38 - fVar38) {
                          fVar27 = fVar38 - fVar4;
                        }
                        if (fVar4 < fVar45 - fVar45) {
                          auVar36._0_4_ = fVar45 - fVar4;
                        }
                        fVar28 = DAT_140492704 - local_400;
                        local_2f0 = fVar37 * local_400 + fVar25 * fVar28;
                        local_2ec = fVar27 * local_400 + fVar38 * fVar28;
                        local_2e8 = auVar36._0_4_ * local_400 + fVar45 * fVar28;
                        FUN_140215020(local_1f8,&local_2e8,&local_2ec,&local_2f0);
                        local_458 = (float)_DAT_140492a60;
                        fStack_454 = (float)((ulonglong)_DAT_140492a60 >> 0x20);
                        fStack_450 = (float)_UNK_140492a68;
                        fStack_44c = (float)((ulonglong)_UNK_140492a68 >> 0x20);
                        local_448 = _DAT_140492a90;
                        uStack_440 = _UNK_140492a98;
                        local_438 = _DAT_140492b40;
                        uStack_430 = _UNK_140492b48;
                        local_428 = CONCAT44(local_410 * fVar26 + fVar44 * fVar28,
                                             local_414 * fVar26 + fVar47 * fVar28);
                        uStack_420 = CONCAT44(0x3f800000,local_40c * fVar26 + fVar42 * fVar28);
                        pfVar20 = (float *)FUN_14005ecb0(local_1b8,&local_458,local_1f8);
                        fVar42 = pfVar20[1];
                        fVar25 = pfVar20[2];
                        fVar47 = pfVar20[3];
                        lVar12 = (ulonglong)*local_408 * 0x40;
                        fVar27 = fVar41 * fVar26 + fVar28 * local_418;
                        fVar41 = pfVar20[4];
                        fVar44 = pfVar20[5];
                        fVar37 = pfVar20[6];
                        fVar38 = pfVar20[7];
                        fVar45 = fVar39 * fVar26 + fVar24 * fVar28;
                        fVar43 = fVar43 * fVar26 + fVar23 * fVar28;
                        fVar24 = pfVar20[8];
                        fVar39 = pfVar20[9];
                        fVar26 = pfVar20[10];
                        fVar23 = pfVar20[0xb];
                        auVar2 = *(undefined1 (*) [16])(pfVar20 + 0xc);
                        lVar8 = *param_6;
                        pfVar17 = (float *)(lVar8 + lVar12);
                        *pfVar17 = fVar27 * *pfVar20;
                        pfVar17[1] = fVar27 * fVar42;
                        pfVar17[2] = fVar27 * fVar25;
                        pfVar17[3] = fVar27 * fVar47;
                        pfVar17 = (float *)(lVar8 + 0x10 + lVar12);
                        *pfVar17 = fVar45 * fVar41;
                        pfVar17[1] = fVar45 * fVar44;
                        pfVar17[2] = fVar45 * fVar37;
                        pfVar17[3] = fVar45 * fVar38;
                        pfVar17 = (float *)(lVar8 + 0x20 + lVar12);
                        *pfVar17 = fVar43 * fVar24;
                        pfVar17[1] = fVar43 * fVar39;
                        pfVar17[2] = fVar43 * fVar26;
                        pfVar17[3] = fVar43 * fVar23;
                        *(undefined1 (*) [16])(lVar8 + 0x30 + lVar12) = auVar2;
                        lVar11 = local_3a8;
                        lVar13 = local_398;
                        puVar15 = local_3a0;
                        lVar8 = local_3f8;
                        lVar12 = local_3f0;
                        puVar21 = local_408;
                      }
                      else {
                        fVar38 = fVar38 - fVar37;
                        if (fVar23 < fVar38) {
                          fVar38 = fVar23;
                        }
                        local_448 = *(undefined8 *)(pfVar17 + 4);
                        uStack_440 = *(undefined8 *)(pfVar17 + 6);
                        local_458 = (float)*(undefined8 *)pfVar17;
                        fStack_454 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                        fStack_450 = (float)*(undefined8 *)(pfVar17 + 2);
                        fStack_44c = (float)((ulonglong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                        local_438 = *(undefined8 *)(pfVar17 + 8);
                        uStack_430 = *(undefined8 *)(pfVar17 + 10);
                        fVar24 = local_418 * fVar38 + fVar24;
                        fVar25 = fVar41 * fVar38 + fVar25;
                        local_428 = CONCAT44(fVar25,fVar24);
                        fVar26 = fVar39 * fVar38 + fVar26;
                        uStack_420 = CONCAT44(0x3f800000,fVar26);
                        FUN_1401e23d0(pfVar20,local_378,&local_37c,&local_380);
                        FUN_1401e23d0(&local_458,local_3b0,&local_3b4,&local_3b8);
                        fVar37 = pfVar20[9];
                        fVar43 = pfVar20[0xb];
                        fVar45 = pfVar20[4];
                        fVar27 = pfVar20[5];
                        fVar28 = pfVar20[6];
                        fVar29 = pfVar20[7];
                        fVar40 = pfVar20[3] * pfVar20[3] + pfVar20[2] * pfVar20[2] +
                                 pfVar20[1] * pfVar20[1] + *pfVar20 * *pfVar20;
                        if (fVar40 < 0.0) {
                          fVar40 = (float)FUN_14041ad10();
                          fVar28 = pfVar20[6];
                        }
                        else {
                          fVar40 = SQRT(fVar40);
                        }
                        fVar45 = fVar29 * fVar29 + fVar28 * fVar28 +
                                 fVar27 * fVar27 + fVar45 * fVar45;
                        if (fVar45 < 0.0) {
                          local_348._0_8_ = FUN_14041ad10();
                          register0x00001208 = extraout_XMM0_Qb;
                        }
                        else {
                          _local_348 = ZEXT416((uint)SQRT(fVar45));
                        }
                        fVar37 = fVar43 * fVar43 + pfVar20[10] * pfVar20[10] +
                                 fVar37 * fVar37 + pfVar20[8] * pfVar20[8];
                        if (fVar37 < 0.0) {
                          local_328 = (undefined1  [8])FUN_14041ad10();
                          register0x00001208 = extraout_XMM0_Qb_00;
                        }
                        else {
                          _local_328 = ZEXT416((uint)SQRT(fVar37));
                        }
                        fVar29 = (float)local_438;
                        fVar27 = (float)uStack_440;
                        fVar30 = local_438._4_4_;
                        fVar31 = uStack_430._4_4_;
                        fVar43 = (float)local_448;
                        fVar45 = local_448._4_4_;
                        fVar28 = uStack_440._4_4_;
                        fVar37 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                                 fStack_454 * fStack_454 + local_458 * local_458;
                        fVar34 = (float)uStack_430;
                        if (fVar37 < 0.0) {
                          fVar37 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar37 = SQRT(fVar37);
                        }
                        fVar43 = fVar28 * fVar28 + fVar27 * fVar27 +
                                 fVar45 * fVar45 + fVar43 * fVar43;
                        if (fVar43 < 0.0) {
                          fVar43 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar43 = SQRT(fVar43);
                        }
                        fVar45 = fVar31 * fVar31 + fVar34 * fVar34 +
                                 fVar30 * fVar30 + fVar29 * fVar29;
                        if (fVar45 < 0.0) {
                          fVar45 = (float)FUN_14041ad10();
                        }
                        else {
                          fVar45 = SQRT(fVar45);
                        }
                        fVar27 = (float)FUN_14041d0c0();
                        local_380 = fVar27;
                        fVar28 = (float)FUN_14041d0c0();
                        local_37c = fVar28;
                        fVar29 = (float)FUN_14041d0c0();
                        local_378[0] = fVar29;
                        fVar30 = (float)FUN_14041d0c0();
                        local_3b8 = fVar30;
                        fVar31 = (float)FUN_14041d0c0();
                        local_3b4 = fVar31;
                        local_3b0[0] = (float)FUN_14041d0c0();
                        if (fVar4 < fVar30 - fVar27) {
                          fVar30 = fVar30 - fVar4;
                          local_3b8 = fVar30;
                        }
                        if (fVar4 < fVar31 - fVar28) {
                          fVar31 = fVar31 - fVar4;
                          local_3b4 = fVar31;
                        }
                        if (fVar4 < local_3b0[0] - fVar29) {
                          local_3b0[0] = local_3b0[0] - fVar4;
                        }
                        fVar46 = DAT_140492704 - local_400;
                        local_308 = fVar30 * local_400 + fVar27 * fVar46;
                        local_304 = fVar28 * fVar46 + fVar31 * local_400;
                        local_300 = fVar29 * fVar46 + local_3b0[0] * local_400;
                        FUN_140215020(&local_268,&local_300,&local_304,&local_308);
                        fVar34 = local_400;
                        local_458 = (float)_DAT_140492a60;
                        fStack_454 = (float)((ulonglong)_DAT_140492a60 >> 0x20);
                        fStack_450 = (float)_UNK_140492a68;
                        fStack_44c = (float)((ulonglong)_UNK_140492a68 >> 0x20);
                        local_448 = _DAT_140492a90;
                        uStack_440 = _UNK_140492a98;
                        local_438 = _DAT_140492b40;
                        uStack_430 = _UNK_140492b48;
                        local_428 = CONCAT44(fVar25 * local_400 + fVar44 * fVar46,
                                             fVar24 * local_400 + fVar47 * fVar46);
                        uStack_420 = CONCAT44(0x3f800000,fVar26 * local_400 + fVar42 * fVar46);
                        lVar8 = FUN_14005ecb0(local_1b8,&local_458,&local_268);
                        pfVar20 = (float *)FUN_14005f5b0(lVar8,0);
                        fVar42 = *pfVar20;
                        fVar24 = pfVar20[1];
                        fVar25 = pfVar20[2];
                        fVar47 = pfVar20[3];
                        pfVar20 = (float *)FUN_14005f5b0(lVar8,1);
                        fVar44 = *pfVar20;
                        fVar27 = pfVar20[1];
                        fVar28 = pfVar20[2];
                        fVar29 = pfVar20[3];
                        fVar32 = fVar34 * fVar37 + fVar40 * fVar46;
                        fVar33 = (float)local_348._0_4_ * fVar46 + fVar43 * fVar34;
                        fVar46 = (float)local_328._0_4_ * fVar46 + fVar45 * fVar34;
                        pfVar20 = (float *)FUN_14005f5b0(lVar8,2);
                        auVar2 = *(undefined1 (*) [16])(lVar8 + 0x30);
                        fVar45 = *pfVar20;
                        fVar40 = pfVar20[1];
                        fVar30 = pfVar20[2];
                        fVar31 = pfVar20[3];
                        lVar12 = (ulonglong)*local_408 * 0x40;
                        lVar8 = *param_6;
                        pfVar20 = (float *)(lVar8 + lVar12);
                        *pfVar20 = fVar42 * fVar32;
                        pfVar20[1] = fVar24 * fVar32;
                        pfVar20[2] = fVar25 * fVar32;
                        pfVar20[3] = fVar47 * fVar32;
                        pfVar20 = (float *)(lVar8 + 0x10 + lVar12);
                        *pfVar20 = fVar44 * fVar33;
                        pfVar20[1] = fVar27 * fVar33;
                        pfVar20[2] = fVar28 * fVar33;
                        pfVar20[3] = fVar29 * fVar33;
                        pfVar20 = (float *)(lVar8 + 0x20 + lVar12);
                        *pfVar20 = fVar45 * fVar46;
                        pfVar20[1] = fVar40 * fVar46;
                        pfVar20[2] = fVar30 * fVar46;
                        pfVar20[3] = fVar31 * fVar46;
                        *(undefined1 (*) [16])(lVar8 + 0x30 + lVar12) = auVar2;
                        puVar21 = local_408;
                        lVar8 = local_3f8;
                        lVar12 = local_3f0;
                        lVar11 = local_3a8;
                        lVar13 = local_398;
                        for (uVar18 = (int)(*(longlong *)(lVar22 + 0x18 + uVar16 * 0x28) -
                                            *(longlong *)(lVar22 + 0x10 + uVar16 * 0x28) >> 2) - 2;
                            local_408 = puVar21, local_3f8 = lVar8, local_3f0 = lVar12,
                            local_3a8 = lVar11, local_398 = lVar13, 0 < (int)uVar18;
                            uVar18 = uVar18 - 1) {
                          lVar3 = *(longlong *)(lVar22 + 0x10 + uVar16 * 0x28);
                          fVar42 = *(float *)(*param_1 +
                                             (longlong)*(int *)(lVar3 + 4 + (ulonglong)uVar18 * 4) *
                                             4);
                          fVar23 = fVar23 - fVar42;
                          if (fVar23 < 0.0) break;
                          fVar25 = fVar23 - (float)puVar15[3];
                          fVar24 = fVar25;
                          if (fVar25 <= 0.0) {
                            fVar24 = 0.0;
                          }
                          fVar47 = DAT_140492704;
                          if (fVar24 / (float)puVar15[4] < DAT_140492704) {
                            if (fVar25 <= 0.0) {
                              fVar25 = 0.0;
                            }
                            fVar47 = fVar25 / (float)puVar15[4];
                            if (fVar47 <= 0.0) break;
                          }
                          fVar38 = fVar38 - fVar42;
                          if (fVar38 < 0.0) break;
                          iVar19 = *(int *)(lVar3 + (ulonglong)uVar18 * 4);
                          pfVar20 = (float *)FUN_14005f5b0(pfVar17,3);
                          local_448 = *(undefined8 *)(pfVar17 + 4);
                          uStack_440 = *(undefined8 *)(pfVar17 + 6);
                          lVar8 = (longlong)iVar19 * 0x40;
                          fVar29 = local_418 * fVar38 + *pfVar20;
                          local_458 = (float)*(undefined8 *)pfVar17;
                          fStack_454 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                          fStack_450 = (float)*(undefined8 *)(pfVar17 + 2);
                          fStack_44c = (float)((ulonglong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                          local_438 = *(undefined8 *)(pfVar17 + 8);
                          uStack_430 = *(undefined8 *)(pfVar17 + 10);
                          fVar40 = fVar41 * fVar38 + pfVar20[1];
                          fVar30 = fVar39 * fVar38 + pfVar20[2];
                          pfVar20 = (float *)(*param_5 + lVar8);
                          local_428 = CONCAT44(fVar40,fVar29);
                          uStack_420 = CONCAT44(0x3f800000,fVar30);
                          fVar47 = fVar47 * fVar34;
                          fVar42 = pfVar20[0xc];
                          fVar24 = pfVar20[0xd];
                          fVar25 = pfVar20[0xe];
                          FUN_1401e23d0(pfVar20,local_368,&local_36c,&local_370,fVar26,fVar42,fVar43
                                        ,fVar24,fVar37,fVar39,fVar25);
                          FUN_1401e23d0(&local_458,local_3d0,&local_3d4,&local_3d8);
                          fVar26 = pfVar20[9];
                          fVar44 = pfVar20[0xb];
                          fVar37 = pfVar20[4];
                          fVar43 = pfVar20[5];
                          fVar45 = pfVar20[6];
                          fVar27 = pfVar20[7];
                          fVar28 = pfVar20[3] * pfVar20[3] + pfVar20[2] * pfVar20[2] +
                                   pfVar20[1] * pfVar20[1] + *pfVar20 * *pfVar20;
                          if (fVar28 < 0.0) {
                            fVar28 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar28 = SQRT(fVar28);
                          }
                          fVar43 = fVar27 * fVar27 + fVar45 * fVar45 +
                                   fVar43 * fVar43 + fVar37 * fVar37;
                          if (fVar43 < 0.0) {
                            fVar43 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar43 = SQRT(fVar43);
                          }
                          fVar37 = fVar44 * fVar44 + pfVar20[10] * pfVar20[10] +
                                   fVar26 * fVar26 + pfVar20[8] * pfVar20[8];
                          if (fVar37 < 0.0) {
                            fVar37 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar37 = SQRT(fVar37);
                          }
                          fVar34 = (float)uStack_430;
                          fVar31 = local_438._4_4_;
                          fVar32 = uStack_430._4_4_;
                          fVar26 = (float)local_448;
                          fVar44 = local_448._4_4_;
                          fVar45 = (float)uStack_440;
                          fVar27 = uStack_440._4_4_;
                          fVar46 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                                   fStack_454 * fStack_454 + local_458 * local_458;
                          fVar33 = (float)local_438;
                          if (fVar46 < 0.0) {
                            local_328 = (undefined1  [8])FUN_14041ad10();
                            register0x00001208 = extraout_XMM0_Qb_01;
                          }
                          else {
                            _local_328 = ZEXT416((uint)SQRT(fVar46));
                          }
                          fVar26 = fVar27 * fVar27 + fVar45 * fVar45 +
                                   fVar44 * fVar44 + fVar26 * fVar26;
                          if (fVar26 < 0.0) {
                            local_348._0_8_ = FUN_14041ad10();
                            register0x00001208 = extraout_XMM0_Qb_02;
                          }
                          else {
                            _local_348 = ZEXT416((uint)SQRT(fVar26));
                          }
                          fVar44 = fVar32 * fVar32 + fVar34 * fVar34 +
                                   fVar31 * fVar31 + fVar33 * fVar33;
                          if (fVar44 < 0.0) {
                            fVar44 = (float)FUN_14041ad10();
                          }
                          else {
                            fVar44 = SQRT(fVar44);
                          }
                          fVar26 = (float)FUN_14041d0c0();
                          local_370 = fVar26;
                          fVar45 = (float)FUN_14041d0c0();
                          local_36c = fVar45;
                          fVar27 = (float)FUN_14041d0c0();
                          local_368[0] = fVar27;
                          fVar31 = (float)FUN_14041d0c0();
                          local_3d8 = fVar31;
                          fVar34 = (float)FUN_14041d0c0();
                          local_3d4 = fVar34;
                          local_3d0[0] = (float)FUN_14041d0c0();
                          if (fVar4 < fVar31 - fVar26) {
                            fVar31 = fVar31 - fVar4;
                            local_3d8 = fVar31;
                          }
                          if (fVar4 < fVar34 - fVar45) {
                            fVar34 = fVar34 - fVar4;
                            local_3d4 = fVar34;
                          }
                          if (fVar4 < local_3d0[0] - fVar27) {
                            local_3d0[0] = local_3d0[0] - fVar4;
                          }
                          fVar33 = DAT_140492704 - fVar47;
                          local_2fc = fVar26 * fVar33 + fVar31 * fVar47;
                          local_2f8 = fVar45 * fVar33 + fVar34 * fVar47;
                          local_2f4 = fVar27 * fVar33 + local_3d0[0] * fVar47;
                          FUN_140215020(&local_268,&local_2f4,&local_2f8,&local_2fc);
                          local_29c = 0x3f800000;
                          local_2a8 = fVar42 * fVar33 + fVar29 * fVar47;
                          local_2a4 = fVar24 * fVar33 + fVar40 * fVar47;
                          local_2a0 = fVar25 * fVar33 + fVar30 * fVar47;
                          local_458 = (float)_DAT_140492a60;
                          fStack_454 = (float)((ulonglong)_DAT_140492a60 >> 0x20);
                          fStack_450 = (float)_UNK_140492a68;
                          fStack_44c = (float)((ulonglong)_UNK_140492a68 >> 0x20);
                          local_448 = _DAT_140492a90;
                          uStack_440 = _UNK_140492a98;
                          local_438 = _DAT_140492b40;
                          uStack_430 = _UNK_140492b48;
                          local_428 = _DAT_140492de0;
                          uStack_420 = _UNK_140492de8;
                          FUN_140214f80(local_1f8,&local_458,3,&local_2a8);
                          lVar12 = FUN_14005ecb0(local_1b8,local_1f8,&local_268);
                          pfVar20 = (float *)FUN_14005f5b0(lVar12,0);
                          fVar42 = *pfVar20;
                          fVar24 = pfVar20[1];
                          fVar25 = pfVar20[2];
                          fVar45 = pfVar20[3];
                          pfVar20 = (float *)FUN_14005f5b0(lVar12,1);
                          fVar27 = *pfVar20;
                          fVar29 = pfVar20[1];
                          fVar40 = pfVar20[2];
                          fVar30 = pfVar20[3];
                          fVar34 = (float)local_328._0_4_ * fVar47 + fVar28 * fVar33;
                          fVar32 = (float)local_348._0_4_ * fVar47 + fVar43 * fVar33;
                          fVar33 = fVar44 * fVar47 + fVar37 * fVar33;
                          pfVar20 = (float *)FUN_14005f5b0(lVar12,2);
                          auVar2 = *(undefined1 (*) [16])(lVar12 + 0x30);
                          fVar47 = *pfVar20;
                          fVar44 = pfVar20[1];
                          fVar28 = pfVar20[2];
                          fVar31 = pfVar20[3];
                          lVar12 = *param_5;
                          pfVar20 = (float *)(lVar12 + lVar8);
                          *pfVar20 = fVar42 * fVar34;
                          pfVar20[1] = fVar24 * fVar34;
                          pfVar20[2] = fVar25 * fVar34;
                          pfVar20[3] = fVar45 * fVar34;
                          pfVar20 = (float *)(lVar12 + 0x10 + lVar8);
                          *pfVar20 = fVar27 * fVar32;
                          pfVar20[1] = fVar29 * fVar32;
                          pfVar20[2] = fVar40 * fVar32;
                          pfVar20[3] = fVar30 * fVar32;
                          pfVar20 = (float *)(lVar12 + 0x20 + lVar8);
                          *pfVar20 = fVar47 * fVar33;
                          pfVar20[1] = fVar44 * fVar33;
                          pfVar20[2] = fVar28 * fVar33;
                          pfVar20[3] = fVar31 * fVar33;
                          *(undefined1 (*) [16])(lVar12 + 0x30 + lVar8) = auVar2;
                          puVar15 = local_3a0;
                          puVar21 = local_408;
                          fVar34 = local_400;
                          lVar8 = local_3f8;
                          lVar12 = local_3f0;
                          lVar11 = local_3a8;
                          lVar13 = local_398;
                        }
                      }
                    }
                    uVar18 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar18;
                  } while ((int)uVar18 < (int)local_288[0]);
                }
                local_46c = local_46c + 1;
                uVar7 = (ulonglong)local_46c;
              } while ((int)local_46c < (int)local_2c0);
            }
          }
          puVar15 = puVar15 + 5;
        } while (puVar15 != local_270);
      }
      local_408 = local_408 + 1;
    } while (local_408 != local_278);
  }
  return;
}

