// Function: FUN_1402719e0
// Addr: 1402719e0
// Size: 9198 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402719e0(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4,
                  longlong *param_5,longlong *param_6,ulonglong *param_7,longlong *param_8,
                  undefined8 param_9,float param_10)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint *puVar8;
  longlong *plVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  uint *puVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_378;
  float local_374;
  float local_370;
  undefined8 local_368;
  float local_360;
  float local_358;
  float local_354;
  uint *local_348;
  float fStack_340;
  float fStack_33c;
  float local_338;
  int local_334;
  uint local_330;
  uint local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  ulonglong local_318;
  ulonglong uStack_310;
  longlong local_308;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  float local_2f0;
  longlong local_2e8;
  float local_2e0;
  ulonglong local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  float fStack_290;
  float fStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [16];
  uint local_238 [4];
  undefined8 local_228;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [184];
  
  puVar2 = param_7;
  lVar18 = (ulonglong)*param_4 * 0x40;
  uVar14 = *param_7;
  local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)(lVar18 + 0x30 + uVar14));
  local_330 = *(uint *)(lVar18 + 0x34 + uVar14);
  local_32c = *(uint *)(lVar18 + 0x38 + uVar14);
  local_334 = 0;
  fVar43 = DAT_1404927d4;
  do {
    iVar23 = (int)(*(longlong *)(param_4 + 4) - *(longlong *)(param_4 + 2) >> 5);
    while (local_2d8 = (ulonglong)(iVar23 - 1U), -1 < (int)(iVar23 - 1U)) {
      fVar34 = 0.0;
      local_2e8 = *(longlong *)(param_4 + 2);
      local_328 = local_2d8 * 0x20;
      local_358 = 0.0;
      local_354 = 0.0;
      local_378 = 0.0;
      local_374 = 0.0;
      uVar22 = (int)(*(longlong *)(local_2e8 + 0x10 + local_328) -
                     *(longlong *)(local_2e8 + 8 + local_328) >> 3) * -0x33333333 - 1;
      puVar28 = (uint *)(ulonglong)uVar22;
      fVar49 = fVar34;
      fVar46 = fVar34;
      fVar48 = fVar34;
      local_348 = puVar28;
      if (-1 < (int)uVar22) {
        do {
          lVar18 = *(longlong *)(local_2e8 + 8 + local_328);
          uVar22 = *(uint *)(lVar18 + 4 + (longlong)puVar28 * 0x28);
          puVar8 = (uint *)(lVar18 + (longlong)puVar28 * 0x28);
          local_348 = puVar28;
          if ((uVar22 & 4) == 0) {
            uVar14 = *param_7;
            lVar18 = (ulonglong)*(uint *)(local_2e8 + local_328) * 0x40;
            fVar49 = *(float *)(uVar14 + 0x30 + lVar18);
            fVar46 = *(float *)(uVar14 + 0x34 + lVar18);
            fVar48 = *(float *)(uVar14 + 0x38 + lVar18);
            if ((uVar22 & 1) == 0) {
              lVar18 = (ulonglong)*puVar8 << 6;
            }
            else {
              local_238[0] = *puVar8;
              piVar4 = (int *)FUN_140268f50(param_2 + 9,local_238);
              lVar18 = *param_8;
              uVar14 = (longlong)*piVar4 << 6;
            }
            lVar18 = lVar18 + uVar14;
            local_338 = 0.0;
            fVar34 = *(float *)(lVar18 + 0x38);
            fVar40 = *(float *)(lVar18 + 0x30);
            fVar44 = *(float *)(lVar18 + 0x34);
            fVar48 = fVar34 - fVar48;
            param_10 = 0.0;
            local_2a8 = (uint *)CONCAT44(local_2a8._4_4_,fVar34);
            fVar49 = fVar40 - fVar49;
            fVar46 = fVar44 - fVar46;
            fVar32 = fVar49 * fVar49 + fVar46 * fVar46 + fVar48 * fVar48;
            if (fVar32 < 0.0) {
                    /* WARNING: Subroutine does not return */
              FUN_14041ade0(lVar18);
            }
            fVar32 = SQRT(fVar32);
            fVar50 = (float)puVar8[3];
            fVar49 = fVar49 / fVar32;
            fVar46 = fVar46 / fVar32;
            fVar48 = fVar48 / fVar32;
            if ((_DAT_140492690 < fVar50) && (fVar32 < fVar50)) {
              fVar32 = fVar50 - fVar32;
              fVar40 = fVar32 * fVar49 + fVar40;
              fVar44 = fVar32 * fVar46 + fVar44;
              fVar34 = fVar32 * fVar48 + fVar34;
              fVar32 = fVar50;
            }
            uVar22 = *puVar8;
            uVar14 = param_2[0x17] &
                     (((((ulonglong)uVar22 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)(uVar22 >> 8) & 0xff) * 0x100000001b3 ^
                      (ulonglong)(uVar22 >> 0x10 & 0xff)) * 0x100000001b3 ^
                     (ulonglong)(uVar22 >> 0x18)) * 0x100000001b3;
            lVar18 = param_2[0x12];
            lVar15 = *(longlong *)(param_2[0x14] + 8 + uVar14 * 0x10);
            if (lVar15 == lVar18) {
LAB_140271ddd:
              fVar50 = 0.0;
            }
            else {
              uVar38 = *(uint *)(lVar15 + 0x10);
              while (uVar22 != uVar38) {
                if (lVar15 == *(longlong *)(param_2[0x14] + uVar14 * 0x10)) goto LAB_140271ddd;
                lVar15 = *(longlong *)(lVar15 + 8);
                uVar38 = *(uint *)(lVar15 + 0x10);
              }
              if (lVar15 == 0) {
                lVar15 = lVar18;
              }
              if (lVar15 == lVar18) goto LAB_140271ddd;
              lVar18 = *param_8;
              lVar15 = (longlong)*(int *)(lVar15 + 0x14) * 0x40;
              param_10 = *(float *)(lVar18 + 0x30 + lVar15) - fVar40;
              fVar50 = *(float *)(lVar18 + 0x34 + lVar15) - fVar44;
              local_338 = *(float *)(lVar18 + 0x38 + lVar15) - fVar34;
              fVar33 = fVar50 * fVar46 + param_10 * fVar49 + local_338 * fVar48;
              param_10 = param_10 - fVar49 * fVar33;
              fVar50 = fVar50 - fVar46 * fVar33;
              local_338 = local_338 - fVar48 * fVar33;
            }
            fVar33 = param_10;
            lVar18 = (ulonglong)uVar22 * 0x40 + *param_7;
            uVar5 = func_0x00014005f6d0(lVar18,3);
            pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
            *pfVar6 = fVar40;
            uVar5 = func_0x00014005f6d0(lVar18,3);
            pfVar6 = (float *)FUN_14005f5d0(uVar5,1);
            *pfVar6 = fVar44;
            lVar18 = func_0x00014005f6d0(lVar18,3);
            *(float *)(lVar18 + 8) = fVar34;
            if ((fVar32 < (float)puVar8[2]) || ((puVar8[1] & 2) != 0)) {
              uVar22 = (int)(*(longlong *)(puVar8 + 6) - *(longlong *)(puVar8 + 4) >> 2) - 1;
              if (0 < (int)uVar22) {
                local_370 = 0.0;
                fVar34 = fVar33 * fVar33 + fVar50 * fVar50 + local_338 * local_338;
                fVar43 = fVar46 * local_338 - fVar48 * fVar50;
                local_2a8 = (uint *)CONCAT44(local_2a8._4_4_,fVar34);
                local_218 = (uint *)CONCAT44(local_218._4_4_,fVar43);
                fVar46 = fVar49 * fVar50 - fVar46 * fVar33;
                fVar49 = fVar48 * fVar33 - fVar49 * local_338;
                fVar48 = fVar43 * fVar43 + fVar49 * fVar49 + fVar46 * fVar46;
                local_228 = CONCAT44(local_228._4_4_,fVar33 + fVar33);
                local_2c8 = (uint *)CONCAT44(local_2c8._4_4_,fVar50 + fVar50);
                local_2b8 = CONCAT44(local_2b8._4_4_,local_338 + local_338);
                do {
                  fVar43 = DAT_1404927d4;
                  uVar16 = (ulonglong)uVar22;
                  uVar14 = *param_7;
                  lVar15 = (longlong)*(int *)(*(longlong *)(puVar8 + 4) + -4 + uVar16 * 4);
                  lVar18 = (longlong)*(int *)(*(longlong *)(puVar8 + 4) + uVar16 * 4) * 0x40;
                  uVar5 = *(undefined8 *)(uVar14 + 0x30 + lVar18);
                  local_360 = *(float *)(uVar14 + 0x38 + lVar18);
                  fVar40 = (float)uVar5;
                  local_208 = (float)((ulonglong)uVar5 >> 0x20);
                  lVar18 = lVar15 * 0x40;
                  local_308 = CONCAT44(local_308._4_4_,local_360);
                  uVar5 = *(undefined8 *)(uVar14 + 0x30 + lVar18);
                  fVar44 = (float)uVar5 - fVar40;
                  fVar32 = (float)((ulonglong)uVar5 >> 0x20) - local_208;
                  local_360 = *(float *)(uVar14 + 0x38 + lVar18) - local_360;
                  local_368 = CONCAT44(fVar32,fVar44);
                  fStack_204 = local_208;
                  fStack_200 = local_208;
                  fStack_1fc = local_208;
                  if ((1 < uVar22) &&
                     (lVar18 = lVar15 * 0xf0 + *param_3, (*(uint *)(lVar18 + 0x68) & 0x8000) != 0))
                  {
                    fVar34 = fVar44 * fVar44 + fVar32 * fVar32 + local_360 * local_360;
                    if (fVar34 < 0.0) {
                    /* WARNING: Subroutine does not return */
                      FUN_14041ade0();
                    }
                    fVar34 = DAT_1404927d4 / SQRT(fVar34);
                    local_368._0_4_ = (uint)(fVar44 * fVar34) ^ DAT_1404930c0;
                    local_368._4_4_ = (uint)(fVar32 * fVar34) ^ DAT_1404930c0;
                    local_360 = (float)((uint)(local_360 * fVar34) ^ DAT_1404930c0);
                    FUN_14026e000(param_7,lVar18 + 0x68,param_3,puVar8,uVar22 - 1,&local_368);
                    fVar44 = (float)((uint)local_368 ^ DAT_1404930c0);
                    fVar32 = (float)(local_368._4_4_ ^ DAT_1404930c0);
                    local_360 = (float)((uint)local_360 ^ DAT_1404930c0);
                    local_368 = CONCAT44(fVar32,fVar44);
                    fVar34 = (float)local_2a8;
                  }
                  local_318 = *param_7;
                  lVar18 = *(longlong *)(puVar8 + 4);
                  lVar15 = *param_2;
                  lVar20 = (longlong)*(int *)(lVar18 + uVar16 * 4);
                  if ((uVar16 == (*(longlong *)(puVar8 + 6) - lVar18 >> 2) - 1U) ||
                     (local_370 + *(float *)(lVar15 + lVar20 * 4) < (float)puVar8[2] * DAT_140492790
                     )) {
                    if (DAT_1404926f0 < fVar34) {
                      if (fVar48 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar34 = fVar43 / SQRT(fVar48);
                      fVar37 = fVar44 * (float)local_218 * fVar34 + fVar32 * fVar49 * fVar34 +
                               local_360 * fVar46 * fVar34;
                      fVar44 = fVar44 - fVar37 * (float)local_218 * fVar34;
                      fVar32 = fVar32 - fVar37 * fVar49 * fVar34;
                      local_360 = local_360 - fVar37 * fVar46 * fVar34;
                      local_368 = CONCAT44(fVar32,fVar44);
                    }
                    fVar34 = fVar44 * fVar33 + fVar32 * fVar50 + local_360 * local_338;
                    if (fVar34 < 0.0) {
                      fVar44 = fVar44 - (float)local_228 * fVar34;
                      fVar32 = fVar32 - (float)local_2c8 * fVar34;
                      local_368 = CONCAT44(fVar32,fVar44);
                      local_360 = local_360 - (float)local_2b8 * fVar34;
                    }
                  }
                  fVar33 = local_360;
                  lVar20 = lVar20 * 4;
                  fVar34 = *(float *)(lVar15 + lVar20);
                  fVar37 = fVar44 * fVar44 + fVar32 * fVar32 + local_360 * local_360;
                  if (fVar37 < 0.0) {
                    /* WARNING: Subroutine does not return */
                    FUN_14041ade0();
                  }
                  lVar18 = (longlong)*(int *)(lVar18 + -4 + uVar16 * 4) * 0x40 + local_318;
                  fVar43 = fVar43 / SQRT(fVar37);
                  uVar5 = func_0x00014005f6d0(lVar18,3);
                  pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
                  *pfVar6 = fVar44 * fVar43 * fVar34 + fVar40;
                  uVar5 = func_0x00014005f6d0(lVar18,3);
                  pfVar6 = (float *)FUN_14005f5d0(uVar5,1);
                  fVar40 = fVar33 * fVar43 * fVar34 + (float)local_308;
                  *pfVar6 = fVar32 * fVar43 * fVar34 + local_208;
                  lVar18 = func_0x00014005f6d0(lVar18,3);
                  uVar22 = uVar22 - 1;
                  *(float *)(lVar18 + 8) = fVar40;
                  local_370 = local_370 + *(float *)(lVar15 + lVar20);
                  puVar28 = local_348;
                  fVar34 = (float)local_2a8;
                  fVar33 = param_10;
                  fVar43 = DAT_1404927d4;
                } while (0 < (int)uVar22);
              }
            }
            else {
              uVar22 = (uint)(*(longlong *)(puVar8 + 6) - *(longlong *)(puVar8 + 4) >> 2);
              puVar28 = local_348;
              while (uVar22 = uVar22 - 1, 0 < (int)uVar22) {
                uVar14 = *param_7;
                lVar15 = (longlong)*(int *)(*(longlong *)(puVar8 + 4) + (ulonglong)uVar22 * 4);
                lVar18 = lVar15 * 0x40;
                lVar20 = (longlong)*(int *)(*(longlong *)(puVar8 + 4) + -4 + (ulonglong)uVar22 * 4)
                         * 0x40 + uVar14;
                fVar34 = *(float *)(uVar14 + 0x30 + lVar18);
                fVar40 = *(float *)(uVar14 + 0x34 + lVar18);
                fVar44 = *(float *)(uVar14 + 0x38 + lVar18);
                fVar32 = *(float *)(*param_2 + lVar15 * 4);
                local_348 = puVar28;
                uVar5 = func_0x00014005f6d0(lVar20,3);
                pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
                *pfVar6 = fVar34 - fVar32 * fVar49;
                uVar5 = func_0x00014005f6d0(lVar20,3);
                pfVar6 = (float *)FUN_14005f5d0(uVar5,1);
                *pfVar6 = fVar40 - fVar32 * fVar46;
                lVar18 = func_0x00014005f6d0(lVar20,3);
                *(float *)(lVar18 + 8) = fVar44 - fVar32 * fVar48;
                puVar28 = local_348;
              }
            }
            uVar14 = *param_7;
            fVar34 = local_374 + fVar43;
            lVar18 = (ulonglong)*(uint *)(local_2e8 + local_328) * 0x40;
            fVar49 = local_358 + *(float *)(uVar14 + 0x30 + lVar18);
            fVar46 = local_354 + *(float *)(uVar14 + 0x34 + lVar18);
            fVar48 = local_378 + *(float *)(uVar14 + 0x38 + lVar18);
            local_378 = fVar48;
            local_374 = fVar34;
            local_358 = fVar49;
            local_354 = fVar46;
          }
          else {
            FUN_14026e410(param_1,param_2,param_3,local_2e8,param_9,puVar8,0);
          }
          uVar22 = (int)puVar28 - 1;
          puVar28 = (uint *)(ulonglong)uVar22;
        } while (-1 < (int)uVar22);
        local_348 = puVar28;
        if (0.0 < fVar34) {
          lVar18 = (ulonglong)*(uint *)(local_2e8 + local_328) * 0x40 + *param_7;
          uVar5 = func_0x00014005f6d0(lVar18,3);
          pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
          *pfVar6 = fVar49 / fVar34;
          uVar5 = func_0x00014005f6d0(lVar18,3);
          pfVar6 = (float *)FUN_14005f5d0(uVar5,1);
          *pfVar6 = fVar46 / fVar34;
          lVar18 = func_0x00014005f6d0(lVar18,3);
          *(float *)(lVar18 + 8) = fVar48 / fVar34;
        }
      }
      iVar23 = (int)local_2d8;
    }
    plVar9 = param_2;
    if (local_334 == 0) {
      puVar28 = *(uint **)(param_4 + 10);
      local_2c8 = *(uint **)(param_4 + 8);
      local_2a8 = puVar28;
      if (local_2c8 != puVar28) {
        do {
          uVar14 = (ulonglong)*local_2c8 * 0x80;
          lVar18 = *param_5;
          puVar8 = *(uint **)(lVar18 + 0x70 + uVar14);
          puVar26 = *(uint **)(lVar18 + 0x68 + uVar14);
          local_348 = puVar26;
          local_328 = uVar14;
          local_2b8 = lVar18;
          local_218 = puVar8;
          if (puVar26 != puVar8) {
            do {
              if ((*puVar26 & 0x10000) != 0) {
                uVar16 = 0;
                local_228 = *(longlong *)(param_4 + 4) - *(longlong *)(param_4 + 2) >> 5;
                local_358 = 0.0;
                local_348 = puVar26;
                if (0 < (int)local_228) {
                  do {
                    lVar15 = *(longlong *)(param_4 + 2);
                    uVar24 = 0;
                    uVar16 = uVar16 * 0x20;
                    local_354 = 0.0;
                    local_318 = (*(longlong *)(lVar15 + 0x10 + uVar16) -
                                 *(longlong *)(lVar15 + 8 + uVar16) >> 3) * -0x3333333333333333;
                    local_2e8 = lVar15;
                    local_2d8 = uVar16;
                    if (0 < (int)local_318) {
                      do {
                        lVar20 = *(longlong *)(lVar15 + 8 + uVar16);
                        plVar9 = (longlong *)(uVar24 * 5);
                        if (*(int *)(lVar20 + uVar24 * 0x28) == *(int *)(lVar18 + 0x60 + uVar14)) {
                          uVar14 = *param_7;
                          lVar18 = (ulonglong)puVar26[2] * 0x40;
                          fVar43 = *(float *)(uVar14 + lVar18);
                          fVar49 = *(float *)(uVar14 + 4 + lVar18);
                          fVar46 = *(float *)(uVar14 + 8 + lVar18);
                          fVar48 = *(float *)(uVar14 + 0xc + lVar18);
                          fVar48 = fVar48 * fVar48 + fVar46 * fVar46 +
                                   fVar49 * fVar49 + fVar43 * fVar43;
                          if (fVar48 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          piVar4 = *(int **)(lVar20 + 0x10 + uVar24 * 0x28);
                          fVar44 = DAT_1404927d4 / SQRT(fVar48);
                          lVar15 = (longlong)*piVar4 * 0x40;
                          fVar40 = *(float *)(uVar14 + 0x30 + lVar18) -
                                   *(float *)(uVar14 + 0x30 + lVar15);
                          fVar48 = *(float *)(uVar14 + 0x34 + lVar18) -
                                   *(float *)(uVar14 + 0x34 + lVar15);
                          fVar34 = *(float *)(uVar14 + 0x38 + lVar18) -
                                   *(float *)(uVar14 + 0x38 + lVar15);
                          fVar49 = fVar44 * fVar49;
                          fVar48 = fVar40 * fVar40 + fVar48 * fVar48 + fVar34 * fVar34;
                          param_10 = fVar49;
                          if (fVar48 < 0.0) {
                    /* WARNING: Subroutine does not return */
                            FUN_14041ade0();
                          }
                          fVar48 = SQRT(fVar48);
                          local_308 = CONCAT44(local_308._4_4_,fVar48);
                          iVar29 = 1;
                          local_374 = 4.48416e-44;
                          iVar23 = (int)(*(longlong *)(lVar20 + 0x18 + uVar24 * 0x28) -
                                         (longlong)piVar4 >> 2);
                          uVar16 = local_2d8;
                          lVar15 = local_2e8;
                          puVar26 = local_348;
                          uVar14 = local_328;
                          lVar18 = local_2b8;
                          fVar34 = DAT_1404927d4;
                          if (2 < iVar23) {
                            do {
                              if ((int)local_374 < 1) break;
                              lVar18 = *(longlong *)(lVar20 + 0x10 + uVar24 * 0x28);
                              lVar19 = (longlong)iVar29;
                              lVar15 = (longlong)*(int *)(lVar18 + lVar19 * 4);
                              fVar48 = fVar48 - *(float *)(*param_2 + lVar15 * 4);
                              if (fVar48 < 0.0) break;
                              lVar21 = (longlong)*(int *)(lVar18 + -4 + lVar19 * 4) * 0x40;
                              uVar14 = *param_7;
                              lVar18 = (longlong)*(int *)(lVar18 + 4 + lVar19 * 4) * 0x40;
                              fVar32 = *(float *)(uVar14 + 0x38 + lVar18) -
                                       *(float *)(uVar14 + 0x38 + lVar21);
                              fVar50 = *(float *)(uVar14 + 0x34 + lVar18) -
                                       *(float *)(uVar14 + 0x34 + lVar21);
                              fVar33 = *(float *)(uVar14 + 0x30 + lVar18) -
                                       *(float *)(uVar14 + 0x30 + lVar21);
                              fVar41 = fVar44 * fVar46 * fVar50 - fVar49 * fVar32;
                              fVar40 = fVar44 * fVar43 * fVar32 - fVar44 * fVar46 * fVar33;
                              fVar37 = fVar49 * fVar33 - fVar44 * fVar43 * fVar50;
                              fVar47 = fVar40 * fVar32 - fVar37 * fVar50;
                              fVar32 = fVar37 * fVar33 - fVar41 * fVar32;
                              fVar50 = fVar41 * fVar50 - fVar40 * fVar33;
                              fVar40 = fVar50 * fVar50 + fVar47 * fVar47 + fVar32 * fVar32;
                              if (DAT_1404926f0 <= fVar40) {
                                lVar18 = lVar15 * 0x40 + uVar14;
                                fVar33 = *(float *)(lVar18 + 0x30);
                                fVar37 = *(float *)(lVar18 + 0x34);
                                fVar41 = *(float *)(lVar18 + 0x38);
                                if (fVar40 < 0.0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_14041ade0();
                                }
                                fVar35 = fVar34 / SQRT(fVar40);
                                fVar40 = fVar35 * fVar47 *
                                         (fVar33 - *(float *)(uVar14 + 0x30 + lVar21)) +
                                         fVar35 * fVar32 *
                                         (fVar37 - *(float *)(uVar14 + 0x34 + lVar21)) +
                                         (fVar41 - *(float *)(uVar14 + 0x38 + lVar21)) *
                                         fVar35 * fVar50;
                                fVar49 = param_10;
                                fVar34 = DAT_1404927d4;
                                if (DAT_1404926b0 < fVar40) {
                                  fVar49 = fVar35 * fVar47 * fVar40;
                                  fVar48 = fVar35 * fVar32 * fVar40;
                                  fVar40 = fVar35 * fVar50 * fVar40;
                                  uVar5 = func_0x00014005f6d0(lVar18,3);
                                  pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
                                  *pfVar6 = fVar33 - (fVar49 + fVar49);
                                  uVar5 = func_0x00014005f6d0(lVar18,3);
                                  pfVar6 = (float *)FUN_14005f5d0(uVar5,1);
                                  *pfVar6 = fVar37 - (fVar48 + fVar48);
                                  lVar18 = func_0x00014005f6d0(lVar18,3);
                                  iVar29 = 1;
                                  *(float *)(lVar18 + 8) = fVar41 - (fVar40 + fVar40);
                                  fVar49 = param_10;
                                  fVar48 = (float)local_308;
                                  fVar34 = DAT_1404927d4;
                                }
                              }
                              local_374 = (float)((int)local_374 + -1);
                              iVar3 = iVar29 + 2;
                              iVar29 = iVar29 + 1;
                            } while (iVar3 < iVar23);
                            uVar24 = (ulonglong)(uint)local_354;
                            uVar16 = local_2d8;
                            lVar15 = local_2e8;
                            puVar26 = local_348;
                            uVar14 = local_328;
                            lVar18 = local_2b8;
                          }
                        }
                        local_354 = (float)((int)uVar24 + 1);
                        uVar24 = (ulonglong)(uint)local_354;
                      } while ((int)local_354 < (int)local_318);
                    }
                    local_358 = (float)((int)local_358 + 1);
                    uVar16 = (ulonglong)(uint)local_358;
                    puVar8 = local_218;
                  } while ((int)local_358 < (int)(float)local_228);
                }
              }
              puVar26 = puVar26 + 5;
              puVar28 = local_2a8;
              local_348 = puVar26;
            } while (puVar26 != puVar8);
          }
          local_2c8 = local_2c8 + 1;
          fVar43 = DAT_1404927d4;
        } while (local_2c8 != puVar28);
      }
    }
    lVar18 = *(longlong *)(param_4 + 2);
    lVar15 = *(longlong *)(param_4 + 4);
    local_308 = lVar18;
    if (lVar15 - lVar18 >> 5 == 0) {
LAB_140272ebe:
      if (lVar15 - local_308 >> 5 != 0) {
        param_7._0_4_ = 0;
        do {
          puVar28 = (uint *)((longlong)(int)param_7 * 0x20);
          lVar18 = *(longlong *)((longlong)puVar28 + 0x10 + local_308);
          lVar15 = *(longlong *)((longlong)puVar28 + 8 + local_308);
          local_2d8 = lVar18 - lVar15;
          lVar20 = local_308;
          local_348 = puVar28;
          if (((longlong)local_2d8 >> 3) * -0x3333333333333333 != 0) {
            param_10 = 0.0;
            local_330 = (uint)(local_2d8 != 0x28);
            local_318 = (ulonglong)(local_2d8 != 0x28);
            do {
              lVar19 = (longlong)(int)param_10;
              local_298 = lVar19 * 5;
              lVar18 = *(longlong *)(lVar15 + 0x18 + lVar19 * 0x28);
              lVar19 = *(longlong *)(lVar15 + 0x10 + lVar19 * 0x28);
              uVar22 = local_330;
              if (local_318 < (lVar18 - lVar19 >> 2) - 1U) {
                do {
                  fVar43 = DAT_1404927d4;
                  uVar14 = *puVar2;
                  lVar21 = (longlong)(int)uVar22;
                  lVar18 = (longlong)*(int *)(lVar19 + 4 + lVar21 * 4) * 0x40;
                  lVar20 = (longlong)*(int *)(lVar19 + lVar21 * 4) * 0x40;
                  fVar46 = *(float *)(uVar14 + 0x30 + lVar18) - *(float *)(uVar14 + 0x30 + lVar20);
                  fVar48 = *(float *)(uVar14 + 0x34 + lVar18) - *(float *)(uVar14 + 0x34 + lVar20);
                  fVar34 = *(float *)(uVar14 + 0x38 + lVar18) - *(float *)(uVar14 + 0x38 + lVar20);
                  fVar49 = fVar46 * fVar46 + fVar48 * fVar48 + fVar34 * fVar34;
                  if (fVar49 < 0.0) {
                    /* WARNING: Subroutine does not return */
                    FUN_14041ade0();
                  }
                  fVar32 = DAT_1404927d4 / SQRT(fVar49);
                  fVar46 = fVar32 * fVar46;
                  fVar48 = fVar32 * fVar48;
                  fVar32 = fVar32 * fVar34;
                  plVar9 = (longlong *)
                           FUN_1402694d0(param_2[3] + lVar20,local_168,lVar19 + (lVar21 + 1) * 4);
                  lVar18 = *plVar9;
                  fVar49 = *(float *)(lVar18 + 0x14);
                  fVar34 = *(float *)(lVar18 + 0x18);
                  fVar40 = *(float *)(lVar18 + 0x1c);
                  fVar44 = fVar49 * fVar46 + fVar34 * fVar48 + fVar40 * fVar32;
                  if (fVar44 < DAT_1404927d0) {
                    if (fVar44 < DAT_140492a84) {
                      fVar44 = fVar40 * 0.0;
                      fVar48 = fVar49 * 0.0;
                      fVar49 = fVar49 - fVar44;
                      fVar43 = fVar44 - fVar34;
                      fVar46 = fVar34 * 0.0 - fVar48;
                      if (fVar43 * fVar43 + fVar49 * fVar49 + fVar46 * fVar46 < DAT_1404926b0) {
                        fVar43 = fVar44 - fVar34 * 0.0;
                        fVar49 = fVar48 - fVar40;
                        fVar46 = fVar34 - fVar48;
                      }
                      if (fVar43 * fVar43 + fVar49 * fVar49 + fVar46 * fVar46 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_14041aa90();
                    }
                    fVar44 = fVar44 + fVar43;
                    fVar44 = fVar44 + fVar44;
                    if (fVar44 < 0.0) {
                    /* WARNING: Subroutine does not return */
                      FUN_14041ade0();
                    }
                    fVar44 = SQRT(fVar44);
                    fVar43 = fVar43 / fVar44;
                    uStack_320 = CONCAT44((fVar49 * fVar48 - fVar34 * fVar46) * fVar43,
                                          (fVar40 * fVar46 - fVar49 * fVar32) * fVar43);
                    local_328 = CONCAT44((fVar34 * fVar32 - fVar40 * fVar48) * fVar43,
                                         fVar44 * DAT_140492790);
                  }
                  else {
                    local_328 = _DAT_140492b30;
                    uStack_320 = _UNK_140492b38;
                  }
                  FUN_1402152d0(&local_278,&local_328);
                  lVar18 = *param_6;
                  lVar20 = (longlong)
                           *(int *)(*(longlong *)(lVar15 + 0x10 + local_298 * 8) + lVar21 * 4) *
                           0x40;
                  pfVar6 = (float *)(lVar18 + 0x20 + lVar20);
                  fVar43 = *pfVar6;
                  fVar49 = pfVar6[1];
                  local_288 = *(undefined8 *)pfVar6;
                  fVar46 = pfVar6[2];
                  local_208 = pfVar6[3];
                  uStack_280 = *(undefined8 *)(pfVar6 + 2);
                  pfVar6 = (float *)(lVar18 + lVar20);
                  fVar48 = *pfVar6;
                  fStack_2c0 = pfVar6[1];
                  local_2b8 = *(longlong *)pfVar6;
                  fStack_2b0 = pfVar6[2];
                  fStack_2ac = pfVar6[3];
                  pfVar6 = (float *)(lVar18 + 0x10 + lVar20);
                  local_1f8 = *pfVar6;
                  fStack_1f4 = pfVar6[1];
                  fStack_220 = pfVar6[2];
                  fStack_1ec = pfVar6[3];
                  uVar14 = *puVar2;
                  local_2c8 = (uint *)CONCAT44(fStack_2c0,fStack_2c0);
                  local_218 = (uint *)CONCAT44(fStack_2b0,fStack_2b0);
                  local_228 = CONCAT44(fStack_220,fStack_220);
                  fVar40 = fStack_25c * 0.0;
                  fVar44 = fStack_24c * 0.0;
                  local_2a8 = (uint *)CONCAT44(fStack_2ac,fStack_2ac);
                  fVar34 = fStack_26c * 0.0;
                  *(float *)(uVar14 + lVar20) =
                       local_278 * fVar48 + fStack_274 * local_1f8 + fStack_270 * fVar43 + fVar34;
                  *(float *)(uVar14 + 4 + lVar20) =
                       local_278 * fStack_2c0 + fStack_274 * fStack_1f4 + fStack_270 * fVar49 +
                       fVar34;
                  *(float *)(uVar14 + 8 + lVar20) =
                       local_278 * fStack_2b0 + fStack_274 * fStack_220 + fStack_270 * fVar46 +
                       fVar34;
                  *(float *)(uVar14 + 0xc + lVar20) =
                       local_278 * fStack_2ac + fStack_274 * fStack_1ec + fStack_270 * local_208 +
                       fStack_26c;
                  *(float *)(uVar14 + 0x10 + lVar20) =
                       local_268 * fVar48 + fStack_264 * local_1f8 + fStack_260 * fVar43 + fVar40;
                  *(float *)(uVar14 + 0x14 + lVar20) =
                       local_268 * fStack_2c0 + fStack_264 * fStack_1f4 + fStack_260 * fVar49 +
                       fVar40;
                  *(float *)(uVar14 + 0x18 + lVar20) =
                       local_268 * fStack_2b0 + fStack_264 * fStack_220 + fStack_260 * fVar46 +
                       fVar40;
                  *(float *)(uVar14 + 0x1c + lVar20) =
                       local_268 * fStack_2ac + fStack_264 * fStack_1ec + fStack_260 * local_208 +
                       fStack_25c;
                  *(float *)(uVar14 + 0x20 + lVar20) =
                       local_258 * fVar48 + fStack_254 * local_1f8 + fStack_250 * fVar43 + fVar44;
                  *(float *)(uVar14 + 0x24 + lVar20) =
                       local_258 * fStack_2c0 + fStack_254 * fStack_1f4 + fStack_250 * fVar49 +
                       fVar44;
                  *(float *)(uVar14 + 0x28 + lVar20) =
                       local_258 * fStack_2b0 + fStack_254 * fStack_220 + fStack_250 * fVar46 +
                       fVar44;
                  *(float *)(uVar14 + 0x2c + lVar20) =
                       local_258 * fStack_2ac + fStack_254 * fStack_1ec + fStack_250 * local_208 +
                       fStack_24c;
                  lVar18 = *(longlong *)(lVar15 + 0x18 + local_298 * 8);
                  lVar19 = *(longlong *)(lVar15 + 0x10 + local_298 * 8);
                  puVar28 = local_348;
                  lVar20 = local_308;
                  fStack_2bc = fStack_2c0;
                  fStack_2a0 = fStack_2ac;
                  fStack_29c = fStack_2ac;
                  fStack_21c = fStack_220;
                  fStack_210 = fStack_2b0;
                  fStack_20c = fStack_2b0;
                  fStack_204 = local_208;
                  fStack_200 = local_208;
                  fStack_1fc = local_208;
                  fStack_1f0 = fStack_220;
                  local_1e8 = fStack_1f4;
                  fStack_1e4 = fStack_1f4;
                  fStack_1e0 = fStack_1f4;
                  fStack_1dc = fStack_1f4;
                  local_1d8 = fStack_1ec;
                  fStack_1d4 = fStack_1ec;
                  fStack_1d0 = fStack_1ec;
                  fStack_1cc = fStack_1ec;
                  uVar22 = uVar22 + 1;
                } while (lVar21 + 1U < (lVar18 - lVar19 >> 2) - 1U);
              }
              if ((*(byte *)(lVar15 + 4 + local_298 * 8) & 1) != 0) {
                uVar22 = *(uint *)(lVar15 + local_298 * 8);
                lVar25 = (ulonglong)uVar22 * 0xf0;
                lVar21 = *param_3;
                if ((*(uint *)(lVar21 + 0x68 + lVar25) & 0x100) == 0) {
                  local_32c = uVar22;
                  piVar4 = (int *)FUN_140268f50(param_2 + 9,&local_32c);
                  lVar27 = (longlong)*piVar4 * 0x40;
                  lVar18 = *param_8;
                  local_288 = *(undefined8 *)(lVar27 + lVar18);
                  uStack_280 = ((undefined8 *)(lVar27 + lVar18))[1];
                  pfVar6 = (float *)func_0x000140214f80(local_158,&local_288);
                  local_1a8 = *(undefined8 *)(lVar27 + lVar18);
                  uStack_1a0 = ((undefined8 *)(lVar27 + lVar18))[1];
                  puVar12 = (undefined8 *)(lVar27 + 0x10 + lVar18);
                  local_288 = *puVar12;
                  uStack_280 = puVar12[1];
                  pfVar10 = (float *)func_0x000140214f80(local_148,&local_288);
                  puVar12 = (undefined8 *)(lVar27 + 0x10 + lVar18);
                  local_198 = *puVar12;
                  uStack_190 = puVar12[1];
                  puVar12 = (undefined8 *)(lVar27 + 0x20 + lVar18);
                  local_288 = *puVar12;
                  uStack_280 = puVar12[1];
                  pfVar11 = (float *)func_0x000140214f80(local_138,&local_288);
                  lVar19 = local_298;
                  puVar12 = (undefined8 *)(lVar27 + 0x20 + lVar18);
                  local_188 = *puVar12;
                  uStack_180 = puVar12[1];
                  local_258 = *pfVar11;
                  fStack_254 = pfVar11[1];
                  fStack_250 = pfVar11[2];
                  fStack_24c = pfVar11[3];
                  local_278 = *pfVar6;
                  fStack_274 = pfVar6[1];
                  fStack_270 = pfVar6[2];
                  fStack_26c = pfVar6[3];
                  local_268 = *pfVar10;
                  fStack_264 = pfVar10[1];
                  fStack_260 = pfVar10[2];
                  fStack_25c = pfVar10[3];
                  local_248 = _DAT_140492eb0;
                  fVar43 = local_278;
                  fVar49 = fStack_274;
                  fVar46 = fStack_270;
                  fVar48 = fStack_26c;
                  fVar34 = local_268;
                  fVar40 = fStack_264;
                  fVar44 = fStack_260;
                  fVar32 = fStack_25c;
                  fVar50 = local_258;
                  fVar33 = fStack_254;
                  fVar37 = fStack_250;
                  fVar41 = fStack_24c;
                  if ((*(byte *)(lVar21 + 0x68 + lVar25) & 0x40) != 0) {
                    uVar5 = *(undefined8 *)(lVar27 + 0x30 + lVar18);
                    lVar17 = (ulonglong)*(uint *)(lVar15 + local_298 * 8) * 0x40;
                    uVar1 = *(undefined8 *)(*puVar2 + 0x30 + lVar17);
                    fVar45 = *(float *)(lVar27 + 0x38 + lVar18) -
                             *(float *)(*puVar2 + 0x38 + lVar17);
                    fVar35 = (float)uVar5 - (float)uVar1;
                    fVar39 = (float)((ulonglong)uVar5 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
                    fVar47 = fVar35 * fVar35 + fVar39 * fVar39 + fVar45 * fVar45;
                    if (DAT_1404927d4 < fVar47) {
                      if (fVar47 < 0.0) {
                    /* WARNING: Subroutine does not return */
                        FUN_14041ade0();
                      }
                      fVar47 = SQRT(fVar47);
                      auVar31._4_4_ = fVar47;
                      auVar31._0_4_ = fVar47;
                      fVar43 = (fVar47 - DAT_1404927d4) / *(float *)(lVar21 + 200 + lVar25);
                      if (DAT_1404927d4 <= fVar43) {
                        fVar43 = DAT_1404927d4;
                      }
                      local_2f8 = 0x3f800000;
                      local_2f0 = 0.0;
                      auVar30._4_4_ = fVar39;
                      auVar30._0_4_ = fVar35;
                      auVar30._8_8_ = 0;
                      auVar31._8_8_ = 0;
                      auVar31 = divps(auVar30,auVar31);
                      local_360 = fVar45 / fVar47;
                      local_368 = auVar31._0_8_;
                      FUN_140216890(local_1c8,&local_2f8,&local_368);
                      uVar5 = FUN_140215800(local_128,&local_278);
                      uVar5 = FUN_140268d20(local_118,uVar5,local_1c8,fVar43);
                      FUN_1402152d0(&local_1a8,uVar5);
                      local_248 = local_178;
                      fVar43 = (float)local_1a8;
                      fVar49 = local_1a8._4_4_;
                      fVar46 = (float)uStack_1a0;
                      fVar48 = uStack_1a0._4_4_;
                      fVar34 = (float)local_198;
                      fVar40 = local_198._4_4_;
                      fVar44 = (float)uStack_190;
                      fVar32 = uStack_190._4_4_;
                      fVar50 = (float)local_188;
                      fVar33 = local_188._4_4_;
                      fVar37 = (float)uStack_180;
                      fVar41 = uStack_180._4_4_;
                    }
                  }
                  uVar14 = *puVar2;
                  lVar18 = (ulonglong)*(uint *)(lVar15 + lVar19 * 8) * 0x40;
                  pfVar6 = (float *)(uVar14 + lVar18);
                  *pfVar6 = fVar43;
                  pfVar6[1] = fVar49;
                  pfVar6[2] = fVar46;
                  pfVar6[3] = fVar48;
                  pfVar6 = (float *)(uVar14 + 0x10 + lVar18);
                  *pfVar6 = fVar34;
                  pfVar6[1] = fVar40;
                  pfVar6[2] = fVar44;
                  pfVar6[3] = fVar32;
                  pfVar6 = (float *)(uVar14 + 0x20 + lVar18);
                  *pfVar6 = fVar50;
                  pfVar6[1] = fVar33;
                  pfVar6[2] = fVar37;
                  pfVar6[3] = fVar41;
                  puVar28 = local_348;
                }
                else {
                  puVar28 = local_348;
                  if (2 < (ulonglong)(lVar18 - lVar19 >> 2)) {
                    lVar15 = (ulonglong)uVar22 * 0x40 + *puVar2;
                    lVar18 = (longlong)
                             *(int *)(lVar19 + -8 + (lVar18 - lVar19 & 0xfffffffffffffffcU)) * 0x40
                             + *puVar2;
                    puVar12 = (undefined8 *)func_0x00014005f680(lVar18,0);
                    uVar5 = *puVar12;
                    uVar1 = puVar12[1];
                    puVar12 = (undefined8 *)func_0x00014005f6d0(lVar15,0);
                    *puVar12 = uVar5;
                    puVar12[1] = uVar1;
                    puVar12 = (undefined8 *)func_0x00014005f680(lVar18,1);
                    uVar5 = *puVar12;
                    uVar1 = puVar12[1];
                    puVar12 = (undefined8 *)func_0x00014005f6d0(lVar15,1);
                    *puVar12 = uVar5;
                    puVar12[1] = uVar1;
                    puVar12 = (undefined8 *)func_0x00014005f680(lVar18,2);
                    uVar5 = *puVar12;
                    uVar1 = puVar12[1];
                    puVar12 = (undefined8 *)func_0x00014005f6d0(lVar15,2);
                    *puVar12 = uVar5;
                    puVar12[1] = uVar1;
                    puVar28 = local_348;
                  }
                }
              }
              lVar18 = *(longlong *)((longlong)puVar28 + 0x10 + lVar20);
              param_10 = (float)((int)param_10 + 1);
              lVar15 = *(longlong *)((longlong)puVar28 + 8 + lVar20);
            } while ((ulonglong)(longlong)(int)param_10 <
                     (ulonglong)((lVar18 - lVar15 >> 3) * -0x3333333333333333));
          }
          fVar43 = DAT_1404927d4;
          if (local_2d8 != 0x28) {
            uVar14 = (lVar18 - lVar15 >> 3) * -0x3333333333333333;
            local_318 = _DAT_140492b30;
            uStack_310 = _UNK_140492b38;
            if (uVar14 != 0) {
              iVar23 = 0;
              fVar49 = DAT_1404927d4 / (float)uVar14;
              do {
                uVar14 = *puVar2;
                lVar19 = (ulonglong)*(uint *)((longlong)puVar28 + lVar20) * 0x40;
                uVar5 = *(undefined8 *)(uVar14 + 0x30 + lVar19);
                lVar18 = *(longlong *)(lVar15 + 0x10 + (longlong)iVar23 * 0x28);
                lVar15 = (longlong)*(int *)(lVar18 + 4) * 0x40;
                fVar40 = *(float *)(uVar14 + 0x38 + lVar15) - *(float *)(uVar14 + 0x38 + lVar19);
                uVar1 = *(undefined8 *)(uVar14 + 0x30 + lVar15);
                fVar48 = (float)uVar1 - (float)uVar5;
                fVar34 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar5 >> 0x20);
                fVar46 = fVar48 * fVar48 + fVar34 * fVar34 + fVar40 * fVar40;
                if (fVar46 < 0.0) {
                    /* WARNING: Subroutine does not return */
                  FUN_14041ade0();
                }
                fVar46 = fVar43 / SQRT(fVar46);
                local_2e0 = fVar46 * fVar40;
                local_2e8 = CONCAT44(fVar46 * fVar34,fVar46 * fVar48);
                plVar9 = (longlong *)FUN_1402694d0(param_2[3] + lVar19,local_108,lVar18 + 4);
                FUN_140216890(local_1b8,*plVar9 + 0x14,&local_2e8);
                puVar13 = (ulonglong *)FUN_140268d20(local_f8,&local_318,local_1b8,fVar49);
                iVar23 = iVar23 + 1;
                lVar15 = *(longlong *)((longlong)puVar28 + 8 + lVar20);
                local_318 = *puVar13;
                uStack_310 = puVar13[1];
              } while ((ulonglong)(longlong)iVar23 <
                       (ulonglong)
                       ((*(longlong *)((longlong)puVar28 + 0x10 + lVar20) - lVar15 >> 3) *
                       -0x3333333333333333));
            }
            FUN_1402152d0(&local_278,&local_318);
            lVar18 = *param_6;
            lVar15 = (ulonglong)*(uint *)((longlong)puVar28 + lVar20) * 0x40;
            pfVar6 = (float *)(lVar15 + 0x10 + lVar18);
            fVar43 = *pfVar6;
            local_1d8 = pfVar6[1];
            local_288 = *(undefined8 *)pfVar6;
            fStack_290 = pfVar6[2];
            fStack_2b0 = pfVar6[3];
            uStack_280 = *(undefined8 *)(pfVar6 + 2);
            pfVar6 = (float *)(lVar15 + lVar18);
            fVar49 = *pfVar6;
            fStack_340 = pfVar6[1];
            fStack_300 = pfVar6[2];
            fStack_2cc = pfVar6[3];
            pfVar6 = (float *)(lVar15 + 0x20 + lVar18);
            fVar46 = *pfVar6;
            local_208 = pfVar6[1];
            local_1e8 = pfVar6[2];
            local_1f8 = pfVar6[3];
            uStack_310 = *(ulonglong *)(pfVar6 + 2);
            uVar14 = *puVar2;
            local_298 = CONCAT44(fStack_290,fStack_290);
            local_2b8 = CONCAT44(fStack_2b0,fStack_2b0);
            fVar34 = fStack_25c * 0.0;
            fVar40 = fStack_24c * 0.0;
            local_2c8 = (uint *)CONCAT44(fStack_2cc,fStack_2cc);
            fVar48 = fStack_26c * 0.0;
            *(float *)(uVar14 + lVar15) =
                 local_278 * fVar49 + fStack_274 * fVar43 + fStack_270 * fVar46 + fVar48;
            *(float *)(uVar14 + 4 + lVar15) =
                 local_278 * fStack_340 + fStack_274 * local_1d8 + fStack_270 * local_208 + fVar48;
            *(float *)(uVar14 + 8 + lVar15) =
                 local_278 * fStack_300 + fStack_274 * fStack_290 + fStack_270 * local_1e8 + fVar48;
            *(float *)(uVar14 + 0xc + lVar15) =
                 local_278 * fStack_2cc + fStack_274 * fStack_2b0 + fStack_270 * local_1f8 +
                 fStack_26c;
            *(float *)(uVar14 + 0x10 + lVar15) =
                 fVar49 * local_268 + fVar43 * fStack_264 + fVar46 * fStack_260 + fVar34;
            *(float *)(uVar14 + 0x14 + lVar15) =
                 fStack_340 * local_268 + local_1d8 * fStack_264 + local_208 * fStack_260 + fVar34;
            *(float *)(uVar14 + 0x18 + lVar15) =
                 fStack_300 * local_268 + fStack_290 * fStack_264 + local_1e8 * fStack_260 + fVar34;
            *(float *)(uVar14 + 0x1c + lVar15) =
                 fStack_2cc * local_268 + fStack_2b0 * fStack_264 + local_1f8 * fStack_260 +
                 fStack_25c;
            *(float *)(uVar14 + 0x20 + lVar15) =
                 fVar49 * local_258 + fVar43 * fStack_254 + fVar46 * fStack_250 + fVar40;
            *(float *)(uVar14 + 0x24 + lVar15) =
                 fStack_340 * local_258 + local_1d8 * fStack_254 + local_208 * fStack_250 + fVar40;
            *(float *)(uVar14 + 0x28 + lVar15) =
                 fStack_300 * local_258 + fStack_290 * fStack_254 + local_1e8 * fStack_250 + fVar40;
            *(float *)(uVar14 + 0x2c + lVar15) =
                 fStack_2cc * local_258 + fStack_2b0 * fStack_254 + local_1f8 * fStack_250 +
                 fStack_24c;
            fStack_33c = fStack_340;
            fStack_2fc = fStack_300;
            fStack_2d0 = fStack_300;
            fStack_2c0 = fStack_2cc;
            fStack_2bc = fStack_2cc;
            fStack_2ac = fStack_2b0;
            fStack_28c = fStack_290;
            fStack_204 = local_208;
            fStack_200 = local_208;
            fStack_1fc = local_208;
            fStack_1f4 = local_1f8;
            fStack_1f0 = local_1f8;
            fStack_1ec = local_1f8;
            fStack_1e4 = local_1e8;
            fStack_1e0 = local_1e8;
            fStack_1dc = local_1e8;
            fStack_1d4 = local_1d8;
            fStack_1d0 = local_1d8;
            fStack_1cc = local_1d8;
          }
          local_308 = *(longlong *)(param_4 + 2);
          param_7._0_4_ = (int)param_7 + 1;
        } while ((ulonglong)(longlong)(int)param_7 <
                 (ulonglong)(*(longlong *)(param_4 + 4) - local_308 >> 5));
      }
      return;
    }
    uVar14 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
    param_10 = (float)uVar14;
    local_378 = 0.0;
    do {
      uVar16 = (longlong)(int)local_378 * 0x20;
      lVar15 = *(longlong *)(uVar16 + 8 + lVar18);
      local_318 = uVar16;
      if ((*(longlong *)(uVar16 + 0x10 + lVar18) - lVar15 >> 3) * -0x3333333333333333 != 0) {
        local_374 = 0.0;
        local_308 = lVar18;
        do {
          puVar28 = (uint *)(lVar15 + (longlong)(int)local_374 * 0x28);
          if ((*(byte *)(lVar15 + 4 + (longlong)(int)local_374 * 0x28) & 4) == 0) {
            uVar22 = *(uint *)(uVar16 + lVar18);
            if ((*param_4 == uVar22) &&
               (*(int *)(*param_3 + 0x60 + (ulonglong)*param_4 * 0xf0) != -1)) {
              uVar36 = (undefined4)local_298;
              uVar38 = local_330;
              uVar42 = local_32c;
            }
            else {
              uVar24 = *param_7;
              lVar15 = (ulonglong)uVar22 * 0x40;
              uVar36 = *(undefined4 *)(uVar24 + 0x30 + lVar15);
              uVar38 = *(uint *)(uVar24 + 0x34 + lVar15);
              uVar42 = *(uint *)(uVar24 + 0x38 + lVar15);
            }
            lVar15 = (ulonglong)uVar22 * 0x40 + *param_7;
            uVar5 = func_0x00014005f6d0(lVar15,3);
            puVar7 = (undefined4 *)FUN_14005f5d0(uVar5,0);
            *puVar7 = uVar36;
            uVar5 = func_0x00014005f6d0(lVar15,3);
            puVar8 = (uint *)FUN_14005f5d0(uVar5,1);
            *puVar8 = uVar38;
            lVar15 = func_0x00014005f6d0(lVar15,3);
            *(uint *)(lVar15 + 8) = uVar42;
            lVar15 = *(longlong *)(puVar28 + 4);
            if (*(longlong *)(puVar28 + 6) - lVar15 >> 2 != 1) {
              iVar23 = 0;
              do {
                uVar16 = *param_7;
                uVar14 = (longlong)iVar23 + 1;
                lVar20 = (longlong)*(int *)(lVar15 + (longlong)iVar23 * 4);
                lVar18 = lVar20 * 0x40;
                uVar5 = *(undefined8 *)(uVar16 + 0x30 + lVar18);
                fVar44 = (float)uVar5;
                fVar32 = (float)((ulonglong)uVar5 >> 0x20);
                fVar49 = *(float *)(uVar16 + 0x38 + lVar18);
                lVar18 = (longlong)*(int *)(lVar15 + uVar14 * 4) * 0x40;
                uVar5 = *(undefined8 *)(uVar16 + 0x30 + lVar18);
                fVar40 = *(float *)(uVar16 + 0x38 + lVar18) - fVar49;
                fVar48 = (float)uVar5 - fVar44;
                fVar34 = (float)((ulonglong)uVar5 >> 0x20) - fVar32;
                fVar46 = fVar48 * fVar48 + fVar34 * fVar34 + fVar40 * fVar40;
                if (fVar46 < 0.0) {
                    /* WARNING: Subroutine does not return */
                  FUN_14041ade0();
                }
                fVar46 = fVar43 / SQRT(fVar46);
                local_2f0 = fVar46 * fVar40;
                local_2f8 = CONCAT44(fVar46 * fVar34,fVar46 * fVar48);
                if ((0 < iVar23) &&
                   (puVar8 = (uint *)(*param_3 + 0x68 + lVar20 * 0xf0), (*puVar8 & 0x8000) != 0)) {
                  FUN_14026e000(param_7,puVar8,param_3,puVar28,iVar23,&local_2f8);
                }
                fVar48 = local_2f0;
                lVar18 = (longlong)*(int *)(*(longlong *)(puVar28 + 4) + uVar14 * 4);
                fVar46 = *(float *)(*param_2 + lVar18 * 4);
                lVar15 = *param_7 + lVar18 * 0x40;
                uVar5 = func_0x00014005f6d0(lVar15,3);
                pfVar6 = (float *)FUN_14005f5d0(uVar5,0);
                fVar34 = fVar46 * local_2f8._4_4_;
                *pfVar6 = fVar46 * (float)local_2f8 + fVar44;
                lVar18 = func_0x00014005f6d0(lVar15,3);
                *(float *)(lVar18 + 4) = fVar34 + fVar32;
                lVar18 = func_0x00014005f6d0(lVar15,3);
                iVar23 = iVar23 + 1;
                *(float *)(lVar18 + 8) = fVar46 * fVar48 + fVar49;
                lVar15 = *(longlong *)(puVar28 + 4);
              } while (uVar14 < (*(longlong *)(puVar28 + 6) - lVar15 >> 2) - 1U);
              uVar14 = (ulonglong)(uint)param_10;
              lVar18 = local_308;
              uVar16 = local_318;
            }
            if ((puVar28[1] & 1) != 0) {
              param_10 = (float)*puVar28;
              piVar4 = (int *)FUN_140268f50(param_2 + 9,&param_10);
              lVar20 = (ulonglong)*puVar28 * 0x40;
              uVar14 = uVar14 & 0xff;
              lVar19 = (longlong)*piVar4 * 0x40;
              lVar15 = *param_8;
              uVar24 = *param_7;
              fVar48 = *(float *)(uVar24 + 0x34 + lVar20) - *(float *)(lVar15 + 0x34 + lVar19);
              fVar46 = *(float *)(uVar24 + 0x30 + lVar20) - *(float *)(lVar15 + 0x30 + lVar19);
              fVar49 = *(float *)(uVar24 + 0x38 + lVar20) - *(float *)(lVar15 + 0x38 + lVar19);
              if (DAT_140492724 < fVar48 * fVar48 + fVar46 * fVar46 + fVar49 * fVar49) {
                uVar14 = 0;
              }
            }
            param_10 = (float)uVar14;
          }
          else {
            FUN_14026e410(param_1,param_2,param_3);
          }
          lVar15 = *(longlong *)(uVar16 + 8 + lVar18);
          local_374 = (float)((int)local_374 + 1);
        } while ((ulonglong)(longlong)(int)local_374 <
                 (ulonglong)
                 ((*(longlong *)(uVar16 + 0x10 + lVar18) - lVar15 >> 3) * -0x3333333333333333));
      }
      lVar18 = *(longlong *)(param_4 + 2);
      local_378 = (float)((int)local_378 + 1);
      lVar15 = *(longlong *)(param_4 + 4);
    } while ((ulonglong)(longlong)(int)local_378 < (ulonglong)(lVar15 - lVar18 >> 5));
    local_308 = lVar18;
    if (((char)uVar14 != '\0') || (local_334 = local_334 + 1, 9 < local_334)) goto LAB_140272ebe;
  } while( true );
}

