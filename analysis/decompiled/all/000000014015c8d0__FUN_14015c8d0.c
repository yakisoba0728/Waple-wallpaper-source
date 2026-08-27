// Function: FUN_14015c8d0
// Addr: 14015c8d0
// Size: 6388 bytes


uint FUN_14015c8d0(uint param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5,longlong *param_6,uint param_7)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  size_t sVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  uint uVar28;
  undefined1 *puVar29;
  uint uVar30;
  char *pcVar31;
  ulonglong uVar32;
  uint7 uVar33;
  byte *pbVar34;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [24];
  uint local_338;
  int local_330;
  uint *local_328;
  byte local_318;
  uint local_314;
  uint local_310;
  char local_30c;
  undefined4 local_308;
  int local_304;
  uint local_300;
  uint local_2fc;
  undefined8 local_2f8;
  longlong lStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  int local_2ac;
  byte *local_2a8;
  byte *pbStack_2a0;
  byte *local_298;
  uint local_290;
  undefined4 uStack_28c;
  ulonglong local_288;
  ulonglong local_280;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_26c;
  uint local_268;
  undefined8 local_260;
  longlong *plStack_258;
  longlong *local_250;
  undefined4 local_248;
  uint uStack_244;
  uint *puStack_240;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  longlong local_218;
  uint *puStack_210;
  uint local_208;
  longlong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  byte local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198 [7];
  longlong *local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  uint local_148;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e0;
  uint *local_d8;
  uint *local_d0;
  undefined1 local_c8 [8];
  longlong local_c0 [2];
  longlong local_b0 [3];
  ulonglong local_98;
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [3];
  ulonglong local_58;
  
  puVar29 = auStack_358;
  uVar32 = 0;
  local_310 = 0;
  if ((int)param_1 < 1) {
    local_2b8 = 1;
  }
  else {
    piVar2 = (int *)param_2[1];
    if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)piVar2 + (4 - *param_2)) {
      local_2b8 = 0;
    }
    else {
      param_2[1] = (longlong)(piVar2 + 1);
      local_2b8 = *piVar2;
    }
  }
  if ((int)param_1 < 3) {
    local_304 = -1;
LAB_14015c9af:
    uVar22 = 0;
  }
  else {
    piVar2 = (int *)param_2[1];
    if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)piVar2 + (4 - *param_2)) {
      local_304 = 0;
    }
    else {
      param_2[1] = (longlong)(piVar2 + 1);
      local_304 = *piVar2;
    }
    if (((int)param_1 < 4) ||
       (puVar23 = (uint *)param_2[1],
       (longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar23 + (4 - *param_2)))
    goto LAB_14015c9af;
    param_2[1] = (longlong)(puVar23 + 1);
    uVar22 = *puVar23;
  }
  local_2d0 = uVar22;
  FUN_1400493a0(local_c8);
  FUN_1400493a0(local_88);
  if (uVar22 != 0) {
    local_300 = 0;
    do {
      uVar22 = local_300;
      puVar23 = (uint *)param_2[1];
      lVar24 = *param_2;
      uVar25 = (ulonglong)*(uint *)(param_2 + 2);
      if ((longlong)uVar25 < (longlong)((longlong)puVar23 + (4 - lVar24))) {
        local_308 = 0;
        puVar21 = puVar23;
      }
      else {
        puVar21 = puVar23 + 1;
        param_2[1] = (longlong)puVar21;
        local_308 = *puVar23;
      }
      uVar30 = local_308;
      if ((longlong)uVar25 < (longlong)((longlong)puVar21 + (4 - lVar24))) {
        local_2b0 = 0;
        puVar23 = puVar21;
      }
      else {
        puVar23 = puVar21 + 1;
        param_2[1] = (longlong)puVar23;
        local_2b0 = *puVar21;
      }
      if ((longlong)uVar25 < (longlong)((longlong)puVar23 + (4 - lVar24))) {
        local_2fc = 0;
        puVar21 = puVar23;
      }
      else {
        puVar21 = puVar23 + 1;
        param_2[1] = (longlong)puVar21;
        local_2fc = *puVar23;
      }
      lVar13 = (longlong)puVar21 - lVar24;
      puVar23 = puVar21;
      while ((lVar13 < (longlong)uVar25 && ((char)*puVar23 != '\0'))) {
        puVar23 = (uint *)((longlong)puVar23 + 1);
        param_2[1] = (longlong)puVar23;
        lVar13 = (longlong)puVar23 - lVar24;
      }
      local_f8 = 0;
      param_2[1] = (longlong)puVar23 + 1;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (undefined8 *)0x0;
      puStack_120 = (undefined8 *)0x0;
      local_108 = 0;
      uStack_100 = 0;
      local_f0 = 0x400;
      local_e8 = 0;
      puVar18 = (uint *)&DAT_140474480;
      if ((longlong)((longlong)puVar23 + 1) - lVar24 <= (longlong)uVar25) {
        puVar18 = puVar21;
      }
      local_e0 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_2b4 = local_308;
      puVar14 = (undefined8 *)FUN_14028af20(0x18);
      *puVar14 = 0x10000;
      uVar15 = FUN_14028af20(1);
      puVar14[1] = uVar15;
      uVar15 = _malloc_base(0x38);
      puVar14[2] = uVar15;
      if (puVar14[1] == 0) {
        FID_conflict__assert
                  (L"baseAllocator_ != 0",
                   L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                   ,0xaf);
      }
      if (puVar14[2] == 0) {
        FID_conflict__assert
                  (L"shared_ != 0",
                   L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                   ,0xb0);
      }
      *(undefined8 *)(puVar14[2] + 8) = puVar14[1];
      *(longlong *)puVar14[2] = (longlong)((longlong *)puVar14[2] + 4);
      **(undefined8 **)puVar14[2] = 0;
      *(undefined8 *)(*(longlong *)puVar14[2] + 8) = 0;
      *(undefined8 *)(*(longlong *)puVar14[2] + 0x10) = 0;
      *(undefined1 *)(puVar14[2] + 0x18) = 1;
      *(undefined8 *)(puVar14[2] + 0x10) = 1;
      local_128 = puVar14;
      puStack_120 = puVar14;
      if ((param_4 != (undefined8 *)0x0) &&
         (local_d8 = puVar18, local_d0 = puVar18, FUN_140116d90(&local_138,&local_d8), local_e8 == 0
         )) {
        FUN_140116800(&local_138,&local_280,"condition");
        if (uStack_130._6_2_ != 3) {
          FID_conflict__assert
                    (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h"
                     ,0x4fd);
        }
        uVar25 = local_280;
        if (local_280 != (local_138 & 0xffffffff) * 0x20 + (uStack_130 & 0xffffffffffff)) {
          puVar23 = (uint *)(local_280 + 0x10);
          if ((*(ushort *)(local_280 + 0x1e) >> 10 & 1) == 0) {
            if (*(ushort *)(local_280 + 0x1e) == 3) {
              FUN_140116800(puVar23,&local_288,&DAT_1404748b8);
              FUN_140116800(puVar23,&local_290,"condition");
              if (*(short *)(uVar25 + 0x1e) != 3) {
                FID_conflict__assert
                          (L"IsObject()",
                           L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd);
              }
              uVar20 = local_288;
              if (local_288 !=
                  (*(ulonglong *)(uVar25 + 0x18) & 0xffffffffffff) + (ulonglong)*puVar23 * 0x20) {
                if (*(short *)(uVar25 + 0x1e) != 3) {
                  FID_conflict__assert
                            (L"IsObject()",
                             L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
                            );
                }
                lVar24 = CONCAT44(uStack_28c,local_290);
                if (((lVar24 != (ulonglong)*puVar23 * 0x20 +
                                (*(ulonglong *)(uVar25 + 0x18) & 0xffffffffffff)) &&
                    (pcVar16 = (char *)(uVar20 + 0x10), (*(ushort *)(uVar20 + 0x1e) & 0x400) != 0))
                   && ((*(ushort *)(lVar24 + 0x1e) & 0x400) != 0)) {
                  if ((*(ushort *)(uVar20 + 0x1e) & 0x1000) == 0) {
                    pcVar16 = (char *)(*(ulonglong *)(uVar20 + 0x18) & 0xffffffffffff);
                  }
                  pcVar31 = (char *)(lVar24 + 0x10);
                  if ((*(ushort *)(lVar24 + 0x1e) & 0x400) == 0) {
                    FID_conflict__assert
                              (L"IsString()",
                               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                               0x73d);
                  }
                  if ((*(ushort *)(lVar24 + 0x1e) & 0x1000) == 0) {
                    pcVar31 = (char *)(*(ulonglong *)(lVar24 + 0x18) & 0xffffffffffff);
                  }
                  cVar11 = (**(code **)*param_4)(param_4,pcVar16,pcVar31);
                  puVar14 = local_2f8;
                  uVar25 = uStack_2e0;
                  if (cVar11 == '\0') {
                    puVar23 = (uint *)0x0;
                    local_2e8 = (uint *)0x0;
                    local_2f8 = (undefined8 *)0x0;
                    lStack_2f0 = 0;
                    uStack_2e0 = 0;
                    sVar17 = strlen(pcVar16);
                    FUN_140017480(&local_2f8,pcVar16,sVar17);
                    uVar25 = uStack_2e0;
                    puVar14 = local_2f8;
                    local_310 = (uint)uVar32 | 1;
                    uVar32 = 0xcbf29ce484222325;
                    puVar26 = &local_2f8;
                    if (0xf < uStack_2e0) {
                      puVar26 = local_2f8;
                    }
                    if (local_2e8 != (uint *)0x0) {
                      do {
                        pbVar34 = (byte *)((longlong)puVar23 + (longlong)puVar26);
                        puVar23 = (uint *)((longlong)puVar23 + 1);
                        uVar32 = (uVar32 ^ *pbVar34) * 0x100000001b3;
                      } while (puVar23 < local_2e8);
                    }
                    lVar24 = FUN_1400110a0(param_5 + 8,&local_260,&local_2f8,uVar32);
                    if ((*(longlong *)(lVar24 + 8) == 0) ||
                       (*(longlong *)(lVar24 + 8) == *(longlong *)(param_5 + 10)))
                    goto LAB_14015cf3f;
                    bVar4 = false;
                  }
                  else {
LAB_14015cf3f:
                    bVar4 = true;
                  }
                  if (((local_310 & 1) != 0) && (local_310 = local_310 & 0xfffffffe, 0xf < uVar25))
                  {
                    uVar32 = uVar25 + 1;
                    puVar26 = puVar14;
                    if (0xfff < uVar32) {
                      puVar26 = (undefined8 *)puVar14[-1];
                      if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar26))) {
LAB_14015e1c2:
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar29 = auStack_350;
LAB_14015e1c9:
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar29 + -8) = &UNK_14015e1ce;
                        FUN_140013050();
                      }
                      uVar32 = uVar25 + 0x28;
                    }
                    thunk_FUN_14028af80(puVar26,uVar32);
                  }
                  if (bVar4) {
                    local_2e8 = (uint *)0x0;
                    local_2f8 = (undefined8 *)0x0;
                    lStack_2f0 = 0;
                    uStack_2e0 = 0;
                    sVar17 = strlen(pcVar16);
                    FUN_140017480(&local_2f8,pcVar16,sVar17);
                    pcVar16 = "$__default";
                    if (cVar11 != '\0') {
                      pcVar16 = pcVar31;
                    }
                    uVar15 = FUN_1400787e0(param_5 + 8,&local_2f8);
                    sVar17 = strlen(pcVar16);
                    FUN_14000f880(uVar15,pcVar16,sVar17);
                    FUN_140017240(&local_2f8);
                  }
                  uVar32 = (ulonglong)local_310;
                  uVar22 = local_300;
                  goto LAB_14015d00f;
                }
              }
            }
          }
          else {
            pcVar16 = (char *)FUN_140117000(puVar23);
            cVar11 = (**(code **)*param_4)(param_4,pcVar16,0);
            local_2e8 = (uint *)0x0;
            uStack_2e0 = 0;
            local_2f8 = (undefined8 *)0x0;
            lStack_2f0 = 0;
            sVar17 = strlen(pcVar16);
            FUN_140017480(&local_2f8,pcVar16,sVar17);
            pcVar16 = "0";
            if (cVar11 != '\0') {
              pcVar16 = "1";
            }
            uVar15 = FUN_1400787e0(param_5 + 8,&local_2f8);
            sVar17 = strlen(pcVar16);
            FUN_14000f880(uVar15,pcVar16,sVar17);
            if (0xf < uStack_2e0) {
              uVar25 = uStack_2e0 + 1;
              puVar14 = local_2f8;
              if (0xfff < uVar25) {
                puVar14 = (undefined8 *)local_2f8[-1];
                if (0x1f < (ulonglong)((longlong)local_2f8 + (-8 - (longlong)puVar14)))
                goto LAB_14015e1c2;
                uVar25 = uStack_2e0 + 0x28;
              }
              thunk_FUN_14028af80(puVar14,uVar25);
            }
LAB_14015d00f:
            if (cVar11 != '\0') {
              uVar25 = (((((ulonglong)(uVar30 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)local_308._1_1_) * 0x100000001b3 ^ (ulonglong)local_308._2_1_) *
                        0x100000001b3 ^ (ulonglong)local_308._3_1_) * 0x100000001b3 & local_58;
              lVar24 = *(longlong *)(local_70[0] + 8 + uVar25 * 0x10);
              if (lVar24 == local_80[0]) {
LAB_14015d0a1:
                lVar24 = 0;
              }
              else {
                uVar28 = *(uint *)(lVar24 + 0x10);
                while (uVar30 != uVar28) {
                  if (lVar24 == *(longlong *)(local_70[0] + uVar25 * 0x10)) goto LAB_14015d0a1;
                  lVar24 = *(longlong *)(lVar24 + 8);
                  uVar28 = *(uint *)(lVar24 + 0x10);
                }
              }
              if ((lVar24 == 0) || (lVar24 == local_80[0])) {
                FUN_140130b20(local_88,&local_2a8,&local_2b4);
                puVar23 = (uint *)FUN_140160880(local_c8,&local_2b0);
                *puVar23 = local_2fc;
              }
            }
          }
        }
      }
      puVar14 = puStack_120;
      if (puStack_120 != (undefined8 *)0x0) {
        local_138 = 0;
        uStack_130 = 0;
        lVar24 = puStack_120[2];
        if (lVar24 != 0) {
          uVar25 = *(ulonglong *)(lVar24 + 0x10);
          if (uVar25 < 2) {
            if (uVar25 == 0) {
              FID_conflict__assert
                        (L"shared_->refcount > 0",
                         L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h"
                         ,0x116);
            }
            plVar27 = (longlong *)puVar14[2];
            lVar24 = *plVar27;
            lVar13 = *(longlong *)(lVar24 + 0x10);
            while (lVar13 != 0) {
              *plVar27 = *(longlong *)(lVar24 + 0x10);
              thunk_FUN_1402d9040();
              plVar27 = (longlong *)puVar14[2];
              lVar24 = *plVar27;
              lVar13 = *(longlong *)(lVar24 + 0x10);
            }
            *(undefined8 *)(lVar24 + 8) = 0;
            uVar15 = *(undefined8 *)(puVar14[2] + 8);
            if (*(char *)(puVar14[2] + 0x18) != '\0') {
              thunk_FUN_1402d9040();
            }
            thunk_FUN_14028af80(uVar15,1);
          }
          else {
            *(ulonglong *)(lVar24 + 0x10) = uVar25 - 1;
          }
        }
        thunk_FUN_14028af80(puVar14,0x18);
      }
      thunk_FUN_1402d9040(local_108);
      thunk_FUN_14028af80(uStack_110,1);
      local_300 = uVar22 + 1;
    } while (local_300 < local_2d0);
  }
  iVar12 = local_304;
  uVar22 = 0;
  local_310 = 0;
  if (local_304 != -1) {
    param_5[3] = param_5[6];
    param_5[2] = param_5[5];
  }
  uVar33 = (uint7)(uVar32 >> 8);
  if (((((byte)param_7 & 5) == 4) && ((*(byte *)(param_5 + 1) & 0x20) == 0)) &&
     (cVar11 = (**(code **)(*param_3 + 8))(param_3), cVar11 != '\0')) {
    local_30c = '\x01';
    if (iVar12 != -1) {
      uVar32 = CONCAT71(uVar33,1);
      goto LAB_14015d239;
    }
  }
  else {
    local_30c = '\0';
  }
  uVar32 = (ulonglong)uVar33 << 8;
LAB_14015d239:
  if (0 < local_2b8) {
    local_280 = (ulonglong)param_1;
    local_268 = param_7 & 1;
    local_288 = (ulonglong)param_1;
    local_2fc = 0;
    iVar12 = local_2b8;
    do {
      local_250 = (longlong *)0x0;
      local_260 = 0;
      plStack_258 = (longlong *)0x0;
      LOCK();
      UNLOCK();
      puVar23 = (uint *)param_2[1];
      local_2b0 = DAT_1404e8ee0 + 1;
      if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar23 + (4 - *param_2)) {
        local_2b4 = 0;
        DAT_1404e8ee0 = DAT_1404e8ee0 + 1;
      }
      else {
        DAT_1404e8ee0 = DAT_1404e8ee0 + 1;
        param_2[1] = (longlong)(puVar23 + 1);
        local_2b4 = *puVar23;
      }
      if (0 < (int)local_2b4) {
        local_26c = local_2b4 - 1;
        local_274 = param_7 & 2;
        local_2ac = 0;
        do {
          iVar12 = local_2ac;
          uVar30 = local_2b4;
          puVar23 = (uint *)param_2[1];
          lVar24 = *param_2;
          uVar25 = (ulonglong)*(uint *)(param_2 + 2);
          local_2c4 = 1;
          lStack_2f0 = CONCAT44(lStack_2f0._4_4_,1);
          uStack_2e0 = uStack_2e0 & 0xffffffff;
          if ((longlong)uVar25 < (longlong)puVar23 + (4 - lVar24)) {
            uVar20 = 0;
            puVar21 = puVar23;
          }
          else {
            puVar21 = puVar23 + 1;
            param_2[1] = (longlong)puVar21;
            uVar20 = (ulonglong)*puVar23;
          }
          local_2c0 = (uint)uVar20;
          if ((longlong)uVar25 < (longlong)puVar21 + (4 - lVar24)) {
            local_2bc = 0;
            puVar23 = puVar21;
          }
          else {
            puVar23 = puVar21 + 1;
            param_2[1] = (longlong)puVar23;
            local_2bc = *puVar21;
          }
          local_2f8 = (undefined8 *)CONCAT44(local_2bc,local_2c0);
          local_314 = 0;
          local_2d8 = 0;
          if ((*(byte *)(param_5 + 1) & 0x40) != 0) {
            if ((longlong)uVar25 < (longlong)puVar23 + (4 - lVar24)) {
              local_2c4 = 0;
            }
            else {
              param_2[1] = (longlong)(puVar23 + 1);
              local_2c4 = *puVar23;
            }
            lStack_2f0 = CONCAT44(lStack_2f0._4_4_,local_2c4);
          }
          uVar28 = local_2c4;
          if ((((0x2000 < local_2c0) || (0x2000 < local_2bc)) ||
              ((0x80 < local_2c4 ||
               ((0xffffffff < local_2bc * uVar20 ||
                (uVar25 = (ulonglong)local_2c4 * (local_2bc * uVar20 & 0xffffffff),
                0xffffffff < uVar25)))))) || (0xffffffff < (uVar25 & 0xffffffff) << 2)) {
            FUN_1400986c0("Invalid texture resolution: w=%u h=%u d=%u\n",uVar20,local_2bc,local_2c4)
            ;
          }
          if (((local_274 == 0) || (iVar12 != 0)) || ((int)uVar30 < 2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          local_318 = 0;
          local_2c8 = 0;
          if (1 < (int)param_1) {
            puVar23 = (uint *)param_2[1];
            if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar23 + (4 - *param_2)) {
              local_314 = 0;
              puVar21 = puVar23;
            }
            else {
              puVar21 = puVar23 + 1;
              param_2[1] = (longlong)puVar21;
              local_314 = *puVar23;
            }
            if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar21 + (4 - *param_2)) {
              local_2c8 = 0;
            }
            else {
              param_2[1] = (longlong)(puVar21 + 1);
              local_2c8 = *puVar21;
            }
            local_318 = (byte)local_314 & 1;
            local_2d8 = local_314;
          }
          if ((local_30c != '\0') && (uVar32 = uVar32 & 0xff, local_318 != 0)) {
            uVar32 = 1;
          }
          puVar23 = (uint *)param_2[1];
          lVar24 = *param_2;
          uVar25 = (ulonglong)*(uint *)(param_2 + 2);
          local_300 = (uint)uVar32;
          if ((longlong)uVar25 < (longlong)puVar23 + (4 - lVar24)) {
            local_2cc = 0;
            puVar21 = puVar23;
            puVar23 = (uint *)0x0;
          }
          else {
            puVar21 = puVar23 + 1;
            param_2[1] = (longlong)puVar21;
            local_2cc = *puVar23;
            puVar23 = (uint *)(ulonglong)local_2cc;
          }
          if ((longlong)((uVar25 - (longlong)puVar21) + lVar24) < (longlong)puVar23) {
            local_2cc = 0;
            puVar23 = puVar21;
            puVar21 = (uint *)0x0;
          }
          else {
            puVar23 = (uint *)((longlong)(int)puVar23 + (longlong)puVar21);
            param_2[1] = (longlong)puVar23;
          }
          local_2e8 = (uint *)0x0;
          local_308 = 0;
          uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
          if (bVar4) {
            if (uVar22 == 0) {
              local_310 = 1;
              uVar22 = 1;
            }
          }
          else {
            local_298 = (byte *)0x0;
            local_2a8 = (byte *)0x0;
            pbStack_2a0 = (byte *)0x0;
            if ((local_2d0 == 0) || ((longlong)uVar25 < (longlong)puVar23 + (4 - lVar24))) {
LAB_14015d81b:
              pbVar34 = (byte *)0x0;
            }
            else {
              param_2[1] = (longlong)(puVar23 + 1);
              uVar22 = *puVar23;
              local_278 = 0;
              local_270 = uVar22;
              if (uVar22 == 0) goto LAB_14015d81b;
              pbVar34 = (byte *)0x0;
              lVar24 = local_c0[0];
              do {
                puVar23 = (uint *)param_2[1];
                if ((longlong)(ulonglong)*(uint *)(param_2 + 2) < (longlong)puVar23 + (4 - *param_2)
                   ) {
                  uVar30 = 0;
                }
                else {
                  param_2[1] = (longlong)(puVar23 + 1);
                  uVar30 = *puVar23;
                }
                uVar28 = 0;
                if (uVar30 != 0) {
                  do {
                    puVar23 = (uint *)param_2[1];
                    lVar13 = *param_2;
                    uVar32 = (ulonglong)*(uint *)(param_2 + 2);
                    if ((longlong)puVar23 + (4 - lVar13) <= (longlong)uVar32) {
                      puVar23 = puVar23 + 1;
                      param_2[1] = (longlong)puVar23;
                    }
                    if ((longlong)uVar32 < (longlong)puVar23 + (4 - lVar13)) {
                      uVar25 = 0;
                      puVar18 = puVar23;
                    }
                    else {
                      puVar18 = puVar23 + 1;
                      param_2[1] = (longlong)puVar18;
                      uVar25 = (ulonglong)*puVar23;
                    }
                    if ((longlong)uVar32 < (longlong)puVar18 + (4 - lVar13)) {
                      uStack_234 = 0;
                      puVar23 = puVar18;
                    }
                    else {
                      puVar23 = puVar18 + 1;
                      param_2[1] = (longlong)puVar23;
                      uStack_234 = *puVar18;
                    }
                    if ((longlong)uVar32 < (longlong)puVar23 + (4 - lVar13)) {
                      uStack_230 = 0;
                      puVar18 = puVar23;
                    }
                    else {
                      puVar18 = puVar23 + 1;
                      param_2[1] = (longlong)puVar18;
                      uStack_230 = *puVar23;
                    }
                    if ((longlong)uVar32 < (longlong)puVar18 + (4 - lVar13)) {
                      uStack_22c = 0;
                      puVar23 = puVar18;
                    }
                    else {
                      puVar23 = puVar18 + 1;
                      param_2[1] = (longlong)puVar23;
                      uStack_22c = *puVar18;
                    }
                    if ((longlong)uVar32 < (longlong)puVar23 + (4 - lVar13)) {
                      local_228 = 0;
                      puVar18 = puVar23;
                    }
                    else {
                      puVar18 = puVar23 + 1;
                      param_2[1] = (longlong)puVar18;
                      local_228 = *puVar23;
                    }
                    if ((longlong)uVar32 < (longlong)puVar18 + (4 - lVar13)) {
                      uStack_244 = 0;
                      puVar23 = puVar18;
                    }
                    else {
                      puVar23 = puVar18 + 1;
                      param_2[1] = (longlong)puVar23;
                      uStack_244 = *puVar18;
                    }
                    if ((longlong)uVar32 < (longlong)puVar23 + (4 - lVar13)) {
                      local_238 = 0;
                      puStack_240 = puVar23;
                    }
                    else {
                      puStack_240 = puVar23 + 1;
                      param_2[1] = (longlong)puStack_240;
                      local_238 = *puVar23;
                    }
                    if ((longlong)((uVar32 - (longlong)puStack_240) + lVar13) <
                        (longlong)(ulonglong)local_238) {
                      local_238 = 0;
                      puStack_240 = (uint *)0x0;
                    }
                    else {
                      param_2[1] = (longlong)(int)local_238 + (longlong)puStack_240;
                    }
                    uVar32 = ((((uVar25 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               uVar25 >> 8 & 0xff) * 0x100000001b3 ^ uVar25 >> 0x10 & 0xff) *
                              0x100000001b3 ^ uVar25 >> 0x18) * 0x100000001b3 & local_98;
                    lVar13 = *(longlong *)(local_b0[0] + 8 + uVar32 * 0x10);
                    if (lVar13 == lVar24) {
LAB_14015d792:
                      lVar13 = 0;
                    }
                    else {
                      iVar12 = *(int *)(lVar13 + 0x10);
                      while ((int)uVar25 != iVar12) {
                        if (lVar13 == *(longlong *)(local_b0[0] + uVar32 * 0x10))
                        goto LAB_14015d792;
                        lVar13 = *(longlong *)(lVar13 + 8);
                        iVar12 = *(int *)(lVar13 + 0x10);
                      }
                    }
                    lVar19 = lVar24;
                    if (lVar13 != 0) {
                      lVar19 = lVar13;
                    }
                    if (lVar19 != lVar24) {
                      local_248 = *(undefined4 *)(lVar19 + 0x14);
                      if (pbVar34 == local_298) {
                        FUN_140160fb0(&local_2a8,pbVar34);
                        lVar24 = local_c0[0];
                        pbVar34 = pbStack_2a0;
                      }
                      else {
                        *(ulonglong *)pbVar34 = CONCAT44(uStack_244,local_248);
                        *(uint **)(pbVar34 + 8) = puStack_240;
                        *(uint *)(pbVar34 + 0x10) = local_238;
                        *(uint *)(pbVar34 + 0x14) = uStack_234;
                        *(uint *)(pbVar34 + 0x18) = uStack_230;
                        *(uint *)(pbVar34 + 0x1c) = uStack_22c;
                        *(ulonglong *)(pbVar34 + 0x20) = CONCAT44(uStack_224,local_228);
                        pbStack_2a0 = pbStack_2a0 + 0x28;
                        lVar24 = local_c0[0];
                        pbVar34 = pbStack_2a0;
                      }
                    }
                    uVar28 = uVar28 + 1;
                    uVar22 = local_270;
                  } while (uVar28 < uVar30);
                }
                local_278 = local_278 + 1;
                uVar28 = local_2c4;
              } while (local_278 < uVar22);
            }
            pbVar6 = local_2a8;
            uVar22 = (int)((longlong)pbVar34 - (longlong)local_2a8 >> 3) * -0x33333333;
            do {
              uVar22 = uVar22 - 1;
              if ((int)uVar22 < 0) goto LAB_14015d87b;
            } while ((local_2a8[(ulonglong)uVar22 * 0x28] & 2) == 0);
            if ((uVar22 != 0) &&
               (pbVar1 = local_2a8 + ((ulonglong)uVar22 * 5 + -5) * 8, local_2a8 != pbVar1)) {
              FUN_1404210f0(local_2a8,pbVar1,(longlong)pbVar34 - (longlong)pbVar1);
              pbVar34 = pbVar6 + ((longlong)pbVar34 - (longlong)pbVar1);
              pbStack_2a0 = pbVar34;
            }
LAB_14015d87b:
            uVar10 = local_2b0;
            uVar9 = local_2c0;
            uVar8 = local_2c8;
            uVar7 = local_2cc;
            uVar30 = local_2fc;
            uVar22 = local_314;
            if ((char)local_300 == '\0') {
              if (((local_268 == 0) && (0 < (int)local_2cc)) && (puVar21 != (uint *)0x0)) {
                if (local_318 == 0) {
                  if (local_304 == -1) {
                    local_308 = local_2cc;
                    uStack_2e0 = CONCAT44((int)puVar21 - (int)*param_2,local_2cc);
                    local_2e8 = puVar21;
                  }
                  else {
                    local_314 = local_314 | 0x40000000;
                    iVar12 = local_2c4 * local_2bc;
                    uVar30 = iVar12 * local_2c0 * 4;
                    local_308 = uVar30;
                    local_2d8 = local_314;
                    puVar21 = (uint *)thunk_FUN_14028af20(uVar30);
                    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar30);
                    local_338 = uVar9;
                    local_330 = iVar12;
                    local_328 = puVar21;
                    local_2e8 = puVar21;
                    cVar11 = (**(code **)*param_3)(param_3,local_304,uVar7);
                    pbVar34 = pbStack_2a0;
                    if (cVar11 == '\0') {
                      thunk_FUN_14028af80(puVar21);
                      local_314 = uVar22 & 0xbfffffff;
                      puVar21 = (uint *)0x0;
                      local_2e8 = (uint *)0x0;
                      local_2d8 = local_314;
                      FUN_140098760("Native image error.\n");
                      local_310 = 2;
                      pbVar34 = pbStack_2a0;
                    }
                  }
                }
                else {
                  puVar23 = (uint *)thunk_FUN_14028af20(local_2c8);
                  local_314 = uVar22 | 0x40000000;
                  local_2e8 = puVar23;
                  local_2d8 = local_314;
                  iVar12 = FUN_14014c160(puVar21,puVar23,uVar7);
                  if (iVar12 < 0) {
                    FUN_140098760("LZ4 error.\n");
                    thunk_FUN_14028af80(puVar23);
                    puVar21 = (uint *)0x0;
                    local_314 = uVar22 & 0xbfffffff;
                    local_2e8 = (uint *)0x0;
                    local_310 = 2;
                    pbVar34 = pbStack_2a0;
                    local_2d8 = local_314;
                  }
                  else {
                    local_308 = uVar8;
                    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar8);
                    puVar21 = puVar23;
                    pbVar34 = pbStack_2a0;
                  }
                }
                if ((local_2a8 != pbVar34) && (pbVar6 = local_2a8, puVar21 != (uint *)0x0)) {
                  for (; pbVar6 != pbVar34; pbVar6 = pbVar6 + 0x28) {
                    if ((*pbVar6 & 2) != 0) {
                      local_2e8 = *(uint **)(pbVar6 + 8);
                      uStack_2e0 = CONCAT44((int)local_2e8 - (int)*param_2,
                                            *(undefined4 *)(pbVar6 + 0x10));
                      break;
                    }
                    puVar23 = puVar21;
                    if ((local_314 >> 0x1e & 1) == 0) {
                      lVar24 = (longlong)(int)local_308;
                      puVar23 = (uint *)thunk_FUN_14028af20(lVar24);
                      local_2e8 = puVar23;
                      FUN_1404210f0(puVar23,puVar21,lVar24);
                      local_314 = local_314 | 0x40000000;
                      local_2d8 = local_314;
                    }
                    uVar30 = local_2c0;
                    uVar22 = *(uint *)(pbVar6 + 0x1c);
                    if (uVar22 != 0) {
                      uVar28 = *(uint *)(pbVar6 + 0x20);
                      if (((uVar28 != 0) && (*(uint *)(pbVar6 + 0x14) <= local_2c0)) &&
                         ((uVar22 <= local_2c0 - *(uint *)(pbVar6 + 0x14) &&
                          ((((*(uint *)(pbVar6 + 0x18) <= local_2bc &&
                             (uVar28 <= local_2bc - *(uint *)(pbVar6 + 0x18))) &&
                            (puVar21 = *(uint **)(pbVar6 + 8), puVar21 != (uint *)0x0)) &&
                           (*(int *)(pbVar6 + 0x10) != 0)))))) {
                        if (local_318 == 0) {
                          if (local_304 == -1) {
                            bVar4 = false;
LAB_14015e00d:
                            local_338 = uVar30;
                            FUN_14015c480(*param_5,pbVar6,puVar21);
                            if (!bVar4) goto LAB_14015e036;
                          }
                          else {
                            uVar32 = (ulonglong)uVar28 * (ulonglong)uVar22;
                            if (uVar32 < 0x100000000) {
                              uVar32 = (uVar32 & 0xffffffff) * 4;
                              local_280 = uVar32;
                              if (0xffffffff < uVar32) {
                                local_280 = 0xffffffff;
                                goto LAB_14015dfb8;
                              }
                            }
                            else {
LAB_14015dfb8:
                              uVar32 = local_280;
                              FUN_1400986c0("Invalid variant resolution: w=%u h=%u\n");
                            }
                            puVar21 = (uint *)thunk_FUN_14028af20(uVar32 & 0xffffffff);
                            local_330 = *(int *)(pbVar6 + 0x20);
                            local_338 = *(uint *)(pbVar6 + 0x1c);
                            local_328 = puVar21;
                            cVar11 = (**(code **)*param_3)
                                               (param_3,*(undefined4 *)(pbVar6 + 4),
                                                *(undefined4 *)(pbVar6 + 0x10));
                            if (cVar11 != '\0') goto LAB_14015e000;
                          }
                        }
                        else {
                          uVar32 = (ulonglong)uVar22 * (ulonglong)uVar28;
                          if (uVar32 < 0x100000000) {
                            uVar32 = (uVar32 & 0xffffffff) * 4;
                            local_288 = uVar32;
                            if (0xffffffff < uVar32) {
                              local_288 = 0xffffffff;
                              goto LAB_14015df4f;
                            }
                          }
                          else {
LAB_14015df4f:
                            uVar32 = local_288;
                            FUN_1400986c0("Invalid variant resolution: w=%u h=%u\n");
                          }
                          puVar21 = (uint *)thunk_FUN_14028af20(uVar32 & 0xffffffff);
                          iVar12 = FUN_14014c160(*(undefined8 *)(pbVar6 + 8),puVar21,
                                                 *(undefined4 *)(pbVar6 + 0x10));
                          if (-1 < iVar12) {
LAB_14015e000:
                            bVar4 = true;
                            if (puVar21 != (uint *)0x0) goto LAB_14015e00d;
                          }
                        }
                        thunk_FUN_14028af80(puVar21);
                      }
                    }
LAB_14015e036:
                    puVar21 = puVar23;
                  }
                }
              }
            }
            else {
              puVar14 = (undefined8 *)param_6[9];
              if ((ulonglong)local_2fc < (ulonglong)((longlong)puVar14 - param_6[8] >> 3)) {
                piVar2 = (int *)(param_6[8] + 4 + (ulonglong)local_2fc * 8);
                *piVar2 = *piVar2 + 1;
              }
              else {
                local_290 = local_2b0;
                uStack_28c = 1;
                if (puVar14 == (undefined8 *)param_6[10]) {
                  FUN_14005ffa0(param_6 + 8,puVar14,&local_290);
                }
                else {
                  *puVar14 = CONCAT44(1,local_2b0);
                  param_6[9] = param_6[9] + 8;
                }
              }
              local_208 = 0;
              local_218 = 0;
              puStack_210 = (uint *)0x0;
              uStack_1f8 = 0;
              local_1f0 = 0;
              local_1bc = 0xffffffff;
              local_1e8 = 0xf;
              local_200 = 0;
              local_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              local_1c8 = 0;
              local_1c0 = 0x1b;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1a8 = 0;
              lStack_1a0 = 0;
              local_160 = (longlong *)0x0;
              local_158 = 0;
              local_154 = 0;
              local_150 = 0;
              local_148 = 0;
              if (&local_200 != param_6) {
                plVar27 = param_6;
                if (0xf < (ulonglong)param_6[3]) {
                  plVar27 = (longlong *)*param_6;
                }
                FUN_14000f880(&local_200,plVar27,param_6[2]);
              }
              pbVar34 = local_2a8;
              local_218 = param_6[4];
              local_208 = local_2cc;
              iVar12 = 2;
              if (local_26c < 2) {
                iVar12 = local_26c;
              }
              iVar5 = local_2ac;
              if (local_310 == 1) {
                iVar5 = local_2ac + -1;
              }
              local_1d8 = CONCAT44(iVar5,uVar30);
              local_1bc = local_304;
              local_1b8 = local_318;
              local_148 = local_2c8;
              lVar24 = lStack_1a0 - local_1b0 >> 3;
              local_1c8 = CONCAT44(uVar28,local_2bc);
              local_1d0 = CONCAT44(local_2c0,(undefined4)local_1d0);
              local_1e0 = CONCAT44(uVar10,(uint)(local_2ac == iVar12));
              local_1c0 = *param_5;
              lVar13 = (longlong)pbStack_2a0 - (longlong)local_2a8 >> 3;
              uVar25 = lVar13 * -0x3333333333333333;
              uVar32 = lVar24 * -0x3333333333333333;
              puStack_210 = puVar21;
              if (uVar25 < uVar32 || uVar25 + lVar24 * 0x3333333333333333 == 0) {
                lVar24 = local_1a8 - local_1b0 >> 3;
                if (uVar25 < (ulonglong)(lVar24 * -0x3333333333333333) ||
                    uVar25 + lVar24 * 0x3333333333333333 == 0) {
                  lVar24 = lVar13 * 8 + local_1b0;
                  FUN_1404210f0(local_1b0,local_2a8);
                  local_1a8 = lVar24;
                }
                else {
                  FUN_1404210f0(local_1b0,local_2a8,lVar24 * 8);
                  lVar19 = local_1a8;
                  lVar13 = (uVar25 + lVar24 * 0x3333333333333333) * 0x28;
                  FUN_1404210f0(local_1a8,pbVar34 + lVar24 * 8,lVar13);
                  local_1a8 = lVar13 + lVar19;
                }
              }
              else {
                if (0x666666666666666 < uVar25) goto LAB_14015e1c9;
                uVar20 = 0x666666666666666 - (uVar32 >> 1);
                if (uVar32 < uVar20 || uVar32 - uVar20 == 0) {
                  uVar32 = (uVar32 >> 1) + uVar32;
                  if (uVar32 < uVar25) {
                    uVar32 = uVar25;
                  }
                }
                else {
                  uVar32 = 0x666666666666666;
                }
                if (local_1b0 != 0) {
                  uVar25 = lVar24 * 8;
                  lVar24 = local_1b0;
                  if (0xfff < uVar25) {
                    lVar24 = *(longlong *)(local_1b0 + -8);
                    if (0x1f < (local_1b0 - lVar24) - 8U) goto LAB_14015e1c2;
                    uVar25 = uVar25 + 0x27;
                  }
                  thunk_FUN_14028af80(lVar24,uVar25);
                  local_1b0 = 0;
                  local_1a8 = 0;
                  lStack_1a0 = 0;
                }
                FUN_1400cece0(&local_1b0,uVar32);
                lVar24 = local_1b0;
                FUN_1404210f0(local_1b0,pbVar34,lVar13 * 8);
                local_1a8 = lVar13 * 8 + lVar24;
              }
              (**(code **)(*param_3 + 0x10))(param_3,&local_218);
              if (local_160 != (longlong *)0x0) {
                (**(code **)(*local_160 + 0x20))
                          (local_160,
                           CONCAT71((int7)((ulonglong)local_198 >> 8),local_160 != local_198));
                local_160 = (longlong *)0x0;
              }
              if (local_1b0 != 0) {
                uVar32 = (lStack_1a0 - local_1b0 >> 3) * 8;
                lVar24 = local_1b0;
                if (0xfff < uVar32) {
                  lVar24 = *(longlong *)(local_1b0 + -8);
                  if (0x1f < (local_1b0 - lVar24) - 8U) goto LAB_14015e1c2;
                  uVar32 = uVar32 + 0x27;
                }
                thunk_FUN_14028af80(lVar24,uVar32);
                local_1b0 = 0;
                local_1a8 = 0;
                lStack_1a0 = 0;
              }
              if (0xf < local_1e8) {
                uVar32 = local_1e8 + 1;
                lVar24 = local_200;
                if (0xfff < uVar32) {
                  lVar24 = *(longlong *)(local_200 + -8);
                  if (0x1f < (local_200 - lVar24) - 8U) goto LAB_14015e1c2;
                  uVar32 = local_1e8 + 0x28;
                }
                thunk_FUN_14028af80(lVar24,uVar32);
              }
            }
            if (plStack_258 == local_250) {
              FUN_140160fb0(&local_260,plStack_258,&local_2f8);
            }
            else {
              *plStack_258 = (longlong)local_2f8;
              plStack_258[1] = lStack_2f0;
              *(undefined4 *)(plStack_258 + 2) = (undefined4)local_2e8;
              *(undefined4 *)((longlong)plStack_258 + 0x14) = local_2e8._4_4_;
              *(undefined4 *)(plStack_258 + 3) = (undefined4)uStack_2e0;
              *(undefined4 *)((longlong)plStack_258 + 0x1c) = uStack_2e0._4_4_;
              plStack_258[4] = CONCAT44(uStack_2d4,local_2d8);
              plStack_258 = plStack_258 + 5;
            }
            if (local_2a8 != (byte *)0x0) {
              uVar32 = ((longlong)local_298 - (longlong)local_2a8 >> 3) * 8;
              pbVar34 = local_2a8;
              if (0xfff < uVar32) {
                pbVar34 = *(byte **)(local_2a8 + -8);
                if ((byte *)0x1f < local_2a8 + (-8 - (longlong)pbVar34)) goto LAB_14015e1c2;
                uVar32 = uVar32 + 0x27;
              }
              thunk_FUN_14028af80(pbVar34,uVar32);
            }
            uVar32 = (ulonglong)local_300;
            uVar22 = local_310;
          }
          local_2ac = local_2ac + 1;
          iVar12 = local_2b8;
        } while (local_2ac < (int)local_2b4);
      }
      uVar30 = local_2fc;
      if (param_6[6] == param_6[7]) {
        FUN_140161230(param_6 + 5,param_6[6],&local_260);
      }
      else {
        FUN_140161940();
        param_6[6] = param_6[6] + 0x18;
      }
      FUN_1400caf90(&local_260);
      local_2fc = uVar30 + 1;
    } while ((int)local_2fc < iVar12);
  }
  FUN_14000d9e0(local_70);
  FUN_140049340(local_80);
  FUN_14000d9e0(local_b0);
  FUN_140049340(local_c0);
  return uVar22;
}

