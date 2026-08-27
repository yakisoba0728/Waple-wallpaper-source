// Function: FUN_14006a490
// Addr: 14006a490
// Size: 7589 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006a490(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 *****param_4)

{
  undefined8 **ppuVar1;
  byte *pbVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 ****ppppuVar14;
  longlong lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined4 *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****_Buf1;
  undefined8 *****pppppuVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined1 *puVar27;
  undefined8 ****ppppuVar28;
  undefined8 *****pppppuVar29;
  byte bVar30;
  undefined8 *****pppppuVar31;
  undefined8 *****unaff_R12;
  uint uVar32;
  undefined8 *****unaff_R13;
  undefined8 *****pppppuVar33;
  undefined8 *****pppppuVar34;
  bool bVar35;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float fVar37;
  float fVar38;
  undefined8 ****local_res8;
  undefined8 local_res18;
  undefined8 ****local_res20;
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [24];
  ulonglong local_468;
  uint local_458 [2];
  undefined8 ****local_450;
  undefined8 uStack_448;
  undefined8 ****local_440;
  ulonglong uStack_438;
  undefined8 ****local_430 [2];
  uint local_420;
  undefined4 uStack_41c;
  undefined8 ****local_418;
  undefined8 ***pppuStack_410;
  undefined8 ****local_408;
  undefined8 ****local_400;
  uint local_3f8;
  undefined4 uStack_3f4;
  undefined8 ****local_3f0;
  undefined1 local_3e8 [32];
  uint local_3c8 [4];
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 ****local_3a8;
  undefined8 ****ppppuStack_3a0;
  undefined8 ****local_378;
  undefined8 uStack_370;
  undefined8 ****local_368;
  ulonglong uStack_360;
  uint local_358;
  undefined4 uStack_354;
  undefined8 ****local_350;
  undefined8 uStack_348;
  undefined8 ****local_340;
  ulonglong uStack_338;
  undefined8 ****local_330;
  undefined8 uStack_328;
  undefined8 ****local_320;
  ulonglong uStack_318;
  undefined8 ****local_310 [2];
  longlong local_300;
  ulonglong local_2f8;
  undefined8 ****local_2e8;
  undefined8 uStack_2e0;
  undefined8 ****local_2d8;
  ulonglong local_2d0;
  undefined8 ****local_2c8;
  undefined8 local_2c0;
  undefined8 ****local_2b8;
  ulonglong local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 ****local_288 [2];
  undefined8 local_278;
  ulonglong local_270;
  undefined8 ****local_268 [2];
  undefined8 local_258;
  ulonglong local_250;
  undefined8 ***local_248;
  ulonglong *local_240;
  ulonglong *local_238;
  undefined1 local_230 [8];
  undefined1 local_228 [24];
  float local_210;
  int local_208;
  byte local_204;
  undefined4 local_200;
  float local_1fc;
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [32];
  longlong local_1b8 [4];
  undefined1 local_198;
  undefined1 local_197;
  undefined8 ***local_138 [5];
  undefined1 local_110 [40];
  undefined1 local_e8 [40];
  undefined1 local_c0 [16];
  undefined1 local_b0 [40];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  
  puVar27 = auStack_488;
  iVar8 = 0;
  local_res8 = (undefined8 ****)(param_1 & 0xffffffff00000000);
  cVar6 = FUN_140019160(param_1,0x24);
  if ((cVar6 == '\0') && (*(char *)(param_2 + 8) == '\a')) {
    FUN_140085520(&DAT_1404e6378,param_2);
    puVar10 = (undefined8 *)FUN_1400170d0(&local_3b8,"profile");
    local_3a8 = (undefined8 ****)*puVar10;
    ppppuStack_3a0 = (undefined8 ****)puVar10[1];
    uVar11 = FUN_140087640(&DAT_1404e6378,&local_3a8);
    FUN_140085090(local_b0,uVar11);
    FUN_1400740d0(&DAT_1404e52e0,local_b0);
    puVar10 = (undefined8 *)FUN_1400170d0(&local_3b8,"layout");
    local_3a8 = (undefined8 ****)*puVar10;
    ppppuStack_3a0 = (undefined8 ****)puVar10[1];
    uVar11 = FUN_140087640(&DAT_1404e6378,&local_3a8);
    cVar6 = FUN_140088880(uVar11);
    if (cVar6 != '\0') {
      puVar10 = (undefined8 *)FUN_1400170d0(local_430,"layout");
      local_3a8 = (undefined8 ****)*puVar10;
      ppppuStack_3a0 = (undefined8 ****)puVar10[1];
      uVar11 = FUN_140087640(&DAT_1404e6378,&local_3a8);
      iVar8 = FUN_140085ee0(uVar11);
    }
    if (iVar8 != DAT_1404e52e0) {
      DAT_1404e52e0 = iVar8;
      FUN_140065580();
    }
    cVar6 = iVar8 == 2;
    for (pppppuVar29 = (undefined8 *****)*DAT_1404e5370; pppppuVar29 != DAT_1404e5370;
        pppppuVar29 = (undefined8 *****)*pppppuVar29) {
      if (((bool)cVar6 == false) &&
         (((*(byte *)((longlong)pppppuVar29 + 0x53) & 2) == 0 ||
          (*(int *)((longlong)pppppuVar29 + 0x54) != 2)))) {
        cVar6 = false;
      }
      else {
        cVar6 = true;
      }
    }
    cVar7 = FUN_1400191d0();
    if (cVar6 != cVar7) {
      if (cVar6 == '\0') {
        DAT_1404e52e4 = DAT_1404e52e4 & 0xffefffff;
        FUN_140062e40();
      }
      else {
        FUN_1400666c0();
        cVar6 = FUN_140062d10();
        if (cVar6 == '\0') {
          DAT_1404e52e4 = DAT_1404e52e4 & 0xffefffff;
        }
        else {
          DAT_1404e52e4 = DAT_1404e52e4 | 0x100000;
        }
      }
    }
    puVar10 = (undefined8 *)FUN_1400170d0(&local_3b8,"selectedwallpapers");
    local_3a8 = (undefined8 ****)*puVar10;
    ppppuStack_3a0 = (undefined8 ****)puVar10[1];
    uVar11 = FUN_140087640(&DAT_1404e6378,&local_3a8);
    uVar36 = FUN_140085090(local_e8,uVar11);
    pppppuVar29 = (undefined8 *****)*DAT_1404e5330;
    if (pppppuVar29 != DAT_1404e5330) {
      do {
        param_4 = (undefined8 *****)FUN_140032520(uVar36,pppppuVar29 + 2);
        lVar12 = FUN_1400110a0(&DAT_1404e5368,local_88,pppppuVar29 + 2);
        pppppuVar31 = *(undefined8 ******)(lVar12 + 8);
        if (((pppppuVar31 == (undefined8 *****)0x0) || (pppppuVar31 == DAT_1404e5370)) ||
           ((*(byte *)((longlong)pppppuVar31 + 0x53) & 1) != 0)) {
          if (pppppuVar29[6] != (undefined8 ****)0x0) {
            uVar11 = FUN_140017110(pppppuVar29 + 2);
            FUN_1400610b0(uVar11);
            FUN_140062ce0(pppppuVar29 + 6);
          }
          puVar23 = local_3c8;
LAB_14006aacf:
          puVar10 = (undefined8 *)FUN_140077120(&DAT_1404e5328,puVar23,pppppuVar29);
          pppppuVar29 = (undefined8 *****)*puVar10;
          uVar36 = extraout_XMM0_Da_03;
        }
        else {
          ppppuVar14 = pppppuVar29[6];
          uVar36 = extraout_XMM0_Da;
          local_res18 = ppppuVar14;
          if (ppppuVar14 != (undefined8 ****)0x0) {
            puVar10 = (undefined8 *)FUN_14003aa40(pppppuVar29 + 2,local_78);
            local_3a8 = (undefined8 ****)*puVar10;
            ppppuStack_3a0 = (undefined8 ****)puVar10[1];
            cVar6 = FUN_140088340(local_e8,&local_3a8);
            if (cVar6 == '\0') {
LAB_14006aa86:
              uVar11 = FUN_140017110(pppppuVar29 + 2);
              FUN_1400610b0(uVar11);
              FUN_140062ce0(&local_res18);
              puVar23 = &local_420;
              goto LAB_14006aacf;
            }
            puVar10 = (undefined8 *)FUN_14003aa40(pppppuVar29 + 2,local_c0);
            local_3a8 = (undefined8 ****)*puVar10;
            ppppuStack_3a0 = (undefined8 ****)puVar10[1];
            uVar11 = FUN_140087640(local_e8,&local_3a8);
            puVar10 = (undefined8 *)FUN_1400170d0(&local_378,"playlist");
            local_3a8 = (undefined8 ****)*puVar10;
            ppppuStack_3a0 = (undefined8 ****)puVar10[1];
            lVar12 = FUN_140087640(uVar11,&local_3a8);
            FUN_140060510(&local_248);
            if (*(char *)(lVar12 + 8) == '\a') {
              FUN_140075a90(&DAT_1404e52e0);
            }
            puVar10 = (undefined8 *)FUN_1400170d0(&local_450,&DAT_140473b68);
            local_3a8 = (undefined8 ****)*puVar10;
            ppppuStack_3a0 = (undefined8 ****)puVar10[1];
            uVar11 = FUN_140087640(uVar11,&local_3a8);
            FUN_140085cc0(uVar11,local_310);
            bVar35 = local_300 != 0;
            unaff_R12 = (undefined8 *****)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),bVar35);
            FUN_140016fc0(local_3e8,ppppuVar14 + 0x1c);
            FUN_140063c80(local_138,ppppuVar14);
            if ((bVar35) && (cVar6 = FUN_14000d0f0(local_310,local_3e8), cVar6 == '\0')) {
              param_4 = (undefined8 *****)local_138;
              plVar13 = (longlong *)FUN_140077660(local_430,local_248,local_240);
              if ((ulonglong *)*plVar13 != local_240) goto LAB_14006a9a3;
              if (local_210 == 1.4013e-45) {
                FUN_140031230(&local_3a8,local_230);
                ppppuVar28 = pppppuVar29[10];
                ppppuVar14 = pppppuVar29[0xb];
                local_res18 = ppppuVar28;
                if (ppppuVar28 != ppppuVar14) {
                  do {
                    ppppuVar14 = ppppuStack_3a0;
                    param_4 = (undefined8 *****)&local_res18;
                    local_res18 = ppppuVar28;
                    FUN_140077750(&local_res20,local_3a8,ppppuStack_3a0);
                    if (local_res20 == ppppuVar14) {
                      puVar10 = (undefined8 *)FUN_14007a7e0(pppppuVar29 + 10,&local_3f0,ppppuVar28);
                      ppppuVar28 = (undefined8 ****)*puVar10;
                    }
                    else {
                      FUN_14007a7e0(&local_3a8,&local_358);
                      ppppuVar28 = local_res18 + 9;
                    }
                    ppppuVar14 = pppppuVar29[0xb];
                    local_res18 = ppppuVar28;
                  } while (ppppuVar28 != ppppuVar14);
                }
                if (pppppuVar29[10] != ppppuVar14) {
                  FUN_14007a870(local_230,pppppuVar29 + 10);
                }
                FUN_140031170(&local_3a8);
              }
              FUN_140067070(pppppuVar29 + 7,&local_248);
              pppppuVar33 = DAT_1404e5330;
              for (pppppuVar31 = (undefined8 *****)*DAT_1404e5330; pppppuVar31 != pppppuVar33;
                  pppppuVar31 = (undefined8 *****)*pppppuVar31) {
                *(undefined4 *)((longlong)pppppuVar31 + 0x7c) = 0;
              }
              ppppuVar14 = (undefined8 ****)FUN_140067a00(&DAT_1404e52e0,pppppuVar29 + 2,1);
              local_res18 = ppppuVar14;
              if (ppppuVar14 != (undefined8 ****)0x0) goto LAB_14006a9a3;
              local_468 = FUN_140084dd0(&local_3a8,7);
              param_4 = (undefined8 *****)0x0;
              ppppuVar14 = (undefined8 ****)
                           FUN_140072a70(extraout_XMM0_Da_00,pppppuVar29 + 2,local_310);
              FUN_140017240(local_138);
              FUN_140017240(local_3e8);
              FUN_140017240(local_310);
              uVar36 = FUN_140019130(&local_248);
            }
            else {
LAB_14006a9a3:
              FUN_140017240(local_138);
              FUN_140017240(local_3e8);
              FUN_140017240(local_310);
              uVar36 = FUN_140019130(&local_248);
              if (!bVar35) goto LAB_14006aa86;
            }
            if (ppppuVar14 != (undefined8 ****)0x0) {
              if (pppppuVar29[7] != pppppuVar29[8]) {
                lVar12 = FUN_140064990(pppppuVar29 + 10);
                lVar15 = FUN_140064990(pppppuVar29 + 7);
                uVar36 = extraout_XMM0_Da_01;
                if (lVar15 == lVar12) {
                  FUN_140016fc0(local_3e8,ppppuVar14 + 0x20);
                  ppppuVar3 = pppppuVar29[0xb];
                  for (ppppuVar28 = pppppuVar29[10]; ppppuVar28 != ppppuVar3;
                      ppppuVar28 = ppppuVar28 + 9) {
                    cVar6 = FUN_14000d0f0(ppppuVar28,local_3e8);
                    if (cVar6 != '\0') {
                      FUN_14007a7e0(pppppuVar29 + 10,&local_3f8,ppppuVar28);
                      break;
                    }
                  }
                  uVar36 = FUN_140017240(local_3e8);
                }
              }
              param_4 = (undefined8 *****)0x0;
              cVar6 = FUN_140076e10(uVar36,pppppuVar29 + 2,&local_3b8);
              uVar36 = extraout_XMM0_Da_02;
              if (cVar6 != '\0') {
                (*(code *)(*ppppuVar14)[8])(ppppuVar14,&local_3b8);
                uVar36 = (*(code *)(*ppppuVar14)[10])(ppppuVar14);
              }
            }
          }
          pppppuVar29 = (undefined8 *****)*pppppuVar29;
        }
      } while (pppppuVar29 != DAT_1404e5330);
    }
    bVar30 = ~(byte)(DAT_1404e52e4 >> 0xc);
    uVar26 = DAT_1404e52e4 >> 0xb;
    local_res18 = (undefined8 ****)
                  (CONCAT44(local_res18._4_4_,CONCAT31((uint3)(DAT_1404e52e4 >> 0x14),bVar30)) &
                  0xffffffffffffff01);
    if ((((bVar30 & 1) == 0) || (cVar6 = FUN_140019160(uVar36,0x4000), cVar6 == '\0')) ||
       (iVar8 = FUN_1402c10d0(PTR_s_wallpaperconfig_1404df5a0,"wallpaperconfigscreensaver"),
       iVar8 != 0)) {
      if ((~(byte)uVar26 & 1) != 0) {
        uVar11 = FUN_140005ee0(local_3e8);
        uVar11 = FUN_140005d20(uVar11,"bin/playliststate.bin");
        FUN_140016600(local_310,uVar11);
        FUN_140016770(local_3e8);
        uVar11 = FUN_140005c70(local_310);
        FUN_1400499e0(&local_248,uVar11,1);
        if (local_1b8[0] != 0) {
          local_430[0] = &local_248;
          cVar6 = FUN_140060830(local_430);
          if (cVar6 != '\0') {
            uVar26 = FUN_140060940(local_430);
            local_3f8 = 0x40;
            if ((int)uVar26 < 0x40) {
              local_3f8 = uVar26;
            }
            if (0 < (int)local_3f8) {
              local_420 = 0;
              do {
                uVar26 = local_420;
                pppppuVar29 = (undefined8 *****)0x0;
                FUN_140060720(local_430,local_3e8,0x800);
                uVar11 = FUN_140079960(&DAT_1404e6470,local_3e8);
                FUN_140079e80(uVar11);
                uVar25 = FUN_140060940(local_430);
                iVar8 = (int)uVar25;
                uVar25 = uVar25 & 0xffffffff;
                local_res20 = (undefined8 ****)CONCAT44(local_res20._4_4_,iVar8);
                if ((iVar8 - 1U < 0x3f) && (unaff_R13 = pppppuVar29, 0 < iVar8)) {
                  do {
                    FUN_14006c240(&local_2a8);
                    FUN_140060720(local_430,local_138,0x200);
                    local_2a4 = FUN_140060940(local_430);
                    uVar11 = FUN_140060720(local_430,&local_450,0x800);
                    FUN_14000de40(local_288,uVar11);
                    FUN_140017240(&local_450);
                    uVar11 = FUN_140060720(local_430,&local_450,0x800);
                    FUN_14000de40(local_268,uVar11);
                    FUN_140017240(&local_450);
                    iVar8 = FUN_140060940(local_430);
                    if ((iVar8 - 1U < 0x7fff) && (0 < iVar8)) {
                      do {
                        local_2d8 = (undefined8 ****)0x0;
                        uStack_2e0 = 0;
                        local_2e8 = (undefined8 ****)0x0;
                        local_2d0 = 0xf;
                        FUN_140016fa0(&local_2c8);
                        FUN_14004aa50(&local_248,local_458,4);
                        if (local_458[0] < 0x801) {
                          uStack_370 = 0;
                          local_378 = (undefined8 *****)0x0;
                          local_368 = (undefined8 *****)0x0;
                          uStack_360 = 0xf;
                          FUN_140016ee0(&local_378,local_458[0],0);
                          pppppuVar31 = &local_378;
                          if (0xf < uStack_360) {
                            pppppuVar31 = (undefined8 *****)local_378;
                          }
                          FUN_14004aa50(&local_248,pppppuVar31,(longlong)(int)local_458[0]);
                          local_450 = local_378;
                          uStack_448 = uStack_370;
                          local_440 = local_368;
                          uStack_438 = uStack_360;
                        }
                        else {
                          local_440 = (undefined8 *****)0x0;
                          uStack_438 = 0;
                          local_450 = (undefined8 *****)0x0;
                          uStack_448 = 0;
                          FUN_140017480(&local_450,&DAT_140474480,0);
                        }
                        FUN_140017240(&local_2e8);
                        local_2e8 = local_450;
                        uStack_2e0 = uStack_448;
                        local_2d8 = local_440;
                        local_2d0 = uStack_438;
                        local_440 = (undefined8 *****)0x0;
                        uStack_438 = 0xf;
                        local_450 = (undefined8 ****)((ulonglong)local_450 & 0xffffffffffffff00);
                        FUN_140017240(&local_450);
                        FUN_14004aa50(&local_248,local_3c8,4);
                        if (local_3c8[0] < 0x801) {
                          uStack_448 = 0;
                          local_450 = (undefined8 *****)0x0;
                          local_440 = (undefined8 *****)0x0;
                          uStack_438 = 0xf;
                          FUN_140016ee0(&local_450,local_3c8[0],0);
                          pppppuVar31 = &local_450;
                          if (0xf < uStack_438) {
                            pppppuVar31 = (undefined8 *****)local_450;
                          }
                          FUN_14004aa50(&local_248,pppppuVar31,(longlong)(int)local_3c8[0]);
                          local_350 = local_450;
                          uStack_348 = uStack_448;
                          local_340 = local_440;
                          uStack_338 = uStack_438;
                        }
                        else {
                          local_340 = (undefined8 *****)0x0;
                          uStack_338 = 0;
                          local_350 = (undefined8 *****)0x0;
                          uStack_348 = 0;
                          FUN_140017480(&local_350,&DAT_140474480,0);
                        }
                        if (&local_2c8 != &local_350) {
                          FUN_140017240(&local_2c8);
                          local_2c8 = local_350;
                          local_2c0 = uStack_348;
                          local_2b8 = local_340;
                          local_2b0 = uStack_338;
                          local_340 = (undefined8 *****)0x0;
                          uStack_338 = 0xf;
                          local_350 = (undefined8 ****)((ulonglong)local_350 & 0xffffffffffffff00);
                        }
                        FUN_140017240(&local_350);
                        lVar12 = local_298;
                        if (local_298 == local_290) {
                          FUN_14007c720(&local_2a0,local_298,&local_2e8);
                        }
                        else {
                          FUN_140016fc0(local_298,&local_2e8);
                          FUN_140016fc0(lVar12 + 0x20,&local_2c8);
                          local_298 = local_298 + 0x40;
                        }
                        FUN_140017240(&local_2c8);
                        FUN_140017240(&local_2e8);
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    uVar11 = FUN_140079960(&DAT_1404e6470,local_3e8);
                    puVar18 = (undefined4 *)FUN_14007a1d0(uVar11,local_138);
                    puVar10 = local_2a0;
                    *puVar18 = local_2a8;
                    ppuVar1 = (undefined8 **)(puVar18 + 2);
                    puVar18[1] = local_2a4;
                    if (ppuVar1 != &local_2a0) {
                      puVar16 = *ppuVar1;
                      pppppuVar19 = (undefined8 *****)(local_298 - (longlong)local_2a0);
                      pppppuVar33 = (undefined8 *****)((longlong)pppppuVar19 >> 6);
                      pppppuVar31 = (undefined8 *****)
                                    (*(longlong *)(puVar18 + 6) - (longlong)puVar16 >> 6);
                      if (pppppuVar31 < pppppuVar33) {
                        if ((undefined8 *****)0x3ffffffffffffff < pppppuVar33) {
                    /* WARNING: Subroutine does not return */
                          FUN_140013050();
                        }
                        if ((undefined8 *****)(0x3ffffffffffffff - ((ulonglong)pppppuVar31 >> 1)) <
                            pppppuVar31) {
                          pppppuVar31 = (undefined8 *****)0x3ffffffffffffff;
                        }
                        else {
                          pppppuVar31 = (undefined8 *****)
                                        (((ulonglong)pppppuVar31 >> 1) + (longlong)pppppuVar31);
                          if (pppppuVar31 < pppppuVar33) {
                            pppppuVar31 = pppppuVar33;
                          }
                        }
                        uVar36 = local_2a8;
                        if (puVar16 != (undefined8 *)0x0) {
                          uVar36 = FUN_14003a6d0(puVar16,*(undefined8 *)(puVar18 + 4));
                          uVar36 = FUN_14003a710(uVar36,*ppuVar1,
                                                 *(longlong *)(puVar18 + 6) - (longlong)*ppuVar1 >>
                                                 6);
                          *ppuVar1 = (undefined8 *)0x0;
                          *(undefined8 *)(puVar18 + 4) = 0;
                          *(undefined8 *)(puVar18 + 6) = 0;
                        }
                        local_3f0 = pppppuVar31;
                        puVar16 = (undefined8 *)FUN_14007c910(uVar36,&local_3f0);
                        *ppuVar1 = puVar16;
                        *(undefined8 **)(puVar18 + 4) = puVar16;
                        *(undefined8 **)(puVar18 + 6) = puVar16 + (longlong)pppppuVar31 * 8;
                        uVar11 = FUN_14007c990(puVar10,pppppuVar33,*ppuVar1);
                        *(undefined8 *)(puVar18 + 4) = uVar11;
                      }
                      else {
                        pppppuVar31 = (undefined8 *****)
                                      ((longlong)*(undefined8 **)(puVar18 + 4) - (longlong)puVar16
                                      >> 6);
                        if (pppppuVar31 < pppppuVar33) {
                          if (puVar16 != *(undefined8 **)(puVar18 + 4)) {
                            do {
                              FUN_14007c2d0(puVar16,puVar10);
                              puVar16 = puVar16 + 8;
                              puVar10 = puVar10 + 8;
                            } while (puVar16 != *(undefined8 **)(puVar18 + 4));
                          }
                          uVar11 = FUN_14007c990(puVar10,(longlong)pppppuVar33 -
                                                         (longlong)pppppuVar31);
                          *(undefined8 *)(puVar18 + 4) = uVar11;
                        }
                        else {
                          lVar12 = ((ulonglong)pppppuVar19 & 0xffffffffffffffc0) + (longlong)puVar16
                          ;
                          while (pppppuVar19 != (undefined8 *****)0x0) {
                            if (puVar16 != puVar10) {
                              puVar24 = puVar10;
                              if (0xf < (ulonglong)puVar10[3]) {
                                puVar24 = (undefined8 *)*puVar10;
                              }
                              FUN_14000f880(puVar16,puVar24,puVar10[2]);
                              plVar13 = puVar10 + 4;
                              if (0xf < (ulonglong)puVar10[7]) {
                                plVar13 = (longlong *)*plVar13;
                              }
                              FUN_14000f880(puVar16 + 4,plVar13,puVar10[6]);
                            }
                            puVar16 = puVar16 + 8;
                            puVar10 = puVar10 + 8;
                            pppppuVar33 = (undefined8 *****)((longlong)pppppuVar33 + -1);
                            pppppuVar19 = pppppuVar33;
                          }
                          FUN_14003a6d0(lVar12,*(undefined8 *)(puVar18 + 4));
                          *(longlong *)(puVar18 + 4) = lVar12;
                        }
                      }
                      uVar25 = (ulonglong)local_res20 & 0xffffffff;
                    }
                    if ((undefined8 *****)(puVar18 + 8) != local_288) {
                      pppppuVar31 = local_288;
                      if (0xf < local_270) {
                        pppppuVar31 = (undefined8 *****)local_288[0];
                      }
                      FUN_14000f880(puVar18 + 8,pppppuVar31,local_278);
                    }
                    if ((undefined8 *****)(puVar18 + 0x10) != local_268) {
                      pppppuVar31 = local_268;
                      if (0xf < local_250) {
                        pppppuVar31 = (undefined8 *****)local_268[0];
                      }
                      FUN_14000f880(puVar18 + 0x10,pppppuVar31,local_258);
                    }
                    FUN_140017240(local_138);
                    FUN_140017240(local_268);
                    FUN_140017240(local_288);
                    FUN_14003a630(&local_2a0);
                    uVar32 = (int)pppppuVar29 + 1;
                    pppppuVar29 = (undefined8 *****)(ulonglong)uVar32;
                    unaff_R13 = pppppuVar29;
                    uVar26 = local_420;
                  } while ((int)uVar32 < (int)uVar25);
                }
                unaff_R12 = &local_2c8;
                FUN_140017240(local_3e8);
                local_420 = uVar26 + 1;
              } while ((int)local_420 < (int)local_3f8);
            }
          }
        }
        pppppuVar31 = (undefined8 *****)0x0;
        FUN_14003f730(&local_248);
        FUN_140016770(local_310);
        uVar11 = FUN_140005ee0(local_3e8);
        uVar11 = FUN_140005d20(uVar11,"bin/playliststatetime.bin");
        FUN_140016600(local_310,uVar11);
        FUN_140016770(local_3e8);
        pppppuVar29 = local_310;
        if (7 < local_2f8) {
          pppppuVar29 = (undefined8 *****)local_310[0];
        }
        FUN_1400499e0(&local_248,pppppuVar29,1);
        if (local_1b8[0] != 0) {
          local_res20 = &local_248;
          cVar6 = FUN_140060830(&local_res20);
          if (cVar6 != '\0') {
            local_430[0] = (undefined8 ****)_Xtime_get_ticks();
            plVar13 = (longlong *)FUN_140080260(&local_3f0,local_430);
            lVar12 = *plVar13;
            lVar15 = FUN_140060960(&local_res20);
            fVar38 = (float)(lVar12 - lVar15);
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            uVar26 = FUN_140060940(&local_res20);
            local_3f8 = 0;
            pppppuVar29 = (undefined8 *****)(ulonglong)uVar26;
            if (0x40 < (int)uVar26) {
              pppppuVar29 = (undefined8 *****)0x40;
            }
            local_430[0] = (undefined8 ****)CONCAT44(local_430[0]._4_4_,(int)pppppuVar29);
            if (0 < (int)pppppuVar29) {
              pppppuVar33 = (undefined8 *****)0x0;
              do {
                pppppuVar19 = (undefined8 *****)0x0;
                FUN_14004aa50(&local_248,&local_420,4);
                if (local_420 < 0x801) {
                  uStack_448 = 0;
                  local_450 = (undefined8 *****)0x0;
                  local_440 = (undefined8 *****)0x0;
                  uStack_438 = 0xf;
                  FUN_140016ee0(&local_450,local_420,0);
                  pppppuVar34 = &local_450;
                  if (0xf < uStack_438) {
                    pppppuVar34 = (undefined8 *****)local_450;
                  }
                  FUN_14004aa50(&local_248,pppppuVar34,(longlong)(int)local_420);
                  local_330 = local_450;
                  uStack_328 = uStack_448;
                  local_320 = local_440;
                  uStack_318 = uStack_438;
                }
                else {
                  local_320 = (undefined8 *****)0x0;
                  uStack_318 = 0;
                  local_330 = (undefined8 *****)0x0;
                  uStack_328 = 0;
                  FUN_140017480(&local_330,&DAT_140474480,0);
                }
                FUN_14004aa50(&local_248,&local_358,4);
                local_458[0] = 0;
                unaff_R12 = (undefined8 *****)(ulonglong)local_358;
                if (0x40 < (int)local_358) {
                  unaff_R12 = (undefined8 *****)0x40;
                }
                local_res20 = (undefined8 ****)CONCAT44(local_res20._4_4_,(int)unaff_R12);
                if (0 < (int)unaff_R12) {
                  do {
                    pppppuVar34 = (undefined8 *****)0x0;
                    FUN_14004aa50(&local_248,local_3c8,4);
                    pppppuVar29 = (undefined8 *****)(ulonglong)local_3c8[0];
                    if (local_3c8[0] < 0x801) {
                      local_440 = (undefined8 *****)0x0;
                      uStack_438 = 0xf;
                      uStack_448 = 0;
                      local_450 = (undefined8 *****)0x0;
                      if (local_3c8[0] == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
                        local_450._0_1_ = 0;
                        local_440 = pppppuVar29;
                      }
                      else if (pppppuVar29 < (undefined8 *****)0x10) {
                        local_440 = pppppuVar29;
                        FUN_1404217a0(&local_450,0,pppppuVar29);
                        *(undefined1 *)((longlong)&local_450 + (longlong)pppppuVar29) = 0;
                      }
                      else {
                        local_468 = local_468 & 0xffffffffffffff00;
                        FUN_140016cc0(&local_450,pppppuVar29,0,pppppuVar29);
                      }
                      pppppuVar31 = &local_450;
                      if (0xf < uStack_438) {
                        pppppuVar31 = (undefined8 *****)local_450;
                      }
                      FUN_14004aa50(&local_248,pppppuVar31,(longlong)(int)local_3c8[0]);
                      local_378 = local_450;
                      uStack_370 = uStack_448;
                      local_368 = local_440;
                      uStack_360 = uStack_438;
                      pppppuVar31 = pppppuVar29;
                    }
                    else {
                      uStack_370 = 0;
                      local_378 = (undefined8 *****)0x0;
                      local_368 = (undefined8 *****)0x0;
                      uStack_360 = 0xf;
                    }
                    FUN_14004aa50(&local_248,&local_3f0,4);
                    pppppuVar29 = (undefined8 *****)0xcbf29ce484222325;
                    pppppuVar22 = &local_330;
                    if (0xf < uStack_318) {
                      pppppuVar22 = (undefined8 *****)local_330;
                    }
                    fVar37 = local_3f0._0_4_ + fVar38;
                    if ((undefined8 *****)local_320 != (undefined8 *****)0x0) {
                      do {
                        pbVar2 = (byte *)((longlong)pppppuVar34 + (longlong)pppppuVar22);
                        pppppuVar34 = (undefined8 *****)((longlong)pppppuVar34 + 1);
                        pppppuVar29 = (undefined8 *****)
                                      (((ulonglong)pppppuVar29 ^ (ulonglong)*pbVar2) * 0x100000001b3
                                      );
                      } while (pppppuVar34 < local_320);
                    }
                    param_4 = pppppuVar29;
                    FUN_1400110a0(&DAT_1404e6470,&local_3a8,&local_330);
                    pppppuVar34 = (undefined8 *****)ppppuStack_3a0;
                    if ((undefined8 *****)ppppuStack_3a0 == (undefined8 *****)0x0) {
                      if (_DAT_1404e6480 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
                        FUN_14028c2e0("unordered_map/set too long");
                      }
                      pppppuVar34 = (undefined8 *****)FUN_14028af20(0x70);
                      FUN_140016fc0(pppppuVar34 + 2,&local_330);
                      pppppuVar34[6] = (undefined8 ****)0x0;
                      pppppuVar34[7] = (undefined8 ****)0x0;
                      pppppuVar34[8] = (undefined8 ****)0x0;
                      pppppuVar34[9] = (undefined8 ****)0x0;
                      pppppuVar34[10] = (undefined8 ****)0x0;
                      pppppuVar34[0xb] = (undefined8 ****)0x0;
                      pppppuVar34[0xc] = (undefined8 ****)0x0;
                      pppppuVar34[0xd] = (undefined8 ****)0x0;
                      FUN_14007fc10();
                      if (_DAT_1404e6470 < (float)(_DAT_1404e6480 + 1) / (float)DAT_1404e64a8) {
                        FUN_14007d000(&DAT_1404e6470);
                        pppppuVar31 = *(undefined8 ******)
                                       (DAT_1404e6488 + 8 +
                                       ((ulonglong)pppppuVar29 & _DAT_1404e64a0) * 0x10);
                        pppppuVar22 = DAT_1404e6478;
                        if (pppppuVar31 != DAT_1404e6478) {
                          ppppuVar14 = pppppuVar34[4];
                          pppppuVar19 = *(undefined8 ******)
                                         (DAT_1404e6488 +
                                         ((ulonglong)pppppuVar29 & _DAT_1404e64a0) * 0x10);
                          pppppuVar22 = pppppuVar31;
                          while( true ) {
                            pppppuVar31 = pppppuVar22 + 2;
                            if ((undefined8 ****)0xf < pppppuVar22[5]) {
                              pppppuVar31 = (undefined8 *****)*pppppuVar31;
                            }
                            if (pppppuVar34[5] < (undefined8 ****)0x10) {
                              pppppuVar21 = pppppuVar34 + 2;
                            }
                            else {
                              pppppuVar21 = (undefined8 *****)pppppuVar34[2];
                            }
                            if ((ppppuVar14 == pppppuVar22[4]) &&
                               ((ppppuVar14 == (undefined8 ****)0x0 ||
                                (iVar8 = memcmp(pppppuVar21,pppppuVar31,(size_t)ppppuVar14),
                                iVar8 == 0)))) {
                              local_3a8 = *pppppuVar22;
                              pppppuVar19 = (undefined8 *****)(ulonglong)local_458[0];
                              pppppuVar31 = pppppuVar22;
                              ppppuStack_3a0 = pppppuVar22;
                              goto LAB_14006b72e;
                            }
                            if (pppppuVar22 == pppppuVar19) break;
                            pppppuVar22 = (undefined8 *****)pppppuVar22[1];
                          }
                          pppppuVar19 = (undefined8 *****)(ulonglong)local_458[0];
                        }
                        pppppuVar31 = (undefined8 *****)0x0;
                        local_3a8 = pppppuVar22;
                        ppppuStack_3a0 = (undefined8 *****)0x0;
                      }
LAB_14006b72e:
                      ppppuVar14 = (undefined8 ****)local_3a8[1];
                      _DAT_1404e6480 = _DAT_1404e6480 + 1;
                      *pppppuVar34 = local_3a8;
                      pppppuVar34[1] = ppppuVar14;
                      *ppppuVar14 = pppppuVar34;
                      local_3a8[1] = pppppuVar34;
                      lVar12 = DAT_1404e6488;
                      pppppuVar22 = (undefined8 *****)((ulonglong)pppppuVar29 & _DAT_1404e64a0);
                      param_4 = *(undefined8 ******)(DAT_1404e6488 + (longlong)pppppuVar22 * 0x10);
                      if (param_4 == DAT_1404e6478) {
                        *(undefined8 ******)(DAT_1404e6488 + (longlong)pppppuVar22 * 0x10) =
                             pppppuVar34;
LAB_14006b789:
                        *(undefined8 ******)(lVar12 + 8 + (longlong)pppppuVar22 * 0x10) =
                             pppppuVar34;
                        pppppuVar29 = (undefined8 *****)((longlong)pppppuVar22 * 2);
                      }
                      else if (param_4 == (undefined8 *****)local_3a8) {
                        *(undefined8 ******)(DAT_1404e6488 + (longlong)pppppuVar22 * 0x10) =
                             pppppuVar34;
                        pppppuVar29 = pppppuVar22;
                      }
                      else {
                        pppppuVar29 = (undefined8 *****)((longlong)pppppuVar22 * 2);
                        if (*(undefined8 *****)(DAT_1404e6488 + 8 + (longlong)pppppuVar22 * 0x10) ==
                            ppppuVar14) goto LAB_14006b789;
                      }
                      unaff_R12 = (undefined8 *****)((ulonglong)local_res20 & 0xffffffff);
                    }
                    unaff_R13 = (undefined8 *****)0x249249249249249;
                    pfVar17 = (float *)FUN_14007a1d0(pppppuVar34 + 6,&local_378);
                    if (fVar37 <= 0.0) {
                      fVar37 = 0.0;
                    }
                    *pfVar17 = fVar37;
                    if (0xf < uStack_360) {
                      uVar25 = uStack_360 + 1;
                      pppppuVar22 = (undefined8 *****)local_378;
                      if (0xfff < uVar25) {
                        pppppuVar22 = (undefined8 *****)local_378[-1];
                        if (0x1f < (ulonglong)((longlong)local_378 + (-8 - (longlong)pppppuVar22)))
                        goto LAB_14006c146;
                        uVar25 = uStack_360 + 0x28;
                      }
                      thunk_FUN_14028af80(pppppuVar22,uVar25);
                    }
                    local_458[0] = (int)pppppuVar19 + 1;
                    pppppuVar19 = (undefined8 *****)(ulonglong)local_458[0];
                  } while ((int)local_458[0] < (int)unaff_R12);
                  pppppuVar31 = (undefined8 *****)(ulonglong)local_3f8;
                  pppppuVar29 = (undefined8 *****)((ulonglong)local_430[0] & 0xffffffff);
                }
                pppppuVar34 = (undefined8 *****)0x0;
                unaff_R13 = (undefined8 *****)0x249249249249249;
                if (0xf < uStack_318) {
                  uVar25 = uStack_318 + 1;
                  pppppuVar22 = (undefined8 *****)local_330;
                  if (0xfff < uVar25) {
                    pppppuVar22 = (undefined8 *****)local_330[-1];
                    if (0x1f < (ulonglong)((longlong)local_330 + (-8 - (longlong)pppppuVar22)))
                    goto LAB_14006c146;
                    uVar25 = uStack_318 + 0x28;
                  }
                  thunk_FUN_14028af80(pppppuVar22,uVar25);
                }
                local_3f8 = (int)pppppuVar31 + 1;
                pppppuVar31 = (undefined8 *****)(ulonglong)local_3f8;
              } while ((int)local_3f8 < (int)pppppuVar29);
            }
          }
        }
        FUN_14003f730(&local_248);
        FUN_140016770(local_310);
      }
    }
    else {
      local_res18 = (undefined8 ****)((ulonglong)local_res18 & 0xffffffffffffff00);
    }
    fVar38 = DAT_1404928e0;
    local_430[0] = DAT_1404e5370;
    pppppuVar29 = (undefined8 *****)*DAT_1404e5370;
    pppppuVar34 = DAT_1404e5370;
    if (pppppuVar29 != DAT_1404e5370) {
      do {
        pppppuVar19 = pppppuVar29 + 2;
        pppppuVar33 = (undefined8 *****)pppppuVar29[4];
        local_418 = (undefined8 *****)0x0;
        pppuStack_410 = (undefined8 ****)0x0;
        local_408 = (undefined8 *****)0x0;
        local_400 = (undefined8 *****)0x0;
        if ((undefined8 ****)0xf < pppppuVar29[5]) {
          pppppuVar19 = (undefined8 *****)*pppppuVar19;
        }
        if ((undefined8 *****)0x7fffffffffffffff < pppppuVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_1400172e0();
        }
        if (pppppuVar33 < (undefined8 *****)0x10) {
          local_408 = pppppuVar33;
          local_400 = (undefined8 *****)0xf;
          local_418 = *pppppuVar19;
          pppuStack_410 = pppppuVar19[1];
        }
        else {
          pppppuVar31 = (undefined8 *****)((ulonglong)pppppuVar33 | 0xf);
          if (pppppuVar31 < (undefined8 *****)0x8000000000000000) {
            if (pppppuVar31 < (undefined8 *****)0x16) {
              pppppuVar31 = (undefined8 *****)0x16;
            }
            pppppuVar22 = (undefined8 *****)((longlong)pppppuVar31 + 1);
            pppppuVar21 = (undefined8 *****)0x0;
            if (pppppuVar22 != (undefined8 *****)0x0) {
              if ((undefined8 *****)0xfff < pppppuVar22) {
                pppppuVar21 = pppppuVar31 + 5;
                if (pppppuVar21 <= pppppuVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_14006b926;
              }
              pppppuVar21 = (undefined8 *****)FUN_14028af20(pppppuVar22);
            }
          }
          else {
            pppppuVar31 = (undefined8 *****)0x7fffffffffffffff;
            pppppuVar21 = (undefined8 *****)0x8000000000000027;
LAB_14006b926:
            ppppuVar14 = (undefined8 ****)FUN_14028af20(pppppuVar21);
            if (ppppuVar14 == (undefined8 ****)0x0) {
LAB_14006c146:
              iVar8 = (int)pppppuVar31;
              pppppuVar22 = (undefined8 *****)&DAT_00000005;
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)();
              puVar27 = auStack_480;
              pppppuVar31 = pppppuVar19;
              goto LAB_14006c150;
            }
            pppppuVar21 = (undefined8 *****)((longlong)ppppuVar14 + 0x27U & 0xffffffffffffffe0);
            pppppuVar21[-1] = ppppuVar14;
          }
          local_418 = pppppuVar21;
          local_408 = pppppuVar33;
          local_400 = pppppuVar31;
          FUN_1404210f0(pppppuVar21,pppppuVar19,(longlong)pppppuVar33 + 1);
        }
        unaff_R12 = (undefined8 *****)local_400;
        pppppuVar33 = (undefined8 *****)local_408;
        pppppuVar22 = (undefined8 *****)local_418;
        uVar25 = 0xcbf29ce484222325;
        pppppuVar31 = &local_418;
        if ((undefined8 *****)0xf < local_400) {
          pppppuVar31 = (undefined8 *****)local_418;
        }
        pppppuVar19 = (undefined8 *****)0x0;
        if ((undefined8 *****)local_408 != (undefined8 *****)0x0) {
          do {
            pbVar2 = (byte *)((longlong)pppppuVar19 + (longlong)pppppuVar31);
            pppppuVar19 = (undefined8 *****)((longlong)pppppuVar19 + 1);
            uVar25 = (uVar25 ^ *pbVar2) * 0x100000001b3;
            pppppuVar34 = (undefined8 *****)local_430[0];
          } while (pppppuVar19 < local_408);
        }
        pppppuVar19 = *(undefined8 ******)(DAT_1404e5340 + 8 + (uVar25 & _DAT_1404e5358) * 0x10);
        if (pppppuVar19 != DAT_1404e5330) {
          pppppuVar31 = *(undefined8 ******)(DAT_1404e5340 + (uVar25 & _DAT_1404e5358) * 0x10);
          while( true ) {
            pppppuVar21 = pppppuVar19 + 2;
            if ((undefined8 ****)0xf < pppppuVar19[5]) {
              pppppuVar21 = (undefined8 *****)*pppppuVar21;
            }
            pppppuVar20 = &local_418;
            if ((undefined8 *****)0xf < unaff_R12) {
              pppppuVar20 = pppppuVar22;
            }
            if ((pppppuVar33 == (undefined8 *****)pppppuVar19[4]) &&
               ((pppppuVar33 == (undefined8 *****)0x0 ||
                (iVar8 = memcmp(pppppuVar20,pppppuVar21,(size_t)pppppuVar33), iVar8 == 0))))
            goto LAB_14006ba38;
            if (pppppuVar19 == pppppuVar31) break;
            pppppuVar19 = (undefined8 *****)pppppuVar19[1];
          }
        }
        pppppuVar19 = (undefined8 *****)0x0;
LAB_14006ba38:
        pppppuVar31 = DAT_1404e5330;
        if ((((pppppuVar19 == (undefined8 *****)0x0) ||
             (pppppuVar31 = pppppuVar19, pppppuVar19 == DAT_1404e5330)) ||
            (pppppuVar19[6] == (undefined8 ****)0x0)) || ((char)local_res18 != '\0')) {
          uVar25 = 0xcbf29ce484222325;
          pppppuVar19 = &local_418;
          if ((undefined8 *****)0xf < unaff_R12) {
            pppppuVar19 = pppppuVar22;
          }
          pppppuVar21 = (undefined8 *****)0x0;
          if (pppppuVar33 != (undefined8 *****)0x0) {
            do {
              pbVar2 = (byte *)((longlong)pppppuVar21 + (longlong)pppppuVar19);
              pppppuVar21 = (undefined8 *****)((longlong)pppppuVar21 + 1);
              uVar25 = (uVar25 ^ *pbVar2) * 0x100000001b3;
              pppppuVar34 = (undefined8 *****)local_430[0];
            } while (pppppuVar21 < pppppuVar33);
          }
          pppppuVar19 = *(undefined8 ******)(DAT_1404e5380 + 8 + (uVar25 & _DAT_1404e5398) * 0x10);
          local_res20 = pppppuVar31;
          if (pppppuVar19 != DAT_1404e5370) {
            pppppuVar21 = *(undefined8 ******)(DAT_1404e5380 + (uVar25 & _DAT_1404e5398) * 0x10);
            local_3f0 = pppppuVar21;
            while( true ) {
              pppppuVar20 = pppppuVar19 + 2;
              if ((undefined8 ****)0xf < pppppuVar19[5]) {
                pppppuVar20 = (undefined8 *****)*pppppuVar20;
              }
              _Buf1 = &local_418;
              if ((undefined8 *****)0xf < unaff_R12) {
                _Buf1 = pppppuVar22;
              }
              if ((pppppuVar33 == (undefined8 *****)pppppuVar19[4]) &&
                 ((pppppuVar33 == (undefined8 *****)0x0 ||
                  (iVar8 = memcmp(_Buf1,pppppuVar20,(size_t)pppppuVar33),
                  pppppuVar21 = (undefined8 *****)local_3f0, iVar8 == 0)))) goto LAB_14006bb44;
              if (pppppuVar19 == pppppuVar21) break;
              pppppuVar19 = (undefined8 *****)pppppuVar19[1];
            }
          }
          pppppuVar19 = (undefined8 *****)0x0;
LAB_14006bb44:
          pppppuVar21 = pppppuVar22;
          if (((pppppuVar19 != (undefined8 *****)0x0) && (pppppuVar19 != DAT_1404e5370)) &&
             ((*(byte *)((longlong)pppppuVar19 + 0x53) & 1) == 0)) {
            pppppuVar21 = &local_418;
            if ((undefined8 *****)0xf < unaff_R12) {
              pppppuVar21 = pppppuVar22;
            }
            lVar12 = FUN_140087490(local_e8,pppppuVar21,
                                   (undefined1 *)((longlong)pppppuVar33 + (longlong)pppppuVar21));
            unaff_R12 = (undefined8 *****)local_400;
            pppppuVar21 = (undefined8 *****)local_418;
            if (lVar12 != 0) {
              pppppuVar33 = &local_418;
              if ((undefined8 *****)0xf < local_400) {
                pppppuVar33 = (undefined8 *****)local_418;
              }
              unaff_R12 = (undefined8 *****)
                          FUN_140086de0(local_e8,pppppuVar33,
                                        (undefined1 *)((longlong)local_408 + (longlong)pppppuVar33))
              ;
              if (*(char *)(unaff_R12 + 1) != '\a') {
                FUN_140017240(&local_418);
                goto LAB_14006c08d;
              }
              puVar18 = (undefined4 *)FUN_1400170d0(&local_450,"playlist");
              local_3b8 = *puVar18;
              uStack_3b4 = puVar18[1];
              uStack_3b0 = puVar18[2];
              uStack_3ac = puVar18[3];
              lVar12 = FUN_140087640(unaff_R12,&local_3b8);
              if (*(char *)(lVar12 + 8) == '\a') {
                FUN_140060560(&local_248);
                ppppuVar14 = local_res20;
                if ((undefined8 *****)local_res20 != DAT_1404e5330) {
                  local_248 = pppppuVar31[6];
                  FUN_14000de00(local_1d8,local_res20 + 0x14);
                  FUN_14000de00(local_1b8,ppppuVar14 + 0x18);
                }
                FUN_140075a90(&DAT_1404e52e0,lVar12,&local_240);
                pppppuVar31 = DAT_1404e5330;
                cVar6 = (char)local_res18;
                if (cVar6 == '\0') {
                  for (pppppuVar33 = (undefined8 *****)*DAT_1404e5330; pppppuVar33 != pppppuVar31;
                      pppppuVar33 = (undefined8 *****)*pppppuVar33) {
                    *(undefined4 *)((longlong)pppppuVar33 + 0x7c) = 0;
                  }
                }
                else if (local_240 != local_238) {
                  FUN_140017170(local_3e8,PTR_s_wallpaperconfig_1404df5a0);
                  uVar11 = FUN_140079be0(&DAT_1404e6470,local_3e8);
                  FUN_1400313b0(uVar11,&local_358,&local_418);
                  FUN_140017240(local_3e8);
                  FUN_140017170(local_3e8,PTR_s_wallpaperconfig_1404df5a0);
                  lVar12 = FUN_140079be0(&DAT_1404e6470,local_3e8);
                  lVar12 = *(longlong *)(lVar12 + 8);
                  FUN_140017240(local_3e8);
                  lVar15 = CONCAT44(uStack_354,local_358);
                  if (lVar15 != lVar12) {
                    FUN_14000de00(local_1d8,lVar15 + 0x50);
                    FUN_14000de00(local_1b8,lVar15 + 0x70);
                    local_200 = *(undefined4 *)(lVar15 + 0x34);
                    local_198 = local_208 == 0;
                    local_1fc = *(float *)(lVar15 + 0x30);
                    if ((local_208 == 1) && (local_210 < local_1fc / fVar38)) {
                      uVar36 = FUN_140031fa0(local_1d8);
                      uVar36 = FUN_14041d0c0(uVar36,local_210);
                      *(undefined4 *)(lVar15 + 0x30) = uVar36;
                    }
                    FUN_14007a780(local_228);
                    lVar12 = *(longlong *)(lVar15 + 0x40);
                    for (lVar15 = *(longlong *)(lVar15 + 0x38); lVar15 != lVar12;
                        lVar15 = lVar15 + 0x40) {
                      FUN_140068f20(local_138);
                      FUN_14000de00(local_138,lVar15);
                      FUN_14000de00(local_110,lVar15 + 0x20);
                      FUN_14007ab90(local_228,local_138);
                      FUN_140038cc0(local_138);
                    }
                  }
                  if ((local_204 & 8) != 0) {
                    FUN_140031fa0(local_1d8);
                    local_198 = 0;
                    uVar25 = FUN_140064990(&local_240);
                    local_197 = 1 < uVar25;
                  }
                }
                uVar11 = FUN_140079340(&DAT_1404e5328,&local_418);
                FUN_140067250(uVar11,&local_248);
                FUN_140017240(local_1b8);
                FUN_140017240(local_1d8);
                FUN_140031b80(local_1f0);
                FUN_140031170(local_228);
                FUN_140031170(&local_240);
              }
              else {
                cVar6 = (char)local_res18;
              }
              lVar12 = FUN_140067a00(&DAT_1404e52e0,&local_418,0);
              if (lVar12 == 0) {
                puVar18 = (undefined4 *)FUN_1400170d0(&local_378,&DAT_140473b68);
                local_3b8 = *puVar18;
                uStack_3b4 = puVar18[1];
                uStack_3b0 = puVar18[2];
                uStack_3ac = puVar18[3];
                lVar12 = FUN_140087640(unaff_R12,&local_3b8);
                if (*(char *)(lVar12 + 8) == '\x04') {
                  uVar25 = FUN_140084dd0(local_138,7);
                  puVar18 = (undefined4 *)FUN_1400170d0(local_c0,&DAT_140473b68);
                  local_3b8 = *puVar18;
                  uStack_3b4 = puVar18[1];
                  uStack_3b0 = puVar18[2];
                  uStack_3ac = puVar18[3];
                  uVar11 = FUN_140087640(unaff_R12,&local_3b8);
                  uVar11 = FUN_140085cc0(uVar11,local_3e8);
                  param_4 = (undefined8 *****)0x0;
                  local_468 = uVar25;
                  FUN_140072a70(extraout_XMM0_Da_04,&local_418,uVar11);
                  FUN_140017240(local_3e8);
                }
              }
              else if (cVar6 != '\0') {
                FUN_140017170(local_3e8,PTR_s_wallpaperconfig_1404df5a0);
                uVar11 = FUN_140079be0(&DAT_1404e6470,local_3e8);
                FUN_1400313b0(uVar11,&local_3f8,&local_418);
                FUN_140017240(local_3e8);
                FUN_140030de0(&DAT_1404e5328,&local_420,&local_418);
                pppppuVar31 = (undefined8 *****)CONCAT44(uStack_41c,local_420);
                lVar12 = CONCAT44(uStack_3f4,local_3f8);
                if ((*(int *)(pppppuVar31 + 0xe) == 1) &&
                   ((*(byte *)((longlong)pppppuVar31 + 0x74) & 8) == 0)) {
                  FUN_140017170(local_3e8,PTR_s_wallpaperconfig_1404df5a0);
                  uVar25 = 1;
                  local_res8 = (undefined8 ****)((ulonglong)local_res8 | 1);
                  lVar15 = FUN_140079be0(&DAT_1404e6470,local_3e8);
                  if ((lVar12 == *(longlong *)(lVar15 + 8)) || (pppppuVar31 == DAT_1404e5330))
                  goto LAB_14006bf73;
                  bVar35 = true;
                }
                else {
                  uVar25 = (ulonglong)local_res8 & 0xffffffff;
LAB_14006bf73:
                  bVar35 = false;
                }
                if (uVar25 != 0) {
                  local_res8 = (undefined8 ****)((ulonglong)local_res8 & 0xffffffff00000000);
                  FUN_140017240(local_3e8);
                }
                unaff_R12 = (undefined8 *****)0x0;
                if (bVar35) {
                  *(undefined4 *)((longlong)pppppuVar31 + 0x7c) = *(undefined4 *)(lVar12 + 0x30);
                }
              }
              if ((undefined8 *****)0xf < local_400) {
                FUN_140017200(&local_418,local_418);
              }
              goto LAB_14006c08d;
            }
          }
          pppppuVar22 = pppppuVar21;
          if ((undefined8 *****)0xf < unaff_R12) {
            pppppuVar20 = (undefined8 *****)((longlong)unaff_R12 + 1);
            if ((undefined8 *****)0xfff < pppppuVar20) {
              pppppuVar22 = (undefined8 *****)pppppuVar21[-1];
              unaff_R13 = (undefined8 *****)((longlong)pppppuVar21 + (-8 - (longlong)pppppuVar22));
              if ((undefined8 *****)0x1f < unaff_R13) goto LAB_14006c146;
              pppppuVar20 = unaff_R12 + 5;
            }
            thunk_FUN_14028af80(pppppuVar22,pppppuVar20);
          }
        }
        else if ((undefined8 *****)0xf < unaff_R12) {
          FUN_140017200(&local_418,pppppuVar22,unaff_R12);
        }
LAB_14006c08d:
        pppppuVar29 = (undefined8 *****)*pppppuVar29;
        unaff_R13 = pppppuVar22;
      } while (pppppuVar29 != pppppuVar34);
    }
    DAT_1404e52e4 = DAT_1404e52e4 | 0x1800;
    if (DAT_1404e6260 != '\0') {
      FUN_14006e0c0();
      FUN_14006e6d0();
    }
    pppppuVar33 = (undefined8 *****)*DAT_1404e5330;
    puVar5 = auStack_488;
    pppppuVar29 = DAT_1404e5330;
    if (pppppuVar33 != DAT_1404e5330) {
      do {
        puVar27 = puVar5;
        ppppuVar14 = pppppuVar33[6];
        if (ppppuVar14 != (undefined8 ****)0x0) {
          unaff_R12 = (undefined8 *****)pppppuVar33[7];
          if (((unaff_R12 != (undefined8 *****)pppppuVar33[8]) &&
              (*(int *)((longlong)pppppuVar33 + 0x6c) == 1)) &&
             (pppppuVar34 = (undefined8 *****)
                            (((longlong)pppppuVar33[8] - (longlong)unaff_R12 >> 3) *
                            -0x71c71c71c71c71c7), 0 < (int)pppppuVar34)) {
            param_4 = (undefined8 *****)ppppuVar14[0x1e];
            pppppuVar31 = (undefined8 *****)(ppppuVar14 + 0x1c);
            unaff_R13 = (undefined8 *****)ppppuVar14[0x1f];
            iVar8 = 0;
            local_res8 = param_4;
            do {
              pppppuVar22 = unaff_R12 + (longlong)iVar8 * 9;
              pppppuVar19 = pppppuVar31;
              if (&DAT_00000010 <= unaff_R13) {
                pppppuVar19 = (undefined8 *****)*pppppuVar31;
              }
LAB_14006c150:
              pppppuVar21 = (undefined8 *****)pppppuVar22[2];
              if ((undefined8 ****)0xf < pppppuVar22[3]) {
                pppppuVar22 = (undefined8 *****)*pppppuVar22;
              }
              if (pppppuVar21 == param_4) {
                if (pppppuVar21 != (undefined8 *****)0x0) {
                  *(undefined8 *)(puVar27 + -8) = 0x14006c16d;
                  iVar9 = memcmp(pppppuVar22,pppppuVar19,(size_t)pppppuVar21);
                  param_4 = (undefined8 *****)local_res8;
                  if (iVar9 != 0) goto LAB_14006c178;
                }
                *(int *)(pppppuVar33 + 0xf) = iVar8 + 1;
                break;
              }
LAB_14006c178:
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)pppppuVar34);
          }
        }
        pppppuVar33 = (undefined8 *****)*pppppuVar33;
        puVar5 = puVar27;
      } while (pppppuVar33 != pppppuVar29);
    }
    DAT_1404e52e4 = DAT_1404e52e4 | 0x200000;
    *(undefined8 *)(puVar27 + -8) = 0x14006c1ae;
    FUN_14006a030();
    *(undefined8 *)(puVar27 + -8) = 0x14006c1ba;
    FUN_140085440(local_e8);
    *(undefined8 *)(puVar27 + -8) = 0x14006c1c6;
    FUN_140085440(local_b0);
  }
  return;
}

