// Function: FUN_140055320
// Addr: 140055320
// Size: 3607 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140055320(longlong param_1,byte param_2)

{
  longlong *plVar1;
  short *psVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  LPCWSTR ******pppppppWVar11;
  LPCWSTR *****ppppppWVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 *puVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint *puVar23;
  uint uVar24;
  short *psVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  LPCWSTR ******pppppppWVar30;
  int iVar31;
  byte bVar32;
  undefined8 *puVar33;
  float fVar34;
  int local_res18;
  undefined1 auStackY_4f8 [8];
  undefined1 auStackY_4f0 [24];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  ulonglong uStack_4a0;
  undefined8 *******local_498 [2];
  ulonglong local_488;
  ulonglong local_480;
  longlong *local_478;
  undefined8 uStack_470;
  LPCWSTR ******local_468;
  ulonglong uStack_460;
  longlong local_458;
  ulonglong uStack_450;
  LPCWSTR ******local_448;
  undefined8 uStack_440;
  longlong local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  LPCWSTR ******local_420;
  ulonglong uStack_418;
  longlong local_410;
  ulonglong uStack_408;
  undefined1 local_400 [8];
  uint local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  uint local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  ulonglong uStack_3b0;
  ulonglong local_3a8;
  undefined8 *******local_3a0 [2];
  longlong local_390;
  ulonglong local_388;
  undefined1 local_380 [8];
  uint local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 *local_358;
  uint local_350;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined1 local_318 [32];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [32];
  undefined8 local_2c8;
  char local_70;
  
  puVar27 = auStackY_4f8;
  plVar13 = *(longlong **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  cVar6 = *(char *)(*plVar13 + 0x19);
  plVar21 = (longlong *)*plVar13;
  while (cVar6 == '\0') {
    if (plVar21[9] != 0) {
      return;
    }
    if (plVar21[8] != 0) {
      return;
    }
    plVar8 = (longlong *)plVar21[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar6 = *(char *)(*plVar8 + 0x19);
      while (cVar6 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar6 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar6 = *(char *)(plVar21[1] + 0x19);
      plVar5 = (longlong *)plVar21[1];
      while ((plVar8 = plVar5, cVar6 == '\0' && (plVar21 == (longlong *)plVar8[2]))) {
        cVar6 = *(char *)(plVar8[1] + 0x19);
        plVar5 = (longlong *)plVar8[1];
        plVar21 = plVar8;
      }
    }
    plVar21 = plVar8;
    cVar6 = *(char *)((longlong)plVar8 + 0x19);
  }
  FUN_140056e20(plVar1,plVar1,plVar13[1]);
  plVar13[1] = (longlong)plVar13;
  *plVar13 = (longlong)plVar13;
  plVar13[2] = (longlong)plVar13;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1400150a0(param_1 + 0x18);
  }
  uVar9 = FUN_140005ee0(&local_448);
  uVar9 = FUN_140005d20(uVar9,"plugins");
  FUN_140016600(local_318,uVar9);
  FUN_140016770(&local_448);
  cVar6 = FUN_140018e60(local_318);
  puVar28 = auStackY_4f8;
  if (cVar6 != '\0') {
    iVar31 = 0;
    uVar29 = (local_3f8 >> 8 & 0xfffffe) << 8;
    uVar24 = (local_378 >> 8 & 0xfffffe) << 8;
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_3e0 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_360 = 0;
    local_3f8 = uVar29;
    local_378 = uVar24;
    uVar9 = FUN_140086de0(&DAT_1404df5e8,"general","");
    lVar10 = FUN_140087490(uVar9,&DAT_1404737fc,&DAT_140473800);
    if (lVar10 != 0) {
      uVar9 = FUN_140086de0(uVar9,&DAT_1404737fc,&DAT_140473800);
      FUN_140085520(local_400,uVar9);
      uVar29 = local_3f8;
    }
    if ((char)uVar29 == '\a') {
      uVar9 = FUN_140086de0(local_400,"plugins","");
      FUN_140085520(local_380,uVar9);
      uVar29 = local_3f8;
      uVar24 = local_378;
    }
    uVar22 = uStack_440;
    if ((char)uVar24 != '\a') {
      uStack_440 = CONCAT71(uStack_440._1_7_,7);
      uStack_440._4_4_ = SUB84(uVar22,4);
      uStack_440 = CONCAT44(uStack_440._4_4_,(undefined4)uStack_440) & 0xfffffffffffffeff;
      local_438 = 0;
      uStack_430 = 0;
      local_428 = 0;
      pppppppWVar11 = (LPCWSTR ******)FUN_14028af20(0x10);
      *pppppppWVar11 = (LPCWSTR *****)0x0;
      pppppppWVar11[1] = (LPCWSTR *****)0x0;
      ppppppWVar12 = (LPCWSTR *****)FUN_14028af20(0x58);
      *ppppppWVar12 = (LPCWSTR ****)ppppppWVar12;
      ppppppWVar12[1] = (LPCWSTR ****)ppppppWVar12;
      ppppppWVar12[2] = (LPCWSTR ****)ppppppWVar12;
      *(undefined2 *)(ppppppWVar12 + 3) = 0x101;
      *pppppppWVar11 = ppppppWVar12;
      local_448 = pppppppWVar11;
      FUN_140085610(local_380,&local_448);
      FUN_140085440(&local_448);
    }
    local_res18 = 0;
    if ((((char)uVar29 == '\a') && (lVar10 = FUN_140087490(local_400,"plugindelay",""), lVar10 != 0)
        ) && (lVar10 = FUN_140086de0(local_400,"plugindelay",""), *(byte *)(lVar10 + 8) - 1 < 3)) {
      uVar9 = FUN_140086de0(local_400,"plugindelay","");
      fVar34 = (float)FUN_140086220(uVar9);
      fVar34 = fVar34 * DAT_140492944;
    }
    else {
      fVar34 = 0.0;
    }
    FUN_140016600(&local_448,local_318);
    local_478 = (longlong *)0x0;
    uStack_470 = (longlong *)0x0;
    FUN_14003af10(local_2e8,&local_448,2);
    if (local_70 != '\0') {
      plVar13 = (longlong *)FUN_14028af20(0x78);
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *plVar13 = (longlong)&PTR_FUN_140477750;
      FUN_14003b030(plVar13 + 2,local_2e8);
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      *(undefined4 *)(plVar13 + 0xe) = 2;
      *(undefined1 *)((longlong)plVar13 + 0x74) = 1;
      local_478 = plVar13 + 2;
      uStack_470 = plVar13;
    }
    plVar13 = local_478;
    FUN_14028fdf0(local_2c8);
    FUN_140016770(local_2e8);
    FUN_140016770(&local_448);
    while (plVar13 != (longlong *)0x0) {
      FUN_140016600(local_3a0,plVar13 + 4);
      if ((int)(plVar13[10] - plVar13[9] >> 3) < 2) {
        puVar15 = (undefined8 *)FUN_140053f80(local_3a0,&local_448);
        if (7 < (ulonglong)puVar15[3]) {
          puVar15 = (undefined8 *)*puVar15;
        }
        local_458 = 0;
        uStack_450 = 0;
        local_468 = (LPCWSTR ******)0x0;
        uStack_460 = 0;
        uVar9 = FUN_1402d6aa0(puVar15);
        FUN_140016170(&local_468,puVar15,uVar9);
        if (local_458 == 0) {
LAB_140055841:
          local_4a8 = 0;
          uStack_4b0 = 0;
          local_4b8 = (LPCWSTR ******)0x0;
          uStack_4a0 = 0xf;
        }
        else {
          pppppppWVar11 = (LPCWSTR ******)&local_468;
          if (7 < uStack_450) {
            pppppppWVar11 = local_468;
          }
          iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_458,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 < 1) goto LAB_140055841;
          FUN_140016940(&local_420,(longlong)iVar7,0);
          pppppppWVar11 = (LPCWSTR ******)&local_420;
          if (0xf < uStack_408) {
            pppppppWVar11 = local_420;
          }
          pppppppWVar30 = (LPCWSTR ******)&local_468;
          if (7 < uStack_450) {
            pppppppWVar30 = local_468;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar30,(int)local_458,(LPSTR)pppppppWVar11,
                              iVar7,(LPCSTR)0x0,(LPBOOL)0x0);
          local_4a8 = local_410;
          uStack_4a0 = uStack_408;
          local_4b8 = local_420;
          uStack_4b0 = uStack_418;
        }
        if (7 < uStack_450) {
          uVar22 = uStack_450 * 2 + 2;
          pppppppWVar11 = local_468;
          if (uVar22 < 0x1000) {
LAB_140055899:
            thunk_FUN_14028af80(pppppppWVar11,uVar22);
            goto LAB_1400558a6;
          }
          pppppppWVar11 = (LPCWSTR ******)local_468[-1];
          if ((ulonglong)((longlong)local_468 + (-8 - (longlong)pppppppWVar11)) < 0x20) {
            uVar22 = uStack_450 * 2 + 0x29;
            goto LAB_140055899;
          }
LAB_140055f6b:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar27 = auStackY_4f0;
          break;
        }
LAB_1400558a6:
        pppppppWVar11 = (LPCWSTR ******)&local_4b8;
        if (0xf < uStack_4a0) {
          pppppppWVar11 = local_4b8;
        }
        iVar7 = FUN_1402c10d0(pppppppWVar11,&DAT_1404776d4);
        if (0xf < uStack_4a0) {
          uVar22 = uStack_4a0 + 1;
          pppppppWVar11 = local_4b8;
          if (0xfff < uVar22) {
            pppppppWVar11 = (LPCWSTR ******)local_4b8[-1];
            if (0x1f < (ulonglong)((longlong)local_4b8 + (-8 - (longlong)pppppppWVar11)))
            goto LAB_140055f6b;
            uVar22 = uStack_4a0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppWVar11,uVar22);
        }
        local_4a8 = 0;
        uStack_4a0 = 0xf;
        local_4b8 = (LPCWSTR ******)((ulonglong)local_4b8 & 0xffffffffffffff00);
        FUN_140016770(&local_448);
        if (iVar7 != 0) goto LAB_140055f48;
        pppppppuVar19 = local_3a0;
        if (7 < local_388) {
          pppppppuVar19 = local_3a0[0];
        }
        psVar25 = (short *)((longlong)pppppppuVar19 + local_390 * 2);
        psVar17 = psVar25;
        for (psVar16 = (short *)FUN_140015e90(); psVar16 != psVar17; psVar16 = psVar16 + 1) {
          if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) goto LAB_140055960;
        }
LAB_14005597c:
        psVar17 = (short *)thunk_FUN_14028d070(psVar25);
        psVar16 = psVar17;
        if ((psVar25 != psVar17) && (psVar2 = psVar17 + -1, psVar25 != psVar2)) {
          psVar18 = psVar17 + -2;
          if (*psVar2 == 0x2e) {
            if ((psVar25 != psVar18) || (psVar17[-2] != 0x2e)) {
              psVar16 = psVar2;
            }
          }
          else {
            for (; (psVar16 = psVar17, psVar25 != psVar18 && (psVar16 = psVar18, *psVar18 != 0x2e));
                psVar18 = psVar18 + -1) {
            }
          }
        }
        local_410 = 0;
        uStack_408 = 0;
        local_420 = (LPCWSTR ******)0x0;
        uStack_418 = 0;
        FUN_140016170(&local_420,psVar25,(longlong)psVar16 - (longlong)psVar25 >> 1);
        local_4a8 = 0;
        uStack_4a0 = 0;
        local_438 = local_410;
        uStack_430 = uStack_408;
        local_448 = local_420;
        uStack_440 = uStack_418;
        pppppppWVar11 = (LPCWSTR ******)&local_448;
        if (7 < uStack_408) {
          pppppppWVar11 = local_420;
        }
        local_4b8 = (LPCWSTR ******)0x0;
        uStack_4b0 = 0;
        uVar9 = FUN_1402d6aa0(pppppppWVar11);
        FUN_140016170(&local_4b8,pppppppWVar11,uVar9);
        if (local_4a8 == 0) {
LAB_140055af6:
          local_458 = 0;
          uStack_460 = 0;
          local_468 = (LPCWSTR ******)0x0;
          uStack_450 = 0xf;
        }
        else {
          pppppppWVar11 = (LPCWSTR ******)&local_4b8;
          if (7 < uStack_4a0) {
            pppppppWVar11 = local_4b8;
          }
          iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_4a8,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 < 1) goto LAB_140055af6;
          FUN_140016940(&local_420,(longlong)iVar7,0);
          pppppppWVar11 = (LPCWSTR ******)&local_420;
          if (0xf < uStack_408) {
            pppppppWVar11 = local_420;
          }
          pppppppWVar30 = (LPCWSTR ******)&local_4b8;
          if (7 < uStack_4a0) {
            pppppppWVar30 = local_4b8;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar30,(int)local_4a8,(LPSTR)pppppppWVar11,
                              iVar7,(LPCSTR)0x0,(LPBOOL)0x0);
          local_468 = local_420;
          uStack_460 = uStack_418;
          local_458 = local_410;
          uStack_450 = uStack_408;
        }
        if (7 < uStack_4a0) {
          uVar22 = uStack_4a0 * 2 + 2;
          pppppppWVar11 = local_4b8;
          if (0xfff < uVar22) {
            pppppppWVar11 = (LPCWSTR ******)local_4b8[-1];
            if (0x1f < (ulonglong)((longlong)local_4b8 + (-8 - (longlong)pppppppWVar11)))
            goto LAB_140055f6b;
            uVar22 = uStack_4a0 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppWVar11,uVar22);
        }
        FUN_140016fc0(local_498,&local_468);
        FUN_1400187b0(local_498);
        if (0xf < uStack_450) {
          uVar22 = uStack_450 + 1;
          pppppppWVar11 = local_468;
          if (0xfff < uVar22) {
            pppppppWVar11 = (LPCWSTR ******)local_468[-1];
            if (0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pppppppWVar11)))
            goto LAB_140055f6b;
            uVar22 = uStack_450 + 0x28;
          }
          thunk_FUN_14028af80(pppppppWVar11,uVar22);
        }
        FUN_140016770(&local_448);
        if (3 < local_488) {
          pppppppuVar19 = local_498;
          if (0xf < local_480) {
            pppppppuVar19 = local_498[0];
          }
          iVar7 = FUN_1402c10d0((local_488 - 2) + (longlong)pppppppuVar19,&DAT_1404776dc);
          if (iVar7 == 0) {
            FUN_140017240(local_498);
            goto LAB_140055f48;
          }
          pppppppuVar19 = local_498;
          if (0xf < local_480) {
            pppppppuVar19 = local_498[0];
          }
          iVar7 = FUN_1402c10d0((local_488 - 2) + (longlong)pppppppuVar19,&DAT_1404776e0);
          if (iVar7 == 0) {
            local_328 = 0;
            local_320 = 0;
            local_338 = 0;
            uStack_330 = 0;
            uVar22 = local_488 - 2;
            if (local_488 < local_488 - 2) {
              uVar22 = local_488;
            }
            pppppppuVar19 = local_498;
            if (0xf < local_480) {
              pppppppuVar19 = local_498[0];
            }
            FUN_140017480(&local_338,pppppppuVar19,uVar22);
            FUN_14000de40(local_498,&local_338);
            FUN_140017240(&local_338);
          }
        }
        puVar15 = (undefined8 *)*plVar1;
        cVar6 = *(char *)((longlong)puVar15[1] + 0x19);
        puVar33 = puVar15;
        puVar26 = (undefined8 *)puVar15[1];
        while (cVar6 == '\0') {
          cVar6 = FUN_140038c30(puVar26 + 4,local_498);
          if (cVar6 < '\0') {
            puVar20 = (undefined8 *)puVar26[2];
            puVar26 = puVar33;
          }
          else {
            puVar20 = (undefined8 *)*puVar26;
          }
          puVar33 = puVar26;
          puVar26 = puVar20;
          cVar6 = *(char *)((longlong)puVar20 + 0x19);
        }
        if (((*(char *)((longlong)puVar33 + 0x19) == '\0') &&
            (cVar6 = FUN_140038c30(local_498,puVar33 + 4), -1 < cVar6)) && (puVar33 != puVar15)) {
          FUN_140017240(local_498);
        }
        else {
          local_3c8 = local_3c8 & 0xffffff00;
          local_3a8 = (ulonglong)param_2;
          local_3d8 = 0;
          uStack_3d0 = 0;
          uVar9 = FUN_140018ce0(local_3a0,&local_448);
          FUN_140016fc0(&local_4b8,uVar9);
          FUN_1400187b0(&local_4b8);
          local_3b8 = local_4a8;
          local_4a8 = 0;
          uStack_3b0 = uStack_4a0;
          uStack_4a0 = 0xf;
          local_3c8 = (uint)local_4b8;
          uStack_3c4 = local_4b8._4_4_;
          uStack_3c0 = (undefined4)uStack_4b0;
          uStack_3bc = uStack_4b0._4_4_;
          local_4b8 = (LPCWSTR ******)((ulonglong)local_4b8 & 0xffffffffffffff00);
          FUN_140017240(&local_4b8);
          FUN_140017240(&local_448);
          pppppppuVar19 = local_498;
          if (0xf < local_480) {
            pppppppuVar19 = local_498[0];
          }
          lVar10 = FUN_140086de0(local_380,pppppppuVar19,local_488 + (longlong)pppppppuVar19);
          bVar32 = param_2;
          if (param_2 != 0) {
            if (*(char *)(lVar10 + 8) == '\a') {
              lVar10 = FUN_140086de0(lVar10,"enabled","");
              if ((*(char *)(lVar10 + 8) == '\x05') &&
                 (cVar6 = FUN_140086300(lVar10), cVar6 == '\0')) {
                bVar32 = 0;
                local_3a8 = local_3a8 & 0xffffffffffffff00;
                goto LAB_140055ddd;
              }
              bVar32 = 1;
              local_3a8 = CONCAT71(local_3a8._1_7_,1);
            }
            local_res18 = iVar31 + 1;
          }
LAB_140055ddd:
          puVar15 = (undefined8 *)*plVar1;
          puVar33 = (undefined8 *)puVar15[1];
          puVar26 = puVar33;
          puVar20 = puVar15;
          if (*(char *)((longlong)puVar33 + 0x19) == '\0') {
            do {
              puVar33 = puVar26;
              cVar6 = FUN_140038c30(puVar33 + 4,local_498);
              if (-1 < cVar6) {
                puVar26 = (undefined8 *)*puVar33;
                puVar20 = puVar33;
              }
              else {
                puVar26 = (undefined8 *)puVar33[2];
              }
              uVar24 = (uint)(-1 < cVar6);
            } while (*(char *)((longlong)puVar26 + 0x19) == '\0');
          }
          else {
            uVar24 = 0;
          }
          if ((*(char *)((longlong)puVar20 + 0x19) != '\0') ||
             (cVar6 = FUN_140038c30(local_498,puVar20 + 4), cVar6 < '\0')) {
            if (*(longlong *)(param_1 + 0x10) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
              FUN_14003a750();
            }
            plVar13 = (longlong *)FUN_14028af20(0x78);
            FUN_140016fc0(plVar13 + 4,local_498);
            plVar13[8] = 0;
            plVar13[9] = 0;
            plVar13[0xe] = 0;
            plVar13[10] = 0;
            plVar13[0xb] = 0;
            plVar13[0xc] = 0;
            plVar13[0xd] = 0xf;
            *(undefined1 *)(plVar13 + 10) = 0;
            *plVar13 = (longlong)puVar15;
            plVar13[1] = (longlong)puVar15;
            plVar13[2] = (longlong)puVar15;
            *(undefined2 *)(plVar13 + 3) = 0;
            local_358 = puVar33;
            local_350 = uVar24;
            puVar20 = (undefined8 *)FUN_1400371e0(plVar1,&local_358,plVar13);
          }
          puVar20[8] = 0;
          puVar20[9] = 0;
          if ((uint *)(puVar20 + 10) != &local_3c8) {
            puVar23 = &local_3c8;
            if (0xf < uStack_3b0) {
              puVar23 = (uint *)CONCAT44(uStack_3c4,local_3c8);
            }
            FUN_14000f880(puVar20 + 10,puVar23,local_3b8);
            bVar32 = (byte)local_3a8;
          }
          *(byte *)(puVar20 + 0xe) = bVar32;
          FUN_140017240(&local_3c8);
          FUN_140017240(local_498);
          iVar31 = local_res18;
        }
      }
      else {
        FUN_140016600(&local_448,local_3a0);
        piVar14 = (int *)FUN_14003b970(local_2f8,&local_448,3);
        if ((*piVar14 == 3) && (piVar14[2] == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        FUN_140016770(&local_448);
        if (bVar4) {
          *(undefined1 *)((longlong)plVar13 + 100) = 0;
        }
      }
LAB_140055f48:
      FUN_140016770(local_3a0);
      iVar7 = FUN_140057290(&local_478);
      plVar13 = local_478;
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400507a0("recursive_directory_iterator::operator++",iVar7);
      }
    }
    plVar13 = uStack_470;
    if (uStack_470 != (longlong *)0x0) {
      LOCK();
      plVar21 = uStack_470 + 1;
      lVar10 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        pcVar3 = *(code **)*uStack_470;
        *(undefined8 *)(puVar27 + -8) = 0x140055f94;
        (*pcVar3)(uStack_470);
        LOCK();
        piVar14 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          pcVar3 = *(code **)(*plVar13 + 8);
          *(undefined8 *)(puVar27 + -8) = 0x140055fa7;
          (*pcVar3)(plVar13);
        }
      }
    }
    if (0 < iVar31) {
      *(undefined8 *)(puVar27 + -8) = 0x140055fbe;
      plVar21 = (longlong *)FUN_14028af20(0x28);
      *plVar21 = 0;
      plVar21[1] = 0;
      *(undefined8 *)(puVar27 + -8) = 0x140055fd2;
      lVar10 = FUN_14028af20(0x78);
      *(longlong *)lVar10 = lVar10;
      *(longlong *)(lVar10 + 8) = lVar10;
      *(longlong *)(lVar10 + 0x10) = lVar10;
      *(undefined2 *)(lVar10 + 0x18) = 0x101;
      *plVar21 = lVar10;
      uVar9 = *(undefined8 *)(*plVar1 + 8);
      *(undefined8 *)(puVar27 + -8) = 0x140055ff8;
      uVar9 = FUN_140056f40(plVar21,uVar9,lVar10);
      *(undefined8 *)(*plVar21 + 8) = uVar9;
      plVar1 = (longlong *)*plVar21;
      plVar21[1] = *(longlong *)(param_1 + 0x10);
      plVar13 = (longlong *)plVar1[1];
      if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
        cVar6 = *(char *)(*plVar13 + 0x19);
        while (cVar6 == '\0') {
          plVar13 = (longlong *)*plVar13;
          cVar6 = *(char *)(*plVar13 + 0x19);
        }
        *plVar1 = (longlong)plVar13;
        lVar10 = *(longlong *)(*plVar21 + 8);
        cVar6 = *(char *)(*(longlong *)(lVar10 + 0x10) + 0x19);
        while (cVar6 == '\0') {
          lVar10 = *(longlong *)(lVar10 + 0x10);
          cVar6 = *(char *)(*(longlong *)(lVar10 + 0x10) + 0x19);
        }
        *(longlong *)(*plVar21 + 0x10) = lVar10;
      }
      else {
        *plVar1 = (longlong)plVar1;
        *(longlong *)(*plVar21 + 0x10) = *plVar21;
      }
      *(int *)(plVar21 + 2) = (int)fVar34;
      plVar21[4] = (longlong)FUN_1400547e0;
      plVar21[3] = param_1;
      *(undefined8 **)(puVar27 + 0x28) = &uStack_470;
      *(undefined4 *)(puVar27 + 0x20) = 0;
      *(undefined8 *)(puVar27 + -8) = 0x1400560a2;
      local_478 = (longlong *)FUN_1402ca17c(0,0,FUN_140056eb0,plVar21);
      if (local_478 == (longlong *)0x0) {
        uStack_470 = (longlong *)((ulonglong)uStack_470._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar27 + -8) = &UNK_140056128;
        FUN_140290d30(6);
      }
      if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar27 + -8) = &UNK_14005611a;
        FUN_140015110();
      }
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_470;
      *(uint *)(param_1 + 0x24) = uStack_470._4_4_;
      *(longlong **)(param_1 + 0x18) = local_478;
    }
    *(undefined8 *)(puVar27 + -8) = 0x1400560cf;
    FUN_140085440(local_380);
    *(undefined8 *)(puVar27 + -8) = 0x1400560d8;
    FUN_140085440(local_400);
    puVar28 = puVar27;
  }
  *(undefined8 *)(puVar28 + -8) = 0x1400560e4;
  FUN_140016770(local_318);
  return;
LAB_140055960:
  psVar17 = psVar25 + -1;
  if (psVar25[-1] == 0x5c) goto LAB_14005597c;
  if ((psVar25[-1] == 0x2f) || (psVar25 = psVar17, psVar16 == psVar17)) goto LAB_14005597c;
  goto LAB_140055960;
}

