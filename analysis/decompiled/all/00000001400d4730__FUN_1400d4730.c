// Function: FUN_1400d4730
// Addr: 1400d4730
// Size: 2357 bytes


undefined8 FUN_1400d4730(undefined8 *param_1,undefined1 param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  char *pcVar24;
  char *pcVar25;
  ulonglong uVar26;
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [24];
  undefined8 local_478;
  undefined8 ****local_470;
  undefined8 ****local_468;
  undefined8 uStack_460;
  longlong local_458;
  ulonglong uStack_450;
  ulonglong local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  ulonglong local_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  undefined8 ****local_410;
  undefined8 uStack_408;
  longlong local_400;
  ulonglong local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  char local_3de;
  undefined2 local_3dd;
  char local_3db [3];
  undefined8 ****local_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***local_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 *local_3b8;
  undefined1 local_3b0 [16];
  ulonglong local_3a0;
  longlong *local_398;
  char *local_390;
  uint local_388;
  char local_377;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  undefined1 local_340;
  longlong *local_338;
  longlong lStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  int iStack_2dc;
  longlong local_2d8 [2];
  undefined1 local_2c8 [128];
  undefined **local_248 [12];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_198;
  ulonglong *local_190;
  int *local_180;
  ulonglong local_168;
  uint local_160;
  undefined1 local_e8 [28];
  uint local_cc;
  
  puVar20 = auStack_498;
  uVar21 = 0;
  local_418 = 0;
  local_428 = 0;
  lStack_420 = 0;
  (**(code **)(*param_3 + 0x18))(param_3,local_e8);
  if (local_cc != 0) {
    do {
      (**(code **)(*param_3 + 0x38))(param_3,uVar21,&local_390);
      if ((local_377 == '\0') && (iVar7 = FUN_1402c10d0(local_390,"BLENDINDICES"), iVar7 != 0)) {
        pcVar25 = local_3db;
        uVar14 = local_388;
        if (local_388 < 10) {
          local_3dd._1_1_ = (char)local_388 + '0';
          pcVar25 = (char *)((longlong)&local_3dd + 1);
        }
        else {
          do {
            pcVar24 = pcVar25;
            pcVar25 = pcVar24 + -2;
            uVar5 = uVar14 / 100;
            *(undefined2 *)pcVar25 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(uVar14 % 100) * 2)
            ;
            uVar14 = uVar5;
          } while (9 < uVar5);
          if (uVar5 != 0) {
            pcVar25 = pcVar24 + -3;
            *pcVar25 = (char)uVar5 + '0';
          }
        }
        FUN_140053d10(&local_3b8,pcVar25,local_3db);
        pcVar25 = local_390;
        local_438 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_430 = 0;
        sVar8 = strlen(local_390);
        FUN_140017480(&local_448,pcVar25,sVar8);
        puVar9 = (undefined4 *)FUN_140035e80(&local_448,0,&DAT_140486860,3);
        local_368 = *puVar9;
        uStack_364 = puVar9[1];
        uStack_360 = puVar9[2];
        uStack_35c = puVar9[3];
        local_358 = puVar9[4];
        uStack_354 = puVar9[5];
        uStack_350 = puVar9[6];
        uStack_34c = puVar9[7];
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0xf;
        *(undefined1 *)puVar9 = 0;
        FUN_1400ea190(&local_468,local_358,&local_368,&local_3b8);
        if (uStack_450 - local_458 < 3) {
          local_478 = 3;
          pppppuVar10 = (undefined8 *****)FUN_140053110(&local_468,3,param_2,&DAT_140486864);
        }
        else {
          pppppuVar10 = &local_468;
          if (0xf < uStack_450) {
            pppppuVar10 = (undefined8 *****)local_468;
          }
          lVar22 = (longlong)pppppuVar10 + local_458;
          local_458 = local_458 + 3;
          FUN_1404210f0(lVar22,&DAT_140486864,3);
          pppppuVar10 = &local_468;
          *(undefined1 *)(lVar22 + 3) = 0;
        }
        local_3c8 = (undefined8 ***)0x0;
        local_3d8 = (undefined8 ****)0x0;
        pppuStack_3d0 = (undefined8 ***)0x0;
        pppuStack_3c0 = (undefined8 ***)0x0;
        local_3d8 = *pppppuVar10;
        pppuStack_3d0 = pppppuVar10[1];
        local_3c8 = pppppuVar10[2];
        pppuStack_3c0 = pppppuVar10[3];
        pppppuVar10[2] = (undefined8 ****)0x0;
        pppppuVar10[3] = (undefined8 ****)0xf;
        *(undefined1 *)pppppuVar10 = 0;
        if (0xf < uStack_450) {
          uVar16 = uStack_450 + 1;
          pppppuVar10 = (undefined8 *****)local_468;
          if (0xfff < uVar16) {
            pppppuVar10 = (undefined8 *****)local_468[-1];
            if (0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pppppuVar10)))
            goto LAB_1400d5020;
            uVar16 = uStack_450 + 0x28;
          }
          thunk_FUN_14028af80(pppppuVar10,uVar16);
        }
        uVar16 = CONCAT44(uStack_34c,uStack_350);
        local_458 = 0;
        uStack_450 = 0xf;
        local_468 = (undefined8 ****)((ulonglong)local_468 & 0xffffffffffffff00);
        if (0xf < uVar16) {
          lVar23 = CONCAT44(uStack_364,local_368);
          uVar17 = uVar16 + 1;
          lVar22 = lVar23;
          if (0xfff < uVar17) {
            lVar22 = *(longlong *)(lVar23 + -8);
            if (0x1f < (lVar23 - lVar22) - 8U) goto LAB_1400d5020;
            uVar17 = uVar16 + 0x28;
          }
          thunk_FUN_14028af80(lVar22,uVar17);
        }
        if (0xf < local_430) {
          uVar17 = local_430 + 1;
          uVar16 = local_448;
          if (0xfff < uVar17) {
            uVar16 = *(ulonglong *)(local_448 - 8);
            if (0x1f < (local_448 - uVar16) - 8) goto LAB_1400d5020;
            uVar17 = local_430 + 0x28;
          }
          thunk_FUN_14028af80(uVar16,uVar17);
        }
        local_438 = 0;
        local_430 = 0xf;
        local_448 = local_448 & 0xffffffffffffff00;
        if (0xf < local_3a0) {
          uVar16 = local_3a0 + 1;
          puVar11 = local_3b8;
          if (0xfff < uVar16) {
            puVar11 = (undefined8 *)local_3b8[-1];
            if (0x1f < (ulonglong)((longlong)local_3b8 + (-8 - (longlong)puVar11)))
            goto LAB_1400d5020;
            uVar16 = local_3a0 + 0x28;
          }
          thunk_FUN_14028af80(puVar11,uVar16);
        }
        local_3b8 = (undefined8 *)0x0;
        FUN_1400de8b0(local_3b0);
        pppppuVar10 = &local_3d8;
        if ((undefined8 ****)0xf < pppuStack_3c0) {
          pppppuVar10 = (undefined8 *****)local_3d8;
        }
        pppppuVar18 = &local_3d8;
        if ((undefined8 ****)0xf < pppuStack_3c0) {
          pppppuVar18 = (undefined8 *****)local_3d8;
        }
        FUN_1400de9e0(&local_3b8,pppppuVar18,(longlong)pppppuVar10 + (longlong)local_3c8);
        if (lStack_420 == local_418) {
          FUN_1400df700(&local_428,lStack_420,&local_3b8);
        }
        else {
          FUN_1400e6b50(lStack_420,&local_3b8);
          lStack_420 = lStack_420 + 0x28;
        }
        if (local_3b8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_3b8 + 0x2c);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar11 = local_3b8;
          if (iVar7 == 1) {
            while (puVar11 != (undefined8 *)0x0) {
              puVar3 = (undefined8 *)puVar11[2];
              puVar11[2] = 0;
              (**(code **)*puVar11)(puVar11,1);
              puVar11 = puVar3;
            }
          }
        }
        local_3b8 = (undefined8 *)0x0;
        if ((local_398 != (longlong *)0x0) &&
           (puVar11 = (undefined8 *)(**(code **)(*local_398 + 0x10))(), puVar11 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar11)(puVar11,1);
        }
        if ((undefined8 ****)0xf < pppuStack_3c0) {
          ppppuVar19 = (undefined8 ****)((longlong)pppuStack_3c0 + 1);
          pppppuVar10 = (undefined8 *****)local_3d8;
          if ((undefined8 ****)0xfff < ppppuVar19) {
            pppppuVar10 = (undefined8 *****)local_3d8[-1];
            if (0x1f < (ulonglong)((longlong)local_3d8 + (-8 - (longlong)pppppuVar10)))
            goto LAB_1400d5020;
            ppppuVar19 = (undefined8 ****)(pppuStack_3c0 + 5);
          }
          thunk_FUN_14028af80(pppppuVar10,ppppuVar19);
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < local_cc);
  }
  if (local_428 == lStack_420) {
    uVar13 = 0;
    goto LAB_1400d503f;
  }
  local_348 = 0;
  local_338 = (longlong *)0x0;
  lStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_340 = 0;
  local_318 = 0;
  local_310 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  FUN_1400de280(&local_390,"\\bVS_INPUT\\b");
  cVar6 = FUN_1400dc300(param_1,&local_348,&local_390);
  puVar20 = auStack_498;
  if (cVar6 == '\0') {
LAB_1400d5027:
    uVar13 = 0;
  }
  else {
    uVar16 = param_1[2];
    lVar22 = lStack_330 - (longlong)local_338 >> 0x3f;
    plVar12 = &local_2f0;
    if ((lStack_330 - (longlong)local_338) / 0x18 + lVar22 != lVar22) {
      plVar12 = local_338;
    }
    puVar11 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
    }
    puVar20 = auStack_498;
    if ((((uVar16 < 2) ||
         (uVar17 = *plVar12 - local_348, puVar20 = auStack_498, uVar16 - 2 < uVar17)) ||
        (lVar22 = thunk_FUN_14028e750((longlong)puVar11 + uVar17,uVar16 + (longlong)puVar11,
                                      &DAT_140486868,2), puVar20 = auStack_498,
        lVar22 == uVar16 + (longlong)puVar11)) ||
       (puVar20 = auStack_498, lVar22 - (longlong)puVar11 == -1)) goto LAB_1400d5027;
    local_438 = 0;
    local_430 = 0;
    local_448 = 0;
    uStack_440 = 0;
    if ((ulonglong)param_1[2] < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_140012940();
    }
    uVar15 = param_1[2] - uVar17;
    uVar26 = ((lVar22 - (longlong)puVar11) + 2) - uVar17;
    uVar16 = uVar26;
    if (uVar15 < uVar26) {
      uVar16 = uVar15;
    }
    puVar11 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
    }
    FUN_140017480(&local_448,(longlong)puVar11 + uVar17,uVar16);
    FUN_14000ef10(local_1e8);
    FUN_1400de740(local_2d8,&local_448);
    local_458 = 0;
    uStack_460 = 0;
    local_468 = (undefined8 *****)0x0;
    uStack_450 = 0xf;
    plVar12 = (longlong *)FUN_1400dca50(local_2d8,&local_468);
    bVar2 = *(byte *)((longlong)*(int *)(*plVar12 + 4) + 0x10 + (longlong)plVar12);
    lVar22 = lStack_420;
    while (lStack_420 = lVar22, lVar23 = local_428, (bVar2 & 6) == 0) {
      for (; lVar23 != lVar22; lVar23 = lVar23 + 0x28) {
        local_470 = &local_468;
        if (0xf < uStack_450) {
          local_470 = local_468;
        }
        uVar16 = (ulonglong)local_478 >> 0x20;
        local_478 = CONCAT44((int)uVar16,0x10);
        cVar6 = FUN_1400deb10(local_470,local_458 + (longlong)local_470,0,lVar23);
        if (cVar6 != '\0') goto LAB_1400d4dae;
      }
      uVar13 = FUN_14000cbc0(local_1d8,&local_468);
      FUN_14000c990(uVar13,&DAT_1404736e4);
LAB_1400d4dae:
      plVar12 = (longlong *)FUN_1400dca50(local_2d8,&local_468);
      lVar22 = lStack_420;
      bVar2 = *(byte *)((longlong)plVar12 + (longlong)*(int *)(*plVar12 + 4) + 0x10);
    }
    local_400 = 0;
    local_3f8 = 0xf;
    uStack_408 = 0;
    local_410 = (undefined8 *****)0x0;
    local_3f0 = 0;
    uStack_3e8 = 0;
    if ((((byte)local_160 & 0x22) == 2) || (uVar16 = *local_190, uVar16 == 0)) {
      if ((local_160 & 4) == 0) {
        if (*local_198 == 0) {
          lVar23 = 0;
          lVar22 = 0;
        }
        else {
          lVar22 = *local_1b8;
          lVar23 = ((longlong)*local_180 + *local_198) - lVar22;
        }
        goto LAB_1400d4e6b;
      }
    }
    else {
      lVar22 = *local_1b0;
      if (uVar16 < local_168) {
        uVar16 = local_168;
      }
      lVar23 = uVar16 - lVar22;
LAB_1400d4e6b:
      if ((lVar22 != 0) && (FUN_14000f880(&local_410,lVar22,lVar23), local_400 != 0)) {
        pppppuVar10 = &local_410;
        if (0xf < local_3f8) {
          pppppuVar10 = (undefined8 *****)local_410;
        }
        lVar22 = local_400 + -1;
        if (*(char *)(lVar22 + (longlong)pppppuVar10) == '\n') {
          pppppuVar10 = &local_410;
          if (0xf < local_3f8) {
            pppppuVar10 = (undefined8 *****)local_410;
          }
          local_400 = lVar22;
          *(undefined1 *)(lVar22 + (longlong)pppppuVar10) = 0;
        }
      }
    }
    FUN_140049580(param_1,uVar17,uVar26,&local_410);
    if (0xf < local_3f8) {
      uVar16 = local_3f8 + 1;
      pppppuVar10 = (undefined8 *****)local_410;
      if (uVar16 < 0x1000) {
LAB_1400d4efb:
        thunk_FUN_14028af80(pppppuVar10,uVar16);
        goto LAB_1400d4f00;
      }
      pppppuVar10 = (undefined8 *****)local_410[-1];
      if ((ulonglong)((longlong)local_410 + (-8 - (longlong)pppppuVar10)) < 0x20) {
        uVar16 = local_3f8 + 0x28;
        goto LAB_1400d4efb;
      }
LAB_1400d5020:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar20 = auStack_490;
      goto LAB_1400d5027;
    }
LAB_1400d4f00:
    if (0xf < uStack_450) {
      uVar16 = uStack_450 + 1;
      pppppuVar10 = (undefined8 *****)local_468;
      if (0xfff < uVar16) {
        pppppuVar10 = (undefined8 *****)local_468[-1];
        if (0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pppppuVar10)))
        goto LAB_1400d5020;
        uVar16 = uStack_450 + 0x28;
      }
      thunk_FUN_14028af80(pppppuVar10,uVar16);
    }
    uVar13 = 1;
    local_458 = 0;
    uStack_450 = 0xf;
    local_468 = (undefined8 ****)((ulonglong)local_468 & 0xffffffffffffff00);
    *(undefined ***)((longlong)local_2d8 + (longlong)*(int *)(local_2d8[0] + 4)) =
         &PTR_LAB_140485600;
    *(int *)((longlong)&iStack_2dc + (longlong)*(int *)(local_2d8[0] + 4)) =
         *(int *)(local_2d8[0] + 4) + -0x90;
    FUN_140014ae0(local_2c8);
    *(undefined ***)((longlong)local_2d8 + (longlong)*(int *)(local_2d8[0] + 4)) =
         &PTR_LAB_140474098;
    *(int *)((longlong)&iStack_2dc + (longlong)*(int *)(local_2d8[0] + 4)) =
         *(int *)(local_2d8[0] + 4) + -0x18;
    local_248[0] = std::ios_base::vftable;
    FUN_14028c430(local_248);
    FUN_1400056d0(local_1e8);
    puVar20 = auStack_498;
    if (0xf < local_430) {
      uVar17 = local_430 + 1;
      uVar16 = local_448;
      if (0xfff < uVar17) {
        uVar16 = *(ulonglong *)(local_448 - 8);
        if (0x1f < (local_448 - uVar16) - 8) goto LAB_1400d5020;
        uVar17 = local_430 + 0x28;
      }
      thunk_FUN_14028af80(uVar16,uVar17);
      puVar20 = auStack_498;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x1400d5032;
  FUN_1400de1e0(&local_390);
  *(undefined8 *)(puVar20 + -8) = 0x1400d503b;
  FUN_1400dd8f0(&local_338);
LAB_1400d503f:
  *(undefined8 *)(puVar20 + -8) = 0x1400d5049;
  FUN_1400dd980(puVar20 + 0x70);
  return uVar13;
}

