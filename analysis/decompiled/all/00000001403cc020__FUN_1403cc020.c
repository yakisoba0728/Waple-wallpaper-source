// Function: FUN_1403cc020
// Addr: 1403cc020
// Size: 2140 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1403cc020(longlong param_1,longlong *param_2,ulonglong param_3,int *param_4,float *param_5,
             int param_6,uint *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  char cVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_488 [32];
  int *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  uint *local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  longlong *local_428;
  longlong *local_420;
  longlong *local_418;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined **local_3c0;
  longlong local_3b8;
  undefined **ppuStack_3b0;
  undefined1 local_3a8;
  uint7 uStack_3a7;
  undefined4 uStack_3a0;
  uint uStack_39c;
  undefined8 local_398;
  undefined1 uStack_390;
  uint7 uStack_38f;
  undefined4 local_388;
  uint uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  uint local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_368;
  undefined **ppuStack_360;
  longlong local_358;
  ulonglong uStack_350;
  undefined8 local_348;
  longlong lStack_340;
  undefined4 local_338;
  uint uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  uint local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  undefined8 local_308;
  undefined *local_2f8;
  float *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  uint local_2b8 [130];
  ulonglong local_b0;
  
  local_b0 = DAT_1404dc040 ^ (ulonglong)auStack_488;
  plVar19 = (longlong *)(param_3 & 0xffffffff);
  if ((int)param_3 != param_6) {
    uVar14 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
             (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar14 == 0) {
      pbVar12 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar12 = (byte *)((ulonglong)uVar14 + param_1);
    }
    iVar15 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
    if (iVar15 == 1) {
      uVar14 = FUN_1403c70f0(pbVar12,plVar19);
    }
    else {
      if (iVar15 != 2) goto LAB_1403cc3ab;
      uVar14 = FUN_1403c7170(pbVar12,plVar19);
    }
    param_3 = (ulonglong)uVar14;
    if (uVar14 != 0xffffffff) {
      if (*(int *)((longlong)param_2 + 0x34) < 1) {
        return 1;
      }
      if ((int)param_2[6] < 1) {
        return 1;
      }
      *(int *)(param_2 + 6) = (int)param_2[6] + -1;
      local_428 = param_2 + 3;
      local_420 = (longlong *)0x0;
      lVar10 = *local_428;
      *(bool *)local_428 = (char)lVar10 == '\0';
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        param_2[4] = (longlong)&local_428;
      }
      else {
        if ((char)lVar10 == '\0') {
          param_2[4] = *(longlong *)param_2[4];
        }
        local_420 = (longlong *)param_2[5];
        *local_420 = (longlong)&local_428;
      }
      param_2[5] = (longlong)&local_428;
      if (((longlong **)param_2[4] == &local_428) || (((longlong **)param_2[4])[2] != plVar19)) {
        uVar14 = (uint)*(byte *)(param_1 + 0x15) * 0x10000 + (uint)*(byte *)(param_1 + 0x16) * 0x100
                 + (uint)*(byte *)(param_1 + 0x14) * 0x1000000 + (uint)*(byte *)(param_1 + 0x17);
        if (uVar14 == 0) {
          puVar13 = &DAT_14045dd10;
        }
        else {
          puVar13 = (undefined8 *)((ulonglong)uVar14 + param_1);
        }
        local_418 = plVar19;
        FUN_140397a40(puVar13,&local_448);
        FUN_1403958d0(local_2b8);
        puVar8 = param_7;
        if (param_7 == (uint *)0x0) {
          uVar14 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
                   (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
          if (uVar14 == 0) {
            puVar13 = &DAT_14045dd10;
          }
          else {
            puVar13 = (undefined8 *)((ulonglong)uVar14 + param_1);
          }
          uVar14 = (uint)*(byte *)((longlong)puVar13 + 3) * 0x10000 +
                   (uint)*(byte *)((longlong)puVar13 + 4) * 0x100 +
                   (uint)*(byte *)((longlong)puVar13 + 2) * 0x1000000 +
                   (uint)*(byte *)((longlong)puVar13 + 5);
          if (uVar14 == 0) {
            pbVar12 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar12 = (byte *)((ulonglong)uVar14 + (longlong)puVar13);
          }
          uVar14 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
          if (uVar14 == 0) {
            puVar8 = (uint *)&DAT_14045dd10;
          }
          else if (uVar14 < 0x81) {
            local_2b8[0] = uVar14;
            FUN_1403b3730(local_2b8);
            puVar8 = local_2b8;
          }
          else {
            puVar8 = (uint *)_malloc_base(uVar14 * 4 + 4);
            if (puVar8 == (uint *)0x0) {
              puVar8 = (uint *)&DAT_14045dd10;
            }
            else {
              *puVar8 = uVar14;
              FUN_1403b3730(puVar8);
            }
          }
        }
        uVar11 = local_448;
        uVar17 = uStack_440;
        iVar15 = (int)local_438;
        uVar7 = local_438._4_4_;
        while (iVar15 != 0) {
          local_438 = CONCAT44(uVar7,iVar15);
          local_408 = *(undefined8 *)param_5;
          uStack_400 = *(undefined8 *)(param_5 + 2);
          local_3f8 = *(undefined8 *)(param_5 + 4);
          local_318 = *param_4;
          iStack_314 = param_4[1];
          iStack_310 = param_4[2];
          iStack_30c = param_4[3];
          local_308 = *(undefined8 *)(param_4 + 4);
          local_458 = &local_448;
          local_460 = &local_408;
          local_468 = &local_318;
          local_450 = puVar8;
          local_448 = uVar11;
          uStack_440 = uVar17;
          puVar13 = (undefined8 *)FUN_1403cc880(uVar17,&local_3e8,param_2,plVar19);
          uVar11 = *puVar13;
          uVar17 = puVar13[1];
          uVar7 = *(undefined4 *)((longlong)puVar13 + 0x14);
          iVar15 = *(int *)(puVar13 + 2);
        }
        if (((puVar8 != param_7) && (puVar8 != (uint *)&DAT_14045dd10)) && (puVar8 != local_2b8)) {
          thunk_FUN_1402d9040(puVar8);
        }
      }
      local_428[2] = (longlong)local_420;
      if (local_420 != (longlong *)0x0) {
        *local_420 = (longlong)local_428;
      }
      bVar20 = (char)*local_428 == '\0';
      if (!bVar20) {
        local_428[1] = *(longlong *)(local_428[1] + 8);
      }
      *(bool *)local_428 = bVar20;
      return 1;
    }
  }
LAB_1403cc3ab:
  if (param_2[1] == 0) {
    if (param_2[2] != 0) {
      local_448 = *(undefined8 *)param_4;
      uStack_440 = *(undefined8 *)(param_4 + 2);
      local_438 = *(undefined8 *)(param_4 + 4);
      uVar11 = FUN_1403c51f0(*(longlong *)(*param_2 + 0x20) + 0xe8,(int)local_438,param_3);
      local_468 = (int *)&local_448;
      cVar6 = FUN_1403c86d0(uVar11,*param_2,plVar19,&local_318);
      if (cVar6 == '\0') {
        local_448 = *(undefined8 *)param_4;
        uStack_440 = *(undefined8 *)(param_4 + 2);
        local_438 = *(undefined8 *)(param_4 + 4);
        lVar10 = *param_2;
        uVar11 = FUN_140398600(*(longlong *)(lVar10 + 0x20) + 0xf8);
        local_468 = (int *)&local_448;
        cVar6 = FUN_1403c8450(uVar11,lVar10,plVar19,&local_318);
        if (cVar6 == '\0') {
          lVar10 = *param_2;
          uVar11 = FUN_140398510(*(longlong *)(lVar10 + 0x20) + 0xf0);
          cVar6 = FUN_1403c8320(uVar11,lVar10,plVar19,&local_318);
          if (cVar6 == '\0') {
            return 0;
          }
        }
      }
      fVar3 = (float)local_318;
      fVar21 = (float)iStack_314;
      fVar2 = (float)iStack_310 + fVar3;
      fVar4 = (float)iStack_30c + fVar21;
      fVar1 = fVar3;
      if (fVar2 <= fVar3) {
        fVar1 = fVar2;
      }
      fVar22 = fVar21;
      if (fVar4 <= fVar21) {
        fVar22 = fVar4;
      }
      local_408 = CONCAT44(fVar22,fVar1);
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      if (fVar21 <= fVar4) {
        fVar21 = fVar4;
      }
      uStack_400 = CONCAT44(fVar21,fVar3);
      local_448 = *(undefined8 *)param_5;
      uStack_440 = *(undefined8 *)(param_5 + 2);
      local_438._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20);
      local_438 = CONCAT44(local_438._4_4_ * *(float *)(*param_2 + 0x54),
                           (float)*(undefined8 *)(param_5 + 4) * *(float *)(*param_2 + 0x50));
      FUN_14040d000(&local_448,&local_408);
      FUN_14040ee30(param_2[2],&local_408);
    }
    return 1;
  }
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar21 = *(float *)(*param_2 + 0x50) * param_5[4];
  fVar22 = *(float *)(*param_2 + 0x54) * param_5[5];
  puVar9 = DAT_1404e51a0;
  while (local_2f8 = puVar9, DAT_1404e51a0 = local_2f8, local_2f8 == (undefined *)0x0) {
    puVar9 = (undefined *)FUN_1403bbd10();
    local_2f8 = &DAT_1404df0f8;
    if (puVar9 != (undefined *)0x0) {
      local_2f8 = puVar9;
    }
    LOCK();
    bVar20 = DAT_1404e51a0 == (undefined *)0x0;
    puVar9 = local_2f8;
    if (!bVar20) {
      puVar9 = DAT_1404e51a0;
    }
    DAT_1404e51a0 = puVar9;
    UNLOCK();
    if (bVar20) break;
    puVar9 = DAT_1404e51a0;
    if ((local_2f8 != (undefined *)0x0) && (puVar9 = DAT_1404e51a0, local_2f8 != &DAT_1404df0f8)) {
      FUN_140414e70();
      puVar9 = DAT_1404e51a0;
    }
  }
  ppuVar18 = (undefined **)param_2[1];
  local_3d0 = *ppuVar18;
  local_3c8 = ppuVar18[1];
  local_3c0 = ppuVar18 + 2;
  local_2f0 = &local_3e8;
  puVar13 = (undefined8 *)0x0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  if (((fVar1 != DAT_140492704) || (fVar2 != 0.0)) ||
     ((fVar3 != 0.0 || (((fVar4 != DAT_140492704 || (fVar21 != 0.0)) || (fVar22 != 0.0)))))) {
    ppuVar18 = &local_2f8;
  }
  local_3e8 = fVar1;
  local_3e4 = fVar2;
  local_3e0 = fVar3;
  local_3dc = fVar4;
  local_3d8 = fVar21;
  local_3d4 = fVar22;
  lVar10 = FUN_1403c51f0(*(longlong *)(*param_2 + 0x20) + 0xe8);
  uVar14 = uStack_39c;
  if (*(int *)(lVar10 + 0x1c) == 0) {
LAB_1403cc599:
    local_448 = *(undefined8 *)param_4;
    uStack_440 = *(undefined8 *)(param_4 + 2);
    local_438 = *(undefined8 *)(param_4 + 4);
    lVar10 = *param_2;
    uVar11 = FUN_140398600(*(longlong *)(lVar10 + 0x20) + 0xf8);
    local_468 = (int *)&local_448;
    cVar6 = FUN_1403cde20(uVar11,lVar10,plVar19,ppuVar18);
    if (cVar6 == '\0') {
      lVar10 = *param_2;
      uVar11 = FUN_140398510(*(longlong *)(lVar10 + 0x20) + 0xf0);
      local_460 = (undefined8 *)0x0;
      local_468 = (int *)((ulonglong)local_468 & 0xffffffffffffff00);
      cVar6 = FUN_14039b530(uVar11,lVar10,plVar19,ppuVar18);
      if (cVar6 == '\0') {
        uVar16 = 0;
        goto LAB_1403cc61c;
      }
    }
  }
  else {
    local_3b8 = *param_2;
    local_448 = *(undefined8 *)param_4;
    uStack_440 = *(undefined8 *)(param_4 + 2);
    local_438 = *(undefined8 *)(param_4 + 4);
    local_3a8 = 0;
    uStack_39c = uStack_39c & 0xffffff00;
    uStack_390 = 0;
    uStack_384 = uStack_384 & 0xffffff00;
    local_378 = local_378 & 0xffffff00;
    local_358 = (ulonglong)uStack_3a7 << 8;
    uStack_350 = CONCAT44(uVar14,uStack_3a0) & 0xffffff00ffffffff;
    lStack_340 = (ulonglong)uStack_38f << 8;
    local_348 = local_398;
    local_338 = local_388;
    uStack_334 = uStack_384;
    uStack_330 = uStack_380;
    uStack_32c = uStack_37c;
    local_328 = local_378;
    uStack_324 = uStack_374;
    uStack_320 = uStack_370;
    uStack_31c = uStack_36c;
    local_460 = (undefined8 *)(param_2[7] + 0x20);
    local_458 = (undefined8 *)0x0;
    local_468 = (int *)&local_448;
    ppuStack_3b0 = ppuVar18;
    local_368 = local_3b8;
    ppuStack_360 = ppuVar18;
    cVar6 = FUN_140388810(lVar10,local_3b8,plVar19,&local_368);
    if (cVar6 == '\0') goto LAB_1403cc599;
  }
  uVar16 = 1;
LAB_1403cc61c:
  pfVar5 = local_2f0;
  puVar9 = local_2f8;
  if ((int)local_2e8 != 0) {
    if ((local_2e8._4_4_ != local_2e0._4_4_) || ((float)local_2e0 != (float)local_2d8)) {
      local_460 = puVar13;
      if (*(longlong *)(local_2f8 + 0x38) != 0) {
        local_460 = *(undefined8 **)(*(longlong *)(local_2f8 + 0x38) + 8);
      }
      local_468 = (int *)CONCAT44(local_468._4_4_,(float)local_2e0);
      (**(code **)(local_2f8 + 0x18))(local_2f8,local_2f0,&local_2e8);
    }
    if (*(longlong *)(puVar9 + 0x38) != 0) {
      puVar13 = *(undefined8 **)(*(longlong *)(puVar9 + 0x38) + 0x20);
    }
    (**(code **)(puVar9 + 0x30))(puVar9,pfVar5,&local_2e8,puVar13);
    return uVar16;
  }
  return uVar16;
}

