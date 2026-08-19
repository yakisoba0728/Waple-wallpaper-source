// Function: FUN_14026f590
// Addr: 14026f590
// Size: 7875 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026f590(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
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
  float local_2f4 [4];
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
  undefined1 local_1f8 [64];
  undefined1 local_1b8 [64];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [232];
  
  fVar4 = DAT_140492904;
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
              lVar7 = (ulonglong)puVar15[2] * 0x40 + *param_5;
              if ((uVar18 & 1) == 0) {
                fVar40 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                lVar12 = (ulonglong)*local_408 * 0x40 + *param_6;
                pfVar17 = (float *)func_0x00014005f680(lVar12,3);
                local_414 = *pfVar17;
                fVar39 = pfVar17[1];
                fVar35 = pfVar17[2];
                pfVar17 = (float *)func_0x00014005f680(lVar7,3);
                fVar36 = *pfVar17;
                fVar45 = pfVar17[1];
                fVar37 = pfVar17[2];
                FUN_1401e24a0(lVar12,local_358,&local_35c,&local_360,fVar36,fVar35);
                FUN_1401e24a0(lVar7,local_3e0,&local_3e4,&local_3e8);
                pfVar17 = (float *)func_0x00014005f680(lVar12,2);
                fVar23 = *pfVar17;
                fVar34 = pfVar17[1];
                fVar24 = pfVar17[2];
                fVar25 = pfVar17[3];
                pfVar17 = (float *)func_0x00014005f680(lVar12,1);
                fVar38 = *pfVar17;
                fVar42 = pfVar17[1];
                fVar43 = pfVar17[2];
                fVar41 = pfVar17[3];
                pfVar17 = (float *)func_0x00014005f680(lVar12,0);
                fVar26 = pfVar17[3] * pfVar17[3] + pfVar17[2] * pfVar17[2] +
                         pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17;
                if (fVar26 < 0.0) {
                    /* WARNING: Subroutine does not return */
                  FUN_14041ade0();
                }
                fVar38 = fVar41 * fVar41 + fVar43 * fVar43 + fVar42 * fVar42 + fVar38 * fVar38;
                if (fVar38 < 0.0) {
                    /* WARNING: Subroutine does not return */
                  FUN_14041ade0();
                }
                fVar38 = SQRT(fVar38);
                fVar23 = fVar25 * fVar25 + fVar24 * fVar24 + fVar34 * fVar34 + fVar23 * fVar23;
                if (fVar23 < 0.0) {
                    /* WARNING: Subroutine does not return */
                  FUN_14041ade0();
                }
                uVar8 = FUN_14019d4b0(local_178,lVar7,2);
                local_410 = (float)FUN_1401e2580(uVar8);
                uVar8 = FUN_14019d4b0(local_168,lVar7,1);
                local_40c = (float)FUN_1401e2580(uVar8);
                uVar8 = FUN_14019d4b0(local_158,lVar7,0);
                fVar34 = (float)FUN_1401e2580(uVar8);
                fVar24 = (float)FUN_14041d190();
                local_360 = fVar24;
                fVar25 = (float)FUN_14041d190();
                local_35c = fVar25;
                fVar42 = (float)FUN_14041d190();
                local_358[0] = fVar42;
                fVar43 = (float)FUN_14041d190();
                local_3e8 = fVar43;
                fVar41 = (float)FUN_14041d190();
                local_3e4 = fVar41;
                local_3e0[0] = (float)FUN_14041d190();
                if (fVar4 < fVar43 - fVar24) {
                  fVar43 = fVar43 - fVar4;
                  local_3e8 = fVar43;
                }
                if (fVar4 < fVar41 - fVar25) {
                  fVar41 = fVar41 - fVar4;
                  local_3e4 = fVar41;
                }
                if (fVar4 < local_3e0[0] - fVar42) {
                  local_3e0[0] = local_3e0[0] - fVar4;
                }
                fVar27 = DAT_1404927d4 - fVar40;
                local_2cc = SQRT(fVar26) * fVar27 + fVar34 * fVar40;
                local_2c8 = fVar38 * fVar27 + local_40c * fVar40;
                local_2d8 = fVar24 * fVar27 + fVar43 * fVar40;
                local_2d4 = fVar25 * fVar27 + fVar41 * fVar40;
                local_2c4 = SQRT(fVar23) * fVar27 + local_410 * fVar40;
                local_2d0 = fVar42 * fVar27 + local_3e0[0] * fVar40;
                FUN_1402150f0(local_1f8,&local_2d0,&local_2d4,&local_2d8);
                local_28c = 0x3f800000;
                local_298 = fVar36 * fVar40 + local_414 * fVar27;
                local_294 = fVar45 * fVar40 + fVar39 * fVar27;
                local_290 = fVar37 * fVar40 + fVar35 * fVar27;
                local_268 = _DAT_140492b30;
                uStack_260 = _UNK_140492b38;
                local_258 = _DAT_140492b60;
                uStack_250 = _UNK_140492b68;
                local_248 = _DAT_140492c10;
                uStack_240 = _UNK_140492c18;
                local_238 = _DAT_140492eb0;
                uStack_230 = _UNK_140492eb8;
                func_0x000140215050(local_1b8,&local_268,3,&local_298);
                uVar9 = FUN_14005ed80(local_128,local_1b8,local_1f8);
                pfVar17 = (float *)FUN_14005f4c0(&local_2cc,0);
                fVar40 = *pfVar17;
                puVar10 = (undefined8 *)func_0x00014005f680(uVar9,0);
                uVar8 = *puVar10;
                uVar1 = puVar10[1];
                puVar10 = (undefined8 *)func_0x00014005f6d0(&local_458,0);
                fVar45 = local_2c8;
                *puVar10 = CONCAT44((float)((ulonglong)uVar8 >> 0x20) * fVar40,(float)uVar8 * fVar40
                                   );
                puVar10[1] = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar40,
                                      (float)uVar1 * fVar40);
                pfVar17 = (float *)func_0x00014005f680(uVar9,1);
                fVar40 = *pfVar17;
                fVar39 = pfVar17[1];
                fVar35 = pfVar17[2];
                fVar36 = pfVar17[3];
                pfVar17 = (float *)func_0x00014005f6d0(&local_458,1);
                fVar37 = local_2c4;
                *pfVar17 = fVar40 * fVar45;
                pfVar17[1] = fVar39 * fVar45;
                pfVar17[2] = fVar35 * fVar45;
                pfVar17[3] = fVar36 * fVar45;
                pfVar17 = (float *)func_0x00014005f680(uVar9,2);
                fVar40 = *pfVar17;
                fVar39 = pfVar17[1];
                fVar35 = pfVar17[2];
                fVar36 = pfVar17[3];
                pfVar17 = (float *)func_0x00014005f6d0(&local_458,2);
                *pfVar17 = fVar40 * fVar37;
                pfVar17[1] = fVar39 * fVar37;
                pfVar17[2] = fVar35 * fVar37;
                pfVar17[3] = fVar36 * fVar37;
                puVar10 = (undefined8 *)func_0x00014005f680(uVar9,3);
                uVar8 = *puVar10;
                uVar1 = puVar10[1];
                puVar10 = (undefined8 *)func_0x00014005f6d0(&local_458,3);
                *puVar10 = uVar8;
                puVar10[1] = uVar1;
                lVar7 = *param_6;
                auVar2._4_4_ = fStack_454;
                auVar2._0_4_ = local_458;
                auVar2._8_4_ = fStack_450;
                auVar2._12_4_ = fStack_44c;
                lVar12 = (ulonglong)*puVar21 * 0x40;
                *(undefined1 (*) [16])(lVar7 + lVar12) = auVar2;
                puVar10 = (undefined8 *)(lVar7 + 0x10 + lVar12);
                *puVar10 = local_448;
                puVar10[1] = uStack_440;
                puVar10 = (undefined8 *)(lVar7 + 0x20 + lVar12);
                *puVar10 = local_438;
                puVar10[1] = uStack_430;
                puVar10 = (undefined8 *)(lVar7 + 0x30 + lVar12);
                *puVar10 = local_428;
                puVar10[1] = uStack_420;
              }
              else {
                pfVar17 = (float *)FUN_14019d4b0(local_148,lVar7,3);
                fVar40 = *pfVar17;
                fVar39 = pfVar17[1];
                fVar35 = pfVar17[2];
                pfVar17 = (float *)FUN_14019d4b0(local_138,(ulonglong)*puVar21 * 0x40 + *param_6,3);
                fVar36 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                lVar7 = (ulonglong)*puVar21 * 0x40 + *param_6;
                fVar34 = DAT_1404927d4 - fVar36;
                fVar45 = *pfVar17;
                fVar37 = pfVar17[1];
                fVar23 = pfVar17[2];
                uVar8 = func_0x00014005f6d0(lVar7,3);
                pfVar17 = (float *)FUN_14005f5d0(uVar8,0);
                *pfVar17 = fVar34 * fVar45 + fVar36 * fVar40;
                uVar8 = func_0x00014005f6d0(lVar7,3);
                pfVar17 = (float *)FUN_14005f5d0(uVar8,1);
                *pfVar17 = fVar34 * fVar37 + fVar36 * fVar39;
                uVar8 = func_0x00014005f6d0(lVar7,3);
                pfVar17 = (float *)FUN_14005f5d0(uVar8,2);
                *pfVar17 = fVar34 * fVar23 + fVar36 * fVar35;
              }
            }
            else {
              uVar6 = 0;
              lVar7 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
              local_474 = 0;
              lVar12 = local_3f8;
              lVar13 = local_3f0;
              local_2c0 = lVar7;
              if (0 < (int)lVar7) {
                do {
                  puVar15 = local_3a0;
                  lVar11 = *(longlong *)(param_2 + 8);
                  uVar16 = 0;
                  lVar22 = uVar6 * 0x20;
                  iVar19 = (int)(*(longlong *)(lVar11 + 0x10 + lVar22) -
                                 *(longlong *)(lVar11 + 8 + lVar22) >> 3) * -0x33333333;
                  uVar18 = (uint)uVar6;
                  if (0 < iVar19) {
                    do {
                      puVar21 = local_408;
                      if (*(int *)(*(longlong *)(lVar11 + 8 + lVar22) + uVar16 * 0x28) ==
                          *(int *)(lVar13 + 0x60 + lVar12)) {
                        lVar12 = (ulonglong)puVar15[2] * 0x40;
                        lVar7 = *param_5;
                        fVar40 = *(float *)(lVar7 + lVar12);
                        fVar39 = *(float *)(lVar7 + 4 + lVar12);
                        fVar35 = *(float *)(lVar7 + 8 + lVar12);
                        fVar36 = *(float *)(lVar7 + 0xc + lVar12);
                        fVar36 = fVar36 * fVar36 + fVar35 * fVar35 +
                                 fVar39 * fVar39 + fVar40 * fVar40;
                        if (fVar36 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        local_328._0_4_ = *(float *)(lVar7 + 0x30 + lVar12);
                        local_328._4_4_ = *(float *)(lVar7 + 0x34 + lVar12);
                        fStack_320 = *(float *)(lVar7 + 0x38 + lVar12);
                        local_314 = DAT_1404927d4 / SQRT(fVar36);
                        pfVar17 = (float *)((ulonglong)*local_408 * 0x40 + *param_6);
                        fVar36 = pfVar17[0xc];
                        fVar45 = pfVar17[0xd];
                        fVar37 = pfVar17[0xe];
                        fVar23 = fVar36 - (float)local_328._0_4_;
                        fStack_31c = fVar40 * local_314;
                        local_318 = fVar39 * local_314;
                        fVar34 = fVar37 - fStack_320;
                        local_314 = fVar35 * local_314;
                        fVar39 = fVar45 - (float)local_328._4_4_;
                        local_348._8_4_ = fVar37;
                        fVar40 = fVar23 * fStack_31c + fVar39 * local_318 + fVar34 * local_314;
                        local_348._0_8_ = *(undefined8 *)(pfVar17 + 0xc);
                        fVar23 = fVar23 - fVar40 * fStack_31c;
                        fVar39 = fVar39 - fVar40 * local_318;
                        fVar34 = fVar34 - fVar40 * local_314;
                        fVar40 = fVar23 * fVar23 + fVar39 * fVar39 + fVar34 * fVar34;
                        if (fVar40 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        fVar40 = DAT_1404927d4 / SQRT(fVar40);
                        local_338 = fVar40 * fVar39;
                        local_334 = fVar40 * fVar34;
                        fStack_33c = fVar40 * fVar23;
                        cVar5 = FUN_14026ddb0(local_348,local_328,local_288,&local_2b8);
                        fVar40 = local_2b4;
                        lVar12 = local_3f8;
                        lVar13 = local_3f0;
                        if (cVar5 != '\0') {
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
                          fVar39 = local_2b0;
                          FUN_1401e24a0(pfVar17,local_388,&local_38c,&local_390);
                          FUN_1401e24a0(&local_458,local_3c0,&local_3c4,&local_3c8);
                          fVar35 = pfVar17[3] * pfVar17[3] + pfVar17[2] * pfVar17[2] +
                                   pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17;
                          if (fVar35 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar35 = SQRT(fVar35);
                          fVar23 = pfVar17[7] * pfVar17[7] + pfVar17[6] * pfVar17[6] +
                                   pfVar17[5] * pfVar17[5] + pfVar17[4] * pfVar17[4];
                          if (fVar23 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar23 = SQRT(fVar23);
                          fVar34 = pfVar17[0xb] * pfVar17[0xb] + pfVar17[10] * pfVar17[10] +
                                   pfVar17[9] * pfVar17[9] + pfVar17[8] * pfVar17[8];
                          if (fVar34 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar34 = SQRT(fVar34);
                          local_40c = (float)uStack_430;
                          fVar24 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                                   fStack_454 * fStack_454 + local_458 * local_458;
                          if (fVar24 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar25 = uStack_440._4_4_ * uStack_440._4_4_ +
                                   (float)uStack_440 * (float)uStack_440 +
                                   local_448._4_4_ * local_448._4_4_ +
                                   (float)local_448 * (float)local_448;
                          if (fVar25 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar38 = uStack_430._4_4_ * uStack_430._4_4_ +
                                   (float)uStack_430 * (float)uStack_430 +
                                   local_438._4_4_ * local_438._4_4_ +
                                   (float)local_438 * (float)local_438;
                          if (fVar38 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar43 = (float)FUN_14041d190();
                          local_390 = fVar43;
                          fVar41 = (float)FUN_14041d190();
                          local_38c = fVar41;
                          fVar26 = (float)FUN_14041d190();
                          local_388[0] = fVar26;
                          fVar27 = (float)FUN_14041d190();
                          local_3c8 = fVar27;
                          fVar28 = (float)FUN_14041d190();
                          local_3c4 = fVar28;
                          local_3c0[0] = (float)FUN_14041d190();
                          fVar42 = local_410;
                          if (fVar4 < fVar27 - fVar43) {
                            fVar27 = fVar27 - fVar4;
                            local_3c8 = fVar27;
                          }
                          if (fVar4 < fVar28 - fVar41) {
                            fVar28 = fVar28 - fVar4;
                            local_3c4 = fVar28;
                          }
                          if (fVar4 < local_3c0[0] - fVar26) {
                            local_3c0[0] = local_3c0[0] - fVar4;
                          }
                          fVar29 = DAT_1404927d4 - local_410;
                          local_2e4 = local_410 * fVar27 + fVar29 * local_390;
                          local_2e0 = local_410 * fVar28 + fVar29 * fVar41;
                          local_2dc = local_410 * local_3c0[0] + fVar29 * fVar26;
                          FUN_1402150f0(local_1f8,&local_2dc,&local_2e0,&local_2e4);
                          local_458 = (float)_DAT_140492b30;
                          fStack_454 = (float)((ulonglong)_DAT_140492b30 >> 0x20);
                          fStack_450 = (float)_UNK_140492b38;
                          fStack_44c = (float)((ulonglong)_UNK_140492b38 >> 0x20);
                          local_448 = _DAT_140492b60;
                          uStack_440 = _UNK_140492b68;
                          local_438 = _DAT_140492c10;
                          uStack_430 = _UNK_140492c18;
                          local_428 = CONCAT44(fVar29 * fVar45 + fVar40 * fVar42,
                                               fVar29 * fVar36 + local_414 * fVar42);
                          uStack_420 = CONCAT44(0x3f800000,fVar29 * fVar37 + fVar39 * fVar42);
                          lVar7 = FUN_14005ed80(local_1b8,&local_458,local_1f8);
                          pfVar17 = (float *)func_0x00014005f680(lVar7,0);
                          fVar40 = *pfVar17;
                          fVar39 = pfVar17[1];
                          fVar36 = pfVar17[2];
                          fVar45 = pfVar17[3];
                          pfVar17 = (float *)func_0x00014005f680(lVar7,1);
                          fVar37 = *pfVar17;
                          fVar43 = pfVar17[1];
                          fVar41 = pfVar17[2];
                          fVar26 = pfVar17[3];
                          fVar27 = SQRT(fVar24) * fVar42 + fVar29 * fVar35;
                          fVar38 = fVar29 * fVar34 + SQRT(fVar38) * fVar42;
                          fVar25 = fVar29 * fVar23 + SQRT(fVar25) * fVar42;
                          pfVar17 = (float *)func_0x00014005f680(lVar7,2);
                          auVar2 = *(undefined1 (*) [16])(lVar7 + 0x30);
                          lVar12 = (ulonglong)*puVar21 * 0x40;
                          fVar35 = *pfVar17;
                          fVar23 = pfVar17[1];
                          fVar34 = pfVar17[2];
                          fVar24 = pfVar17[3];
                          lVar7 = *param_6;
                          pfVar17 = (float *)(lVar7 + lVar12);
                          *pfVar17 = fVar40 * fVar27;
                          pfVar17[1] = fVar39 * fVar27;
                          pfVar17[2] = fVar36 * fVar27;
                          pfVar17[3] = fVar45 * fVar27;
                          pfVar17 = (float *)(lVar7 + 0x10 + lVar12);
                          *pfVar17 = fVar37 * fVar25;
                          pfVar17[1] = fVar43 * fVar25;
                          pfVar17[2] = fVar41 * fVar25;
                          pfVar17[3] = fVar26 * fVar25;
                          pfVar17 = (float *)(lVar7 + 0x20 + lVar12);
                          *pfVar17 = fVar35 * fVar38;
                          pfVar17[1] = fVar23 * fVar38;
                          pfVar17[2] = fVar34 * fVar38;
                          pfVar17[3] = fVar24 * fVar38;
                          *(undefined1 (*) [16])(lVar7 + 0x30 + lVar12) = auVar2;
                          lVar12 = local_3f8;
                          lVar13 = local_3f0;
                        }
                      }
                      uVar14 = (int)uVar16 + 1;
                      uVar16 = (ulonglong)uVar14;
                      lVar7 = local_2c0;
                      uVar18 = local_474;
                    } while ((int)uVar14 < iVar19);
                  }
                  local_474 = uVar18 + 1;
                  uVar6 = (ulonglong)local_474;
                  puVar15 = local_3a0;
                } while ((int)local_474 < (int)lVar7);
              }
            }
          }
          else {
            uVar6 = 0;
            local_2c0 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 5;
            local_46c = 0;
            lVar7 = local_3f8;
            lVar12 = local_3f0;
            if (0 < (int)local_2c0) {
              do {
                lVar13 = *(longlong *)(param_2 + 8);
                uVar16 = 0;
                lVar11 = uVar6 * 0x20;
                local_288[0] = (*(longlong *)(lVar13 + 0x10 + lVar11) -
                                *(longlong *)(lVar13 + 8 + lVar11) >> 3) * -0x3333333333333333;
                local_3a8 = lVar11;
                local_398 = lVar13;
                if (0 < (int)local_288[0]) {
                  do {
                    lVar22 = *(longlong *)(lVar13 + 8 + lVar11);
                    if (*(int *)(lVar22 + uVar16 * 0x28) == *(int *)(lVar12 + 0x60 + lVar7)) {
                      lVar7 = *param_5;
                      pfVar17 = (float *)((ulonglong)puVar15[2] * 0x40 + lVar7);
                      fVar40 = *pfVar17;
                      fVar39 = pfVar17[1];
                      fVar35 = pfVar17[2];
                      fVar36 = pfVar17[3] * pfVar17[3] + fVar35 * fVar35 +
                               fVar39 * fVar39 + fVar40 * fVar40;
                      if (fVar36 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      local_410 = pfVar17[0xd];
                      local_40c = pfVar17[0xe];
                      fVar37 = DAT_1404927d4 / SQRT(fVar36);
                      pfVar20 = (float *)((ulonglong)*puVar21 * 0x40 + *param_6);
                      lVar12 = (longlong)**(int **)(lVar22 + 0x10 + uVar16 * 0x28) * 0x40;
                      fVar36 = pfVar20[0xc];
                      fVar45 = pfVar20[0xd];
                      fVar34 = local_40c - *(float *)(lVar7 + 0x38 + lVar12);
                      local_418 = fVar37 * fVar40;
                      fVar39 = fVar37 * fVar39;
                      fVar40 = pfVar20[0xe];
                      fVar23 = local_410 - *(float *)(lVar7 + 0x34 + lVar12);
                      fVar37 = fVar37 * fVar35;
                      local_414 = pfVar17[0xc];
                      fVar35 = local_414 - *(float *)(lVar7 + 0x30 + lVar12);
                      fVar35 = fVar35 * fVar35 + fVar23 * fVar23 + fVar34 * fVar34;
                      if (fVar35 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar35 = SQRT(fVar35);
                      fVar23 = *(float *)(lVar22 + 8 + uVar16 * 0x28);
                      local_400 = *(float *)(*param_4 + (ulonglong)puVar15[1] * 4);
                      if ((fVar23 <= fVar35) ||
                         (fVar34 = (fVar45 - local_410) * fVar39 + (fVar36 - local_414) * local_418
                                   + (fVar40 - local_40c) * fVar37, fVar34 < 0.0)) {
                        FUN_14041c530((ulonglong)puVar15[1],*pfVar20);
                    /* WARNING: Subroutine does not return */
                        FUN_14041aa90();
                      }
                      fVar23 = fVar23 - fVar35;
                      if (fVar34 < fVar23) {
                        fVar23 = fVar34;
                      }
                      local_448 = *(undefined8 *)(pfVar17 + 4);
                      uStack_440 = *(undefined8 *)(pfVar17 + 6);
                      local_458 = (float)*(undefined8 *)pfVar17;
                      fStack_454 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                      fStack_450 = (float)*(undefined8 *)(pfVar17 + 2);
                      fStack_44c = (float)((ulonglong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                      local_438 = *(undefined8 *)(pfVar17 + 8);
                      uStack_430 = *(undefined8 *)(pfVar17 + 10);
                      fVar24 = local_418 * fVar23 + local_414;
                      fVar25 = fVar39 * fVar23 + local_410;
                      local_428 = CONCAT44(fVar25,fVar24);
                      fVar35 = fVar37 * fVar23 + local_40c;
                      uStack_420 = CONCAT44(0x3f800000,fVar35);
                      FUN_1401e24a0(pfVar20,local_378,&local_37c,&local_380);
                      FUN_1401e24a0(&local_458,local_3b0,&local_3b4,&local_3b8);
                      fVar38 = pfVar20[3] * pfVar20[3] + pfVar20[2] * pfVar20[2] +
                               pfVar20[1] * pfVar20[1] + *pfVar20 * *pfVar20;
                      if (fVar38 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar42 = pfVar20[7] * pfVar20[7] + pfVar20[6] * pfVar20[6] +
                               pfVar20[5] * pfVar20[5] + pfVar20[4] * pfVar20[4];
                      if (fVar42 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      _local_348 = ZEXT416((uint)SQRT(fVar42));
                      fVar42 = pfVar20[0xb] * pfVar20[0xb] + pfVar20[10] * pfVar20[10] +
                               pfVar20[9] * pfVar20[9] + pfVar20[8] * pfVar20[8];
                      if (fVar42 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      _local_328 = ZEXT416((uint)SQRT(fVar42));
                      fVar42 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                               fStack_454 * fStack_454 + local_458 * local_458;
                      if (fVar42 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar42 = SQRT(fVar42);
                      fVar43 = uStack_440._4_4_ * uStack_440._4_4_ +
                               (float)uStack_440 * (float)uStack_440 +
                               local_448._4_4_ * local_448._4_4_ +
                               (float)local_448 * (float)local_448;
                      if (fVar43 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar43 = SQRT(fVar43);
                      fVar41 = uStack_430._4_4_ * uStack_430._4_4_ +
                               (float)uStack_430 * (float)uStack_430 +
                               local_438._4_4_ * local_438._4_4_ +
                               (float)local_438 * (float)local_438;
                      if (fVar41 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar26 = (float)FUN_14041d190();
                      local_380 = fVar26;
                      fVar27 = (float)FUN_14041d190();
                      local_37c = fVar27;
                      fVar28 = (float)FUN_14041d190();
                      local_378[0] = fVar28;
                      fVar29 = (float)FUN_14041d190();
                      local_3b8 = fVar29;
                      fVar30 = (float)FUN_14041d190();
                      local_3b4 = fVar30;
                      local_3b0[0] = (float)FUN_14041d190();
                      if (fVar4 < fVar29 - fVar26) {
                        fVar29 = fVar29 - fVar4;
                        local_3b8 = fVar29;
                      }
                      if (fVar4 < fVar30 - fVar27) {
                        fVar30 = fVar30 - fVar4;
                        local_3b4 = fVar30;
                      }
                      if (fVar4 < local_3b0[0] - fVar28) {
                        local_3b0[0] = local_3b0[0] - fVar4;
                      }
                      fVar44 = DAT_1404927d4 - local_400;
                      local_308 = fVar29 * local_400 + fVar26 * fVar44;
                      local_304 = fVar27 * fVar44 + fVar30 * local_400;
                      local_300 = fVar28 * fVar44 + local_3b0[0] * local_400;
                      FUN_1402150f0(&local_268,&local_300,&local_304,&local_308);
                      fVar33 = local_400;
                      local_458 = (float)_DAT_140492b30;
                      fStack_454 = (float)((ulonglong)_DAT_140492b30 >> 0x20);
                      fStack_450 = (float)_UNK_140492b38;
                      fStack_44c = (float)((ulonglong)_UNK_140492b38 >> 0x20);
                      local_448 = _DAT_140492b60;
                      uStack_440 = _UNK_140492b68;
                      local_438 = _DAT_140492c10;
                      uStack_430 = _UNK_140492c18;
                      local_428 = CONCAT44(fVar25 * local_400 + fVar45 * fVar44,
                                           fVar24 * local_400 + fVar36 * fVar44);
                      uStack_420 = CONCAT44(0x3f800000,fVar35 * local_400 + fVar40 * fVar44);
                      lVar7 = FUN_14005ed80(local_1b8,&local_458,&local_268);
                      pfVar20 = (float *)func_0x00014005f680(lVar7,0);
                      fVar40 = *pfVar20;
                      fVar36 = pfVar20[1];
                      fVar45 = pfVar20[2];
                      fVar24 = pfVar20[3];
                      pfVar20 = (float *)func_0x00014005f680(lVar7,1);
                      fVar25 = *pfVar20;
                      fVar26 = pfVar20[1];
                      fVar27 = pfVar20[2];
                      fVar28 = pfVar20[3];
                      fVar31 = fVar33 * fVar42 + SQRT(fVar38) * fVar44;
                      fVar32 = (float)local_348._0_4_ * fVar44 + fVar43 * fVar33;
                      fVar44 = (float)local_328._0_4_ * fVar44 + SQRT(fVar41) * fVar33;
                      pfVar20 = (float *)func_0x00014005f680(lVar7,2);
                      auVar2 = *(undefined1 (*) [16])(lVar7 + 0x30);
                      fVar38 = *pfVar20;
                      fVar41 = pfVar20[1];
                      fVar29 = pfVar20[2];
                      fVar30 = pfVar20[3];
                      lVar12 = (ulonglong)*local_408 * 0x40;
                      lVar7 = *param_6;
                      pfVar20 = (float *)(lVar7 + lVar12);
                      *pfVar20 = fVar40 * fVar31;
                      pfVar20[1] = fVar36 * fVar31;
                      pfVar20[2] = fVar45 * fVar31;
                      pfVar20[3] = fVar24 * fVar31;
                      pfVar20 = (float *)(lVar7 + 0x10 + lVar12);
                      *pfVar20 = fVar25 * fVar32;
                      pfVar20[1] = fVar26 * fVar32;
                      pfVar20[2] = fVar27 * fVar32;
                      pfVar20[3] = fVar28 * fVar32;
                      pfVar20 = (float *)(lVar7 + 0x20 + lVar12);
                      *pfVar20 = fVar38 * fVar44;
                      pfVar20[1] = fVar41 * fVar44;
                      pfVar20[2] = fVar29 * fVar44;
                      pfVar20[3] = fVar30 * fVar44;
                      *(undefined1 (*) [16])(lVar7 + 0x30 + lVar12) = auVar2;
                      puVar21 = local_408;
                      lVar7 = local_3f8;
                      lVar12 = local_3f0;
                      lVar11 = local_3a8;
                      lVar13 = local_398;
                      for (uVar18 = (int)(*(longlong *)(lVar22 + 0x18 + uVar16 * 0x28) -
                                          *(longlong *)(lVar22 + 0x10 + uVar16 * 0x28) >> 2) - 2;
                          local_408 = puVar21, local_3f8 = lVar7, local_3f0 = lVar12,
                          local_3a8 = lVar11, local_398 = lVar13, 0 < (int)uVar18;
                          uVar18 = uVar18 - 1) {
                        lVar3 = *(longlong *)(lVar22 + 0x10 + uVar16 * 0x28);
                        fVar40 = *(float *)(*param_1 +
                                           (longlong)*(int *)(lVar3 + 4 + (ulonglong)uVar18 * 4) * 4
                                           );
                        fVar34 = fVar34 - fVar40;
                        if (fVar34 < 0.0) break;
                        fVar45 = fVar34 - (float)puVar15[3];
                        fVar36 = fVar45;
                        if (fVar45 <= 0.0) {
                          fVar36 = 0.0;
                        }
                        fVar24 = DAT_1404927d4;
                        if (fVar36 / (float)puVar15[4] < DAT_1404927d4) {
                          if (fVar45 <= 0.0) {
                            fVar45 = 0.0;
                          }
                          fVar24 = fVar45 / (float)puVar15[4];
                          if (fVar24 <= 0.0) break;
                        }
                        fVar23 = fVar23 - fVar40;
                        if (fVar23 < 0.0) break;
                        iVar19 = *(int *)(lVar3 + (ulonglong)uVar18 * 4);
                        pfVar20 = (float *)func_0x00014005f680(pfVar17,3);
                        local_448 = *(undefined8 *)(pfVar17 + 4);
                        uStack_440 = *(undefined8 *)(pfVar17 + 6);
                        lVar7 = (longlong)iVar19 * 0x40;
                        fVar25 = local_418 * fVar23 + *pfVar20;
                        local_458 = (float)*(undefined8 *)pfVar17;
                        fStack_454 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                        fStack_450 = (float)*(undefined8 *)(pfVar17 + 2);
                        fStack_44c = (float)((ulonglong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                        local_438 = *(undefined8 *)(pfVar17 + 8);
                        uStack_430 = *(undefined8 *)(pfVar17 + 10);
                        fVar38 = fVar39 * fVar23 + pfVar20[1];
                        fVar26 = fVar37 * fVar23 + pfVar20[2];
                        pfVar20 = (float *)(*param_5 + lVar7);
                        local_428 = CONCAT44(fVar38,fVar25);
                        uStack_420 = CONCAT44(0x3f800000,fVar26);
                        fVar24 = fVar24 * fVar33;
                        fVar40 = pfVar20[0xc];
                        fVar36 = pfVar20[0xd];
                        fVar45 = pfVar20[0xe];
                        FUN_1401e24a0(pfVar20,local_368,&local_36c,&local_370,fVar35,fVar40,fVar43,
                                      fVar36,fVar42,fVar37,fVar45);
                        FUN_1401e24a0(&local_458,local_3d0,&local_3d4,&local_3d8);
                        fVar41 = pfVar20[3] * pfVar20[3] + pfVar20[2] * pfVar20[2] +
                                 pfVar20[1] * pfVar20[1] + *pfVar20 * *pfVar20;
                        if (fVar41 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        fVar43 = pfVar20[7] * pfVar20[7] + pfVar20[6] * pfVar20[6] +
                                 pfVar20[5] * pfVar20[5] + pfVar20[4] * pfVar20[4];
                        if (fVar43 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        fVar43 = SQRT(fVar43);
                        fVar42 = pfVar20[0xb] * pfVar20[0xb] + pfVar20[10] * pfVar20[10] +
                                 pfVar20[9] * pfVar20[9] + pfVar20[8] * pfVar20[8];
                        if (fVar42 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        fVar42 = SQRT(fVar42);
                        fVar35 = fStack_44c * fStack_44c + fStack_450 * fStack_450 +
                                 fStack_454 * fStack_454 + local_458 * local_458;
                        if (fVar35 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        _local_328 = ZEXT416((uint)SQRT(fVar35));
                        fVar35 = uStack_440._4_4_ * uStack_440._4_4_ +
                                 (float)uStack_440 * (float)uStack_440 +
                                 local_448._4_4_ * local_448._4_4_ +
                                 (float)local_448 * (float)local_448;
                        if (fVar35 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        _local_348 = ZEXT416((uint)SQRT(fVar35));
                        fVar27 = uStack_430._4_4_ * uStack_430._4_4_ +
                                 (float)uStack_430 * (float)uStack_430 +
                                 local_438._4_4_ * local_438._4_4_ +
                                 (float)local_438 * (float)local_438;
                        if (fVar27 < 0.0) {
                    /* WARNING: Subroutine does not return */
                          FUN_14041ade0();
                        }
                        fVar35 = (float)FUN_14041d190();
                        local_370 = fVar35;
                        fVar28 = (float)FUN_14041d190();
                        local_36c = fVar28;
                        fVar29 = (float)FUN_14041d190();
                        local_368[0] = fVar29;
                        fVar30 = (float)FUN_14041d190();
                        local_3d8 = fVar30;
                        fVar33 = (float)FUN_14041d190();
                        local_3d4 = fVar33;
                        local_3d0[0] = (float)FUN_14041d190();
                        if (fVar4 < fVar30 - fVar35) {
                          fVar30 = fVar30 - fVar4;
                          local_3d8 = fVar30;
                        }
                        if (fVar4 < fVar33 - fVar28) {
                          fVar33 = fVar33 - fVar4;
                          local_3d4 = fVar33;
                        }
                        if (fVar4 < local_3d0[0] - fVar29) {
                          local_3d0[0] = local_3d0[0] - fVar4;
                        }
                        fVar32 = DAT_1404927d4 - fVar24;
                        local_2fc = fVar35 * fVar32 + fVar30 * fVar24;
                        local_2f8 = fVar28 * fVar32 + fVar33 * fVar24;
                        local_2f4[0] = fVar29 * fVar32 + local_3d0[0] * fVar24;
                        FUN_1402150f0(&local_268,local_2f4,&local_2f8,&local_2fc);
                        local_29c = 0x3f800000;
                        local_2a8 = fVar40 * fVar32 + fVar25 * fVar24;
                        local_2a4 = fVar36 * fVar32 + fVar38 * fVar24;
                        local_2a0 = fVar45 * fVar32 + fVar26 * fVar24;
                        local_458 = (float)_DAT_140492b30;
                        fStack_454 = (float)((ulonglong)_DAT_140492b30 >> 0x20);
                        fStack_450 = (float)_UNK_140492b38;
                        fStack_44c = (float)((ulonglong)_UNK_140492b38 >> 0x20);
                        local_448 = _DAT_140492b60;
                        uStack_440 = _UNK_140492b68;
                        local_438 = _DAT_140492c10;
                        uStack_430 = _UNK_140492c18;
                        local_428 = _DAT_140492eb0;
                        uStack_420 = _UNK_140492eb8;
                        func_0x000140215050(local_1f8,&local_458,3,&local_2a8);
                        lVar12 = FUN_14005ed80(local_1b8,local_1f8,&local_268);
                        pfVar20 = (float *)func_0x00014005f680(lVar12,0);
                        fVar40 = *pfVar20;
                        fVar36 = pfVar20[1];
                        fVar45 = pfVar20[2];
                        fVar25 = pfVar20[3];
                        pfVar20 = (float *)func_0x00014005f680(lVar12,1);
                        fVar38 = *pfVar20;
                        fVar26 = pfVar20[1];
                        fVar28 = pfVar20[2];
                        fVar29 = pfVar20[3];
                        fVar33 = (float)local_328._0_4_ * fVar24 + SQRT(fVar41) * fVar32;
                        fVar31 = (float)local_348._0_4_ * fVar24 + fVar43 * fVar32;
                        fVar32 = SQRT(fVar27) * fVar24 + fVar42 * fVar32;
                        pfVar20 = (float *)func_0x00014005f680(lVar12,2);
                        auVar2 = *(undefined1 (*) [16])(lVar12 + 0x30);
                        fVar24 = *pfVar20;
                        fVar41 = pfVar20[1];
                        fVar27 = pfVar20[2];
                        fVar30 = pfVar20[3];
                        lVar12 = *param_5;
                        pfVar20 = (float *)(lVar12 + lVar7);
                        *pfVar20 = fVar40 * fVar33;
                        pfVar20[1] = fVar36 * fVar33;
                        pfVar20[2] = fVar45 * fVar33;
                        pfVar20[3] = fVar25 * fVar33;
                        pfVar20 = (float *)(lVar12 + 0x10 + lVar7);
                        *pfVar20 = fVar38 * fVar31;
                        pfVar20[1] = fVar26 * fVar31;
                        pfVar20[2] = fVar28 * fVar31;
                        pfVar20[3] = fVar29 * fVar31;
                        pfVar20 = (float *)(lVar12 + 0x20 + lVar7);
                        *pfVar20 = fVar24 * fVar32;
                        pfVar20[1] = fVar41 * fVar32;
                        pfVar20[2] = fVar27 * fVar32;
                        pfVar20[3] = fVar30 * fVar32;
                        *(undefined1 (*) [16])(lVar12 + 0x30 + lVar7) = auVar2;
                        puVar15 = local_3a0;
                        puVar21 = local_408;
                        fVar33 = local_400;
                        lVar7 = local_3f8;
                        lVar12 = local_3f0;
                        lVar11 = local_3a8;
                        lVar13 = local_398;
                      }
                    }
                    uVar18 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar18;
                  } while ((int)uVar18 < (int)local_288[0]);
                }
                local_46c = local_46c + 1;
                uVar6 = (ulonglong)local_46c;
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

