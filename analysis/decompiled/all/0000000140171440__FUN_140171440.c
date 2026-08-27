// Function: FUN_140171440
// Addr: 140171440
// Size: 5091 bytes


void FUN_140171440(longlong param_1,float param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  longlong **pplVar6;
  longlong *****ppppplVar7;
  longlong ****pppplVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *****pppppuVar11;
  int iVar12;
  int iVar13;
  longlong ******pppppplVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong **pplVar19;
  longlong lVar20;
  int iVar21;
  longlong *****ppppplVar22;
  undefined8 ******ppppppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong ***ppplVar26;
  longlong ****pppplVar27;
  undefined1 uVar28;
  uint uVar29;
  longlong ******pppppplVar30;
  longlong lVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  char cVar34;
  longlong lVar35;
  longlong ****pppplVar36;
  undefined8 *puVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float unaff_XMM9_Da;
  longlong local_res8;
  undefined8 local_res18;
  longlong ***local_res20;
  undefined1 auStack_528 [8];
  undefined1 auStack_520 [24];
  longlong ****local_508;
  longlong ****local_4f8 [2];
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined8 local_4d0;
  uint local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  longlong *****local_4a8;
  longlong lStack_4a0;
  undefined8 *local_498;
  ulonglong local_490;
  longlong local_488;
  longlong lStack_480;
  undefined8 local_478;
  undefined1 local_470;
  undefined2 uStack_46f;
  undefined1 uStack_46d;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  undefined1 local_45b [3];
  undefined8 *****local_458;
  undefined8 uStack_450;
  longlong **local_448;
  ulonglong local_440;
  longlong ***local_438;
  ulonglong local_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined1 local_400 [8];
  uint local_3f8;
  longlong local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  longlong local_3d8 [3];
  ulonglong local_3c0;
  uint local_3a8 [2];
  undefined1 local_3a0 [32];
  undefined8 local_380;
  undefined8 *****local_378 [2];
  undefined8 local_368;
  ulonglong local_360;
  undefined8 *****local_358 [2];
  undefined8 local_348;
  ulonglong local_340;
  undefined8 *****local_338 [2];
  undefined8 local_328;
  ulonglong local_320;
  undefined8 *****local_318 [2];
  undefined8 local_308;
  ulonglong local_300;
  undefined8 *****local_2f8 [2];
  undefined8 local_2e8;
  ulonglong local_2e0;
  undefined8 *****local_2d8 [2];
  undefined8 local_2c8;
  ulonglong local_2c0;
  undefined8 *****local_2b8 [2];
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined1 local_298 [88];
  uint local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_234;
  uint local_228 [2];
  undefined8 *****local_220 [2];
  undefined8 local_210;
  ulonglong local_208;
  undefined8 local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [88];
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  longlong ****local_a8 [14];
  
  puVar32 = auStack_528;
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0xc000000) == 0) {
    local_res8 = param_1;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_1400c1390(local_3a8);
      lVar35 = *(longlong *)(param_1 + 0x140) + 0x1c8;
      iVar12 = FUN_140290d80(lVar35);
      if (iVar12 == 0) {
        bVar10 = false;
        do {
          puVar18 = (undefined8 *)0x7fffffffffffffff;
          if (*(int *)(lVar35 + 0x4c) == 0x7fffffff) {
            *(undefined4 *)(lVar35 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_140290d30(6);
          }
          if (*(longlong *)(lVar35 + 0x70) == 0) {
            FUN_140290ea0(lVar35);
            if (bVar10) {
              FUN_140150d60(*(longlong *)(param_1 + 8) + 0x1630);
            }
            FUN_1400c15a0(local_3a8);
            goto LAB_140171f67;
          }
          FUN_1400c22d0(local_228,
                        *(undefined8 *)
                         (*(longlong *)(lVar35 + 0x58) +
                         (*(longlong *)(lVar35 + 0x60) - 1U & *(ulonglong *)(lVar35 + 0x68)) * 8));
          FUN_1400c15a0(*(undefined8 *)
                         (*(longlong *)(lVar35 + 0x58) +
                         (*(longlong *)(lVar35 + 0x60) - 1U & *(ulonglong *)(lVar35 + 0x68)) * 8));
          plVar16 = (longlong *)(lVar35 + 0x70);
          *plVar16 = *plVar16 + -1;
          local_3a8[0] = local_228[0];
          if (*plVar16 == 0) {
            *(undefined8 *)(lVar35 + 0x68) = 0;
          }
          else {
            *(longlong *)(lVar35 + 0x68) = *(longlong *)(lVar35 + 0x68) + 1;
          }
          ppppppuVar23 = local_220;
          if (0xf < local_208) {
            ppppppuVar23 = (undefined8 ******)local_220[0];
          }
          FUN_14000f880(local_3a0,ppppppuVar23,local_210);
          local_380 = local_200;
          FUN_1400c2030(local_378,local_1f8);
          FUN_1400c2130(local_298,local_118);
          uVar28 = local_b4;
          uVar29 = local_c0;
          pppppplVar14 = (longlong ******)(ulonglong)local_c0;
          local_23c = local_bc;
          local_238 = local_b8;
          local_240 = local_c0;
          local_234 = local_b4;
          FUN_1400c1530(local_118);
          FUN_140017240(local_138);
          FUN_140017240(local_158);
          FUN_140017240(local_178);
          FUN_140017240(local_198);
          FUN_140017240(local_1b8);
          FUN_140017240(local_1d8);
          FUN_140017240(local_1f8);
          FUN_140017240(local_220);
          FUN_140290ea0(lVar35);
          if ((local_3a8[0] & 2) != 0) {
            FUN_1400c2130(*(longlong *)(param_1 + 0x140) + 0x160,
                          *(longlong *)(param_1 + 0x140) + 0x108);
            FUN_1400c2130(*(longlong *)(param_1 + 0x140) + 0x108,local_298);
            lVar35 = *(longlong *)(param_1 + 0x140);
            lStack_4a0 = 0;
            plVar16 = (longlong *)(lVar35 + 8);
            puVar37 = *(undefined8 **)(lVar35 + 0x18);
            if (0xf < *(ulonglong *)(lVar35 + 0x20)) {
              plVar16 = (longlong *)*plVar16;
            }
            if ((undefined8 *)0x7fffffffffffffff < puVar37) {
                    /* WARNING: Subroutine does not return */
              FUN_1400172e0();
            }
            if (puVar37 < (undefined8 *)0x10) {
              local_4e8 = (longlong ******)*plVar16;
              local_4a8 = (longlong *****)*plVar16;
              lStack_4a0 = plVar16[1];
              local_490 = 0xf;
              local_498 = puVar37;
            }
            else {
              uVar25 = (ulonglong)puVar37 | 0xf;
              if (uVar25 < 0x8000000000000000) {
                if (uVar25 < 0x16) {
                  uVar25 = 0x16;
                }
              }
              else {
                uVar25 = 0x7fffffffffffffff;
              }
              local_470 = (undefined1)uVar25;
              uStack_46f = (undefined2)(uVar25 >> 8);
              uStack_46d = (undefined1)(uVar25 >> 0x18);
              uStack_46c = (undefined4)(uVar25 >> 0x20);
              pppppplVar14 = (longlong ******)FUN_1400173f0(&local_4a8,&local_470);
              local_490 = CONCAT44(uStack_46c,CONCAT13(uStack_46d,CONCAT21(uStack_46f,local_470)));
              local_4e8 = pppppplVar14;
              local_4a8 = (longlong *****)pppppplVar14;
              local_498 = puVar37;
              FUN_1404210f0(pppppplVar14,plVar16,(longlong)puVar37 + 1);
            }
            puVar33 = local_45b;
            uVar15 = FUN_140053cb0(puVar33,*(undefined4 *)(*(longlong *)(param_1 + 0x140) + 4));
            FUN_140053d10(local_3d8,uVar15,puVar33);
            uVar15 = FUN_14002fd20(&local_4d0,"mediaThumbnail_",local_3d8);
            plVar16 = (longlong *)FUN_1400532a0(uVar15,".system",7);
            ppppplVar7 = (longlong *****)*plVar16;
            lVar31 = plVar16[1];
            lVar20 = plVar16[2];
            uVar25 = plVar16[3];
            plVar16[2] = 0;
            plVar16[3] = 0xf;
            *(undefined1 *)plVar16 = 0;
            lVar35 = *(longlong *)(param_1 + 0x140);
            pppppplVar30 = (longlong ******)(lVar35 + 8);
            if (pppppplVar30 == (longlong ******)local_a8) {
              if (0xf < uVar25) {
                uVar24 = uVar25 + 1;
                ppppplVar22 = ppppplVar7;
                if (0xfff < uVar24) {
                  ppppplVar22 = (longlong *****)ppppplVar7[-1];
                  if (0x1f < (ulonglong)((longlong)ppppplVar7 + (-8 - (longlong)ppppplVar22)))
                  goto LAB_1401723aa;
                  uVar24 = uVar25 + 0x28;
                }
                thunk_FUN_14028af80(ppppplVar22,uVar24);
              }
            }
            else {
              uVar24 = *(ulonglong *)(lVar35 + 0x20);
              if (0xf < uVar24) {
                ppppplVar22 = *pppppplVar30;
                if (0xfff < uVar24 + 1) {
                  if ((ulonglong)((longlong)ppppplVar22 + (-8 - (longlong)ppppplVar22[-1])) < 0x20)
                  {
                    thunk_FUN_14028af80(ppppplVar22[-1],uVar24 + 0x28);
                    *pppppplVar30 = ppppplVar7;
                    *(longlong *)(lVar35 + 0x10) = lVar31;
                    *(longlong *)(lVar35 + 0x18) = lVar20;
                    *(ulonglong *)(lVar35 + 0x20) = uVar25;
                    goto LAB_140171867;
                  }
                  goto LAB_1401723aa;
                }
                thunk_FUN_14028af80(ppppplVar22,uVar24 + 1,ppppplVar22);
              }
              *pppppplVar30 = ppppplVar7;
              *(longlong *)(lVar35 + 0x10) = lVar31;
              *(longlong *)(lVar35 + 0x18) = lVar20;
              *(ulonglong *)(lVar35 + 0x20) = uVar25;
            }
LAB_140171867:
            FUN_140017240(&local_4d0);
            if (0xf < local_3c0) {
              uVar25 = local_3c0 + 1;
              lVar35 = local_3d8[0];
              if (0xfff < uVar25) {
                lVar35 = *(longlong *)(local_3d8[0] + -8);
                if (0x1f < (local_3d8[0] - lVar35) - 8U) goto LAB_1401723aa;
                uVar25 = local_3c0 + 0x28;
              }
              thunk_FUN_14028af80(lVar35,uVar25);
            }
            lVar35 = *(longlong *)(param_1 + 0x140);
            local_3f8 = (local_3f8 >> 8 & 0xfffffe) << 8;
            local_430 = local_430 & 0xfffffffffffffe00;
            plVar16 = (longlong *)(lVar35 + 8);
            uVar29 = *(uint *)(lVar35 + 0x18);
            uVar25 = (ulonglong)uVar29;
            local_3f0 = 0;
            uStack_3e8 = 0;
            local_3e0 = 0;
            local_428 = 0;
            lStack_420 = 0;
            local_418 = 0;
            local_4c8 = CONCAT31(local_4c8._1_3_,4);
            if (0xf < *(ulonglong *)(lVar35 + 0x20)) {
              plVar16 = (longlong *)*plVar16;
            }
            puVar17 = (uint *)_malloc_base(uVar25 + 5);
            if (puVar17 == (uint *)0x0) {
              FUN_140017170(&local_4d0,
                            "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                           );
                    /* WARNING: Subroutine does not return */
              FUN_140084bc0(&local_4d0);
            }
            *puVar17 = uVar29;
            uVar29 = local_4c8 | 0x100;
            FUN_1404210f0(puVar17 + 1,plVar16,uVar25);
            *(undefined1 *)(uVar25 + 4 + (longlong)puVar17) = 0;
            puVar18 = (undefined8 *)FUN_140086de0(&local_438,"value","");
            local_4c8 = *(uint *)(puVar18 + 1);
            *(uint *)(puVar18 + 1) = uVar29;
            local_4d0 = *puVar18;
            *puVar18 = puVar17;
            local_4c0 = puVar18[2];
            puVar18[2] = 0;
            uStack_4b8 = puVar18[3];
            local_4b0 = puVar18[4];
            puVar18[3] = 0;
            puVar18[4] = 0;
            FUN_140085440(&local_4d0);
            uVar15 = FUN_140086de0(local_400,"$mediaThumbnail","");
            FUN_140085520(uVar15,&local_438);
            if (puVar37 != (undefined8 *)0x0) {
              FUN_140084dd0(local_3d8,0);
              local_4c8 = CONCAT31(local_4c8._1_3_,4);
              local_4c8 = local_4c8 | 0x100;
              local_4c0 = 0;
              uStack_4b8 = 0;
              pppppplVar14 = &local_4a8;
              if (0xf < local_490) {
                pppppplVar14 = local_4e8;
              }
              local_4b0 = 0;
              local_4d0 = FUN_140084b30(pppppplVar14,(ulonglong)puVar37 & 0xffffffff);
              uVar15 = FUN_140086de0(local_3d8,"value","");
              FUN_140085610(uVar15,&local_4d0);
              FUN_140085440(&local_4d0);
              uVar15 = FUN_140086de0(local_400,"$mediaPreviousThumbnail","");
              FUN_140085520(uVar15,local_3d8);
              FUN_140085440(local_3d8);
            }
            FUN_140085520(param_1 + 0x38,local_400);
            FUN_140017fb0(&local_4d0,param_1 + 0x10);
            FUN_140085610(param_1 + 0x10);
            FUN_140085440(&local_4d0);
            FUN_1401731d0(param_1);
            bVar10 = true;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x140) + 4);
            *piVar1 = *piVar1 + 1;
            FUN_140086d30(&local_438);
            lVar35 = local_428;
            if (local_428 != 0) {
              FUN_140017240(local_428 + 0x40);
              FUN_140017240(lVar35 + 0x20);
              FUN_140017240(lVar35);
              thunk_FUN_14028af80(lVar35);
            }
            FUN_140086d30(local_400);
            lVar35 = local_3f0;
            if (local_3f0 != 0) {
              FUN_140017240(local_3f0 + 0x40);
              FUN_140017240(lVar35 + 0x20);
              FUN_140017240(lVar35);
              thunk_FUN_14028af80(lVar35);
            }
            FUN_140017240(&local_4a8);
            uVar28 = local_234;
            uVar29 = local_240;
          }
          if ((local_3a8[0] & 0x10) != 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x1c4) = uVar28;
            local_508 = (longlong ****)&local_res18;
            local_res18 = (longlong ****)
                          CONCAT71(local_res18._1_7_,
                                   *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x1c4));
            FUN_140177ad0(param_1,0,0,0xe);
          }
          if ((local_3a8[0] & 4) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x140) + 0x1b8) = uVar29;
            local_508 = &local_res20;
            local_res20 = (longlong ***)
                          CONCAT44(local_res20._4_4_,
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x1b8));
            FUN_140177ad0(param_1,0,0,0xf);
          }
          if ((local_3a8[0] & 1) != 0) {
            lVar35 = *(longlong *)(param_1 + 0x140);
            if ((undefined8 ******)(lVar35 + 0x28) != local_378) {
              ppppppuVar23 = local_378;
              if (0xf < local_360) {
                ppppppuVar23 = (undefined8 ******)local_378[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0x28),ppppppuVar23,local_368);
            }
            if ((undefined8 ******)(lVar35 + 0x48) != local_358) {
              ppppppuVar23 = local_358;
              if (0xf < local_340) {
                ppppppuVar23 = (undefined8 ******)local_358[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0x48),ppppppuVar23,local_348);
            }
            if ((undefined8 ******)(lVar35 + 0x68) != local_338) {
              ppppppuVar23 = local_338;
              if (0xf < local_320) {
                ppppppuVar23 = (undefined8 ******)local_338[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0x68),ppppppuVar23,local_328);
            }
            if ((undefined8 ******)(lVar35 + 0x88) != local_318) {
              ppppppuVar23 = local_318;
              if (0xf < local_300) {
                ppppppuVar23 = (undefined8 ******)local_318[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0x88),ppppppuVar23,local_308);
            }
            if ((undefined8 ******)(lVar35 + 0xa8) != local_2f8) {
              ppppppuVar23 = local_2f8;
              if (0xf < local_2e0) {
                ppppppuVar23 = (undefined8 ******)local_2f8[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0xa8),ppppppuVar23,local_2e8);
            }
            if ((undefined8 ******)(lVar35 + 200) != local_2d8) {
              ppppppuVar23 = local_2d8;
              if (0xf < local_2c0) {
                ppppppuVar23 = (undefined8 ******)local_2d8[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 200),ppppppuVar23,local_2c8);
            }
            if ((undefined8 ******)(lVar35 + 0xe8) != local_2b8) {
              ppppppuVar23 = local_2b8;
              if (0xf < local_2a0) {
                ppppppuVar23 = (undefined8 ******)local_2b8[0];
              }
              FUN_14000f880((undefined8 ******)(lVar35 + 0xe8),ppppppuVar23,local_2a8);
            }
            lVar35 = *(longlong *)(param_1 + 0x140);
            local_438 = (longlong ***)(lVar35 + 0x28);
            if (0xf < *(ulonglong *)(lVar35 + 0x40)) {
              local_438 = (longlong ***)*local_438;
            }
            local_430 = lVar35 + 0x48;
            if (0xf < *(ulonglong *)(lVar35 + 0x60)) {
              local_430 = *(ulonglong *)local_430;
            }
            lStack_420 = lVar35 + 0x88;
            if (0xf < *(ulonglong *)(lVar35 + 0xa0)) {
              lStack_420 = *(longlong *)lStack_420;
            }
            local_428 = lVar35 + 0x68;
            if (0xf < *(ulonglong *)(lVar35 + 0x80)) {
              local_428 = *(longlong *)local_428;
            }
            local_418 = lVar35 + 0xa8;
            if (0xf < *(ulonglong *)(lVar35 + 0xc0)) {
              local_418 = *(longlong *)local_418;
            }
            local_410 = lVar35 + 200;
            if (0xf < *(ulonglong *)(lVar35 + 0xe0)) {
              local_410 = *(longlong *)local_410;
            }
            local_408 = lVar35 + 0xe8;
            if (0xf < *(ulonglong *)(lVar35 + 0x100)) {
              local_408 = *(longlong *)local_408;
            }
            local_508 = &local_438;
            FUN_140177ad0(param_1,0,0,0x10);
          }
          if ((local_3a8[0] & 2) != 0) {
            lVar35 = *(longlong *)(param_1 + 0x140);
            uStack_46c = 0;
            uStack_468 = 0;
            local_464 = 0;
            local_4e0 = *(undefined4 *)(lVar35 + 0x14c);
            local_4dc = *(undefined4 *)(lVar35 + 0x150);
            local_4d8 = *(undefined4 *)(lVar35 + 0x154);
            local_4d4 = *(undefined4 *)(lVar35 + 0x158);
            local_508 = (longlong ****)&local_4e8;
            local_4e8 = (longlong ******)
                        CONCAT44(*(undefined4 *)(lVar35 + 0x148),
                                 CONCAT13(uStack_46d,
                                          CONCAT21(uStack_46f,
                                                   *(longlong *)(lVar35 + 0x108) !=
                                                   *(longlong *)(lVar35 + 0x110))));
            FUN_140177ad0(param_1,0,0,0x11);
          }
          if ((local_3a8[0] & 8) != 0) {
            lVar35 = *(longlong *)(param_1 + 0x140);
            *(undefined4 *)(lVar35 + 0x1bc) = local_23c;
            *(undefined4 *)(lVar35 + 0x1c0) = local_238;
            local_4f8[0] = *(longlong *****)(*(longlong *)(param_1 + 0x140) + 0x1bc);
            local_508 = (longlong ****)local_4f8;
            FUN_140177ad0(param_1,0,0,0x12);
          }
          lVar35 = *(longlong *)(param_1 + 0x140) + 0x1c8;
          iVar12 = FUN_140290d80(lVar35);
        } while (iVar12 == 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
LAB_140171f67:
    if (*(longlong *)(param_1 + 0x148) != 0) {
      local_448 = (longlong **)0x0;
      pppppplVar30 = (longlong ******)(*(longlong *)(param_1 + 0x148) + 8);
      local_440 = 0xf;
      cVar34 = '\0';
      uStack_450 = 0;
      local_458 = (undefined8 ******)0x0;
      local_res18 = (longlong ****)((ulonglong)local_res18 & 0xffffffffffffff00);
      iVar12 = FUN_140290d80(pppppplVar30);
      while( true ) {
        if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        puVar37 = (undefined8 *)0x100000001b3;
        puVar18 = (undefined8 *)0xcbf29ce484222325;
        if (*(int *)((longlong)pppppplVar30 + 0x4c) == 0x7fffffff) {
          *(undefined4 *)((longlong)pppppplVar30 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        if (pppppplVar30[0xe] == (longlong *****)0x0) break;
        FUN_140016fc0(&local_4a8,
                      pppppplVar30[0xb]
                      [(longlong)pppppplVar30[0xc] - 1U & (ulonglong)pppppplVar30[0xd]]);
        FUN_140017240(pppppplVar30[0xb]
                      [(longlong)pppppplVar30[0xc] - 1U & (ulonglong)pppppplVar30[0xd]]);
        pppppplVar14 = pppppplVar30 + 0xe;
        *pppppplVar14 = (longlong *****)((longlong)*pppppplVar14 + -1);
        if (*pppppplVar14 == (longlong *****)0x0) {
          pppppplVar30[0xd] = (longlong *****)0x0;
        }
        else {
          pppppplVar30[0xd] = (longlong *****)((longlong)pppppplVar30[0xd] + 1);
        }
        pppppplVar14 = &local_4a8;
        if (0xf < local_490) {
          pppppplVar14 = (longlong ******)local_4a8;
        }
        FUN_14000f880(&local_458,pppppplVar14,local_498);
        FUN_140017240(&local_4a8);
        FUN_140290ea0(pppppplVar30);
        uVar25 = local_440;
        pplVar6 = local_448;
        pppppuVar11 = local_458;
        uVar24 = 0xcbf29ce484222325;
        lVar35 = *(longlong *)(param_1 + 0x148);
        ppppppuVar23 = &local_458;
        if (0xf < local_440) {
          ppppppuVar23 = (undefined8 ******)local_458;
        }
        ppplVar26 = (longlong ***)0x0;
        if ((longlong ***)local_448 != (longlong ***)0x0) {
          do {
            pbVar2 = (byte *)((longlong)ppppppuVar23 + (longlong)ppplVar26);
            ppplVar26 = (longlong ***)((longlong)ppplVar26 + 1);
            uVar24 = (uVar24 ^ *pbVar2) * 0x100000001b3;
          } while (ppplVar26 < local_448);
        }
        uVar24 = uVar24 & *(ulonglong *)(lVar35 + 0xf8);
        pppplVar8 = *(longlong *****)(lVar35 + 0xd0);
        pppplVar36 = *(longlong *****)(*(longlong *)(lVar35 + 0xe0) + 8 + uVar24 * 0x10);
        if (pppplVar36 != pppplVar8) {
          pppplVar4 = *(longlong *****)(*(longlong *)(lVar35 + 0xe0) + uVar24 * 0x10);
          while( true ) {
            pppplVar27 = pppplVar36 + 2;
            if ((longlong ***)0xf < pppplVar36[5]) {
              pppplVar27 = (longlong ****)*pppplVar27;
            }
            ppppppuVar23 = &local_458;
            if (0xf < uVar25) {
              ppppppuVar23 = (undefined8 ******)pppppuVar11;
            }
            if (((longlong ***)pplVar6 == pppplVar36[4]) &&
               ((local_res20 = (longlong ***)pppplVar36, (longlong ***)pplVar6 == (longlong ***)0x0
                || (iVar12 = memcmp(ppppppuVar23,pppplVar27,(size_t)pplVar6), iVar12 == 0))))
            goto LAB_14017211d;
            if (pppplVar36 == pppplVar4) break;
            pppplVar36 = (longlong ****)pppplVar36[1];
          }
        }
        pppplVar36 = (longlong ****)0x0;
        local_res20 = (longlong ***)0x0;
LAB_14017211d:
        if ((pppplVar36 == (longlong ****)0x0) || (pppplVar36 == pppplVar8)) {
          cVar34 = (char)local_res18;
        }
        else {
          local_res18 = pppplVar36 + 6;
          lVar35 = *(longlong *)(param_1 + 8);
          if ((longlong ***)0xf < pppplVar36[9]) {
            local_res18 = (longlong ****)*local_res18;
          }
          pppppplVar14 = *(longlong *******)(lVar35 + 0x1638);
          pppppplVar30 = (longlong ******)*pppppplVar14;
          local_4e8 = pppppplVar14;
          if (pppppplVar30 != pppppplVar14) {
            do {
              pppplVar27 = local_res18;
              pppplVar8 = pppppplVar30[6][0x4f];
              param_1 = local_res8;
              pppplVar36 = (longlong ****)local_res20;
              for (pppplVar4 = (longlong ****)*pppplVar8; local_res8 = param_1,
                  local_res20 = (longlong ***)pppplVar36, pppplVar4 != pppplVar8;
                  pppplVar4 = (longlong ****)*pppplVar4) {
                ppplVar5 = pppplVar4[3];
                ppplVar26 = ppplVar5 + 2;
                pplVar19 = (longlong **)strlen((char *)pppplVar27);
                pplVar6 = ppplVar5[4];
                if ((longlong **)0xf < ppplVar5[5]) {
                  ppplVar26 = (longlong ***)*ppplVar26;
                }
                if ((pplVar6 == pplVar19) &&
                   ((pplVar6 == (longlong **)0x0 ||
                    (iVar12 = memcmp(ppplVar26,pppplVar27,(size_t)pplVar6), iVar12 == 0)))) {
                  local_4f8[0] = (longlong ****)pppppplVar30[6];
                  FUN_140152770(lVar35 + 0x1670,&local_470,local_4f8);
                }
                pppppplVar14 = local_4e8;
                param_1 = local_res8;
                pppplVar36 = (longlong ****)local_res20;
              }
              pppppplVar30 = (longlong ******)*pppppplVar30;
            } while (pppppplVar30 != pppppplVar14);
          }
          lVar35 = *(longlong *)(param_1 + 0x148);
          cVar34 = '\x01';
          local_res18 = (longlong ****)CONCAT71(local_res18._1_7_,1);
          lVar31 = *(longlong *)(lVar35 + 0xe0);
          lVar20 = FUN_1400398f0(lVar35 + 200,pppplVar36 + 2);
          pppplVar8 = *(longlong *****)(lVar31 + lVar20 * 0x10);
          if (*(longlong *****)(lVar31 + 8 + lVar20 * 0x10) == pppplVar36) {
            if (pppplVar8 == pppplVar36) {
              uVar15 = *(undefined8 *)(lVar35 + 0xd0);
              *(undefined8 *)(lVar31 + lVar20 * 0x10) = uVar15;
              *(undefined8 *)(lVar31 + 8 + lVar20 * 0x10) = uVar15;
              FUN_1400385b0(lVar35 + 0xd0,pppplVar36);
            }
            else {
              *(longlong ****)(lVar31 + 8 + lVar20 * 0x10) = pppplVar36[1];
              FUN_1400385b0(lVar35 + 0xd0,pppplVar36);
            }
          }
          else {
            if (pppplVar8 == pppplVar36) {
              *(longlong ****)(lVar31 + lVar20 * 0x10) = *pppplVar36;
            }
            FUN_1400385b0(lVar35 + 0xd0,pppplVar36);
          }
        }
        pppppplVar30 = (longlong ******)(*(longlong *)(param_1 + 0x148) + 8);
        iVar12 = FUN_140290d80(pppppplVar30);
      }
      FUN_140290ea0(pppppplVar30);
      if (cVar34 != '\0') {
        FUN_140150d60(*(longlong *)(param_1 + 8) + 0x1630);
      }
      if (0xf < local_440) {
        uVar25 = local_440 + 1;
        ppppppuVar23 = (undefined8 ******)local_458;
        if (0xfff < uVar25) {
          ppppppuVar23 = (undefined8 ******)local_458[-1];
          pppppplVar14 = pppppplVar30;
          if (0x1f < (ulonglong)((longlong)local_458 + (-8 - (longlong)ppppppuVar23))) {
LAB_1401723aa:
            pcVar9 = (code *)swi(0x29);
            (*pcVar9)(5);
            puVar32 = auStack_520;
            fVar39 = unaff_XMM9_Da;
            goto LAB_1401723b5;
          }
          uVar25 = local_440 + 0x28;
        }
        thunk_FUN_14028af80(ppppppuVar23,uVar25);
      }
    }
    puVar37 = *(undefined8 **)(param_1 + 0x68);
    puVar18 = *(undefined8 **)(param_1 + 0x70);
    local_478 = 0;
    local_488 = 0;
    lStack_480 = 0;
    puVar33 = auStack_528;
    unaff_XMM9_Da = DAT_140492704;
    if (puVar37 != puVar18) {
      do {
        pppppplVar30 = (longlong ******)*puVar37;
        pppppplVar14 = (longlong ******)pppppplVar30[0x16];
        if ((longlong ******)pppppplVar30[0x16] == (longlong ******)0x0) {
          pppppplVar14 = pppppplVar30;
        }
        if (*(int *)(pppppplVar14 + 0x11) != *(int *)(*(longlong *)(param_1 + 8) + 0x144)) {
          fVar39 = unaff_XMM9_Da;
          if (pppppplVar14[0x1f] != (longlong *****)0x0) {
            fVar39 = *(float *)(pppppplVar14[0x1f] + 0x1a);
          }
LAB_1401723b5:
          *(undefined8 *)(puVar32 + -8) = 0x1401723c7;
          FUN_1401a9f60(fVar39 * param_2,pppppplVar14 + 7,&local_488);
          *(undefined4 *)(pppppplVar14 + 0x11) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x144)
          ;
        }
        fVar39 = *(float *)((longlong)pppppplVar14 + 0x3c);
        fVar40 = *(float *)(pppppplVar14 + 7);
        *(undefined8 *)(puVar32 + -8) = 0x1401723ed;
        fVar38 = (float)FUN_14041d0c0(fVar39,fVar40);
        iVar3 = *(int *)(pppppplVar14 + 9);
        iVar12 = iVar3 + -1;
        iVar21 = (int)(fVar39 / fVar40);
        iVar13 = iVar12;
        if (iVar21 <= iVar12) {
          iVar13 = iVar21;
        }
        if (iVar13 < 1) {
          iVar12 = 0;
        }
        else if (iVar21 <= iVar12) {
          iVar12 = iVar21;
        }
        if (iVar12 + 1 <= iVar3) {
          iVar3 = iVar12 + 1;
        }
        if (*(char *)(pppppplVar30 + 3) != '\0') {
          fVar38 = fVar38 / fVar40;
          iVar13 = *(int *)pppppplVar30[2];
          if (iVar13 == 1) {
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172635;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172651;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7,iVar12);
            ppppplVar7 = pppppplVar30[4];
            local_res18 = (longlong ****)
                          CONCAT44(local_res18._4_4_,
                                   fVar40 * (unaff_XMM9_Da - fVar38) + fVar39 * fVar38);
            *(undefined8 *)(puVar32 + -8) = 0x140172671;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172683;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar12);
            plVar16 = &local_res18;
            local_res18 = (longlong ****)
                          CONCAT44(fVar40 * (unaff_XMM9_Da - fVar38) + fVar39 * fVar38,
                                   (undefined4)local_res18);
          }
          else if (iVar13 == 2) {
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x14017258e;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7,iVar3);
            ppppplVar7 = pppppplVar30[4];
            fVar41 = unaff_XMM9_Da - fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x1401725aa;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7,iVar12);
            ppppplVar7 = pppppplVar30[4];
            *(float *)(puVar32 + 0x30) = fVar40 * fVar41 + fVar39 * fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x1401725c8;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x1401725da;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar12);
            ppppplVar7 = pppppplVar30[4];
            *(float *)(puVar32 + 0x34) = fVar40 * fVar41 + fVar39 * fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x1401725fd;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 0xc,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x14017260f;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 0xc,iVar12);
            plVar16 = (longlong *)(puVar32 + 0x30);
            *(float *)(puVar32 + 0x38) = fVar40 * fVar41 + fVar39 * fVar38;
          }
          else if (iVar13 == 3) {
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x1401724a9;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7,iVar3);
            ppppplVar7 = pppppplVar30[4];
            fVar41 = unaff_XMM9_Da - fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x1401724c5;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7,iVar12);
            ppppplVar7 = pppppplVar30[4];
            *(float *)(puVar32 + 0x40) = fVar40 * fVar41 + fVar39 * fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x1401724e3;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x1401724f5;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 6,iVar12);
            ppppplVar7 = pppppplVar30[4];
            *(float *)(puVar32 + 0x44) = fVar40 * fVar41 + fVar39 * fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x140172518;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 0xc,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x14017252a;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 0xc,iVar12);
            ppppplVar7 = pppppplVar30[4];
            *(float *)(puVar32 + 0x48) = fVar40 * fVar41 + fVar39 * fVar38;
            *(undefined8 *)(puVar32 + -8) = 0x140172550;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7 + 0x12,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172565;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7 + 0x12,iVar12);
            plVar16 = (longlong *)(puVar32 + 0x40);
            *(float *)(puVar32 + 0x4c) = fVar40 * fVar41 + fVar39 * fVar38;
          }
          else {
            if (iVar13 != 4) goto LAB_1401726ad;
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172465;
            fVar39 = (float)FUN_1401a9bc0(ppppplVar7,iVar3);
            ppppplVar7 = pppppplVar30[4];
            *(undefined8 *)(puVar32 + -8) = 0x140172473;
            fVar40 = (float)FUN_1401a9bc0(ppppplVar7,iVar12);
            plVar16 = &local_res8;
            local_res8 = CONCAT44(local_res8._4_4_,
                                  fVar40 * (unaff_XMM9_Da - fVar38) + fVar39 * fVar38);
          }
          ppppplVar7 = pppppplVar30[2];
          ppppplVar22 = pppppplVar30[1];
          pppplVar8 = ppppplVar7[3];
          *(undefined8 *)(puVar32 + -8) = 0x1401726ad;
          (*(code *)pppplVar8)(ppppplVar22,ppppplVar7,plVar16);
        }
LAB_1401726ad:
        lVar35 = lStack_480;
        lVar31 = local_488;
        if (local_488 != lStack_480) {
          do {
            plVar16 = (longlong *)(lVar31 + 8);
            if (0xf < *(ulonglong *)(lVar31 + 0x20)) {
              plVar16 = (longlong *)*plVar16;
            }
            ppppplVar7 = pppppplVar14[1];
            ppppplVar22 = pppppplVar14[0x21];
            *(longlong **)(puVar32 + 0x20) = plVar16;
            *(undefined8 *)(puVar32 + -8) = 0x1401726ec;
            FUN_140177ad0(param_1,ppppplVar22,ppppplVar7,6);
            lVar20 = lStack_480;
            lVar31 = lVar31 + 0x28;
          } while (lVar31 != lVar35);
          lVar35 = local_488;
          if (local_488 != lStack_480) {
            do {
              *(undefined8 *)(puVar32 + -8) = 0x14017270b;
              FUN_140017240(lVar35 + 8);
              lVar35 = lVar35 + 0x28;
            } while (lVar35 != lVar20);
            lStack_480 = local_488;
          }
        }
        puVar37 = puVar37 + 1;
        puVar33 = puVar32;
      } while (puVar37 != puVar18);
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      plVar16 = *(longlong **)(param_1 + 0x128);
      pcVar9 = *(code **)(*plVar16 + 0x48);
      *(undefined8 *)(puVar33 + -8) = 0x140172758;
      (*pcVar9)(plVar16,param_2);
      *(undefined8 *)(puVar33 + 0x20) = 0;
      *(undefined8 *)(puVar33 + -8) = 0x140172774;
      FUN_140177ad0(param_1,0,0,1);
    }
    *(undefined8 *)(puVar33 + -8) = 0x14017277d;
    FUN_140179790(&local_488);
  }
  return;
}

