// Function: FUN_140155fc0
// Addr: 140155fc0
// Size: 4957 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140155fc0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 *******_Buf1;
  undefined8 *******pppppppuVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong lVar32;
  longlong *plVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  longlong local_278;
  undefined8 *******local_270;
  undefined8 uStack_268;
  longlong local_260;
  ulonglong local_258;
  longlong *local_250;
  ulonglong local_248;
  ulonglong local_240;
  char local_238 [8];
  uint local_230;
  char local_22c [2];
  char local_22a;
  undefined1 local_229;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  float local_208 [2];
  undefined8 *local_200;
  longlong local_1f8;
  longlong local_1f0 [3];
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  uint local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined8 *******local_128 [2];
  size_t local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined4 local_104;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined8 *******local_98 [2];
  size_t local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_58 [24];
  
  puVar28 = auStack_298;
  cVar12 = *(char *)(*(longlong *)(param_1 + 200) + 0x12eb);
  while (cVar12 != '\x02') {
    if (*(longlong *)(*(longlong *)(param_1 + 200) + 0x2e0) != 0) goto LAB_14015712e;
    lVar24 = *(longlong *)(param_1 + 0x308) - *(longlong *)(param_1 + 0x300) >> 3;
    uVar29 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 200) + 0x12eb) + 1;
    if ((ulonglong)(lVar24 * 0x6db6db6db6db6db7) < uVar29) {
      uVar20 = (*(longlong *)(param_1 + 0x310) - *(longlong *)(param_1 + 0x300) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar20 < uVar29) {
        uVar14 = 0x492492492492492 - (uVar20 >> 1);
        if (uVar20 < uVar14 || uVar20 - uVar14 == 0) {
          uVar20 = (uVar20 >> 1) + uVar20;
          uVar14 = uVar29;
          if ((uVar29 <= uVar20) && (uVar14 = uVar20, 0x492492492492492 < uVar20)) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
        }
        else {
          uVar14 = 0x492492492492492;
        }
        puVar15 = (undefined8 *)FUN_140017390(uVar14 * 0x38);
        FUN_14015b640(puVar15 + lVar24,uVar29 + lVar24 * -0x6db6db6db6db6db7);
        puVar4 = *(undefined8 **)(param_1 + 0x308);
        puVar16 = puVar15;
        for (puVar31 = *(undefined8 **)(param_1 + 0x300); puVar31 != puVar4; puVar31 = puVar31 + 7)
        {
          *puVar16 = *puVar31;
          uVar18 = puVar31[3];
          uVar19 = puVar31[1];
          uVar5 = puVar31[2];
          puVar31[3] = 0;
          puVar31[2] = 0;
          puVar31[1] = 0;
          puVar16[1] = uVar19;
          puVar16[2] = uVar5;
          puVar16[3] = uVar18;
          uVar18 = puVar31[6];
          uVar19 = puVar31[5];
          uVar5 = puVar31[4];
          puVar31[6] = 0;
          puVar31[5] = 0;
          puVar31[4] = 0;
          puVar16[4] = uVar5;
          puVar16[5] = uVar19;
          puVar16[6] = uVar18;
          puVar16 = puVar16 + 7;
        }
        FUN_14015aec0(puVar16,puVar16);
        if (*(longlong *)(param_1 + 0x300) != 0) {
          uVar34 = FUN_14015aec0(*(longlong *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x308));
          FUN_14015b6d0(uVar34,*(longlong *)(param_1 + 0x300),
                        (*(longlong *)(param_1 + 0x310) - *(longlong *)(param_1 + 0x300) >> 3) *
                        0x6db6db6db6db6db7);
        }
        *(undefined8 **)(param_1 + 0x300) = puVar15;
        *(undefined8 **)(param_1 + 0x308) = puVar15 + uVar29 * 7;
        *(undefined8 **)(param_1 + 0x310) = puVar15 + uVar14 * 7;
      }
      else {
        uVar18 = FUN_14015b640(*(longlong *)(param_1 + 0x308),uVar29 + lVar24 * -0x6db6db6db6db6db7)
        ;
        *(undefined8 *)(param_1 + 0x308) = uVar18;
      }
    }
    lVar24 = *(longlong *)(param_1 + 0x300);
    lVar32 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 200) + 0x12eb) * 0x38;
    local_res20 = lVar24;
    local_278 = lVar32;
    if (*(longlong *)(lVar24 + lVar32) == 0) {
      plVar33 = *(longlong **)(param_1 + 0x1e0);
      local_250 = plVar33;
      FUN_140031950(local_208);
      lVar24 = *(longlong *)(param_1 + 200);
      uStack_268 = 0;
      local_260 = 0;
      local_258 = 0xf;
      local_res10 = *(longlong *)(param_1 + 0x1e0) + 0xb0;
      local_270 = (undefined8 *******)0x0;
      if (0xf < *(ulonglong *)(*(longlong *)(param_1 + 0x1e0) + 200)) {
        local_res10 = *(ulonglong *)local_res10;
      }
      FUN_1401a74c0(lVar24 + 0x15a8,&local_1a0,&local_res10);
      if ((local_1a0 == *(longlong *)(lVar24 + 0x15b0)) ||
         (pppppppuVar21 = (undefined8 *******)(local_1a0 + 0xb0),
         &local_270 == (undefined8 ********)pppppppuVar21)) {
LAB_1401562a2:
        FUN_14000f880(&local_270,"shadowcaster",0xc);
      }
      else {
        if (0xf < *(ulonglong *)(local_1a0 + 200)) {
          pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
        }
        FUN_14000f880(&local_270,pppppppuVar21,*(undefined8 *)(local_1a0 + 0xc0));
        if (local_260 == 0) goto LAB_1401562a2;
      }
      local_res18 = 0;
      local_res10 = 0;
      pppppppuVar21 = &local_270;
      if (0xf < local_258) {
        pppppppuVar21 = local_270;
      }
      FUN_1401a6c60(*(longlong *)(param_1 + 200) + 0x15a8,pppppppuVar21,&local_res18,&local_res10);
      puVar4 = *(undefined8 **)(local_res10 + 8);
      for (puVar31 = (undefined8 *)*puVar4; puVar31 != puVar4; puVar31 = (undefined8 *)*puVar31) {
        uVar34 = 0;
        uVar35 = FUN_1400313b0((longlong)plVar33 + 0x70,&local_198,puVar31 + 2);
        if (local_198 != *(longlong *)((longlong)plVar33 + 0x78)) {
          uVar34 = *(undefined4 *)(local_198 + 0x30);
        }
        uVar29 = FUN_14000f400(uVar35,puVar31 + 2);
        FUN_1400110a0(local_208,&local_190,puVar31 + 2,uVar29);
        puVar16 = (undefined8 *)CONCAT44(uStack_184,uStack_188);
        if (puVar16 == (undefined8 *)0x0) {
          if (local_1f8 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            FUN_14028c2e0("unordered_map/set too long");
          }
          puVar16 = (undefined8 *)FUN_14028af20(0x38);
          FUN_140016fc0(puVar16 + 2,puVar31 + 2);
          *(undefined4 *)(puVar16 + 6) = 0;
          if (local_208[0] < (float)(local_1f8 + 1) / (float)local_1d0) {
            FUN_14015b710(local_208);
            puVar17 = (undefined4 *)FUN_1400110a0(local_208,local_58,puVar16 + 2,uVar29);
            local_190 = *puVar17;
            uStack_18c = puVar17[1];
            uStack_188 = puVar17[2];
            uStack_184 = puVar17[3];
          }
          puVar11 = (undefined8 *)CONCAT44(uStack_18c,local_190);
          local_1f8 = local_1f8 + 1;
          puVar15 = (undefined8 *)puVar11[1];
          *puVar16 = puVar11;
          puVar16[1] = puVar15;
          *puVar15 = puVar16;
          puVar11[1] = puVar16;
          uVar29 = uVar29 & local_1d8;
          puVar6 = *(undefined8 **)(local_1f0[0] + uVar29 * 0x10);
          if (puVar6 == local_200) {
            *(undefined8 **)(local_1f0[0] + uVar29 * 0x10) = puVar16;
LAB_14015647f:
            *(undefined8 **)(local_1f0[0] + 8 + uVar29 * 0x10) = puVar16;
          }
          else if (puVar6 == puVar11) {
            *(undefined8 **)(local_1f0[0] + uVar29 * 0x10) = puVar16;
          }
          else if (*(undefined8 **)(local_1f0[0] + 8 + uVar29 * 0x10) == puVar15)
          goto LAB_14015647f;
        }
        *(undefined4 *)(puVar16 + 6) = uVar34;
        plVar33 = local_250;
      }
      if (*(char *)(param_1 + 0x1f0) == '\x03') {
        local_228 = 0xf;
        uStack_220 = 0xf;
        local_229 = 0;
        local_238 = (char  [8])s_ALPHATOCOVERAGE_14048b5a0._0_8_;
        local_230 = s_ALPHATOCOVERAGE_14048b5a0._8_4_;
        local_22c = (char  [2])s_ALPHATOCOVERAGE_14048b5a0._12_2_;
        local_22a = s_ALPHATOCOVERAGE_14048b5a0[0xe];
        puVar17 = (undefined4 *)FUN_14015a440(local_208,local_238);
        *puVar17 = 1;
        FUN_140017240(local_238);
      }
      pppppppuVar21 = &local_270;
      if (0xf < local_258) {
        pppppppuVar21 = local_270;
      }
      local_240 = FUN_140150110(*(longlong *)(param_1 + 200) + 0x1630,
                                "materials/util/shadowcaster.json",local_208,pppppppuVar21);
      if (*(char *)(param_1 + 0x1f0) == '\x03') {
        *(undefined1 *)(local_240 + 0x1f0) = 3;
      }
      local_res18 = *(longlong *)(param_1 + 0x1e0);
      plVar33 = *(longlong **)(*(longlong *)(local_240 + 0x1e0) + 0x38);
      plVar26 = (longlong *)*plVar33;
      local_250 = plVar33;
      if (plVar26 != plVar33) {
        do {
          lVar24 = local_res18;
          local_e8 = (undefined4)plVar26[2];
          local_e0 = (undefined4)plVar26[3];
          FUN_140016fc0(local_d8,plVar26 + 4);
          FUN_140016fc0(local_b8,plVar26 + 8);
          FUN_140016fc0(local_98,plVar26 + 0xc);
          local_78 = (undefined1)plVar26[0x10];
          local_74 = *(undefined4 *)((longlong)plVar26 + 0x84);
          local_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          lVar32 = local_68;
          if (plVar26[0x12] - plVar26[0x11] != 0) {
            if (0x3ffffffffffffff < (ulonglong)(plVar26[0x12] - plVar26[0x11] >> 6)) {
LAB_14015731e:
                    /* WARNING: Subroutine does not return */
              FUN_140013050();
            }
            FUN_14015bb00(&local_70);
            lVar30 = plVar26[0x12];
            lVar24 = local_res18;
            lVar32 = local_70;
            for (lVar25 = plVar26[0x11]; local_res18 = lVar24, lVar25 != lVar30;
                lVar25 = lVar25 + 0x40) {
              FUN_140016fc0(lVar32,lVar25);
              FUN_140016fc0(lVar32 + 0x20,lVar25 + 0x20);
              lVar32 = lVar32 + 0x40;
              lVar24 = local_res18;
            }
          }
          local_68 = lVar32;
          if (local_88 != 0) {
            puVar4 = *(undefined8 **)(lVar24 + 0x38);
            puVar31 = (undefined8 *)*puVar4;
            while( true ) {
              if (puVar31 == puVar4) goto LAB_140156af6;
              local_178 = *(undefined4 *)(puVar31 + 2);
              local_170 = *(undefined4 *)(puVar31 + 3);
              FUN_140016fc0(local_168,puVar31 + 4);
              FUN_140016fc0(local_148,puVar31 + 8);
              FUN_140016fc0(local_128,puVar31 + 0xc);
              local_108 = *(undefined1 *)(puVar31 + 0x10);
              lVar32 = 0;
              local_104 = *(undefined4 *)((longlong)puVar31 + 0x84);
              local_100 = 0;
              local_f8 = 0;
              lStack_f0 = 0;
              lVar24 = local_f8;
              if (puVar31[0x12] - puVar31[0x11] != 0) {
                if (0x3ffffffffffffff < (ulonglong)((longlong)(puVar31[0x12] - puVar31[0x11]) >> 6))
                goto LAB_14015731e;
                FUN_14015bb00(&local_100);
                lVar32 = local_100;
                lVar30 = puVar31[0x12];
                lVar24 = local_100;
                for (lVar25 = puVar31[0x11]; lVar25 != lVar30; lVar25 = lVar25 + 0x40) {
                  FUN_140016fc0(lVar24,lVar25);
                  FUN_140016fc0(lVar24 + 0x20,lVar25 + 0x20);
                  lVar24 = lVar24 + 0x40;
                  plVar33 = local_250;
                }
              }
              local_f8 = lVar24;
              lVar24 = local_f8;
              pppppppuVar21 = local_98;
              if (0xf < local_80) {
                pppppppuVar21 = local_98[0];
              }
              _Buf1 = local_128;
              if (0xf < local_110) {
                _Buf1 = local_128[0];
              }
              if ((local_118 == local_88) &&
                 ((local_118 == 0 || (iVar13 = memcmp(_Buf1,pppppppuVar21,local_118), iVar13 == 0)))
                 ) break;
              lVar30 = lVar32;
              if (lVar32 != 0) {
                for (; lVar30 != lVar24; lVar30 = lVar30 + 0x40) {
                  FUN_140017240(lVar30 + 0x20);
                  FUN_140017240(lVar30);
                }
                uVar29 = lStack_f0 - lVar32 & 0xffffffffffffffc0;
                if (0xfff < uVar29) {
                  if (0x1f < (lVar32 - *(longlong *)(lVar32 + -8)) - 8U) goto LAB_1401572fe;
                  uVar29 = uVar29 | 0x27;
                  lVar32 = *(longlong *)(lVar32 + -8);
                }
                thunk_FUN_14028af80(lVar32,uVar29);
                local_100 = 0;
                local_f8 = 0;
                lStack_f0 = 0;
              }
              FUN_140017240(local_128);
              FUN_140017240(local_148);
              FUN_140017240(local_168);
              puVar31 = (undefined8 *)*puVar31;
            }
            puVar22 = *(undefined1 **)(local_res20 + 0x10 + local_278);
            puVar8 = *(undefined1 **)(local_res20 + 0x18 + local_278);
            if (puVar22 == puVar8) {
              lVar30 = *(longlong *)(local_res20 + 8 + local_278);
              local_res10 = (longlong)puVar22 - lVar30;
              if ((longlong)local_res10 >> 1 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              uVar29 = (longlong)puVar8 - lVar30 >> 1;
              if (0x7fffffffffffffff - (uVar29 >> 1) < uVar29) goto LAB_14015732a;
              local_248 = ((longlong)local_res10 >> 1) + 1;
              uVar29 = (uVar29 >> 1) + uVar29;
              uVar20 = local_248;
              if (local_248 <= uVar29) {
                uVar20 = uVar29;
              }
              if (0x7fffffffffffffff < uVar20) goto LAB_14015732a;
              uVar20 = uVar20 * 2;
              if (uVar20 == 0) {
                uVar29 = 0;
              }
              else if (uVar20 < 0x1000) {
                uVar29 = FUN_14028af20(uVar20);
              }
              else {
                if (uVar20 + 0x27 <= uVar20) goto LAB_14015732a;
                lVar30 = FUN_14028af20();
                if (lVar30 == 0) goto LAB_1401572fe;
                uVar29 = lVar30 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar29 - 8) = lVar30;
              }
              local_res10 = local_res10 & 0xfffffffffffffffe;
              *(undefined1 *)(local_res10 + uVar29) = (undefined1)local_170;
              *(undefined1 *)(local_res10 + 1 + uVar29) = (undefined1)local_e0;
              puVar8 = *(undefined1 **)(local_res20 + 0x10 + local_278);
              puVar7 = *(undefined1 **)(local_res20 + 8 + local_278);
              if (puVar22 == puVar8) {
                lVar30 = (longlong)puVar8 - (longlong)puVar7;
                uVar14 = uVar29;
                puVar22 = puVar7;
              }
              else {
                FUN_1404210f0(uVar29,puVar7,(longlong)puVar22 - (longlong)puVar7);
                uVar14 = local_res10 + 2 + uVar29;
                lVar30 = *(longlong *)(local_res20 + 0x10 + local_278) - (longlong)puVar22;
              }
              FUN_1404210f0(uVar14,puVar22,lVar30);
              lVar30 = *(longlong *)(local_res20 + 8 + local_278);
              if (lVar30 != 0) {
                uVar14 = (*(longlong *)(local_res20 + 0x18 + local_278) - lVar30 >> 1) * 2;
                if (0xfff < uVar14) {
                  if (0x1f < (lVar30 - *(longlong *)(lVar30 + -8)) - 8U) goto LAB_1401572fe;
                  uVar14 = uVar14 + 0x27;
                  lVar30 = *(longlong *)(lVar30 + -8);
                }
                thunk_FUN_14028af80(lVar30,uVar14);
              }
              *(ulonglong *)(local_res20 + 8 + local_278) = uVar29;
              *(ulonglong *)(local_res20 + 0x10 + local_278) = uVar29 + local_248 * 2;
              *(ulonglong *)(local_res20 + 0x18 + local_278) = uVar20 + uVar29;
            }
            else {
              *puVar22 = (undefined1)local_170;
              puVar22[1] = (undefined1)local_e0;
              plVar1 = (longlong *)(local_res20 + 0x10 + local_278);
              *plVar1 = *plVar1 + 2;
            }
            lVar30 = lVar32;
            if (lVar32 == 0) goto LAB_140156adb;
            for (; lVar30 != lVar24; lVar30 = lVar30 + 0x40) {
              FUN_140017240(lVar30 + 0x20);
              FUN_140017240(lVar30);
            }
            uVar29 = lStack_f0 - lVar32 & 0xffffffffffffffc0;
            if (0xfff < uVar29) {
              if (0x1f < (lVar32 - *(longlong *)(lVar32 + -8)) - 8U) goto LAB_1401572fe;
              uVar29 = uVar29 | 0x27;
              lVar32 = *(longlong *)(lVar32 + -8);
            }
            thunk_FUN_14028af80(lVar32,uVar29);
            local_100 = 0;
            local_f8 = 0;
            lStack_f0 = 0;
LAB_140156adb:
            FUN_140017240(local_128);
            FUN_140017240(local_148);
            FUN_140017240(local_168);
          }
LAB_140156af6:
          FUN_14003a630(&local_70);
          FUN_140017240(local_98);
          FUN_140017240(local_b8);
          FUN_140017240(local_d8);
          plVar26 = (longlong *)*plVar26;
        } while (plVar26 != plVar33);
      }
      uVar29 = local_240;
      lVar24 = *(longlong *)(local_240 + 0x1e0);
      if (*(longlong *)(lVar24 + 0x28) == 0) {
        *(ulonglong *)(local_res20 + local_278) = local_240;
        lVar32 = local_278;
        lVar24 = local_res20;
      }
      else {
        *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 2;
        lVar32 = *(longlong *)(param_1 + 200);
        pppppppuVar21 = &local_270;
        if (0xf < local_258) {
          pppppppuVar21 = local_270;
        }
        local_230 = (local_230 >> 8 & 0xfffffe) << 8;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uVar18 = FUN_140086de0(local_238,"combos","");
        puVar31 = local_200;
        for (puVar4 = (undefined8 *)*local_200; puVar4 != puVar31; puVar4 = (undefined8 *)*puVar4) {
          local_1c8 = (ulonglong)*(uint *)(puVar4 + 6);
          puVar16 = puVar4 + 2;
          uVar10 = local_1c0 >> 8;
          local_1c0 = CONCAT31((int3)uVar10,2);
          local_1c0 = local_1c0 & 0xfffffeff;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          if (0xf < (ulonglong)puVar4[5]) {
            puVar16 = (undefined8 *)*puVar16;
          }
          uVar19 = FUN_140086de0(uVar18,puVar16,puVar4[4] + (longlong)puVar16);
          FUN_140085610(uVar19,&local_1c8);
          FUN_140085440(&local_1c8);
        }
        if (pppppppuVar21 != (undefined8 *******)0x0) {
          FUN_140084f50(&local_1c8,pppppppuVar21);
          uVar18 = FUN_140086de0(local_238,"shader","");
          FUN_140085610(uVar18,&local_1c8);
          FUN_140085440(&local_1c8);
        }
        lVar32 = FUN_140150770(lVar32 + 0x1630,"materials/util/shadowcaster.json",local_238);
        FUN_140085440(local_238);
        *(longlong *)(local_res20 + local_278) = lVar32;
        *(undefined1 *)(lVar32 + 0x1f0) = *(undefined1 *)(uVar29 + 0x1f0);
        local_248 = *(ulonglong *)(param_1 + 0x1e0);
        plVar33 = (longlong *)**(longlong **)(lVar24 + 0x20);
        cVar12 = *(char *)((longlong)plVar33 + 0x19);
        lVar24 = local_res20;
        lVar32 = local_278;
        while (cVar12 == '\0') {
          puVar4 = *(undefined8 **)(local_248 + 0x20);
          cVar12 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar31 = puVar4;
          puVar16 = (undefined8 *)puVar4[1];
          while (cVar12 == '\0') {
            cVar12 = FUN_140038c30(puVar16 + 4,plVar33 + 4);
            if (cVar12 < '\0') {
              puVar15 = (undefined8 *)puVar16[2];
              puVar16 = puVar31;
            }
            else {
              puVar15 = (undefined8 *)*puVar16;
            }
            puVar31 = puVar16;
            puVar16 = puVar15;
            cVar12 = *(char *)((longlong)puVar15 + 0x19);
          }
          lVar32 = local_278;
          lVar24 = local_res20;
          if ((((*(char *)((longlong)puVar31 + 0x19) == '\0') &&
               (cVar12 = FUN_140038c30(plVar33 + 4,puVar31 + 4), lVar32 = local_278,
               lVar24 = local_res20, -1 < cVar12)) && (puVar31 != puVar4)) &&
             (*(int *)(puVar31 + 0x15) == (int)plVar33[0x15])) {
            puVar22 = *(undefined1 **)(local_res20 + 0x28 + local_278);
            puVar8 = *(undefined1 **)(local_res20 + 0x30 + local_278);
            uVar2 = *(undefined1 *)((longlong)plVar33 + 0x45);
            cVar12 = *(char *)((longlong)plVar33 + 0x44) << 2;
            local_res10 = CONCAT71(local_res10._1_7_,*(undefined1 *)((longlong)puVar31 + 0x45));
            local_res18 = CONCAT71(local_res18._1_7_,uVar2);
            if (puVar22 == puVar8) {
              lVar24 = *(longlong *)(local_res20 + 0x20 + local_278);
              lVar30 = ((longlong)puVar22 - lVar24) / 3;
              if (lVar30 == 0x5555555555555555) goto LAB_140157305;
              uVar29 = ((longlong)puVar8 - lVar24) * -0x5555555555555555;
              uVar20 = 0x5555555555555555 - (uVar29 >> 1);
              if (uVar20 <= uVar29 && uVar29 - uVar20 != 0) {
LAB_14015732a:
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              local_240 = lVar30 + 1;
              uVar29 = (uVar29 >> 1) + uVar29;
              uVar20 = local_240;
              if (local_240 <= uVar29) {
                uVar20 = uVar29;
              }
              if (0x5555555555555555 < uVar20) goto LAB_14015732a;
              uVar20 = uVar20 * 3;
              if (uVar20 == 0) {
                uVar29 = 0;
              }
              else if (uVar20 < 0x1000) {
                uVar29 = FUN_14028af20(uVar20);
              }
              else {
                if (uVar20 + 0x27 <= uVar20) goto LAB_14015732a;
                lVar24 = FUN_14028af20();
                if (lVar24 == 0) goto LAB_1401572fe;
                uVar29 = lVar24 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar29 - 8) = lVar24;
              }
              lVar25 = uVar29 + lVar30 * 2;
              *(undefined1 *)(lVar30 + lVar25) = (undefined1)local_res10;
              *(undefined1 *)(lVar30 + 1 + lVar25) = (undefined1)local_res18;
              *(char *)(lVar30 + 2 + lVar25) = cVar12;
              puVar8 = *(undefined1 **)(local_res20 + 0x28 + local_278);
              lVar24 = *(longlong *)(local_res20 + 0x20 + local_278);
              if (puVar22 == puVar8) {
                FUN_1404210f0(uVar29,lVar24,(longlong)puVar8 - lVar24);
                lVar32 = local_278;
                lVar24 = local_res20;
              }
              else {
                FUN_1404210f0(uVar29,lVar24,(longlong)puVar22 - lVar24);
                lVar32 = local_278;
                lVar24 = local_res20;
                FUN_1404210f0(lVar30 + 3 + lVar25,puVar22,
                              *(longlong *)(local_res20 + 0x28 + local_278) - (longlong)puVar22);
              }
              lVar30 = *(longlong *)(lVar24 + 0x20 + lVar32);
              if (lVar30 != 0) {
                uVar14 = *(longlong *)(lVar24 + 0x30 + lVar32) - lVar30;
                if (0xfff < uVar14) {
                  if (0x1f < (lVar30 - *(longlong *)(lVar30 + -8)) - 8U) goto LAB_1401572fe;
                  uVar14 = uVar14 + 0x27;
                  lVar30 = *(longlong *)(lVar30 + -8);
                }
                thunk_FUN_14028af80(lVar30,uVar14);
              }
              *(ulonglong *)(lVar24 + 0x20 + lVar32) = uVar29;
              *(ulonglong *)(lVar24 + 0x28 + lVar32) = uVar29 + local_240 * 3;
              *(ulonglong *)(lVar24 + 0x30 + lVar32) = uVar20 + uVar29;
            }
            else {
              *puVar22 = *(undefined1 *)((longlong)puVar31 + 0x45);
              puVar22[1] = uVar2;
              puVar22[2] = cVar12;
              plVar26 = (longlong *)(local_res20 + 0x28 + local_278);
              *plVar26 = *plVar26 + 3;
            }
          }
          plVar26 = (longlong *)plVar33[2];
          if (*(char *)((longlong)plVar26 + 0x19) == '\0') {
            cVar12 = *(char *)(*plVar26 + 0x19);
            while (cVar12 == '\0') {
              plVar26 = (longlong *)*plVar26;
              cVar12 = *(char *)(*plVar26 + 0x19);
            }
          }
          else {
            cVar12 = *(char *)(plVar33[1] + 0x19);
            plVar1 = (longlong *)plVar33[1];
            while ((plVar26 = plVar1, cVar12 == '\0' && (plVar33 == (longlong *)plVar26[2]))) {
              cVar12 = *(char *)(plVar26[1] + 0x19);
              plVar1 = (longlong *)plVar26[1];
              plVar33 = plVar26;
            }
          }
          plVar33 = plVar26;
          cVar12 = *(char *)((longlong)plVar26 + 0x19);
        }
      }
      if (0xf < local_258) {
        uVar29 = local_258 + 1;
        pppppppuVar21 = local_270;
        if (0xfff < uVar29) {
          pppppppuVar21 = (undefined8 *******)local_270[-1];
          if (0x1f < (ulonglong)((longlong)local_270 + (-8 - (longlong)pppppppuVar21))) {
LAB_1401572fe:
            pcVar9 = (code *)swi(0x29);
            (*pcVar9)(5);
            puVar28 = auStack_290;
LAB_140157305:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar28 + -8) = &UNK_14015730a;
            FUN_140013050();
          }
          uVar29 = local_258 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar21,uVar29);
      }
      local_258 = 0xf;
      local_260 = 0;
      local_270 = (undefined8 *******)((ulonglong)local_270 & 0xffffffffffffff00);
      FUN_14000d9e0(local_1f0);
      FUN_140030c70(&local_200);
    }
    lVar30 = *(longlong *)(lVar24 + lVar32);
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x2e0) = lVar30;
    pbVar27 = *(byte **)(lVar24 + 0x10 + lVar32);
    for (pbVar23 = *(byte **)(lVar24 + 8 + lVar32); pbVar23 != pbVar27; pbVar23 = pbVar23 + 2) {
      *(undefined8 *)(lVar30 + 0xd0 + (ulonglong)pbVar23[1] * 8) =
           *(undefined8 *)(param_1 + 0xd0 + (ulonglong)*pbVar23 * 8);
    }
    if ((*(longlong *)(lVar24 + 0x20 + lVar32) != *(longlong *)(lVar24 + 0x28 + lVar32)) &&
       ((*(uint *)(param_1 + 0x1f8) & 2) != 0)) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffd;
      *(uint *)(lVar30 + 0x1f8) = *(uint *)(lVar30 + 0x1f8) | 3;
      pbVar27 = *(byte **)(lVar24 + 0x28 + lVar32);
      for (pbVar23 = *(byte **)(lVar24 + 0x20 + lVar32); pbVar23 != pbVar27; pbVar23 = pbVar23 + 3)
      {
        FUN_1404210f0(lVar30 + ((ulonglong)pbVar23[1] + 0x48) * 4,
                      param_1 + ((ulonglong)*pbVar23 + 0x48) * 4,pbVar23[2]);
      }
    }
    param_1 = lVar30;
    cVar12 = *(char *)(*(longlong *)(lVar30 + 200) + 0x12eb);
  }
  uVar29 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x20))();
  if ((uVar29 & 0x20) != 0) {
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar33 + 0x150))(plVar33,*(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x1f));
  }
LAB_14015712e:
  if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x10))
              (*(longlong **)(param_1 + 0x1e0),param_1 + 0x120,param_1 + 0x1e8);
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffe;
  }
  cVar12 = *(char *)(param_1 + 0x1f0);
  if (((cVar12 == '\x01') || (cVar12 == '\x02')) || (cVar12 == '\x03')) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1518) + 0x128))();
  }
  if (*(char *)(param_1 + 0x1f2) == '\x01') {
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar33 + 200))(plVar33,0);
  }
  if (*(char *)(param_1 + 499) == '\x01') {
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar33 + 0xd0))(plVar33,0);
  }
  if (*(char *)(param_1 + 500) == '\x01') {
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar33 + 0xa8))(plVar33,0);
  }
  if ((*(char *)(param_1 + 0x1f1) == '\x01') || (*(char *)(param_1 + 0x1f1) == '\x02')) {
    cVar12 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1518) + 0xe0))();
    uVar10 = *(uint *)(param_1 + 0x1f8) | 0x10;
    if (cVar12 == '\0') {
      uVar10 = *(uint *)(param_1 + 0x1f8) & 0xffffffef;
    }
    *(uint *)(param_1 + 0x1f8) = uVar10;
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar33 + 0xd8))
              (plVar33,CONCAT71((uint7)(uint3)(uVar10 >> 8),1),*(char *)(param_1 + 0x1f1) == '\x01')
    ;
  }
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x58) = param_1 + 0xd0;
  pbVar27 = (byte *)(*(longlong *)(param_1 + 0x1e0) + 0x14);
  bVar3 = *pbVar27;
  while (bVar3 != 0xff) {
    plVar33 = *(longlong **)(param_1 + 0xd0 + (ulonglong)(*pbVar27 & 0xf) * 8);
    (**(code **)(*plVar33 + 0x20))(plVar33,*pbVar27 & 0xf);
    pbVar23 = pbVar27 + 1;
    pbVar27 = pbVar27 + 1;
    bVar3 = *pbVar23;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401572ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1e0) + 8))
            (*(longlong **)(param_1 + 0x1e0),param_1 + 0x120,*(undefined8 *)(param_1 + 0x1e8));
  return;
}

