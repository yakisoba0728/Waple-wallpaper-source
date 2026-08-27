// Function: FUN_14011a180
// Addr: 14011a180
// Size: 3207 bytes


void FUN_14011a180(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  size_t sVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  char ****ppppcVar21;
  undefined8 uVar22;
  int iVar23;
  ulonglong uVar24;
  char *****pppppcVar25;
  ulonglong uVar26;
  char *pcVar27;
  undefined8 *puVar28;
  char *****pppppcVar29;
  undefined1 *puVar30;
  undefined4 uVar31;
  bool bVar32;
  undefined1 auStack_478 [8];
  undefined1 auStack_470 [24];
  undefined8 local_458;
  ulonglong uStack_450;
  undefined8 local_448;
  ulonglong local_440;
  undefined8 local_438;
  code *pcStack_430;
  ulonglong local_428;
  longlong *local_420;
  undefined8 *local_400;
  char ****local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  ulonglong local_3e0;
  undefined8 local_3d8;
  int iStack_3d0;
  int iStack_3cc;
  undefined1 local_3b0 [40];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [32];
  longlong *local_318;
  longlong *local_310;
  longlong *local_2f8;
  ulonglong *local_2f0;
  int *local_2e0;
  ulonglong local_2c8;
  uint local_2c0;
  undefined1 local_248 [16];
  undefined1 local_238 [32];
  longlong *local_218;
  longlong *local_210;
  longlong *local_1f8;
  ulonglong *local_1f0;
  int *local_1e0;
  ulonglong local_1c8;
  uint local_1c0;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_f8;
  ulonglong *local_f0;
  int *local_e0;
  ulonglong local_c8;
  uint local_c0;
  
  puVar30 = auStack_478;
  bVar32 = false;
  if ((char)param_1[0x9e] != '\0') {
    *(undefined1 *)(param_1 + 0x9e) = 0;
    FUN_14011aee0();
  }
  *(undefined4 *)((longlong)param_1 + 0x43a) = 0;
  if ((int)param_1[0x9f] != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x160))();
  }
  *(undefined4 *)(param_1 + 0x9f) = 0;
  pcVar15 = (char *)FUN_1402bbb40(param_2,"edge://");
  if (((pcVar15 == param_2) != (bool)(char)param_1[0x85]) &&
     (plVar1 = param_1 + 0x2b, *plVar1 != -1)) {
    local_438 = (undefined **)0x3;
    pcStack_430 = (code *)0x0;
    local_428 = local_428 & 0xffffffff00000000;
    local_420 = (longlong *)0x0;
    FUN_1400182d0(plVar1,&local_438);
    cVar13 = FUN_1400844b0(plVar1,3000);
    if ((cVar13 == '\0') && ((HANDLE)*plVar1 != (HANDLE)0xffffffffffffffff)) {
      TerminateProcess((HANDLE)*plVar1,0xffffffff);
    }
    FUN_140084700(plVar1);
    FUN_140084130(plVar1);
    thunk_FUN_14028af80(0);
  }
  *(bool *)(param_1 + 0x85) = pcVar15 == param_2;
  if (param_1[0x2b] == -1) {
    FUN_14000ef10(local_148);
    FUN_14000c990(local_138,"WPEWebIpcHandler");
    FUN_140032190(local_138,DAT_1404e52bc);
    FUN_14000ef10(local_348);
    local_388 = 0;
    uStack_380 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    FUN_14011c910(&local_388,&DAT_140489930,param_1[0x86]);
    uVar22 = FUN_14000c990(local_338,"-parenthwnd");
    uVar22 = FUN_14000c990(uVar22,&DAT_1404738a8);
    FUN_14000c990(uVar22,&local_388);
    FUN_14000c990(local_338," -mainwelaunch");
    bVar3 = *(byte *)((longlong)param_1 + 0xa6);
    FUN_14000ef10(local_248);
    uVar22 = FUN_14000c990(local_238,"monitor");
    FUN_140032190(uVar22,*(undefined1 *)((longlong)param_1 + 0xa4));
    if (*(char *)((longlong)param_1 + 0xa5) != '\0') {
      uVar22 = FUN_14000c990(local_238,&DAT_140486bbc);
      FUN_140032190(uVar22,*(undefined1 *)((longlong)param_1 + 0xa5));
    }
    if ((bVar3 & 0x10) != 0) {
      FUN_14000c990(local_138,"screensaver");
      FUN_14000c990(local_338," -screensaver");
      FUN_14000c990(local_238,"Screensaver");
    }
    uVar22 = FUN_14000c990(local_338," -cacheId ");
    local_448 = 0;
    local_440 = 0xf;
    uStack_450 = 0;
    local_458 = (undefined8 *)0x0;
    if ((((byte)local_1c0 & 0x22) == 2) || (uVar26 = *local_1f0, uVar26 == 0)) {
      if (((local_1c0 & 4) == 0) && (*local_1f8 != 0)) {
        lVar18 = *local_218;
        uVar26 = (longlong)*local_1e0 + *local_1f8;
        goto LAB_14011a571;
      }
    }
    else {
      lVar18 = *local_210;
      if (uVar26 < local_1c8) {
        uVar26 = local_1c8;
      }
LAB_14011a571:
      if (lVar18 != 0) {
        FUN_14000f880(&local_458,lVar18,uVar26 - lVar18);
      }
    }
    FUN_14000cbc0(uVar22,&local_458);
    if (0xf < local_440) {
      uVar26 = local_440 + 1;
      puVar20 = local_458;
      if (0xfff < uVar26) {
        puVar20 = (undefined8 *)local_458[-1];
        if (0x1f < (ulonglong)((longlong)local_458 + (-8 - (longlong)puVar20))) goto LAB_14011addf;
        uVar26 = local_440 + 0x28;
      }
      thunk_FUN_14028af80(puVar20,uVar26);
    }
    local_448 = 0;
    local_440 = 0xf;
    local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffffffffff00);
    uVar22 = (**(code **)(*param_1 + 0x98))(param_1,&local_438);
    uVar22 = FUN_140086de0(uVar22,"general","");
    FUN_140085090(local_3b0,uVar22);
    FUN_140085440(&local_438);
    lVar18 = FUN_140086de0(local_3b0,"resolution","");
    lVar19 = FUN_140086de0(local_3b0,"cefcommandline","");
    if (*(char *)(lVar18 + 8) == '\x04') {
      bVar32 = true;
      puVar20 = (undefined8 *)FUN_140085cc0(lVar18,&local_438);
      plVar1 = puVar20 + 2;
      if (0xf < (ulonglong)puVar20[3]) {
        puVar20 = (undefined8 *)*puVar20;
      }
      if ((*plVar1 != 4) || (iVar14 = memcmp(puVar20,&DAT_1404893a8,4), iVar14 != 0))
      goto LAB_14011a69a;
      bVar5 = true;
    }
    else {
LAB_14011a69a:
      bVar5 = false;
    }
    if (bVar32) {
      if (0xf < local_420) {
        uVar26 = (longlong)local_420 + 1;
        puVar20 = local_438;
        if (0xfff < uVar26) {
          puVar20 = (undefined8 *)local_438[-1];
          if (0x1f < (ulonglong)((longlong)local_438 + (-8 - (longlong)puVar20)))
          goto LAB_14011addf;
          uVar26 = (longlong)local_420 + 0x28;
        }
        thunk_FUN_14028af80(puVar20,uVar26);
      }
      local_428 = 0;
      local_420 = (longlong *)0xf;
      local_438 = (undefined **)((ulonglong)local_438 & 0xffffffffffffff00);
    }
    if (*(char *)(lVar19 + 8) == '\x04') {
      FUN_140085cc0(lVar19,&local_3f8);
    }
    else {
      local_3e8 = 0;
      uStack_3f0 = 0;
      local_3f8 = (char ****)0x0;
      local_3e0 = 0xf;
    }
    if (bVar5) {
      FUN_14000c990(local_338," -halfresolution");
    }
    uVar22 = FUN_14000c990(local_338," -loglevel ");
    FUN_140032190(uVar22,DAT_1404e52b8);
    if ((*(byte *)((longlong)param_1 + 0xa6) & 8) != 0) {
      FUN_14000c990(local_338," -hideCursor");
    }
    uVar26 = local_3e0;
    pppppcVar29 = (char *****)local_3f8;
    if ((char)param_1[0x87] != '\0') {
      if (local_3e0 < 0x58) {
        uVar17 = 0x7fffffffffffffff;
        if (0x7fffffffffffffff - (local_3e0 >> 1) < local_3e0) {
          uVar24 = 0x8000000000000027;
LAB_14011a7e3:
          ppppcVar21 = (char ****)FUN_14028af20(uVar24);
          if (ppppcVar21 == (char ****)0x0) goto LAB_14011addf;
          pppppcVar29 = (char *****)((longlong)ppppcVar21 + 0x27U & 0xffffffffffffffe0);
          pppppcVar29[-1] = ppppcVar21;
        }
        else {
          uVar2 = (local_3e0 >> 1) + local_3e0;
          uVar17 = 0x5f;
          if (0x5f < uVar2) {
            uVar17 = uVar2;
          }
          uVar2 = uVar17 + 1;
          if (uVar2 == 0) {
            pppppcVar29 = (char *****)0x0;
          }
          else {
            if (0xfff < uVar2) {
              uVar24 = uVar17 + 0x28;
              if (uVar24 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14011a7e3;
            }
            pppppcVar29 = (char *****)FUN_14028af20(uVar2);
          }
        }
        uVar7 = s___enable_media_stream___enable_u_1404899d0._24_8_;
        uVar6 = s___enable_media_stream___enable_u_1404899d0._16_8_;
        uVar22 = s___enable_media_stream___enable_u_1404899d0._8_8_;
        local_3e8 = 0x58;
        *pppppcVar29 = (char ****)s___enable_media_stream___enable_u_1404899d0._0_8_;
        pppppcVar29[1] = (char ****)uVar22;
        uVar8 = s___enable_media_stream___enable_u_1404899d0._40_8_;
        uVar22 = s___enable_media_stream___enable_u_1404899d0._32_8_;
        pppppcVar29[2] = (char ****)uVar6;
        pppppcVar29[3] = (char ****)uVar7;
        uVar7 = s___enable_media_stream___enable_u_1404899d0._56_8_;
        uVar6 = s___enable_media_stream___enable_u_1404899d0._48_8_;
        pppppcVar29[4] = (char ****)uVar22;
        pppppcVar29[5] = (char ****)uVar8;
        uVar11 = s___enable_media_stream___enable_u_1404899d0._76_4_;
        uVar10 = s___enable_media_stream___enable_u_1404899d0._72_4_;
        uVar9 = s___enable_media_stream___enable_u_1404899d0._68_4_;
        uVar31 = s___enable_media_stream___enable_u_1404899d0._64_4_;
        pppppcVar29[6] = (char ****)uVar6;
        pppppcVar29[7] = (char ****)uVar7;
        uVar22 = s___enable_media_stream___enable_u_1404899d0._80_8_;
        *(undefined4 *)(pppppcVar29 + 8) = uVar31;
        *(undefined4 *)((longlong)pppppcVar29 + 0x44) = uVar9;
        *(undefined4 *)(pppppcVar29 + 9) = uVar10;
        *(undefined4 *)((longlong)pppppcVar29 + 0x4c) = uVar11;
        pppppcVar29[10] = (char ****)uVar22;
        *(char *)(pppppcVar29 + 0xb) = '\0';
        local_3e0 = uVar17;
        if (0xf < uVar26) {
          uVar17 = uVar26 + 1;
          pppppcVar25 = (char *****)local_3f8;
          if (0xfff < uVar17) {
            pppppcVar25 = (char *****)local_3f8[-1];
            if ((char *)0x1f < (char *)((longlong)local_3f8 + (-8 - (longlong)pppppcVar25)))
            goto LAB_14011addf;
            uVar17 = uVar26 + 0x28;
          }
          thunk_FUN_14028af80(pppppcVar25,uVar17);
        }
      }
      else {
        local_3e8 = 0x58;
        pppppcVar29 = &local_3f8;
        if (0xf < local_3e0) {
          pppppcVar29 = (char *****)local_3f8;
        }
        FUN_1404210f0(pppppcVar29,
                      "--enable-media-stream --enable-usermedia-screen-capturing --use-fake-ui-for-media-stream"
                      ,0x58);
        *(char *)(pppppcVar29 + 0xb) = '\0';
        pppppcVar29 = (char *****)local_3f8;
      }
    }
    local_3f8 = (char ****)pppppcVar29;
    if (local_3e8 != 0) {
      uVar22 = FUN_14000c990(local_338," -cefcommandline ");
      FUN_14000cbc0(uVar22,&local_3f8);
    }
    local_438 = &PTR_LAB_140489bc8;
    pcStack_430 = FUN_14011b0b0;
    local_428 = local_428 & 0xffffffffffffff00;
    local_400 = &local_438;
    local_420 = param_1;
    FUN_140082060(param_1 + 0x39,&local_438);
    local_428 = 0;
    local_420 = (longlong *)0xf;
    pcStack_430 = (code *)0x0;
    local_438 = (undefined **)0x0;
    if ((((byte)local_c0 & 0x22) == 2) || (uVar26 = *local_f0, uVar26 == 0)) {
      if (((local_c0 & 4) == 0) && (*local_f8 != 0)) {
        lVar18 = *local_118;
        uVar26 = (longlong)*local_e0 + *local_f8;
        goto LAB_14011a9b5;
      }
    }
    else {
      lVar18 = *local_110;
      if (uVar26 < local_c8) {
        uVar26 = local_c8;
      }
LAB_14011a9b5:
      if (lVar18 != 0) {
        FUN_14000f880(&local_438,lVar18,uVar26 - lVar18);
      }
    }
    local_448 = 0;
    puVar20 = &local_438;
    if (0xf < local_420) {
      puVar20 = local_438;
    }
    local_440 = 0xf;
    uStack_450 = 0;
    local_458 = (undefined8 *)0x0;
    if ((((byte)local_2c0 & 0x22) == 2) || (uVar26 = *local_2f0, uVar26 == 0)) {
      if (((local_2c0 & 4) == 0) && (*local_2f8 != 0)) {
        lVar18 = *local_318;
        uVar26 = (longlong)*local_2e0 + *local_2f8;
        goto LAB_14011aa57;
      }
    }
    else {
      lVar18 = *local_310;
      if (uVar26 < local_2c8) {
        uVar26 = local_2c8;
      }
LAB_14011aa57:
      if (lVar18 != 0) {
        FUN_14000f880(&local_458,lVar18,uVar26 - lVar18);
      }
    }
    puVar28 = &local_458;
    if (0xf < local_440) {
      puVar28 = local_458;
    }
    pcVar27 = "bin/webwallpaper64.exe";
    if (pcVar15 == param_2) {
      pcVar27 = "bin/edgewallpaper64.exe";
    }
    FUN_1400832c0(param_1 + 0x2b,pcVar27,puVar28,puVar20);
    if (0xf < local_440) {
      uVar26 = local_440 + 1;
      puVar20 = local_458;
      if (0xfff < uVar26) {
        puVar20 = (undefined8 *)local_458[-1];
        if (0x1f < (ulonglong)((longlong)local_458 + (-8 - (longlong)puVar20))) goto LAB_14011addf;
        uVar26 = local_440 + 0x28;
      }
      thunk_FUN_14028af80(puVar20,uVar26);
    }
    if (0xf < local_420) {
      uVar26 = (longlong)local_420 + 1;
      puVar20 = local_438;
      if (0xfff < uVar26) {
        puVar20 = (undefined8 *)local_438[-1];
        if (0x1f < (ulonglong)((longlong)local_438 + (-8 - (longlong)puVar20))) goto LAB_14011addf;
        uVar26 = (longlong)local_420 + 0x28;
      }
      thunk_FUN_14028af80(puVar20,uVar26);
    }
    DAT_1404e52bc = DAT_1404e52bc + 1;
    iVar23 = 1;
    LOCK();
    iVar14 = (int)param_1[0x28];
    *(int *)(param_1 + 0x28) = 1;
    UNLOCK();
    while (iVar14 != 0) {
      iVar14 = (int)param_1[0x28];
      while (iVar14 != 0) {
        iVar14 = iVar23;
        if (iVar23 == 0) {
LAB_14011ab59:
          iVar23 = iVar23 * 2;
        }
        else {
          do {
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          if (iVar23 < 0x40) goto LAB_14011ab59;
          iVar23 = 0x40;
        }
        iVar14 = (int)param_1[0x28];
      }
      LOCK();
      iVar14 = (int)param_1[0x28];
      *(int *)(param_1 + 0x28) = 1;
      UNLOCK();
    }
    iStack_3d0 = *(int *)((longlong)param_1 + 0x14c) - *(int *)((longlong)param_1 + 0x144);
    iStack_3cc = (int)param_1[0x2a] - (int)param_1[0x29];
    pcStack_430 = (code *)&local_3d8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    local_3d8 = 0;
    local_428 = local_428 & 0xffffffff00000000;
    local_420 = (longlong *)0x0;
    local_438 = (undefined **)0x1000000002;
    FUN_1400182d0(param_1 + 0x2b,&local_438);
    local_448 = 0;
    local_440 = 0;
    local_458 = (undefined8 *)0x0;
    uStack_450 = 0;
    sVar16 = strlen(param_2);
    FUN_140017480(&local_458,param_2,sVar16);
    uVar2 = local_440;
    uVar17 = local_448;
    puVar20 = local_458;
    pcStack_430 = (code *)0x0;
    uVar26 = local_428 >> 0x20;
    local_428 = local_428 & 0xffffffff00000000;
    local_420 = (longlong *)0x0;
    local_438 = (undefined **)0x1;
    if (local_448 != 0) {
      uVar31 = (undefined4)local_448;
      local_428 = CONCAT44((int)uVar26,uVar31);
      uVar26 = thunk_FUN_14028af20(local_448 & 0xffffffff);
      puVar28 = &local_458;
      if (0xf < uVar2) {
        puVar28 = puVar20;
      }
      local_420 = (longlong *)uVar26;
      FUN_1404210f0(uVar26,puVar28,uVar17 & 0xffffffff);
      local_438 = (undefined **)CONCAT44(uVar31,(undefined4)local_438);
      pcStack_430 = (code *)uVar26;
    }
    pcVar4 = pcStack_430;
    if (0xf < uVar2) {
      uVar26 = uVar2 + 1;
      puVar28 = puVar20;
      if (0xfff < uVar26) {
        puVar28 = (undefined8 *)puVar20[-1];
        if (0x1f < (ulonglong)((longlong)puVar20 + (-8 - (longlong)puVar28))) goto LAB_14011addf;
        uVar26 = uVar2 + 0x28;
      }
      thunk_FUN_14028af80(puVar28,uVar26);
    }
    FUN_1400182d0(param_1 + 0x2b,&local_438);
    FUN_14011b950(param_1);
    thunk_FUN_14028af80(pcVar4);
    thunk_FUN_14028af80(0);
    if (0xf < local_3e0) {
      uVar26 = local_3e0 + 1;
      pppppcVar29 = (char *****)local_3f8;
      if (0xfff < uVar26) {
        pppppcVar29 = (char *****)local_3f8[-1];
        if ((char *)0x1f < (char *)((longlong)local_3f8 + (-8 - (longlong)pppppcVar29)))
        goto LAB_14011addf;
        uVar26 = local_3e0 + 0x28;
      }
      thunk_FUN_14028af80(pppppcVar29,uVar26);
    }
    local_3e8 = 0;
    local_3e0 = 0xf;
    local_3f8 = (char ****)((ulonglong)local_3f8 & 0xffffffffffffff00);
    FUN_140085440(local_3b0);
    FUN_1400056d0(local_248);
    FUN_1400056d0(local_348);
    FUN_1400056d0(local_148);
  }
  else {
    local_428 = 0;
    local_420 = (longlong *)0x0;
    local_438 = (undefined **)0x0;
    pcStack_430 = (code *)0x0;
    sVar16 = strlen(param_2);
    FUN_140017480(&local_438,param_2,sVar16);
    plVar1 = local_420;
    uVar26 = local_428;
    puVar20 = local_438;
    uVar12 = local_448._4_4_;
    local_458 = (undefined8 *)0x1;
    uStack_450 = 0;
    local_448 = (ulonglong)local_448._4_4_ << 0x20;
    local_440 = 0;
    if (local_428 != 0) {
      uVar31 = (undefined4)local_428;
      local_448 = CONCAT44(uVar12,uVar31);
      uVar17 = thunk_FUN_14028af20(local_428 & 0xffffffff);
      puVar28 = &local_438;
      if (0xf < plVar1) {
        puVar28 = puVar20;
      }
      local_440 = uVar17;
      FUN_1404210f0(uVar17,puVar28,uVar26 & 0xffffffff);
      local_458 = (undefined8 *)CONCAT44(uVar31,(undefined4)local_458);
      uStack_450 = uVar17;
    }
    uVar26 = uStack_450;
    if (0xf < plVar1) {
      uVar17 = (longlong)plVar1 + 1;
      puVar28 = puVar20;
      if (0xfff < uVar17) {
        puVar28 = (undefined8 *)puVar20[-1];
        if ((ulonglong)((longlong)puVar20 + (-8 - (longlong)puVar28)) < 0x20) {
          uVar17 = (longlong)plVar1 + 0x28;
          goto LAB_14011a34c;
        }
LAB_14011addf:
        pcVar4 = (code *)swi(0x29);
        iVar14 = (*pcVar4)(5);
        puVar30 = auStack_470;
        goto LAB_14011ade6;
      }
LAB_14011a34c:
      thunk_FUN_14028af80(puVar28,uVar17);
    }
    iVar14 = FUN_140290d80(param_1 + 0x94);
    if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    iVar14 = *(int *)((longlong)param_1 + 0x4ec);
    if (iVar14 == 0x7fffffff) {
LAB_14011ade6:
      *(int *)((longlong)param_1 + 0x4ec) = iVar14 + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar30 + -8) = &UNK_14011adf8;
      FUN_140290d30(6);
    }
    FUN_1400182d0(param_1 + 0x2b,&local_458);
    FUN_140290ea0(param_1 + 0x94);
    thunk_FUN_14028af80(uVar26);
  }
  lVar18 = *param_1;
  uVar22 = (**(code **)(lVar18 + 0x98))(param_1,local_3b0);
  uVar22 = FUN_140086de0(uVar22,"wproperties","");
  uVar22 = FUN_140085090(&local_438,uVar22);
  (**(code **)(lVar18 + 0x80))(param_1,uVar22);
  FUN_140085440(local_3b0);
  lVar18 = *param_1;
  uVar22 = (**(code **)(lVar18 + 0x98))(param_1,local_3b0);
  uVar22 = FUN_140086de0(uVar22,"general","");
  uVar22 = FUN_140085090(&local_438,uVar22);
  (**(code **)(lVar18 + 0x88))(param_1,uVar22);
  FUN_140085440(local_3b0);
  FUN_14011ae10(param_1);
  return;
}

