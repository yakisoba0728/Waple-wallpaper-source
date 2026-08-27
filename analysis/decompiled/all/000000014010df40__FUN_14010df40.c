// Function: FUN_14010df40
// Addr: 14010df40
// Size: 4190 bytes


undefined8 FUN_14010df40(longlong *param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  uint uVar1;
  char **ppcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  BOOL BVar12;
  size_t sVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  char ***pppcVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  char ****ppppcVar22;
  char ***pppcVar23;
  char ***pppcVar24;
  ulonglong uVar25;
  float fVar26;
  undefined4 uVar27;
  char **local_res8;
  undefined8 local_res10;
  char *local_res18;
  undefined8 local_res20;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined8 local_370;
  char ***local_348;
  char ***local_340;
  longlong local_338;
  ulonglong local_330;
  undefined8 ***local_328;
  longlong lStack_320;
  longlong local_318;
  ulonglong uStack_310;
  longlong local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  undefined4 local_2c8;
  char **local_2b8;
  char ***local_2b0 [3];
  ulonglong local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined2 local_27c;
  short local_27a;
  longlong local_268;
  longlong local_258;
  longlong lStack_250;
  undefined8 local_248;
  int local_238;
  undefined8 local_234;
  undefined4 local_22c;
  char **local_228;
  undefined1 local_220 [32];
  undefined1 local_200 [40];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [8];
  char **local_198;
  ulonglong local_190;
  char ***local_188;
  undefined8 local_180;
  ulonglong local_170;
  ulonglong local_168;
  undefined1 local_160 [144];
  longlong local_d0;
  
  local_318 = 0;
  uStack_310 = 0;
  local_328 = (undefined8 ****)0x0;
  lStack_320 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  sVar13 = strlen(param_3);
  FUN_140017480(&local_328,param_3,sVar13);
  FUN_140016fc0(local_2b0,&local_328);
  FUN_1400187b0(local_2b0);
  FUN_140018b00(local_220,local_2b0);
  FUN_140017240(local_2b0);
  FUN_140017240(&local_328);
  FUN_140053f80(local_220,local_200);
  uVar1 = *(uint *)(param_1 + 0x49);
  uVar3 = *(uint *)(param_1 + 0x37) | 0x20000000;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x37) & 0xdfffffff;
  }
  uVar4 = uVar3 | 0x40000000;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar4 = uVar3 & 0xbfffffff;
  }
  uVar3 = uVar4 | 0x10000000;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar3 = uVar4 & 0xefffffff;
  }
  *(uint *)(param_1 + 0x49) = uVar1 & 0xffff1fff;
  *(uint *)(param_1 + 0x37) = uVar3 & 0xfffffe4f;
  uVar14 = FUN_140086de0(param_4,"general","");
  lVar15 = FUN_140086de0(uVar14,"location","");
  uVar16 = FUN_140086de0(uVar14,"videoaudiooutput","");
  cVar9 = FUN_140086300(uVar16);
  if ((cVar9 == '\0') || (*(char *)(lVar15 + 8) != '\a')) {
LAB_14010e0e6:
    *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x40;
  }
  else {
    lVar17 = FUN_140087490(lVar15,"videoaudiooutput","");
    if (lVar17 != 0) {
      uVar16 = FUN_140086de0(lVar15,"videoaudiooutput","");
      cVar9 = FUN_140086300(uVar16);
      if (cVar9 == '\0') goto LAB_14010e0e6;
    }
    *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xffffffbf;
  }
  FUN_140060990(local_2b0,&DAT_140487000);
  cVar9 = FUN_140118880(local_200,local_2b0);
  FUN_140016770(local_2b0);
  if (cVar9 == '\0') {
    FUN_140273d70(local_1d8);
    FUN_140276310(local_1d8,param_1 + 0xf);
    FUN_140060990(&local_378,&DAT_140478088);
    cVar9 = FUN_140118880(local_200,&local_378);
    FUN_140016770(&local_378);
    if (cVar9 == '\0') {
      puVar20 = (undefined8 *)FUN_14003fd90(local_220,&local_348);
      if (7 < (ulonglong)puVar20[3]) {
        puVar20 = (undefined8 *)*puVar20;
      }
      FUN_14000dd70(&local_378,puVar20);
      FUN_1402764d0(local_1d8,&local_res8,&local_378);
      FUN_140016770(&local_378);
      FUN_140016770(&local_348);
    }
    else {
      iVar11 = FUN_140276700(local_1d8,param_3);
      if (iVar11 == 1) {
        PostMessageW((HWND)param_1[0xd],0x407,5,0);
      }
      else if (iVar11 == 2) {
        PostMessageW((HWND)param_1[0xd],0x407,4,0);
      }
    }
    uVar16 = FUN_14003fc80(local_220,&local_348);
    uVar16 = FUN_140018ce0(uVar16,&local_378);
    plVar19 = (longlong *)FUN_1400532a0(uVar16,".json",5);
    local_328 = (undefined8 ***)*plVar19;
    lStack_320 = plVar19[1];
    local_318 = plVar19[2];
    uStack_310 = plVar19[3];
    plVar19[2] = 0;
    plVar19[3] = 0xf;
    *(undefined1 *)plVar19 = 0;
    FUN_140017240(&local_378);
    FUN_140016770(&local_348);
    ppppuVar21 = &local_328;
    if (0xf < uStack_310) {
      ppppuVar21 = (undefined8 ****)local_328;
    }
    FUN_1400d3f80(local_2b0,local_1d8,ppppuVar21,1);
    FUN_1401165f0(&local_288);
    local_348 = (char ***)local_2b0;
    if (0xf < local_298) {
      local_348 = local_2b0[0];
    }
    local_308 = local_268;
    if (local_268 == 0) {
      local_308 = 0;
    }
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_300 = 0;
    local_2e8 = 0;
    local_2e0 = 0x100;
    local_2c8 = 2;
    local_2d8 = 0;
    local_2d0 = 0;
    local_340 = local_348;
    FUN_14004ad80(0,&local_348);
    if (local_2d8 == 0) {
      if (*(char *)local_348 != '\0') {
        uVar27 = FUN_140117060(&local_308,&local_348,&local_288);
        if ((local_2d8 != 0) || (FUN_14004ad80(uVar27,&local_348), local_2d8 != 0))
        goto LAB_14010e39e;
        uStack_2f0 = local_2f8;
        uStack_374 = local_2d4;
        if (*(char *)local_348 != '\0') {
          local_2d0 = (longlong)local_348 - (longlong)local_340;
          local_370._0_4_ = (undefined4)local_2d0;
          local_370._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
          local_234 = CONCAT44((undefined4)local_370,local_2d4);
          local_2d8 = 2;
          local_238 = 2;
          local_22c = local_370._4_4_;
          local_370 = local_2d0;
          goto LAB_14010e4e6;
        }
        local_370._0_4_ = (undefined4)local_2d0;
        local_234 = CONCAT44((undefined4)local_370,local_2d4);
        local_238 = 0;
        goto LAB_14010e454;
      }
      local_2d0 = (longlong)local_348 - (longlong)local_340;
      uStack_2f0 = local_2f8;
      uStack_374 = local_2d4;
      local_370._0_4_ = (undefined4)local_2d0;
      local_370._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
      local_234 = CONCAT44((undefined4)local_370,local_2d4);
      local_2d8 = 1;
      local_238 = 1;
      local_22c = local_370._4_4_;
      local_370 = local_2d0;
    }
    else {
LAB_14010e39e:
      uStack_2f0 = local_2f8;
      uStack_374 = local_2d4;
      local_370._0_4_ = (undefined4)local_2d0;
      local_370._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
      local_234 = CONCAT44((undefined4)local_370,local_2d4);
      local_22c = local_370._4_4_;
      local_238 = local_2d8;
      local_370 = local_2d0;
      if (local_2d8 == 0) {
LAB_14010e454:
        local_370._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
        uStack_2f0 = local_2f8;
        local_22c = local_370._4_4_;
        local_370 = local_2d0;
        if (lStack_250 - local_258 != 0x10) {
          FID_conflict__assert
                    (L"stack_.GetSize() == sizeof(ValueType)",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xa59);
        }
        if ((ulonglong)(lStack_250 - local_258) < 0x10) {
          FID_conflict__assert
                    (L"GetSize() >= count * sizeof(T)",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x8b);
        }
        if (&local_288 != (undefined8 *)(lStack_250 + -0x10)) {
          local_27a = *(short *)(lStack_250 + -2);
          local_27c = *(undefined2 *)(lStack_250 + -4);
          local_288 = *(undefined8 *)(lStack_250 + -0x10);
          local_280 = *(undefined4 *)(lStack_250 + -8);
          *(undefined2 *)(lStack_250 + -2) = 0;
        }
      }
    }
LAB_14010e4e6:
    lStack_250 = local_258;
    thunk_FUN_1402d9040();
    local_258 = 0;
    lStack_250 = 0;
    local_248 = 0;
    thunk_FUN_1402d9040(local_2f8);
    thunk_FUN_14028af80(local_300,1);
    if ((local_238 == 0) && (local_27a == 3)) {
      FUN_140116800(&local_288,&local_res8,"general");
      plVar19 = (longlong *)FUN_140116ad0(&local_288,&local_378);
      if (((char ***)local_res8 != (char ***)*plVar19) &&
         (*(short *)((longlong)local_res8 + 0x1e) == 3)) {
        pppcVar18 = (char ***)(local_res8 + 2);
        FUN_140116800(pppcVar18,&local_res8,"orthogonalprojection");
        plVar19 = (longlong *)FUN_140116ad0(pppcVar18,&local_378);
        if (((char ***)local_res8 != (char ***)*plVar19) &&
           (*(short *)((longlong)local_res8 + 0x1e) == 3)) {
          *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x20;
        }
        lVar15 = FUN_14010d850(pppcVar18,"cameraparallax");
        lVar17 = FUN_14010d850(pppcVar18,"cameraparallaxmouseinfluence");
        if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0xe) & 8) != 0)) {
          cVar9 = FUN_140116b90(lVar15);
          if ((cVar9 != '\0') && ((lVar17 != 0 && ((*(byte *)(lVar17 + 0xe) & 0x10) != 0)))) {
            fVar26 = (float)FUN_140116720(lVar17);
            if (fVar26 != 0.0) {
              *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x80;
            }
          }
        }
        lVar15 = FUN_14010d850(pppcVar18,"bloom");
        lVar17 = FUN_14010d850(pppcVar18,&DAT_1404890e8);
        if ((lVar15 == 0) || ((*(byte *)(lVar15 + 0xe) & 8) == 0)) {
LAB_14010e652:
          bVar6 = false;
        }
        else {
          cVar9 = FUN_140116b90(lVar15);
          if (cVar9 == '\0') goto LAB_14010e652;
          bVar6 = true;
        }
        if ((lVar17 == 0) || ((*(byte *)(lVar17 + 0xe) & 8) == 0)) {
LAB_14010e670:
          bVar7 = false;
        }
        else {
          cVar9 = FUN_140116b90(lVar17);
          if (cVar9 == '\0') goto LAB_14010e670;
          bVar7 = true;
        }
        if ((bVar6) && (bVar7)) {
          plVar19 = (longlong *)FUN_140086de0(uVar14,"postprocessing","");
          lVar15 = *plVar19;
          if ((lVar15 != 0) && ((*(uint *)(plVar19 + 1) >> 8 & 1) != 0)) {
            lVar15 = lVar15 + 4;
          }
          iVar11 = FUN_1402c10d0(lVar15,"ultra");
          if (iVar11 == 0) {
            *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 0x2000;
          }
          else {
            iVar11 = FUN_1402c10d0(lVar15,"displayhdr");
            if (iVar11 == 0) {
              *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 0x6000;
            }
          }
        }
      }
      FUN_140116800(&local_288,&local_res8,"objects");
      plVar19 = (longlong *)FUN_140116ad0(&local_288,&local_378);
      ppcVar2 = local_res8;
      if (((char ***)local_res8 != (char ***)*plVar19) &&
         (*(short *)((longlong)local_res8 + 0x1e) == 4)) {
        uVar25 = (ulonglong)local_res8[3] & 0xffffffffffff;
        if ((short)((ulonglong)local_res8[3] >> 0x30) != 4) {
          FID_conflict__assert
                    (L"IsArray()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                     0x690);
        }
        uVar1 = *(uint *)(ppcVar2 + 2);
        ppcVar2 = (char **)ppcVar2[3];
        for (; uVar25 != (ulonglong)uVar1 * 0x10 + ((ulonglong)ppcVar2 & 0xffffffffffff);
            uVar25 = uVar25 + 0x10) {
          if (*(short *)(uVar25 + 0xe) == 3) {
            plVar19 = (longlong *)FUN_140116800(uVar25,&local_res8,"model");
            lVar15 = *plVar19;
            plVar19 = (longlong *)FUN_140116800(uVar25,&local_378,"sound");
            lVar17 = *plVar19;
            plVar19 = (longlong *)FUN_140116b30(uVar25,&local_348);
            if ((lVar15 == *plVar19) || (*(short *)(lVar15 + 0x1e) == 0)) {
              plVar19 = (longlong *)FUN_140116b30(uVar25,&local_2b8);
              if ((lVar17 != *plVar19) && (*(short *)(lVar17 + 0x1e) != 0)) {
                *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x10;
              }
            }
            else {
              *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x100;
            }
          }
        }
      }
    }
    if (local_d0 != 0) {
      FUN_1400fb390(local_160);
    }
    if (local_190 != 0) {
      if (local_190 < local_168 >> 3) {
        pppcVar18 = (char ***)*local_198;
        local_2b8 = (char **)pppcVar18;
        if (pppcVar18 != (char ***)local_198) {
          local_res8 = pppcVar18[1];
          local_348 = local_188;
          lVar15 = FUN_1400398f0(local_1a0,pppcVar18 + 2);
          local_228 = local_188[lVar15 * 2];
          local_378 = SUB84(local_188[lVar15 * 2 + 1],0);
          uStack_374 = (undefined4)((ulonglong)local_188[lVar15 * 2 + 1] >> 0x20);
          while( true ) {
            pppcVar23 = (char ***)*pppcVar18;
            FUN_140017240(pppcVar18 + 2);
            uVar27 = thunk_FUN_14028af80(pppcVar18,0x38);
            local_190 = local_190 - 1;
            if (pppcVar18 == (char ***)CONCAT44(uStack_374,local_378)) break;
            pppcVar18 = pppcVar23;
            if (pppcVar23 == (char ***)local_198) goto code_r0x00014010e8d2;
          }
          pppcVar18 = (char ***)local_res8;
          if (local_228 == local_2b8) {
            local_188[lVar15 * 2] = local_198;
            pppcVar18 = (char ***)local_198;
          }
          local_188[lVar15 * 2 + 1] = (char **)pppcVar18;
          ppppcVar22 = (char ****)local_188;
          if (pppcVar23 == (char ***)local_198) goto LAB_14010e8e4;
          do {
            uVar25 = FUN_140032520(uVar27,pppcVar23 + 2);
            uVar25 = local_170 & uVar25;
            pppcVar18 = ppppcVar22[uVar25 * 2 + 1];
            pppcVar24 = pppcVar23;
            while( true ) {
              pppcVar23 = (char ***)*pppcVar24;
              FUN_140017240(pppcVar24 + 2);
              uVar27 = thunk_FUN_14028af80(pppcVar24,0x38);
              local_190 = local_190 - 1;
              param_3 = local_res18;
              if (pppcVar24 == pppcVar18) break;
              pppcVar24 = pppcVar23;
              if (pppcVar23 == (char ***)local_198) {
                local_348[uVar25 * 2] = (char **)pppcVar23;
                *local_res8 = (char *)pppcVar23;
                pppcVar23[1] = local_res8;
                goto LAB_14010ea10;
              }
            }
            local_348[uVar25 * 2] = local_198;
            local_348[uVar25 * 2 + 1] = local_198;
            ppppcVar22 = (char ****)local_348;
          } while (pppcVar23 != (char ***)local_198);
          *local_res8 = (char *)pppcVar23;
          pppcVar23[1] = local_res8;
        }
      }
      else {
        FUN_140035290(local_190,local_198);
        *local_198 = (char *)local_198;
        local_198[1] = (char *)local_198;
        local_res8 = local_198;
        local_190 = 0;
        FUN_14000f7d0(local_188,local_180,&local_res8);
      }
    }
    goto LAB_14010ea10;
  }
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x20;
  goto LAB_14010ea74;
code_r0x00014010e8d2:
  if (local_228 == local_2b8) {
    local_188[lVar15 * 2] = (char **)pppcVar23;
  }
LAB_14010e8e4:
  *local_res8 = (char *)pppcVar23;
  pppcVar23[1] = local_res8;
  param_3 = local_res18;
LAB_14010ea10:
  FUN_1401164f0(&local_288);
  FUN_140017240(local_2b0);
  FUN_140017240(&local_328);
  FUN_14003f730(local_160);
  FUN_14000d9e0(&local_188);
  FUN_140030c70(&local_198);
  FUN_140016770(local_1c0);
  FUN_14007ac00(local_1d0);
  param_4 = local_res20;
LAB_14010ea74:
  iVar11 = FUN_140290d80(param_1 + 0x7b);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x424) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  FUN_14010a520(param_1,local_res10,param_3,param_4);
  lVar15 = FUN_140086de0(param_1 + 2,"general","");
  if (*(char *)(lVar15 + 8) == '\a') {
    lVar15 = FUN_140086de0(lVar15,"supportsvideo","");
    if (*(char *)(lVar15 + 8) == '\x05') {
      cVar9 = FUN_140086300(lVar15);
      if (cVar9 != '\0') {
        *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 0x8000;
      }
    }
  }
  uVar14 = FUN_140086de0(param_1 + 7,"wproperties","");
  uVar1 = *(uint *)(param_1 + 0x37);
  FUN_140104b60(uVar14,(uVar1 >> 5 & 1) << 2 | (uVar1 >> 7 & 1) << 3 | uVar1 >> 4 & 1 | 0xd0);
  uVar14 = FUN_140086de0(param_1 + 7,"initalwproperties","");
  uVar16 = FUN_140086de0(param_1 + 7,"wproperties","");
  FUN_140109f80(uVar16,uVar14);
  FUN_140290ea0(param_1 + 0x7b);
  if ((int)param_1[0x3b] != 0) {
    uVar1 = *(uint *)(param_1 + 0x49);
    bVar5 = (byte)(*(uint *)(param_1 + 0x37) >> 0x18);
    if ((((bVar5 >> 5 & 1) != ((byte)(uVar1 >> 0xd) & 1)) ||
        (((*(uint *)(param_1 + 0x37) & 0x60000000) == 0x60000000) != ((uVar1 & 0x6000) != 0))) ||
       ((bVar5 >> 4 & 1) != ((byte)(uVar1 >> 0xf) & 1))) {
      FUN_140113be0(param_1);
    }
  }
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
  BVar12 = IsWindow((HWND)param_1[0x39]);
  if (BVar12 != 0) {
    local_res8 = (char **)0x0;
    SendMessageTimeoutW((HWND)param_1[0x39],0x465,(WPARAM)param_3,0,1,0,(PDWORD_PTR)&local_res8);
    goto LAB_14010ef3f;
  }
  if ((int)param_1[0x3b] != 0) {
    FUN_140113be0(param_1);
  }
  uVar14 = (**(code **)(*param_1 + 0x98))(param_1,&local_378);
  uVar14 = FUN_140086de0(uVar14,"general","");
  FUN_140085090(local_2b0,uVar14);
  FUN_140085440(&local_378);
  uVar14 = FUN_140086de0(local_2b0,&DAT_140476e68,&DAT_140476e6c);
  FUN_140085cc0(uVar14,&local_328);
  uVar25 = uStack_310;
  lVar15 = local_318;
  pppuVar8 = local_328;
  lVar17 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  ppppuVar21 = &local_328;
  if (0xf < uStack_310) {
    ppppuVar21 = (undefined8 ****)local_328;
  }
  if (local_318 == 2) {
    iVar11 = memcmp(ppppuVar21,&DAT_140476e70,2);
    if (iVar11 != 0) goto LAB_14010ed15;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
LAB_14010ed15:
    ppppuVar21 = &local_328;
    if (0xf < uVar25) {
      ppppuVar21 = (undefined8 ****)pppuVar8;
    }
    if (lVar15 == 2) {
      iVar11 = memcmp(ppppuVar21,&DAT_1404892c4,2);
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
        goto LAB_14010ed73;
      }
    }
    ppppuVar21 = &local_328;
    if (0xf < uVar25) {
      ppppuVar21 = (undefined8 ****)pppuVar8;
    }
    if (lVar15 == 2) {
      iVar11 = memcmp(ppppuVar21,&DAT_1404892c8,2);
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 3;
      }
    }
  }
LAB_14010ed73:
  uVar14 = FUN_140086de0(local_2b0,"postprocessing","");
  FUN_140085cc0(uVar14,&local_348);
  ppppcVar22 = &local_348;
  if (0xf < local_330) {
    ppppcVar22 = (char ****)local_348;
  }
  if (local_338 == 8) {
    iVar11 = memcmp(ppppcVar22,"disabled",8);
    if (iVar11 != 0) goto LAB_14010edcb;
    *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) & 0xffffffbf;
  }
  else {
LAB_14010edcb:
    *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) | 0x40;
  }
  plVar19 = (longlong *)FUN_140086de0(local_2b0,"shadows","");
  if ((char)*(uint *)(plVar19 + 1) == '\x04') {
    lVar15 = *plVar19;
    if ((lVar15 != 0) && (lVar17 = lVar15, (*(uint *)(plVar19 + 1) >> 8 & 1) != 0)) {
      lVar17 = lVar15 + 4;
    }
    iVar11 = FUN_1402c10d0(lVar17,"disabled");
    if (iVar11 == 0) {
      uVar10 = 0;
    }
    else {
      iVar11 = FUN_1402c10d0(lVar17,&DAT_1404747e4);
      if (iVar11 == 0) {
        uVar10 = 1;
      }
      else {
        iVar11 = FUN_1402c10d0(lVar17,&DAT_1404747dc);
        if (iVar11 == 0) {
          uVar10 = 3;
        }
        else {
          iVar11 = FUN_1402c10d0(lVar17,"ultra");
          uVar10 = 2;
          if (iVar11 == 0) {
            uVar10 = 4;
          }
        }
      }
    }
  }
  else {
    uVar10 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x244) = uVar10;
  uVar14 = FUN_140086de0(local_2b0,"volumetrics","");
  uVar10 = FUN_14010dad0(uVar14);
  *(undefined1 *)((longlong)param_1 + 0x245) = uVar10;
  FUN_1401154c0(param_1,local_2b0);
  puVar20 = (undefined8 *)FUN_14028af20(0x18);
  *puVar20 = param_1;
  puVar20[1] = FUN_140110630;
  *(undefined4 *)(puVar20 + 2) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x14) = local_370._4_4_;
  lVar15 = FUN_1402ca17c(0,0,FUN_140116d60,puVar20,0,&local_370);
  local_378 = (undefined4)lVar15;
  uStack_374 = (undefined4)((ulonglong)lVar15 >> 0x20);
  if (lVar15 == 0) {
    local_370._0_4_ = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if ((int)param_1[0x3b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
  *(undefined4 *)(param_1 + 0x3b) = (undefined4)local_370;
  param_1[0x3a] = lVar15;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = local_370._4_4_;
  FUN_140017240(&local_348);
  FUN_140017240(&local_328);
  FUN_140085440(local_2b0);
LAB_14010ef3f:
  FUN_140016770(local_200);
  FUN_140016770(local_220);
  return 1;
}

