// Function: FUN_1400d02b0
// Addr: 1400d02b0
// Size: 7781 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d02b0(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  undefined8 uVar21;
  float *pfVar22;
  float *pfVar23;
  void *pvVar24;
  ulonglong uVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  undefined8 *puVar29;
  code *pcVar30;
  longlong *plVar31;
  longlong *plVar32;
  byte bVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  undefined8 *puVar43;
  int iVar44;
  uint uVar45;
  longlong *plVar46;
  uint uVar47;
  uint uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  int iVar52;
  size_t _Size;
  longlong *plVar53;
  longlong *plVar54;
  ulonglong uVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  uint uVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  uint uVar64;
  uint uVar65;
  longlong *local_res20;
  longlong local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  int local_3c0;
  float local_3bc;
  uint local_3b8;
  longlong *local_3b0;
  uint local_3a8;
  int local_3a4;
  uint local_3a0;
  ulonglong local_398;
  uint local_390;
  uint local_38c;
  longlong *local_388;
  void *local_380;
  void *local_378;
  longlong *local_370;
  uint *local_368;
  longlong *local_360;
  ulonglong local_358 [4];
  uint *local_338;
  void *local_330 [2];
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  longlong local_300;
  longlong *local_2f8;
  float local_2e8 [64];
  float afStack_1e8 [88];
  
  CoInitializeEx((LPVOID)0x0,6);
  fVar16 = DAT_1404928fc;
  fVar15 = DAT_140492704;
  plVar46 = param_1 + 0x1c;
  local_370 = param_1 + 0x1b;
  plVar54 = (longlong *)0x0;
  local_3a4 = 0;
  bVar14 = false;
  local_338 = (uint *)(param_1 + 0x1f);
  local_3c0 = 0;
  fVar63 = 0.0;
  local_300 = (longlong)param_1 + 0xe4;
  local_3bc = 0.0;
  local_368 = (uint *)((longlong)param_1 + 0xf4);
  local_3d8 = 0;
  local_2f8 = param_1 + 3;
  local_3a8 = 0;
  local_330[0] = (void *)0x0;
  local_330[1] = (void *)0x0;
  local_378 = (void *)0x0;
  local_380 = (void *)0x0;
  local_3b0 = (longlong *)0x0;
  local_3c8 = (longlong *)0x0;
  local_3d0 = (longlong *)0x0;
  local_390 = 0;
  local_38c = 0;
  bVar13 = false;
  local_3b8 = 0;
  plVar20 = plVar54;
  plVar53 = local_370;
  plVar32 = plVar54;
  plVar31 = plVar54;
  fVar59 = DAT_1404925e0;
  uVar60 = (uint)DAT_140492fe0;
  uVar61 = DAT_140492fe0._4_4_;
  uVar64 = _UNK_140492fe8;
  uVar65 = _UNK_140492fec;
  local_388 = plVar46;
LAB_1400d0400:
  do {
    if (!bVar13) {
      Sleep(*(DWORD *)((longlong)param_1 + 0x14));
      iVar18 = FUN_140290e10(param_1 + 0xf);
      if (iVar18 != 0) goto LAB_1400d205b;
      FUN_140290ea0(param_1 + 0xf);
      if ((char)param_1[0x25] == '\0') {
        if (*plVar53 == 0) {
          if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1a] + 0x58))();
          }
          if ((longlong *)*plVar53 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar53 + 0x10))();
            *plVar53 = 0;
          }
          if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
            param_1[0x1a] = 0;
          }
          cVar17 = FUN_1400cf120((longlong)param_1 + 0xe4,param_1 + 0x20,plVar46,param_1 + 1,
                                 (longlong)param_1 + 0xf4,param_1 + 0x1f,param_1 + 0x19,
                                 param_1 + 0x1a,plVar53);
          *(char *)((longlong)param_1 + 0xfc) = cVar17;
          if (cVar17 == '\0') {
            Sleep(*(DWORD *)((longlong)param_1 + 0x14));
          }
          goto LAB_1400d0400;
        }
        uVar47 = *(uint *)((longlong)param_1 + 0xf4);
        fVar56 = *(float *)(param_1 + 0x1e);
        fVar62 = *(float *)((longlong)param_1 + 0xec);
        if ((uVar47 != local_390) || (*(uint *)(param_1 + 0x1f) != local_38c)) {
          plVar46 = (longlong *)0x0;
          plVar54 = (longlong *)0x0;
          local_3a0 = 0;
          local_38c = *local_338;
          local_390 = uVar47;
          if (plVar20 != (longlong *)0x0) {
            (*(code *)plVar20[0x16])(plVar20);
          }
          uVar48 = *local_368;
          uVar40 = (ulonglong)uVar48;
          local_398 = uVar40;
          if (uVar48 < 2) {
            local_3d0 = (longlong *)0x0;
            plVar54 = plVar46;
          }
          else if ((uVar40 & uVar40 - 1) == 0) {
            plVar20 = (longlong *)_calloc_base(1,0xd0);
            local_3d0 = plVar20;
            if (plVar20 != (longlong *)0x0) {
              plVar20[10] = uVar40;
              plVar20[0x16] = (longlong)FUN_140145900;
              if (uVar48 < 0x20) {
                if (uVar48 == 2) {
                  pcVar30 = (code *)&LAB_140146aa0;
                }
                else if (uVar48 == 4) {
                  pcVar30 = FUN_140146ac0;
                }
                else {
                  pcVar30 = FUN_140146b70;
                  if (uVar48 != 8) {
                    pcVar30 = FUN_140146c90;
                  }
                }
LAB_1400d1351:
                local_3d0[0xc] = (longlong)pcVar30;
                plVar54 = plVar46;
              }
              else {
                local_358[3] = (ulonglong)(uVar48 >> 3);
                uVar41 = 0;
                if (local_358[3] != 0) {
                  for (; ((uVar48 >> 3) >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
                  }
                }
                uVar55 = uVar41 & 0xffffffff;
                if (uVar55 < 0x20) {
                  local_358[0] = uVar55;
                  if ((int)uVar41 == 0) goto LAB_1400d0aaa;
                  pvVar24 = _aligned_malloc((longlong)((1 << ((byte)uVar55 & 0x1f)) * 3 + -5) << 6,
                                            0x20);
                  plVar20[1] = (longlong)pvVar24;
                  if (pvVar24 != (void *)0x0) {
                    lVar50 = _malloc_base(uVar55 * 8);
                    plVar20[6] = lVar50;
                    if (lVar50 != 0) goto LAB_1400d0aaa;
                  }
                }
                else {
                  uVar55 = 0;
                  local_358[0] = 0;
LAB_1400d0aaa:
                  lVar50 = plVar20[1];
                  local_360 = (longlong *)&DAT_00000010;
                  pvVar24 = _aligned_malloc(0x40L << ((char)uVar55 - 2U & 0x3f),0x20);
                  FUN_14014af80(pvVar24);
                  local_358[2] = 0;
                  iVar18 = 1 << ((char)uVar55 - 1U & 0x1f);
                  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar18);
                  uVar41 = 0;
                  plVar32 = local_360;
                  if (uVar55 != 0) {
                    do {
                      *(longlong *)(local_3d0[6] + local_358[2] * 8) = lVar50 - local_3d0[1] >> 3;
                      if (local_358[2] == 0) {
                        uVar40 = (ulonglong)plVar32 >> 2;
                        pvVar26 = _aligned_malloc(uVar40 * 8,0x20);
                        uVar41 = 0;
                        if (3 < uVar40) {
                          lVar51 = (longlong)iVar18;
                          do {
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar51 * uVar41 * 8);
                            lVar37 = (uVar41 + 1) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 4) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar51 * uVar41 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8);
                            lVar38 = (uVar41 + 2) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0xc) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x10) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8);
                            lVar37 = (uVar41 + 3) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x14) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x18) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x1c) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8 + 4);
                            uVar41 = uVar41 + 4;
                          } while (uVar41 < uVar40 - 3);
                        }
                        for (; uVar41 < uVar40; uVar41 = uVar41 + 1) {
                          *(undefined4 *)((longlong)pvVar26 + uVar41 * 8) =
                               *(undefined4 *)((longlong)pvVar24 + (longlong)iVar18 * uVar41 * 8);
                          *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 4) =
                               *(undefined4 *)
                                ((longlong)pvVar24 + (longlong)iVar18 * uVar41 * 8 + 4);
                        }
                        uVar41 = 0;
                        if (uVar40 != 0) {
                          do {
                            puVar1 = (undefined4 *)((longlong)pvVar26 + uVar41 * 8);
                            uVar7 = *puVar1;
                            uVar8 = puVar1[2];
                            uVar55 = uVar41 + 2;
                            auVar57._0_4_ = puVar1[1] ^ uVar60;
                            auVar57._4_4_ = puVar1[1] ^ uVar61;
                            auVar57._8_4_ = puVar1[3] ^ uVar64;
                            auVar57._12_4_ = puVar1[3] ^ uVar65;
                            *(undefined1 (*) [16])(lVar50 + 0x10 + uVar41 * 0x10) = auVar57;
                            puVar1 = (undefined4 *)(lVar50 + uVar41 * 0x10);
                            *puVar1 = uVar7;
                            puVar1[1] = uVar7;
                            puVar1[2] = uVar8;
                            puVar1[3] = uVar8;
                            uVar41 = uVar55;
                          } while (uVar55 < uVar40);
                        }
                      }
                      else {
                        uVar41 = (ulonglong)plVar32 & 0xfffffffffffffff8;
                        uVar40 = (ulonglong)plVar32 >> 3;
                        pvVar27 = _aligned_malloc(uVar41,0x20);
                        pvVar28 = _aligned_malloc(uVar41,0x20);
                        pvVar26 = _aligned_malloc(uVar41,0x20);
                        uVar41 = 0;
                        if (3 < uVar40) {
                          lVar51 = (longlong)(int)local_res20;
                          do {
                            lVar37 = uVar40 + uVar41;
                            lVar38 = lVar51 * uVar41;
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 0x10);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 4) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 0x10 + 4);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 4) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8 + 4);
                            lVar38 = (uVar41 + 1) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * lVar51 * 8);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 4) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * lVar51 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 0x10);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 0xc) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 0x10 + 4);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 0xc) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8 + 4);
                            lVar38 = (lVar37 + 1) * lVar51;
                            lVar42 = (uVar41 + 2) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 8) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0xc) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 0x10) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 0x10);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 0x14) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 0x10 + 4);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 0x10) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 8);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 0x14) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 8 + 4);
                            lVar38 = (lVar37 + 2) * lVar51;
                            lVar42 = (uVar41 + 3) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x10) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x14) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar38 * 8 + 4);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 0x18) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 0x10);
                            *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 0x1c) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 0x10 + 4);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 0x18) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 8);
                            *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 0x1c) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar42 * 8 + 4);
                            lVar37 = (lVar37 + 3) * lVar51;
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x18) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8);
                            *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 0x1c) =
                                 *(undefined4 *)((longlong)pvVar24 + lVar37 * 8 + 4);
                            uVar41 = uVar41 + 4;
                          } while (uVar41 < uVar40 - 3);
                        }
                        for (; uVar41 < uVar40; uVar41 = uVar41 + 1) {
                          lVar51 = (longlong)(int)local_res20 * uVar41;
                          *(undefined4 *)((longlong)pvVar27 + uVar41 * 8) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 0x10);
                          *(undefined4 *)((longlong)pvVar27 + uVar41 * 8 + 4) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 0x10 + 4);
                          *(undefined4 *)((longlong)pvVar28 + uVar41 * 8) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 8);
                          *(undefined4 *)((longlong)pvVar28 + uVar41 * 8 + 4) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 8 + 4);
                          lVar51 = (uVar40 + uVar41) * (longlong)(int)local_res20;
                          *(undefined4 *)((longlong)pvVar26 + uVar41 * 8) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 8);
                          *(undefined4 *)((longlong)pvVar26 + uVar41 * 8 + 4) =
                               *(undefined4 *)((longlong)pvVar24 + lVar51 * 8 + 4);
                        }
                        uVar41 = 0;
                        if (uVar40 != 0) {
                          do {
                            puVar1 = (undefined4 *)((longlong)pvVar27 + uVar41 * 8);
                            uVar7 = *puVar1;
                            uVar45 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar34 = puVar1[3];
                            puVar1 = (undefined4 *)(lVar50 + uVar41 * 0x30);
                            *puVar1 = uVar7;
                            puVar1[1] = uVar7;
                            puVar1[2] = uVar8;
                            puVar1[3] = uVar8;
                            puVar2 = (uint *)(lVar50 + 0x10 + uVar41 * 0x30);
                            *puVar2 = uVar45 ^ uVar60;
                            puVar2[1] = uVar45 ^ uVar61;
                            puVar2[2] = uVar34 ^ uVar64;
                            puVar2[3] = uVar34 ^ uVar65;
                            puVar1 = (undefined4 *)((longlong)pvVar28 + uVar41 * 8);
                            uVar7 = *puVar1;
                            uVar45 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar34 = puVar1[3];
                            puVar1 = (undefined4 *)(lVar50 + 0x20 + uVar41 * 0x30);
                            *puVar1 = uVar7;
                            puVar1[1] = uVar7;
                            puVar1[2] = uVar8;
                            puVar1[3] = uVar8;
                            auVar58._0_4_ = uVar45 ^ uVar60;
                            auVar58._4_4_ = uVar45 ^ uVar61;
                            auVar58._8_4_ = uVar34 ^ uVar64;
                            auVar58._12_4_ = uVar34 ^ uVar65;
                            *(undefined1 (*) [16])(lVar50 + 0x30 + uVar41 * 0x30) = auVar58;
                            puVar1 = (undefined4 *)((longlong)pvVar26 + uVar41 * 8);
                            uVar7 = *puVar1;
                            uVar45 = puVar1[1];
                            uVar8 = puVar1[2];
                            uVar34 = puVar1[3];
                            uVar55 = uVar41 + 2;
                            puVar1 = (undefined4 *)(lVar50 + 0x40 + uVar41 * 0x30);
                            *puVar1 = uVar7;
                            puVar1[1] = uVar7;
                            puVar1[2] = uVar8;
                            puVar1[3] = uVar8;
                            puVar2 = (uint *)(lVar50 + 0x50 + uVar41 * 0x30);
                            *puVar2 = uVar45 ^ uVar60;
                            puVar2[1] = uVar45 ^ uVar61;
                            puVar2[2] = uVar34 ^ uVar64;
                            puVar2[3] = uVar34 ^ uVar65;
                            uVar41 = uVar55;
                          } while (uVar55 < uVar40);
                        }
                        FUN_1402d3dd0(pvVar27);
                        FUN_1402d3dd0(pvVar28);
                        uVar40 = uVar40 * 3;
                        iVar18 = (int)local_res20;
                      }
                      lVar50 = lVar50 + uVar40 * 0x10;
                      FUN_1402d3dd0(pvVar26);
                      local_358[2] = local_358[2] + 1;
                      iVar18 = iVar18 >> 1;
                      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar18);
                      plVar32 = (longlong *)((longlong)plVar32 * 2);
                    } while (local_358[2] < local_358[0]);
                    plVar46 = (longlong *)(ulonglong)local_3a0;
                    uVar41 = local_358[0];
                    uVar40 = local_398;
                  }
                  FUN_1402d3dd0(pvVar24);
                  plVar20 = local_3d0;
                  local_3d0[0xb] = lVar50;
                  local_3d0[9] = uVar41;
                  lVar50 = _malloc_base(uVar40 & 0xfffffffffffffff8);
                  if (lVar50 == 0) {
                    *plVar20 = 0;
                    plVar32 = local_3c8;
                    plVar31 = local_3b0;
                  }
                  else {
                    uVar41 = uVar40 >> 2;
                    puVar29 = (undefined8 *)_malloc_base(uVar41 * 8);
                    if (puVar29 == (undefined8 *)0x0) {
                      thunk_FUN_1402d9040(lVar50);
                      *plVar20 = 0;
                      plVar32 = local_3c8;
                      plVar31 = local_3b0;
                    }
                    else {
                      *puVar29 = 0;
                      iVar18 = 1;
                      puVar29[1] = 0;
                      uVar55 = 0;
                      if (uVar40 != 0) {
                        for (; (uVar40 >> uVar55 & 1) == 0; uVar55 = uVar55 + 1) {
                        }
                      }
                      puVar29[3] = 8;
                      puVar29[5] = 0x10;
                      puVar29[7] = 0x18;
                      bVar33 = (char)uVar55 - 4;
                      iVar39 = 1 << (bVar33 & 0x1f);
                      puVar29[2] = (longlong)(2 << (bVar33 & 0x1f));
                      puVar29[4] = (longlong)iVar39;
                      puVar29[6] = (longlong)-iVar39;
                      uVar45 = (uint)uVar55;
                      uVar36 = local_358[3];
                      while (local_358[3] = uVar36, 5 < (int)uVar45) {
                        uVar45 = (int)uVar55 - 1;
                        uVar55 = (ulonglong)((int)uVar55 - 2);
                        iVar39 = iVar18 * 4;
                        FUN_1401453b0(puVar29,uVar55,iVar18,1 << ((byte)uVar45 & 0x1f),iVar39);
                        FUN_1401453b0(puVar29,uVar55 & 0xffffffff,-iVar18,3 << ((byte)uVar55 & 0x1f)
                                      ,iVar39);
                        iVar18 = iVar18 * 2;
                        uVar55 = (ulonglong)uVar45;
                        uVar36 = local_358[3];
                      }
                      uVar55 = 0;
                      if (uVar41 != 0) {
                        do {
                          if ((longlong)puVar29[uVar55] < 0) {
                            puVar29[uVar55] = puVar29[uVar55] + uVar40;
                          }
                          uVar55 = uVar55 + 2;
                        } while (uVar55 < uVar41);
                      }
                      FUN_1402ea670(puVar29,uVar36,0x10);
                      uVar41 = 0;
                      if (uVar36 != 0) {
                        do {
                          *(longlong *)(lVar50 + uVar41 * 8) = puVar29[uVar41 * 2 + 1] * 2;
                          uVar41 = uVar41 + 1;
                        } while (uVar41 < uVar36);
                      }
                      thunk_FUN_1402d9040(puVar29);
                      *local_3d0 = lVar50;
                      uVar41 = 0;
                      if (uVar36 != 0) {
                        for (; (uVar36 >> uVar41 & 1) == 0; uVar41 = uVar41 + 1) {
                        }
                      }
                      local_360 = (longlong *)_malloc_base(uVar40 * 8);
                      if (local_360 != (longlong *)0x0) {
                        iVar39 = (int)(uVar36 / 3);
                        iVar52 = iVar39 + 1;
                        iVar18 = iVar52;
                        if (uVar36 % 3 < 2) {
                          iVar18 = iVar39;
                        }
                        iVar44 = 0;
                        local_res20 = local_360;
                        if (0 < iVar52) {
                          do {
                            FUN_1401454b0(&local_res20,uVar40 & 0xffffffff,iVar44,
                                          uVar41 & 0xffffffff);
                            iVar44 = iVar44 + 1;
                          } while (iVar44 < iVar52);
                        }
                        uVar21 = _UNK_140492c18;
                        uVar55 = _DAT_140492c10;
                        iVar18 = iVar18 + iVar52;
                        iVar44 = (int)uVar41;
                        if (iVar52 < iVar18) {
                          iVar19 = iVar44 + 1;
                          do {
                            lVar50 = 0;
                            local_358[0] = uVar55;
                            local_358[1] = uVar21;
                            do {
                              uVar6 = *(undefined8 *)((longlong)local_358 + lVar50 * 4);
                              uVar60 = ((int)uVar6 << iVar19) + iVar52;
                              uVar61 = ((int)((ulonglong)uVar6 >> 0x20) << iVar19) + iVar52;
                              *(ulonglong *)(&local_320 + lVar50) =
                                   CONCAT44(uVar48 + uVar61 & -(uint)((int)uVar61 < 0),
                                            uVar48 + uVar60 & -(uint)((int)uVar60 < 0)) |
                                   CONCAT44(~-(uint)((int)uVar61 < 0) & uVar61,
                                            ~-(uint)((int)uVar60 < 0) & uVar60);
                              lVar50 = lVar50 + 2;
                            } while (lVar50 != 4);
                            *local_res20 = (longlong)(local_320 * 2);
                            local_res20[1] = (longlong)(local_31c * 2);
                            local_res20[2] = (longlong)(local_318 * 2);
                            lVar50 = 0;
                            local_res20[3] = (longlong)(local_314 * 2);
                            do {
                              uVar6 = *(undefined8 *)((longlong)local_358 + lVar50 * 4);
                              uVar60 = (((int)uVar6 << iVar19) - ((int)DAT_140492bf0 << iVar44)) +
                                       iVar52;
                              uVar61 = (((int)((ulonglong)uVar6 >> 0x20) << iVar19) -
                                       (DAT_140492bf0._4_4_ << iVar44)) + iVar52;
                              *(ulonglong *)(&local_310 + lVar50) =
                                   CONCAT44(uVar48 + uVar61 & -(uint)((int)uVar61 < 0),
                                            uVar48 + uVar60 & -(uint)((int)uVar60 < 0)) |
                                   CONCAT44(~-(uint)((int)uVar61 < 0) & uVar61,
                                            ~-(uint)((int)uVar60 < 0) & uVar60);
                              lVar50 = lVar50 + 2;
                            } while (lVar50 != 4);
                            iVar52 = iVar52 + 1;
                            local_res20[4] = (longlong)(local_310 * 2);
                            local_res20[5] = (longlong)(local_30c * 2);
                            local_res20[6] = (longlong)(local_308 * 2);
                            local_res20[7] = (longlong)(local_304 * 2);
                            local_res20 = local_res20 + 8;
                            fVar63 = local_3bc;
                            uVar60 = (uint)DAT_140492fe0;
                            uVar61 = DAT_140492fe0._4_4_;
                            uVar64 = _UNK_140492fe8;
                            uVar65 = _UNK_140492fec;
                          } while (iVar52 < iVar18);
                        }
                        plVar32 = local_3c8;
                        plVar31 = local_3b0;
                        for (iVar39 = -iVar39; local_3c8 = plVar32, local_3b0 = plVar31, iVar39 < 0;
                            iVar39 = iVar39 + 1) {
                          FUN_1401454b0(&local_res20,uVar40 & 0xffffffff,iVar39,uVar41 & 0xffffffff)
                          ;
                          plVar32 = local_3c8;
                          plVar31 = local_3b0;
                        }
                        local_3d0[5] = (longlong)local_360;
                        uVar40 = local_358[3] / 3;
                        local_3d0[0x19] = uVar40;
                        local_3d0[8] = uVar40;
                        local_3d0[7] = uVar40 + 1;
                        if (1 < local_358[3] % 3) {
                          local_3d0[8] = uVar40 + 1;
                        }
                        pcVar30 = FUN_140149100;
                        local_3d0[7] = (ulonglong)local_3d0[7] >> 1;
                        local_3d0[8] = (ulonglong)local_3d0[8] >> 1;
                        goto LAB_1400d1351;
                      }
                      local_3d0[5] = 0;
                      plVar20 = local_3d0;
                      plVar32 = local_3c8;
                      plVar31 = local_3b0;
                    }
                  }
                }
                FUN_140145900(plVar20);
                local_3d0 = (longlong *)0x0;
                plVar54 = plVar46;
              }
            }
          }
          else {
            plVar20 = (longlong *)_calloc_base(1,0xd8);
            if (plVar20 == (longlong *)0x0) {
              local_3d0 = (longlong *)0x0;
              plVar54 = plVar46;
            }
            else {
              plVar20[10] = uVar40;
              plVar20[0x16] = (longlong)FUN_14014b280;
              uVar41 = uVar40 * 2;
              *(undefined4 *)(plVar20 + 0x11) = 1;
              plVar20[0x10] = (longlong)(plVar20 + 0x1a);
              plVar20[0xc] = (longlong)FUN_14014b740;
              lVar50 = 0x3f;
              if (uVar41 - 1 != 0) {
                for (; uVar41 - 1 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                }
              }
              bVar33 = (char)lVar50 + 1;
              uVar55 = 1L << (bVar33 & 0x3f);
              local_3d0 = plVar20;
              uVar21 = FUN_140145e60(uVar55);
              *(undefined8 *)plVar20[0x10] = uVar21;
              if (*(longlong *)plVar20[0x10] != 0) {
                pfVar22 = _aligned_malloc(uVar40 * 8,0x20);
                plVar20[0x17] = (longlong)pfVar22;
                if (pfVar22 != (float *)0x0) {
                  _Size = 8L << (bVar33 & 0x3f);
                  local_res20 = _aligned_malloc(_Size,0x20);
                  plVar20[0x18] = (longlong)local_res20;
                  if (local_res20 != (longlong *)0x0) {
                    pfVar23 = _aligned_malloc(0x10L << (bVar33 & 0x3f),0x20);
                    plVar20[0x14] = (longlong)pfVar23;
                    pvVar24 = _aligned_malloc(local_398 << 4,0x20);
                    if (pvVar24 != (void *)0x0) {
                      FUN_140149360(pvVar24);
                      uVar36 = 0;
                      uVar49 = 0;
                      if (3 < (uint)local_398) {
                        do {
                          uVar25 = uVar49 * 2;
                          pfVar22[uVar49 * 2] = *(float *)((longlong)pvVar24 + uVar36 * 8);
                          uVar35 = (uVar25 | 1) + uVar36;
                          pfVar22[uVar49 * 2 + 1] = *(float *)((longlong)pvVar24 + uVar36 * 8 + 4);
                          uVar36 = uVar35 + uVar40 * -2;
                          if (uVar35 < uVar41) {
                            uVar36 = uVar35;
                          }
                          pfVar22[uVar49 * 2 + 2] = *(float *)((longlong)pvVar24 + uVar36 * 8);
                          pfVar22[uVar49 * 2 + 3] = *(float *)((longlong)pvVar24 + uVar36 * 8 + 4);
                          uVar35 = uVar36 + 3 + uVar25;
                          uVar36 = uVar35 + uVar40 * -2;
                          if (uVar35 < uVar41) {
                            uVar36 = uVar35;
                          }
                          pfVar22[uVar49 * 2 + 4] = *(float *)((longlong)pvVar24 + uVar36 * 8);
                          pfVar22[uVar49 * 2 + 5] = *(float *)((longlong)pvVar24 + uVar36 * 8 + 4);
                          uVar35 = uVar36 + 5 + uVar25;
                          uVar36 = uVar35 + uVar40 * -2;
                          if (uVar35 < uVar41) {
                            uVar36 = uVar35;
                          }
                          pfVar22[uVar49 * 2 + 6] = *(float *)((longlong)pvVar24 + uVar36 * 8);
                          pfVar22[uVar49 * 2 + 7] = *(float *)((longlong)pvVar24 + uVar36 * 8 + 4);
                          uVar25 = uVar36 + 7 + uVar25;
                          uVar36 = uVar25 + uVar40 * -2;
                          if (uVar25 < uVar41) {
                            uVar36 = uVar25;
                          }
                          uVar49 = uVar49 + 4;
                        } while (uVar49 < local_398 - 3);
                      }
                      while (uVar49 < local_398) {
                        pfVar22[uVar49 * 2] = *(float *)((longlong)pvVar24 + uVar36 * 8);
                        uVar25 = (uVar49 * 2 | 1) + uVar36;
                        pfVar22[uVar49 * 2 + 1] = *(float *)((longlong)pvVar24 + uVar36 * 8 + 4);
                        uVar49 = uVar49 + 1;
                        uVar36 = uVar25 + uVar40 * -2;
                        if (uVar25 < uVar41) {
                          uVar36 = uVar25;
                        }
                      }
                      FUN_1402d3dd0(pvVar24);
                    }
                    fVar59 = fVar15 / (float)uVar55;
                    uVar40 = 1;
                    *pfVar23 = fVar59 * *pfVar22;
                    pfVar23[1] = fVar59 * pfVar22[1];
                    if (local_398 - 1 < 4) goto LAB_1400d0955;
                    uVar41 = uVar40;
                    do {
                      fVar3 = pfVar22[uVar41 * 2];
                      uVar40 = uVar41 + 4;
                      lVar50 = _Size + uVar41 * -8;
                      *(float *)((longlong)pfVar23 + lVar50) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 1];
                      *(float *)((longlong)pfVar23 + lVar50 + 4) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 1] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 2];
                      *(float *)((longlong)pfVar23 + lVar50 + -8) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 2] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 3];
                      *(float *)((longlong)pfVar23 + lVar50 + -4) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 3] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 4];
                      *(float *)((longlong)pfVar23 + lVar50 + -0x10) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 4] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 5];
                      *(float *)((longlong)pfVar23 + lVar50 + -0xc) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 5] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 6];
                      *(float *)((longlong)pfVar23 + lVar50 + -0x18) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 6] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar41 * 2 + 7];
                      *(float *)((longlong)pfVar23 + lVar50 + -0x14) = fVar59 * fVar3;
                      pfVar23[uVar41 * 2 + 7] = fVar59 * fVar3;
                      uVar41 = uVar40;
                    } while (uVar40 < local_398 - 3);
                    for (; uVar40 < local_398; uVar40 = uVar40 + 1) {
LAB_1400d0955:
                      fVar3 = pfVar22[uVar40 * 2];
                      lVar50 = _Size + uVar40 * -8;
                      *(float *)((longlong)pfVar23 + lVar50) = fVar59 * fVar3;
                      pfVar23[uVar40 * 2] = fVar59 * fVar3;
                      fVar3 = pfVar22[uVar40 * 2 + 1];
                      *(float *)((longlong)pfVar23 + lVar50 + 4) = fVar59 * fVar3;
                      pfVar23[uVar40 * 2 + 1] = fVar59 * fVar3;
                    }
                    for (; uVar40 <= uVar55 - local_398; uVar40 = uVar40 + 1) {
                      (pfVar23 + uVar40 * 2)[0] = 0.0;
                      (pfVar23 + uVar40 * 2)[1] = 0.0;
                    }
                    (**(code **)(*(longlong *)local_3d0[0x10] + 0x60))
                              (*(longlong *)local_3d0[0x10],pfVar23);
                    plVar54 = plVar46;
                    plVar32 = local_3c8;
                    plVar31 = local_3b0;
                    goto LAB_1400d1355;
                  }
                }
              }
              FUN_14014b280(plVar20);
              local_3d0 = (longlong *)0x0;
              plVar32 = local_3c8;
              plVar31 = local_3b0;
            }
          }
LAB_1400d1355:
          plVar20 = local_3d0;
          if (plVar31 != (longlong *)0x0) {
            FUN_1402d3dd0(plVar31);
          }
          if (plVar32 != (longlong *)0x0) {
            FUN_1402d3dd0(plVar32);
          }
          if (local_380 != (void *)0x0) {
            FUN_1402d3dd0(local_380);
          }
          if (local_378 != (void *)0x0) {
            FUN_1402d3dd0(local_378);
          }
          puVar2 = local_368;
          plVar31 = _aligned_malloc((ulonglong)(*local_368 * 2) << 2,0x20);
          local_3b0 = plVar31;
          local_380 = _aligned_malloc((ulonglong)(*puVar2 * 2) << 2,0x20);
          local_330[0] = local_380;
          plVar32 = _aligned_malloc((ulonglong)(*puVar2 * 2) << 2,0x20);
          local_3c8 = plVar32;
          local_378 = _aligned_malloc((ulonglong)(*puVar2 * 2) << 2,0x20);
          uVar48 = 0;
          plVar46 = local_388;
          plVar53 = local_370;
          fVar59 = DAT_1404925e0;
          local_330[1] = local_378;
          if (*puVar2 != 0) {
            do {
              iVar18 = uVar48 * 2;
              uVar48 = uVar48 + 1;
              *(undefined4 *)((longlong)plVar31 + (longlong)iVar18 * 4) = 0x42fe0000;
              *(undefined4 *)((longlong)plVar31 + (longlong)iVar18 * 4 + 4) = 0x3c010204;
              *(undefined4 *)((longlong)plVar32 + (longlong)iVar18 * 4) = 0x42fe0000;
              *(undefined4 *)((longlong)plVar32 + (longlong)iVar18 * 4 + 4) = 0x3c010204;
              fVar59 = DAT_1404925e0;
            } while (uVar48 < *puVar2);
          }
        }
        local_3c0 = 0;
        iVar18 = (**(code **)(*(longlong *)*plVar53 + 0x28))();
        if (-1 < iVar18) {
          cVar17 = '\0';
          local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffffffffff00);
          uVar47 = (uint)((float)uVar47 - (fVar56 / fVar62) * (float)uVar47);
          local_398 = CONCAT44(local_398._4_4_,uVar47);
          if (local_3c0 == 0) {
            if (fVar63 <= DAT_140492944) {
              local_3bc = fVar63 + (float)*(int *)((longlong)param_1 + 0x14);
              fVar63 = local_3bc;
            }
            else {
              bVar14 = true;
            }
          }
          else {
            local_3bc = 0.0;
            fVar63 = local_3bc;
          }
          do {
            if ((iVar18 != 0) || (uVar48 = (uint)plVar54, local_3c0 == 0)) goto LAB_1400d1b52;
            local_3a8 = 0;
            iVar18 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))
                               ((longlong *)param_1[0x1b],&local_3d8,&local_3a4,&local_3a8,0,0);
            if (iVar18 < 0) break;
            if ((cVar17 == '\0') && ((local_3a8 & 2) == 0 && iVar18 == 0)) {
              bVar14 = false;
              if ((local_3d8 != 0) && (uVar48 < *(uint *)((longlong)param_1 + 0xf4))) {
                local_3a0 = uVar47;
                if (local_3a4 + uVar48 < uVar47) {
                  local_3a0 = local_3a4 + uVar48;
                }
                if ((int)*plVar46 < 2) {
                  if ((int)uVar48 < (int)local_3a0) {
                    uVar47 = uVar48;
                    if ((int)(local_3a0 - uVar48) < 4) goto LAB_1400d19c4;
                    iVar18 = uVar48 * 2;
                    plVar32 = plVar54;
                    do {
                      iVar52 = (int)plVar32;
                      iVar39 = iVar52 - uVar48;
                      fVar56 = *(float *)(iVar39 * (int)*plVar46 * 4 + local_3d8) * fVar16 + fVar16;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 4) = fVar15 / fVar56;
                      fVar56 = *(float *)((iVar39 + 1) * (int)*plVar46 * 4 + local_3d8) * fVar16 +
                               fVar16;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 8) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 0xc) = fVar15 / fVar56;
                      fVar56 = *(float *)((iVar39 + 2) * (int)*plVar46 * 4 + local_3d8) * fVar16 +
                               fVar16;
                      *(float *)((longlong)plVar31 + (longlong)(iVar52 * 2 + 4) * 4) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 0x14) = fVar15 / fVar56;
                      plVar32 = (longlong *)(ulonglong)(iVar52 + 4U);
                      lVar50 = (longlong)iVar18;
                      iVar18 = iVar18 + 8;
                      fVar56 = *(float *)((iVar39 + 3) * (int)*plVar46 * 4 + local_3d8) * fVar16 +
                               fVar16;
                      *(float *)((longlong)plVar31 + (longlong)(iVar52 * 2 + 6) * 4) = fVar56;
                      *(float *)((longlong)plVar31 + lVar50 * 4 + 0x1c) = fVar15 / fVar56;
                    } while ((int)(iVar52 + 4U) < (int)(local_3a0 - 3));
                    while (uVar47 = (uint)plVar32, (int)uVar47 < (int)local_3a0) {
LAB_1400d19c4:
                      fVar56 = *(float *)((int)((uVar47 - uVar48) * (int)*plVar46 * 4) + local_3d8)
                               * fVar16 + fVar16;
                      *(float *)((longlong)plVar31 + (longlong)(int)(uVar47 * 2) * 4) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)(int)(uVar47 * 2) * 4 + 4) =
                           fVar15 / fVar56;
                      plVar32 = (longlong *)(ulonglong)(uVar47 + 1);
                    }
                  }
                }
                else if ((int)uVar48 < (int)local_3a0) {
                  plVar32 = plVar54;
                  cVar17 = (char)local_res20;
                  if (3 < (int)(local_3a0 - uVar48)) {
                    iVar18 = uVar48 * 2;
                    do {
                      iVar39 = (int)plVar32;
                      iVar52 = iVar39 - uVar48;
                      fVar56 = *(float *)(iVar52 * (int)param_1[0x1c] * 4 + local_3d8) * fVar16 +
                               fVar16;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 4) = fVar15 / fVar56;
                      fVar56 = *(float *)((longlong)(iVar52 * (int)param_1[0x1c] * 4) + 4 +
                                         local_3d8) * fVar16 + fVar16;
                      *(float *)((longlong)local_3c8 + (longlong)iVar18 * 4) = fVar56;
                      *(float *)((longlong)local_3c8 + (longlong)iVar18 * 4 + 4) = fVar15 / fVar56;
                      fVar56 = *(float *)((iVar52 + 1) * (int)param_1[0x1c] * 4 + local_3d8) *
                               fVar16 + fVar16;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 8) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 0xc) = fVar15 / fVar56;
                      fVar56 = *(float *)((longlong)((iVar52 + 1) * (int)param_1[0x1c] * 4) + 4 +
                                         local_3d8) * fVar16 + fVar16;
                      *(float *)((longlong)local_3c8 + (longlong)iVar18 * 4 + 8) = fVar56;
                      lVar50 = (longlong)(iVar39 * 2 + 4);
                      *(float *)((longlong)local_3c8 + (longlong)iVar18 * 4 + 0xc) = fVar15 / fVar56
                      ;
                      fVar56 = *(float *)((iVar52 + 2) * (int)param_1[0x1c] * 4 + local_3d8) *
                               fVar16 + fVar16;
                      *(float *)((longlong)plVar31 + lVar50 * 4) = fVar56;
                      *(float *)((longlong)plVar31 + (longlong)iVar18 * 4 + 0x14) = fVar15 / fVar56;
                      fVar56 = *(float *)((longlong)((iVar52 + 2) * (int)param_1[0x1c] * 4) + 4 +
                                         local_3d8) * fVar16 + fVar16;
                      *(float *)((longlong)local_3c8 + lVar50 * 4) = fVar56;
                      *(float *)((longlong)local_3c8 + (longlong)iVar18 * 4 + 0x14) =
                           fVar15 / fVar56;
                      lVar50 = (longlong)iVar18;
                      lVar51 = (longlong)(iVar39 * 2 + 6);
                      uVar47 = iVar39 + 4;
                      plVar32 = (longlong *)(ulonglong)uVar47;
                      iVar18 = iVar18 + 8;
                      fVar56 = *(float *)((iVar52 + 3) * (int)param_1[0x1c] * 4 + local_3d8) *
                               fVar16 + fVar16;
                      *(float *)((longlong)plVar31 + lVar51 * 4) = fVar56;
                      *(float *)((longlong)plVar31 + lVar50 * 4 + 0x1c) = fVar15 / fVar56;
                      fVar56 = *(float *)((longlong)((iVar52 + 3) * (int)param_1[0x1c] * 4) + 4 +
                                         local_3d8) * fVar16 + fVar16;
                      *(float *)((longlong)local_3c8 + lVar51 * 4) = fVar56;
                      *(float *)((longlong)local_3c8 + lVar50 * 4 + 0x1c) = fVar15 / fVar56;
                    } while ((int)uVar47 < (int)(local_3a0 - 3));
                    plVar46 = local_388;
                    if ((int)local_3a0 <= (int)uVar47) goto LAB_1400d1a15;
                  }
                  do {
                    iVar18 = (int)plVar32;
                    iVar39 = iVar18 * 2;
                    fVar56 = *(float *)((int)((iVar18 - uVar48) * (int)*plVar46 * 4) + local_3d8) *
                             fVar16 + fVar16;
                    *(float *)((longlong)plVar31 + (longlong)iVar39 * 4) = fVar56;
                    *(float *)((longlong)plVar31 + (longlong)iVar39 * 4 + 4) = fVar15 / fVar56;
                    fVar56 = *(float *)((longlong)(int)((iVar18 - uVar48) * (int)*plVar46 * 4) + 4 +
                                       local_3d8) * fVar16 + fVar16;
                    *(float *)((longlong)local_3c8 + (longlong)iVar39 * 4) = fVar56;
                    *(float *)((longlong)local_3c8 + (longlong)iVar39 * 4 + 4) = fVar15 / fVar56;
                    plVar32 = (longlong *)(ulonglong)(iVar18 + 1U);
                  } while ((int)(iVar18 + 1U) < (int)local_3a0);
                }
LAB_1400d1a15:
                if ((fVar59 < *(float *)(param_1 + 2)) && (uVar48 < local_3a0)) {
                  fVar56 = 0.0;
                  if ((int)uVar48 < (int)local_3a0) {
                    if (3 < (int)(local_3a0 - uVar48)) {
                      iVar18 = (int)*plVar46 * 4;
                      iVar39 = 0;
                      do {
                        uVar47 = (int)plVar54 + 4;
                        plVar54 = (longlong *)(ulonglong)uVar47;
                        fVar62 = *(float *)((iVar39 + 3) * iVar18 + local_3d8);
                        fVar3 = *(float *)((iVar39 + 2) * iVar18 + local_3d8);
                        fVar4 = *(float *)((iVar39 + 1) * iVar18 + local_3d8);
                        iVar52 = iVar39 * iVar18;
                        iVar39 = iVar39 + 4;
                        fVar5 = *(float *)(iVar52 + local_3d8);
                        if (fVar5 <= fVar56) {
                          fVar5 = fVar56;
                        }
                        if (fVar4 <= fVar5) {
                          fVar4 = fVar5;
                        }
                        if (fVar3 <= fVar4) {
                          fVar3 = fVar4;
                        }
                        fVar56 = fVar62;
                        if (fVar62 <= fVar3) {
                          fVar56 = fVar3;
                        }
                      } while ((int)uVar47 < (int)(local_3a0 - 3));
                      if ((int)local_3a0 <= (int)uVar47) goto LAB_1400d1ad6;
                    }
                    fVar62 = fVar56;
                    do {
                      iVar18 = (int)plVar54;
                      uVar47 = iVar18 + 1;
                      plVar54 = (longlong *)(ulonglong)uVar47;
                      fVar56 = *(float *)((int)((iVar18 - uVar48) * (int)*plVar46 * 4) + local_3d8);
                      if (fVar56 <= fVar62) {
                        fVar56 = fVar62;
                      }
                      fVar62 = fVar56;
                    } while ((int)uVar47 < (int)local_3a0);
                  }
LAB_1400d1ad6:
                  if (fVar56 < *(float *)(param_1 + 2)) {
                    cVar17 = '\x01';
                    local_res20 = (longlong *)CONCAT71(local_res20._1_7_,1);
                    bVar14 = true;
                  }
                }
                plVar54 = (longlong *)(ulonglong)local_3a0;
                uVar47 = (uint)local_398;
              }
            }
            else {
              local_3d8 = 0;
              bVar14 = true;
            }
            iVar18 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))
                               ((longlong *)param_1[0x1b],local_3a4);
          } while ((-1 < iVar18) &&
                  (iVar18 = (**(code **)(*(longlong *)param_1[0x1b] + 0x28))(), -1 < iVar18));
          bVar13 = true;
LAB_1400d1b52:
          plVar53 = local_2f8;
          plVar32 = local_3c8;
          plVar20 = local_3d0;
          if (bVar14 || bVar13) {
            iVar18 = FUN_140290d80(local_2f8);
            if (iVar18 != 0) goto LAB_1400d210c;
            if (*(int *)((longlong)param_1 + 100) == 0x7fffffff) goto LAB_1400d20fe;
            FUN_1404217a0(*param_1,0);
            FUN_140290ea0(plVar53);
          }
          else {
            plVar53 = local_370;
            if ((uint)plVar54 != uVar47) goto LAB_1400d0400;
            if ((int)*plVar46 < 2) {
              (*(code *)local_3d0[0xc])(local_3d0,plVar31,local_380);
            }
            else {
              (*(code *)local_3d0[0xc])();
              (*(code *)plVar20[0xc])(plVar20,plVar32,local_378);
            }
            FUN_1404217a0(local_2e8,0);
            iVar39 = 0;
            uVar47 = *local_338;
            fVar59 = *(float *)(param_1 + 0x1d);
            iVar18 = (int)*plVar46;
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar18);
            while( true ) {
              iVar52 = 2;
              if (iVar18 < 2) {
                iVar52 = iVar18;
              }
              if (iVar52 <= iVar39) break;
              if (1 < uVar47) {
                lVar50 = (longlong)iVar39;
                uVar45 = 1;
                pvVar24 = local_330[lVar50];
                uVar48 = 0;
                do {
                  fVar63 = *(float *)((longlong)pvVar24 + (longlong)(int)(uVar45 * 2) * 4 + 4);
                  fVar56 = *(float *)((longlong)pvVar24 + (longlong)(int)(uVar45 * 2) * 4);
                  fVar63 = fVar63 * fVar63 + fVar56 * fVar56;
                  if (((uint)fVar63 & 0x7f800000) == 0x7f800000) {
                    fVar63 = 0.0;
                  }
                  fVar56 = (float)FUN_14041e350((float)(int)(uVar45 - 1) / (float)(uVar47 - 1));
                  uVar34 = (int)(fVar56 * DAT_1404928e4) & 0x8000003f;
                  if ((int)uVar34 < 0) {
                    uVar34 = (uVar34 - 1 | 0xffffffc0) + 1;
                  }
                  uVar48 = uVar48 + 1;
                  if ((int)uVar34 <= (int)uVar48) {
                    uVar48 = uVar34;
                  }
                  fVar56 = (float)FUN_14041a2e0();
                  fVar63 = (fVar59 - fVar56 * (fVar15 - fVar59)) * fVar63;
                  if (fVar63 < 0.0) {
                    fVar63 = (float)FUN_14041ad10();
                  }
                  else {
                    fVar63 = SQRT(fVar63);
                  }
                  uVar45 = uVar45 + 1;
                  fVar56 = local_2e8[lVar50 * 0x40 + (longlong)(int)uVar48];
                  if (local_2e8[lVar50 * 0x40 + (longlong)(int)uVar48] <= fVar63) {
                    fVar56 = fVar63;
                  }
                  local_2e8[lVar50 * 0x40 + (longlong)(int)uVar48] = fVar56;
                } while (uVar45 < uVar47);
                iVar18 = (int)local_res20;
              }
              iVar39 = iVar39 + 1;
            }
            uVar40 = 0;
            fVar59 = *(float *)((longlong)param_1 + 0xc) * DAT_140492608 *
                     ((float)uVar47 / ((float)*local_368 * DAT_1404926c0));
            do {
              fVar63 = afStack_1e8[uVar40];
              fVar56 = afStack_1e8[uVar40 + 1];
              fVar62 = afStack_1e8[uVar40 + 2];
              fVar3 = afStack_1e8[uVar40 + 3];
              local_2e8[uVar40] = local_2e8[uVar40] * fVar59;
              local_2e8[uVar40 + 1] = local_2e8[uVar40 + 1] * fVar59;
              local_2e8[uVar40 + 2] = local_2e8[uVar40 + 2] * fVar59;
              local_2e8[uVar40 + 3] = local_2e8[uVar40 + 3] * fVar59;
              fVar4 = local_2e8[uVar40 + 4];
              fVar5 = local_2e8[uVar40 + 5];
              fVar9 = local_2e8[uVar40 + 6];
              fVar10 = local_2e8[uVar40 + 7];
              afStack_1e8[uVar40] = fVar63 * fVar59;
              afStack_1e8[uVar40 + 1] = fVar56 * fVar59;
              afStack_1e8[uVar40 + 2] = fVar62 * fVar59;
              afStack_1e8[uVar40 + 3] = fVar3 * fVar59;
              fVar63 = afStack_1e8[uVar40 + 4];
              fVar56 = afStack_1e8[uVar40 + 5];
              fVar62 = afStack_1e8[uVar40 + 6];
              fVar3 = afStack_1e8[uVar40 + 7];
              local_2e8[uVar40 + 4] = fVar4 * fVar59;
              local_2e8[uVar40 + 5] = fVar5 * fVar59;
              local_2e8[uVar40 + 6] = fVar9 * fVar59;
              local_2e8[uVar40 + 7] = fVar10 * fVar59;
              fVar4 = local_2e8[uVar40 + 8];
              fVar5 = local_2e8[uVar40 + 9];
              fVar9 = local_2e8[uVar40 + 10];
              fVar10 = local_2e8[uVar40 + 0xb];
              afStack_1e8[uVar40 + 4] = fVar63 * fVar59;
              afStack_1e8[uVar40 + 5] = fVar56 * fVar59;
              afStack_1e8[uVar40 + 6] = fVar62 * fVar59;
              afStack_1e8[uVar40 + 7] = fVar3 * fVar59;
              fVar63 = afStack_1e8[uVar40 + 8];
              fVar56 = afStack_1e8[uVar40 + 9];
              fVar62 = afStack_1e8[uVar40 + 10];
              fVar3 = afStack_1e8[uVar40 + 0xb];
              local_2e8[uVar40 + 8] = fVar4 * fVar59;
              local_2e8[uVar40 + 9] = fVar5 * fVar59;
              local_2e8[uVar40 + 10] = fVar9 * fVar59;
              local_2e8[uVar40 + 0xb] = fVar10 * fVar59;
              fVar4 = local_2e8[uVar40 + 0xc];
              fVar5 = local_2e8[uVar40 + 0xd];
              fVar9 = local_2e8[uVar40 + 0xe];
              fVar10 = local_2e8[uVar40 + 0xf];
              afStack_1e8[uVar40 + 8] = fVar63 * fVar59;
              afStack_1e8[uVar40 + 9] = fVar56 * fVar59;
              afStack_1e8[uVar40 + 10] = fVar62 * fVar59;
              afStack_1e8[uVar40 + 0xb] = fVar3 * fVar59;
              fVar63 = afStack_1e8[uVar40 + 0xc];
              fVar56 = afStack_1e8[uVar40 + 0xd];
              fVar62 = afStack_1e8[uVar40 + 0xe];
              fVar3 = afStack_1e8[uVar40 + 0xf];
              local_2e8[uVar40 + 0xc] = fVar4 * fVar59;
              local_2e8[uVar40 + 0xd] = fVar5 * fVar59;
              local_2e8[uVar40 + 0xe] = fVar9 * fVar59;
              local_2e8[uVar40 + 0xf] = fVar10 * fVar59;
              afStack_1e8[uVar40 + 0xc] = fVar63 * fVar59;
              afStack_1e8[uVar40 + 0xd] = fVar56 * fVar59;
              afStack_1e8[uVar40 + 0xe] = fVar62 * fVar59;
              afStack_1e8[uVar40 + 0xf] = fVar3 * fVar59;
              uVar47 = (int)uVar40 + 0x10;
              uVar40 = (ulonglong)uVar47;
            } while ((int)uVar47 < 0x40);
            iVar18 = FUN_140290d80(param_1 + 3);
            plVar46 = local_388;
            if (iVar18 != 0) {
LAB_1400d210c:
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(5);
            }
            if (*(int *)((longlong)param_1 + 100) == 0x7fffffff) {
LAB_1400d20fe:
              *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(6);
            }
            lVar50 = 2;
            puVar29 = (undefined8 *)*param_1;
            pfVar22 = local_2e8;
            do {
              uVar21 = *(undefined8 *)(pfVar22 + 2);
              uVar6 = *(undefined8 *)(pfVar22 + 4);
              uVar11 = *(undefined8 *)(pfVar22 + 6);
              *puVar29 = *(undefined8 *)pfVar22;
              puVar29[1] = uVar21;
              uVar21 = *(undefined8 *)(pfVar22 + 8);
              uVar12 = *(undefined8 *)(pfVar22 + 10);
              puVar29[2] = uVar6;
              puVar29[3] = uVar11;
              uVar6 = *(undefined8 *)(pfVar22 + 0xc);
              uVar11 = *(undefined8 *)(pfVar22 + 0xe);
              puVar29[4] = uVar21;
              puVar29[5] = uVar12;
              uVar21 = *(undefined8 *)(pfVar22 + 0x10);
              uVar12 = *(undefined8 *)(pfVar22 + 0x12);
              puVar29[6] = uVar6;
              puVar29[7] = uVar11;
              uVar6 = *(undefined8 *)(pfVar22 + 0x14);
              uVar11 = *(undefined8 *)(pfVar22 + 0x16);
              puVar29[8] = uVar21;
              puVar29[9] = uVar12;
              uVar21 = *(undefined8 *)(pfVar22 + 0x18);
              uVar12 = *(undefined8 *)(pfVar22 + 0x1a);
              puVar29[10] = uVar6;
              puVar29[0xb] = uVar11;
              uVar6 = *(undefined8 *)(pfVar22 + 0x1c);
              uVar11 = *(undefined8 *)(pfVar22 + 0x1e);
              puVar29[0xc] = uVar21;
              puVar29[0xd] = uVar12;
              puVar29[0xe] = uVar6;
              puVar29[0xf] = uVar11;
              lVar50 = lVar50 + -1;
              puVar29 = puVar29 + 0x10;
              pfVar22 = pfVar22 + 0x20;
            } while (lVar50 != 0);
            lVar50 = 0;
            if (1 < (int)*local_388) {
              lVar50 = 0x100;
            }
            lVar51 = 2;
            puVar29 = (undefined8 *)(*param_1 + 0x100);
            puVar43 = (undefined8 *)((longlong)local_2e8 + lVar50);
            do {
              uVar21 = puVar43[1];
              uVar6 = puVar43[2];
              uVar11 = puVar43[3];
              *puVar29 = *puVar43;
              puVar29[1] = uVar21;
              uVar21 = puVar43[4];
              uVar12 = puVar43[5];
              puVar29[2] = uVar6;
              puVar29[3] = uVar11;
              uVar6 = puVar43[6];
              uVar11 = puVar43[7];
              puVar29[4] = uVar21;
              puVar29[5] = uVar12;
              uVar21 = puVar43[8];
              uVar12 = puVar43[9];
              puVar29[6] = uVar6;
              puVar29[7] = uVar11;
              uVar6 = puVar43[10];
              uVar11 = puVar43[0xb];
              puVar29[8] = uVar21;
              puVar29[9] = uVar12;
              uVar21 = puVar43[0xc];
              uVar12 = puVar43[0xd];
              puVar29[10] = uVar6;
              puVar29[0xb] = uVar11;
              auVar58 = *(undefined1 (*) [16])(puVar43 + 0xe);
              puVar29[0xc] = uVar21;
              puVar29[0xd] = uVar12;
              *(undefined1 (*) [16])(puVar29 + 0xe) = auVar58;
              lVar51 = lVar51 + -1;
              puVar29 = puVar29 + 0x10;
              puVar43 = puVar43 + 0x10;
            } while (lVar51 != 0);
            FUN_140290ea0(param_1 + 3);
            plVar31 = local_3b0;
            fVar59 = DAT_1404925e0;
            fVar63 = local_3bc;
          }
          plVar54 = (longlong *)0x0;
          plVar20 = local_3d0;
          plVar53 = param_1 + 0x1b;
          plVar32 = local_3c8;
          goto LAB_1400d0400;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      bVar13 = true;
    }
    iVar18 = FUN_140290e10(param_1 + 0xf);
    if ((iVar18 != 0) || (FUN_140290ea0(param_1 + 0xf), !bVar13)) {
LAB_1400d205b:
      if (plVar20 != (longlong *)0x0) {
        (*(code *)plVar20[0x16])(plVar20);
      }
      if (plVar31 != (longlong *)0x0) {
        FUN_1402d3dd0(plVar31);
      }
      if (plVar32 != (longlong *)0x0) {
        FUN_1402d3dd0(plVar32);
      }
      if (local_380 != (void *)0x0) {
        FUN_1402d3dd0(local_380);
      }
      if (local_378 != (void *)0x0) {
        FUN_1402d3dd0(local_378);
      }
      CoUninitialize();
      return;
    }
    if ((local_3b8 < 5) || (local_3b8 == (local_3b8 / 0x32) * 0x32)) {
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 0x58))();
      }
      if ((longlong *)*plVar53 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar53 + 0x10))();
        *plVar53 = 0;
      }
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
        param_1[0x1a] = 0;
      }
      cVar17 = FUN_1400cf120((longlong)param_1 + 0xe4,param_1 + 0x20,plVar46,param_1 + 1,
                             (longlong)param_1 + 0xf4,param_1 + 0x1f,param_1 + 0x19,param_1 + 0x1a,
                             plVar53);
      *(char *)((longlong)param_1 + 0xfc) = cVar17;
    }
    else {
      cVar17 = *(char *)((longlong)param_1 + 0xfc);
    }
    if (cVar17 == '\0') {
      local_3b8 = local_3b8 + 1;
      Sleep(*(int *)((longlong)param_1 + 0x14) << 2);
    }
    else {
      local_3b8 = 0;
      bVar13 = false;
    }
  } while( true );
}

