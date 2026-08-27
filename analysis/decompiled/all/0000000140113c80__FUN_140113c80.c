// Function: FUN_140113c80
// Addr: 140113c80
// Size: 5458 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140113c80(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  short *psVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  size_t sVar12;
  ulonglong uVar13;
  longlong ******pppppplVar14;
  longlong *******ppppppplVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  short *psVar19;
  short *psVar20;
  undefined8 *******pppppppuVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *******ppppppplVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *******ppppppplVar28;
  undefined8 *******pppppppuVar29;
  ulonglong uVar30;
  undefined8 ******ppppppuVar31;
  undefined8 *******pppppppuVar32;
  undefined8 ******ppppppuVar33;
  uint uVar34;
  short *psVar35;
  longlong *plVar36;
  undefined1 *puVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined1 local_res8 [32];
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [24];
  longlong local_378;
  undefined8 local_370;
  longlong *******local_368;
  longlong ******pppppplStack_360;
  ulonglong local_358;
  ulonglong uStack_350;
  undefined8 *******local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  ulonglong uStack_330;
  undefined8 *******local_328;
  undefined8 ******ppppppuStack_320;
  undefined8 ******local_318;
  undefined8 ******ppppppuStack_310;
  longlong local_308 [3];
  ulonglong local_2f0;
  undefined8 *******local_2e8 [3];
  ulonglong local_2d0;
  undefined8 *******local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  ulonglong uStack_2b0;
  longlong *******local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_298;
  ulonglong local_290;
  undefined8 *******local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong uStack_270;
  undefined8 *******local_268 [3];
  ulonglong local_250;
  longlong local_248 [3];
  ulonglong local_230;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  ulonglong local_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8 [7];
  longlong *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_138 [40];
  undefined8 *******local_110 [3];
  ulonglong local_f8;
  undefined8 *******local_f0 [3];
  ulonglong local_d8;
  undefined8 *******local_d0 [2];
  ulonglong local_c0;
  ulonglong local_b8;
  undefined **local_b0;
  longlong local_a8;
  undefined ***local_78;
  
  puVar37 = auStack_398;
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))();
  plVar16 = *(longlong **)(param_1 + 0x1e0);
  if (plVar16 != *(longlong **)(param_1 + 600)) {
    *(longlong *)plVar16[1] = *plVar16;
    *(longlong *)(*plVar16 + 8) = plVar16[1];
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + -1;
    FUN_140016770(plVar16 + 2);
    thunk_FUN_14028af80(plVar16,0x30);
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 600);
  }
  local_298 = 0;
  local_2a8 = (longlong *******)0x0;
  uStack_2a0 = 0;
  local_290 = 0;
  sVar12 = strlen(param_2);
  FUN_140017480(&local_2a8,param_2,sVar12);
  uVar8 = local_290;
  uVar30 = local_298;
  ppppppplVar25 = local_2a8;
  local_358 = 0;
  ppppppplVar28 = (longlong *******)&local_2a8;
  if (0xf < local_290) {
    ppppppplVar28 = local_2a8;
  }
  uStack_350 = 0;
  local_368 = (longlong *******)0x0;
  pppppplStack_360 = (longlong ******)0x0;
  if (0x7fffffffffffffff < local_298) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (local_298 < 0x10) {
    local_358 = local_298;
    uStack_350 = 0xf;
    local_368 = (longlong *******)*ppppppplVar28;
    pppppplStack_360 = ppppppplVar28[1];
LAB_140113e24:
    FUN_1400187b0(&local_368);
    plVar16 = (longlong *)FUN_140005880(local_248,&local_368);
    local_2c8 = (undefined8 *******)*plVar16;
    lStack_2c0 = plVar16[1];
    local_2b8 = plVar16[2];
    uStack_2b0 = plVar16[3];
    plVar16[2] = 0;
    plVar16[3] = 7;
    *(undefined2 *)plVar16 = 0;
    if (7 < local_230) {
      uVar30 = local_230 * 2 + 2;
      lVar23 = local_248[0];
      if (0xfff < uVar30) {
        lVar23 = *(longlong *)(local_248[0] + -8);
        if (0x1f < (local_248[0] - lVar23) - 8U) goto LAB_1401151a7;
        uVar30 = local_230 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar23,uVar30);
    }
    if (0xf < uStack_350) {
      uVar30 = uStack_350 + 1;
      ppppppplVar28 = local_368;
      if (0xfff < uVar30) {
        ppppppplVar28 = (longlong *******)local_368[-1];
        if (0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppppplVar28)))
        goto LAB_1401151a7;
        uVar30 = uStack_350 + 0x28;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar30);
    }
    local_358 = 0;
    uStack_350 = 0xf;
    local_368 = (longlong *******)((ulonglong)local_368 & 0xffffffffffffff00);
    if (0xf < uVar8) {
      uVar30 = uVar8 + 1;
      ppppppplVar28 = ppppppplVar25;
      if (0xfff < uVar30) {
        ppppppplVar28 = (longlong *******)ppppppplVar25[-1];
        if (0x1f < (ulonglong)((longlong)ppppppplVar25 + (-8 - (longlong)ppppppplVar28)))
        goto LAB_1401151a7;
        uVar30 = uVar8 + 0x28;
      }
      thunk_FUN_14028af80(ppppppplVar28,uVar30);
    }
    lVar23 = param_1 + 0x250;
    uVar17 = FUN_140053f80(&local_2c8,local_308);
    FUN_140018ce0(uVar17,&local_2a8);
    FUN_140016770(local_308);
    uVar8 = local_290;
    uVar30 = local_298;
    ppppppplVar25 = local_2a8;
    local_318 = (undefined8 ******)0x0;
    ppppppuStack_310 = (undefined8 ******)0xf;
    ppppppuStack_320 = (undefined8 ******)0x0;
    local_328 = (undefined8 *******)0x0;
    ppppppplVar28 = (longlong *******)&local_2a8;
    if (0xf < local_290) {
      ppppppplVar28 = local_2a8;
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_158 = 0x67452301;
    local_154 = 0xefcdab89;
    local_150 = 0x98badcfe;
    local_14c = 0x10325476;
    local_148 = 0xc3d2e1f0;
    uVar38 = 0;
    if ((local_298 == 4) && (iVar11 = memcmp(ppppppplVar28,&DAT_140478088,4), iVar11 == 0)) {
      FUN_140276700(lVar23,param_2);
      FUN_140060990(local_268,param_2);
      FUN_14003fe80(local_268);
      local_338 = 0;
      pppppppuVar21 = local_268;
      if (7 < local_250) {
        pppppppuVar21 = local_268[0];
      }
      uStack_330 = 0;
      local_348 = (undefined8 *******)0x0;
      uStack_340 = 0;
      uVar17 = FUN_1402d6aa0(pppppppuVar21);
      FUN_140016170(&local_348,pppppppuVar21,uVar17);
      puVar18 = (undefined8 *)FUN_1402764d0(lVar23,local_res8,&local_348);
      *(undefined8 *)(param_1 + 0x1e0) = *puVar18;
      if (7 < uStack_330) {
        uVar30 = uStack_330 * 2 + 2;
        pppppppuVar21 = local_348;
        if (0xfff < uVar30) {
          pppppppuVar21 = (undefined8 *******)local_348[-1];
          if (0x1f < (ulonglong)((longlong)local_348 + (-8 - (longlong)pppppppuVar21)))
          goto LAB_1401151a7;
          uVar30 = uStack_330 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppuVar21,uVar30);
      }
      pppppppuVar21 = &local_2c8;
      if (7 < uStack_2b0) {
        pppppppuVar21 = local_2c8;
      }
      psVar20 = (short *)((longlong)pppppppuVar21 + local_2b8 * 2);
      for (psVar19 = (short *)FUN_140015e90(pppppppuVar21,psVar20); psVar35 = psVar20,
          psVar19 != psVar20; psVar19 = psVar19 + 1) {
        if ((*psVar19 != 0x5c) && (*psVar19 != 0x2f)) goto LAB_1401140f0;
      }
LAB_14011410c:
      psVar20 = (short *)thunk_FUN_14028d070(psVar35,psVar20,0x3a);
      if ((psVar35 != psVar20) && (psVar19 = psVar20 + -1, psVar35 != psVar19)) {
        if (*psVar19 == 0x2e) {
          if ((psVar35 != psVar20 + -2) || (psVar20[-2] != 0x2e)) {
LAB_140114147:
            psVar20 = psVar19;
          }
        }
        else {
          for (psVar19 = psVar20 + -2; psVar35 != psVar19; psVar19 = psVar19 + -1) {
            if (*psVar19 == 0x2e) goto LAB_140114147;
          }
        }
      }
      local_278 = 0;
      uStack_270 = 0;
      local_288 = (undefined8 *******)0x0;
      uStack_280 = 0;
      FUN_140016170(&local_288,psVar35,(longlong)psVar20 - (longlong)psVar35 >> 1);
      local_348 = local_288;
      uStack_340 = uStack_280;
      local_338 = local_278;
      uStack_330 = uStack_270;
      uVar17 = FUN_140018ce0(&local_348,local_308);
      plVar16 = (longlong *)FUN_1400532a0(uVar17,".json",5);
      pppppppuVar21 = (undefined8 *******)*plVar16;
      ppppppuVar33 = (undefined8 ******)plVar16[1];
      ppppppuVar5 = (undefined8 ******)plVar16[2];
      ppppppuVar6 = (undefined8 ******)plVar16[3];
      plVar16[2] = 0;
      plVar16[3] = 0xf;
      *(undefined1 *)plVar16 = 0;
      if ((undefined8 ******)0xf < ppppppuStack_310) {
        ppppppuVar31 = (undefined8 ******)((longlong)ppppppuStack_310 + 1);
        pppppppuVar29 = local_328;
        if ((undefined8 ******)0xfff < ppppppuVar31) {
          pppppppuVar29 = (undefined8 *******)local_328[-1];
          if (0x1f < (ulonglong)((longlong)local_328 + (-8 - (longlong)pppppppuVar29)))
          goto LAB_1401151a7;
          ppppppuVar31 = ppppppuStack_310 + 5;
        }
        thunk_FUN_14028af80(pppppppuVar29,ppppppuVar31);
      }
      local_328 = pppppppuVar21;
      ppppppuStack_320 = ppppppuVar33;
      local_318 = ppppppuVar5;
      ppppppuStack_310 = ppppppuVar6;
      FUN_140017240(local_308);
      if (7 < uStack_330) {
        FUN_140016a90(&local_348,local_348);
      }
      FUN_140018ce0(&local_2c8,&local_368);
      ppppppplVar25 = (longlong *******)&local_368;
      if (0xf < uStack_350) {
        ppppppplVar25 = local_368;
      }
      FUN_1400810f0(&local_1a8,ppppppplVar25,local_358);
      FUN_140017240(&local_368);
      FUN_140016770(local_268);
    }
    else {
      ppppppplVar28 = (longlong *******)&local_2a8;
      if (0xf < uVar8) {
        ppppppplVar28 = ppppppplVar25;
      }
      if ((uVar30 == 4) && (iVar11 = memcmp(ppppppplVar28,&DAT_140487000,4), iVar11 == 0)) {
        FUN_140276be0(lVar23);
        FUN_140016600(local_2e8,&local_2c8);
        uVar17 = FUN_14003fc80(local_2e8,local_308);
        FUN_140018ce0(uVar17,local_248);
        FUN_140016770(local_308);
        FUN_140016770(local_2e8);
        uVar17 = FUN_140005ee0(local_308);
        uVar17 = FUN_140005d20(uVar17,"assets/scenes/gifs");
        FUN_140016600(local_f0,uVar17);
        FUN_140016770(local_308);
        uVar17 = FUN_140005ee0(local_308);
        uVar17 = FUN_140005d20(uVar17,"projects/temp/gifs");
        uVar17 = FUN_140018c60(uVar17,local_248);
        FUN_140016600(&local_288,uVar17);
        FUN_140016770(local_308);
        local_368 = (longlong *******)((ulonglong)local_368 & 0xffffffff00000000);
        pppppplStack_360 = (longlong ******)&PTR_PTR_1404df530;
        FUN_140016600(&local_348,&local_288);
        FUN_140016600(local_2e8,local_f0);
        FUN_140051a30(local_2e8,&local_348,0x12,&local_368);
        FUN_140016770(local_2e8);
        FUN_140016770(&local_348);
        if ((int)local_368 != 0) {
          (*(code *)(*pppppplStack_360)[2])(pppppplStack_360,&local_348);
          pppppppuVar21 = &local_348;
          if (0xf < uStack_330) {
            pppppppuVar21 = local_348;
          }
          pppppppuVar29 = &local_288;
          if (7 < uStack_270) {
            pppppppuVar29 = local_288;
          }
          pppppppuVar32 = local_f0;
          if (7 < local_d8) {
            pppppppuVar32 = local_f0[0];
          }
          FUN_140098760("Failed copying gif template from %S to %S: %s.\n",pppppppuVar32,
                        pppppppuVar29,pppppppuVar21);
          FUN_140017240(&local_348);
        }
        FUN_140016600(local_110,&local_2c8);
        uVar17 = FUN_140005ee0(local_308);
        uVar17 = FUN_140005d20(uVar17,"projects/temp/gifs");
        uVar17 = FUN_140018c60(uVar17,local_248);
        uVar17 = FUN_140005d20(uVar17,"materials/background.gif");
        FUN_140016600(local_268,uVar17);
        FUN_140016770(local_308);
        FUN_140016600(&local_348,local_268);
        FUN_140016600(local_2e8,local_110);
        FUN_140051a30(local_2e8,&local_348,2,&local_368);
        FUN_140016770(local_2e8);
        FUN_140016770(&local_348);
        if ((int)local_368 != 0) {
          (*(code *)(*pppppplStack_360)[2])(pppppplStack_360,&local_348);
          pppppppuVar21 = &local_348;
          if (0xf < uStack_330) {
            pppppppuVar21 = local_348;
          }
          pppppppuVar29 = local_268;
          if (7 < local_250) {
            pppppppuVar29 = local_268[0];
          }
          pppppppuVar32 = local_110;
          if (7 < local_f8) {
            pppppppuVar32 = local_110[0];
          }
          FUN_140098760("Failed copying gif file from %S to %S: %s.\n",pppppppuVar32,pppppppuVar29,
                        pppppppuVar21);
          FUN_140017240(&local_348);
        }
        uVar17 = FUN_140005ee0(local_2e8);
        uVar17 = FUN_140005d20(uVar17,"projects/temp/gifs");
        uVar17 = FUN_140018c60(uVar17,local_248);
        uVar17 = FUN_140005d20(uVar17,"gifscene.json");
        FUN_140016600(local_308,uVar17);
        FUN_140016770(local_2e8);
        pppppppuVar21 = (undefined8 *******)FUN_140018ce0(local_308,local_2e8);
        if (&local_328 != (undefined8 ********)pppppppuVar21) {
          if ((undefined8 ******)0xf < ppppppuStack_310) {
            ppppppuVar33 = (undefined8 ******)((longlong)ppppppuStack_310 + 1);
            pppppppuVar29 = local_328;
            if ((undefined8 ******)0xfff < ppppppuVar33) {
              pppppppuVar29 = (undefined8 *******)local_328[-1];
              if (0x1f < (ulonglong)((longlong)local_328 + (-8 - (longlong)pppppppuVar29)))
              goto LAB_1401151a7;
              ppppppuVar33 = ppppppuStack_310 + 5;
            }
            thunk_FUN_14028af80(pppppppuVar29,ppppppuVar33);
          }
          local_328 = (undefined8 *******)*pppppppuVar21;
          ppppppuStack_320 = pppppppuVar21[1];
          local_318 = pppppppuVar21[2];
          ppppppuStack_310 = pppppppuVar21[3];
          pppppppuVar21[2] = (undefined8 ******)0x0;
          pppppppuVar21[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar21 = 0;
        }
        FUN_140017240(local_2e8);
        FUN_140016600(local_2e8,&local_288);
        local_338 = 0;
        pppppppuVar21 = local_2e8;
        if (7 < local_2d0) {
          pppppppuVar21 = local_2e8[0];
        }
        uStack_330 = 0;
        local_348 = (undefined8 *******)0x0;
        uStack_340 = 0;
        uVar17 = FUN_1402d6aa0(pppppppuVar21);
        FUN_140016170(&local_348,pppppppuVar21,uVar17);
        puVar18 = (undefined8 *)FUN_1402764d0(lVar23,local_res8,&local_348);
        *(undefined8 *)(param_1 + 0x1e0) = *puVar18;
        if (7 < uStack_330) {
          FUN_140016a90(&local_348,local_348);
        }
        FUN_140016770(local_2e8);
        pppppppuVar21 = &local_328;
        if ((undefined8 ******)0xf < ppppppuStack_310) {
          pppppppuVar21 = local_328;
        }
        FUN_1400810f0(&local_1a8,pppppppuVar21,local_318);
        FUN_140016770(local_308);
        FUN_140016770(local_268);
        FUN_140016770(local_110);
        FUN_140016770(&local_288);
        FUN_140016770(local_f0);
        FUN_140017240(local_248);
      }
      else {
        FUN_140276be0(lVar23);
        sVar12 = strlen(param_2);
        FUN_14000f880(&local_328,param_2,sVar12);
        uVar17 = FUN_140005ee0(local_248);
        FUN_140016600(local_308,uVar17);
        plVar16 = (longlong *)FUN_1400164d0(local_308,L"/assets",7);
        local_368 = (longlong *******)*plVar16;
        pppppplStack_360 = (longlong ******)plVar16[1];
        local_358 = plVar16[2];
        uStack_350 = plVar16[3];
        plVar16[2] = 0;
        plVar16[3] = 7;
        *(undefined2 *)plVar16 = 0;
        FUN_140016770(local_308);
        FUN_140016770(local_248);
        FUN_140005970(&local_368,0x2f);
        FUN_140016600(local_d0,&local_2c8);
        ppppppplVar25 = (longlong *******)&local_368;
        if (7 < uStack_350) {
          ppppppplVar25 = local_368;
        }
        pppppppuVar21 = local_d0;
        if (7 < local_b8) {
          pppppppuVar21 = local_d0[0];
        }
        if (local_c0 < local_358) {
LAB_1401147f9:
          lVar24 = -1;
        }
        else {
          lVar24 = 0;
          if (local_358 != 0) {
            lVar24 = (longlong)pppppppuVar21 + local_c0 * 2;
            lVar22 = thunk_FUN_14028e940(pppppppuVar21,lVar24,ppppppplVar25);
            if (lVar22 == lVar24) goto LAB_1401147f9;
            lVar24 = lVar22 - (longlong)pppppppuVar21 >> 1;
          }
        }
        FUN_140016770(local_d0);
        if (lVar24 == -1) {
          puVar18 = (undefined8 *)FUN_14003fe80(&local_2c8);
          if (7 < (ulonglong)puVar18[3]) {
            puVar18 = (undefined8 *)*puVar18;
          }
          local_338 = 0;
          uStack_330 = 0;
          local_348 = (undefined8 *******)0x0;
          uStack_340 = 0;
          uVar17 = FUN_1402d6aa0(puVar18);
          FUN_140016170(&local_348,puVar18,uVar17);
          puVar18 = (undefined8 *)FUN_1402764d0(lVar23,local_res8,&local_348);
          *(undefined8 *)(param_1 + 0x1e0) = *puVar18;
          if (7 < uStack_330) {
            FUN_140016a90(&local_348,local_348);
          }
        }
        pppppppuVar21 = &local_328;
        if ((undefined8 ******)0xf < ppppppuStack_310) {
          pppppppuVar21 = local_328;
        }
        FUN_1400810f0(&local_1a8,pppppppuVar21,local_318);
        if (7 < uStack_350) {
          FUN_140016a90(&local_368,local_368);
        }
      }
    }
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x188) = 0;
    iVar11 = FUN_140290d80(param_1 + 0x3d8);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    iVar11 = *(int *)(param_1 + 0x424);
    if (iVar11 == 0x7fffffff) goto LAB_1401151ae;
    uVar17 = FUN_140086de0(param_1 + 0x38,"wproperties","");
    FUN_140085090(local_138,uVar17);
    FUN_140290ea0(param_1 + 0x3d8);
    if ((*(char *)(param_1 + 9) != '\0') ||
       (fVar40 = DAT_140492704, (*(uint *)(param_1 + 0x1b8) >> 6 & 1) != 0)) {
      fVar40 = 0.0;
    }
    *(float *)(param_1 + 0x174) = fVar40;
    FUN_1401816d0(*(undefined8 *)(param_1 + 0x180),fVar40 * *(float *)(param_1 + 0x178));
    FUN_140085520(*(longlong *)(param_1 + 0x180) + 0x1728,local_138);
    local_218 = 0;
    lStack_220 = 0;
    local_228 = 0;
    lStack_200 = 0;
    local_208 = 0;
    local_210 = 0xf;
    local_1f8 = 0;
    local_1f0 = 0xf;
    local_1b0 = (longlong *)0x0;
    plVar16 = (longlong *)FUN_1400811d0(&local_1a8,local_308);
    if (&local_208 != plVar16) {
      if (0xf < local_1f0) {
        uVar30 = local_1f0 + 1;
        lVar23 = local_208;
        if (0xfff < uVar30) {
          lVar23 = *(longlong *)(local_208 + -8);
          if (0x1f < (local_208 - lVar23) - 8U) goto LAB_1401151a7;
          uVar30 = local_1f0 + 0x28;
        }
        thunk_FUN_14028af80(lVar23,uVar30);
      }
      local_208 = *plVar16;
      lStack_200 = plVar16[1];
      local_1f8 = plVar16[2];
      local_1f0 = plVar16[3];
      plVar16[2] = 0;
      plVar16[3] = 0xf;
      *(undefined1 *)plVar16 = 0;
    }
    if (0xf < local_2f0) {
      uVar30 = local_2f0 + 1;
      lVar23 = local_308[0];
      if (0xfff < uVar30) {
        lVar23 = *(longlong *)(local_308[0] + -8);
        if (0x1f < (local_308[0] - lVar23) - 8U) goto LAB_1401151a7;
        uVar30 = local_2f0 + 0x28;
      }
      thunk_FUN_14028af80(lVar23,uVar30);
    }
    plVar16 = (longlong *)(param_1 + 0xc0);
    if (0xf < *(ulonglong *)(param_1 + 0xd8)) {
      plVar16 = (longlong *)*plVar16;
    }
    uVar30 = *(ulonglong *)(param_1 + 0xd0);
    if (local_1a0 != 0) {
      for (; (uVar30 != 0 && (local_1a0 < 0x40)); local_1a0 = local_1a0 + 1) {
        uVar3 = *(undefined1 *)plVar16;
        plVar16 = (longlong *)((longlong)plVar16 + 1);
        local_198[local_1a0] = uVar3;
        uVar30 = uVar30 - 1;
      }
    }
    if (local_1a0 == 0x40) {
      FUN_1400802f0(&local_1a8,local_198);
      local_1a8 = local_1a8 + 0x40;
      local_1a0 = 0;
    }
    if (uVar30 != 0) {
      for (; 0x3f < uVar30; uVar30 = uVar30 - 0x40) {
        FUN_1400802f0(&local_1a8,plVar16);
        local_1a8 = local_1a8 + 0x40;
        plVar16 = (longlong *)((longlong)plVar16 + 0x40);
      }
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        uVar3 = *(undefined1 *)plVar16;
        plVar16 = (longlong *)((longlong)plVar16 + 1);
        local_198[local_1a0] = uVar3;
        local_1a0 = local_1a0 + 1;
      }
    }
    plVar16 = (longlong *)FUN_1400811d0(&local_1a8,local_308);
    if (&local_228 != plVar16) {
      if (0xf < local_210) {
        uVar30 = local_210 + 1;
        lVar23 = local_228;
        if (0xfff < uVar30) {
          lVar23 = *(longlong *)(local_228 + -8);
          if (0x1f < (local_228 - lVar23) - 8U) goto LAB_1401151a7;
          uVar30 = local_210 + 0x28;
        }
        thunk_FUN_14028af80(lVar23,uVar30);
      }
      local_228 = *plVar16;
      lStack_220 = plVar16[1];
      local_218 = plVar16[2];
      local_210 = plVar16[3];
      plVar16[2] = 0;
      plVar16[3] = 0xf;
      *(undefined1 *)plVar16 = 0;
    }
    if (0xf < local_2f0) {
      uVar30 = local_2f0 + 1;
      lVar23 = local_308[0];
      if (0xfff < uVar30) {
        lVar23 = *(longlong *)(local_308[0] + -8);
        if (0x1f < (local_308[0] - lVar23) - 8U) goto LAB_1401151a7;
        uVar30 = local_2f0 + 0x28;
      }
      thunk_FUN_14028af80(lVar23,uVar30);
    }
    local_b0 = &PTR_LAB_140489738;
    local_78 = &local_b0;
    local_a8 = param_1;
    FUN_140033a00(&local_b0,local_1e8);
    if (local_78 != (undefined ***)0x0) {
      (*(code *)(*local_78)[4])
                (local_78,CONCAT71((int7)((ulonglong)&local_b0 >> 8),local_78 != &local_b0));
    }
    pppppppuVar21 = &local_328;
    if ((undefined8 ******)0xf < ppppppuStack_310) {
      pppppppuVar21 = local_328;
    }
    lVar23 = FUN_140181af0(*(undefined8 *)(param_1 + 0x180),pppppppuVar21,&local_228);
    if (lVar23 != 0) {
      iVar11 = 300;
      if (*(int *)(lVar23 + 0x3b8) < 300) {
        iVar11 = *(int *)(lVar23 + 0x3b8);
      }
      *(int *)(param_1 + 0x188) = iVar11;
      if ((*(uint *)(lVar23 + 0xe0) >> 6 & 1) != 0) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 4;
      }
      cVar9 = FUN_14010d100(param_1);
      if (cVar9 == '\0') {
        uVar26 = *(uint *)(param_1 + 0x1b8) & 0xfffffff7;
      }
      else {
        uVar26 = *(uint *)(param_1 + 0x1b8) | 8;
      }
      *(uint *)(param_1 + 0x1b8) = uVar26;
    }
    lVar23 = FUN_140086de0(local_138,&DAT_1404884a4,&DAT_1404884a8);
    fVar40 = DAT_1404928f8;
    if (*(char *)(lVar23 + 8) == '\a') {
      uVar17 = FUN_140086de0(lVar23,"value","");
      fVar39 = (float)FUN_140086220(uVar17);
      fVar39 = fVar39 / fVar40;
      if (fVar39 <= DAT_140492654) {
        fVar39 = DAT_140492654;
      }
      *(float *)(param_1 + 400) = fVar39;
    }
    lVar23 = FUN_140086de0(local_138,"volume","");
    if ((*(char *)(lVar23 + 8) == '\a') &&
       (lVar24 = FUN_140086de0(lVar23,"value",""), *(byte *)(lVar24 + 8) - 1 < 3)) {
      uVar17 = FUN_140086de0(lVar23,"value","");
      fVar39 = (float)FUN_140086220(uVar17);
      fVar39 = fVar39 / fVar40;
      *(float *)(param_1 + 0x178) = fVar39;
      FUN_1401816d0(*(undefined8 *)(param_1 + 0x180),fVar39 * *(float *)(param_1 + 0x174));
    }
    lVar23 = FUN_140086de0(local_138,"audioprocessing","");
    if ((*(char *)(lVar23 + 8) == '\a') && (cVar9 = FUN_14010d100(param_1), cVar9 != '\0')) {
      lVar23 = FUN_140086de0(lVar23,"value","");
      uVar26 = *(uint *)(param_1 + 0x1b8);
      uVar34 = uVar26 >> 3;
      if (*(char *)(lVar23 + 8) == '\x05') {
        cVar9 = FUN_140086300(lVar23);
        uVar26 = *(uint *)(param_1 + 0x1b8);
        if (cVar9 == '\0') goto LAB_140114e9c;
        bVar10 = 1;
      }
      else {
LAB_140114e9c:
        bVar10 = 0;
      }
      if (((byte)uVar34 & 1) != bVar10) {
        if (bVar10 == 0) {
          lVar23 = *(longlong *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x1b8) = uVar26 & 0xfffffff7;
          if (lVar23 != 0) {
            FUN_1404217a0(*(undefined8 *)(lVar23 + 0x2d0),0,0x300);
            FUN_1404217a0(*(undefined8 *)(lVar23 + 0x2d8),0,0x180);
            FUN_1404217a0(*(undefined8 *)(lVar23 + 0x2e0),0,0xc0);
          }
        }
        else {
          *(uint *)(param_1 + 0x1b8) = uVar26 | 8;
        }
      }
    }
    FUN_140181f30(*(undefined8 *)(param_1 + 0x180),local_138);
    lVar24 = FUN_140086de0(local_138,"cameraparallax","");
    lVar23 = 0;
    if (*(char *)(lVar24 + 8) == '\a') {
      uVar17 = FUN_140086de0(lVar24,"value","");
      cVar9 = FUN_140086300(uVar17);
      if (cVar9 == '\0') {
        lVar23 = 0x200;
      }
      else {
        uVar38 = 0x200;
        lVar23 = 0;
      }
    }
    FUN_140115a90(param_1,lVar23,uVar38);
    lVar23 = *(longlong *)(param_1 + 0x180);
    if ((*(uint *)(*(longlong *)(lVar23 + 0x1720) + 0x118) & 0xc000000) == 0) {
      plVar16 = *(longlong **)(lVar23 + 0x17f0);
      bVar7 = false;
      plVar36 = (longlong *)*plVar16;
      ppppppplVar25 = local_368;
      if (plVar36 != plVar16) {
        do {
          lVar24 = plVar36[2];
          if (((lVar24 != 0) && (*(int *)(lVar24 + 0x44) == 2)) &&
             ((*(byte *)(lVar24 + 0x40) & 0x20) != 0)) {
            if (!bVar7) {
              ppppppplVar25 = *(longlong ********)(lVar23 + 0x1840);
              (*(code *)(*ppppppplVar25)[4])(ppppppplVar25);
              bVar7 = true;
            }
            local_378 = param_1 + 0x4a0;
            if (0xf < *(ulonglong *)(param_1 + 0x4b8)) {
              local_378 = *(longlong *)(param_1 + 0x4a0);
            }
            local_370 = 0;
            (**(code **)(**(longlong **)(lVar23 + 0x1840) + 0x40))
                      (*(longlong **)(lVar23 + 0x1840),*(undefined8 *)(lVar24 + 0x38),
                       *(undefined8 *)(lVar24 + 0x48),5);
          }
          plVar36 = (longlong *)*plVar36;
        } while (plVar36 != plVar16);
        if (bVar7) {
          (*(code *)(*ppppppplVar25)[5])(ppppppplVar25);
        }
      }
    }
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x20))
                (local_1b0,CONCAT71((int7)((ulonglong)local_1e8 >> 8),local_1b0 != local_1e8));
      local_1b0 = (longlong *)0x0;
    }
    FUN_140017240(&local_208);
    FUN_140017240(&local_228);
    FUN_140085440(local_138);
    if ((undefined8 ******)0xf < ppppppuStack_310) {
      ppppppuVar33 = (undefined8 ******)((longlong)ppppppuStack_310 + 1);
      pppppppuVar21 = local_328;
      if ((undefined8 ******)0xfff < ppppppuVar33) {
        pppppppuVar21 = (undefined8 *******)local_328[-1];
        if (0x1f < (ulonglong)((longlong)local_328 + (-8 - (longlong)pppppppuVar21)))
        goto LAB_1401151a7;
        ppppppuVar33 = ppppppuStack_310 + 5;
      }
      thunk_FUN_14028af80(pppppppuVar21,ppppppuVar33);
    }
    local_318 = (undefined8 ******)0x0;
    ppppppuStack_310 = (undefined8 ******)0xf;
    local_328 = (undefined8 *******)((ulonglong)local_328 & 0xffffffffffffff00);
    if (0xf < local_290) {
      uVar30 = local_290 + 1;
      ppppppplVar25 = local_2a8;
      if (0xfff < uVar30) {
        if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)local_2a8[-1])))
        goto LAB_1401151a7;
        uVar30 = local_290 + 0x28;
        ppppppplVar25 = (longlong *******)local_2a8[-1];
      }
      thunk_FUN_14028af80(ppppppplVar25,uVar30);
    }
    if (uStack_2b0 < 8) {
      return;
    }
    uVar30 = uStack_2b0 * 2 + 2;
    pppppppuVar21 = local_2c8;
    if (uVar30 < 0x1000) {
LAB_14011517e:
      thunk_FUN_14028af80(pppppppuVar21,uVar30);
      return;
    }
    pppppppuVar21 = (undefined8 *******)local_2c8[-1];
    if ((ulonglong)((longlong)local_2c8 + (-8 - (longlong)pppppppuVar21)) < 0x20) {
      uVar30 = uStack_2b0 * 2 + 0x29;
      goto LAB_14011517e;
    }
  }
  else {
    uVar13 = local_298 | 0xf;
    if (uVar13 < 0x8000000000000000) {
      if (uVar13 < 0x16) {
        uVar13 = 0x16;
      }
      uVar1 = uVar13 + 1;
      ppppppplVar15 = (longlong *******)0x0;
      if (uVar1 != 0) {
        if (0xfff < uVar1) {
          uVar27 = uVar13 + 0x28;
          if (uVar27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_140113db0;
        }
        ppppppplVar15 = (longlong *******)FUN_14028af20(uVar1);
      }
LAB_140113e06:
      local_358 = uVar30;
      local_368 = ppppppplVar15;
      uStack_350 = uVar13;
      FUN_1404210f0(ppppppplVar15,ppppppplVar28,uVar30 + 1);
      goto LAB_140113e24;
    }
    uVar27 = 0x8000000000000027;
    uVar13 = 0x7fffffffffffffff;
LAB_140113db0:
    pppppplVar14 = (longlong ******)FUN_14028af20(uVar27);
    if (pppppplVar14 != (longlong ******)0x0) {
      ppppppplVar15 = (longlong *******)((longlong)pppppplVar14 + 0x27U & 0xffffffffffffffe0);
      ppppppplVar15[-1] = pppppplVar14;
      goto LAB_140113e06;
    }
  }
LAB_1401151a7:
  pcVar4 = (code *)swi(0x29);
  iVar11 = (*pcVar4)(5);
  puVar37 = auStack_390;
LAB_1401151ae:
  *(int *)(param_1 + 0x424) = iVar11 + -1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar37 + -8) = &UNK_1401151c0;
  FUN_140290d30(6);
LAB_1401140f0:
  psVar2 = psVar35 + -1;
  if (psVar35[-1] == 0x5c) goto LAB_14011410c;
  if ((psVar35[-1] == 0x2f) || (psVar35 = psVar2, psVar19 == psVar2)) goto LAB_14011410c;
  goto LAB_1401140f0;
}

