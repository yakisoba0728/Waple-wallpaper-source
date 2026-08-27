// Function: FUN_140072a70
// Addr: 140072a70
// Size: 3875 bytes


/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_140072a70(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 param_5)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short *psVar9;
  longlong lVar10;
  undefined8 ******ppppppuVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *******pppppppuVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *******pppppppuVar23;
  short *psVar24;
  undefined4 uVar25;
  longlong local_res8;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  undefined4 *local_2b8;
  undefined8 *******local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  undefined8 *******local_288;
  longlong lStack_280;
  ulonglong local_278;
  ulonglong uStack_270;
  undefined1 local_268;
  undefined7 uStack_267;
  undefined8 local_258;
  ulonglong local_250;
  undefined1 local_248;
  undefined7 uStack_247;
  undefined8 local_238;
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  byte local_1b2;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  char local_157;
  int local_154;
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  longlong *local_f8 [24];
  
  local_res8 = param_1;
  plVar7 = (longlong *)FUN_140005880(&local_228,param_3);
  lVar13 = 0;
  local_288 = (undefined8 *******)*plVar7;
  lStack_280 = plVar7[1];
  local_278 = plVar7[2];
  uStack_270 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 7;
  *(undefined2 *)plVar7 = 0;
  uVar17 = CONCAT44(uStack_20c,uStack_210);
  if (uVar17 < 8) {
LAB_140072b28:
    puVar8 = (undefined8 *)FUN_140005880(&local_228,param_3);
    local_2a8 = (undefined8 *******)*puVar8;
    uStack_2a0 = puVar8[1];
    local_298 = puVar8[2];
    uStack_290 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 7;
    *(undefined2 *)puVar8 = 0;
    uVar17 = CONCAT44(uStack_20c,uStack_210);
    if (7 < uVar17) {
      lVar18 = CONCAT44(uStack_224,local_228);
      uVar19 = uVar17 * 2 + 2;
      lVar10 = lVar18;
      if (0xfff < uVar19) {
        lVar10 = *(longlong *)(lVar18 + -8);
        if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140073983;
        uVar19 = uVar17 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar10,uVar19);
    }
    pppppppuVar23 = &local_288;
    if (7 < uStack_270) {
      pppppppuVar23 = local_288;
    }
    psVar2 = (short *)((longlong)pppppppuVar23 + local_278 * 2);
    psVar24 = psVar2;
    for (psVar9 = (short *)FUN_140015e90(pppppppuVar23,psVar2); psVar9 != psVar2;
        psVar9 = psVar9 + 1) {
      if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) goto LAB_140072bf0;
    }
LAB_140072c0d:
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    FUN_140016170(&local_188,psVar24,(longlong)psVar2 - (longlong)psVar24 >> 1);
    local_228 = (undefined4)local_188;
    uStack_224 = local_188._4_4_;
    uStack_220 = (undefined4)uStack_180;
    uStack_21c = uStack_180._4_4_;
    local_218 = (undefined4)local_178;
    uStack_214 = local_178._4_4_;
    uStack_210 = (undefined4)uStack_170;
    uStack_20c = uStack_170._4_4_;
    puVar8 = (undefined8 *)FUN_140018ce0(&local_228,&local_1a8);
    if (0xf < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    iVar6 = FUN_1402c10d0(puVar8,"project.json");
    if (0xf < local_190) {
      lVar18 = CONCAT71(uStack_1a7,local_1a8);
      uVar17 = local_190 + 1;
      lVar10 = lVar18;
      if (0xfff < uVar17) {
        lVar10 = *(longlong *)(lVar18 + -8);
        if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140073983;
        uVar17 = local_190 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar17);
    }
    uVar17 = CONCAT44(uStack_20c,uStack_210);
    local_198 = 0;
    local_190 = 0xf;
    local_1a8 = 0;
    if (7 < uVar17) {
      lVar18 = CONCAT44(uStack_224,local_228);
      uVar19 = uVar17 * 2 + 2;
      lVar10 = lVar18;
      if (0xfff < uVar19) {
        lVar10 = *(longlong *)(lVar18 + -8);
        if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140073983;
        uVar19 = uVar17 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar10,uVar19);
    }
    if (iVar6 == 0) {
      FUN_140016600(&local_228,&local_288);
      FUN_14011d7d0(&local_158,&local_228);
      uVar17 = CONCAT44(uStack_20c,uStack_210);
      if (7 < uVar17) {
        lVar18 = CONCAT44(uStack_224,local_228);
        uVar19 = uVar17 * 2 + 2;
        lVar10 = lVar18;
        if (0xfff < uVar19) {
          lVar10 = *(longlong *)(lVar18 + -8);
          if (0x1f < (lVar18 - lVar10) - 8U) goto LAB_140073983;
          uVar19 = uVar17 * 2 + 0x29;
        }
        thunk_FUN_14028af80(lVar10,uVar19);
      }
      pppppppuVar23 = local_2a8;
      if (local_157 != '\0') {
        plVar7 = (longlong *)FUN_140087490(local_150,&DAT_140473b68,&DAT_140473b6c);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)FUN_140084ac0();
        }
        lVar10 = *plVar7;
        lVar18 = lVar13;
        if ((lVar10 != 0) && (lVar18 = lVar10, (*(uint *)(plVar7 + 1) >> 8 & 1) != 0)) {
          lVar18 = lVar10 + 4;
        }
        FUN_140060c00(&local_288,lVar18);
        lVar10 = FUN_140087490(local_150,"dependency","");
        if (lVar10 != 0) {
          lVar10 = FUN_140087490(local_150,"dependency","");
          if (lVar10 == 0) {
            lVar10 = FUN_140084ac0();
          }
          if (*(char *)(lVar10 + 8) == '\x04') {
            plVar7 = (longlong *)FUN_140087490(local_150,"dependency","");
            if (plVar7 == (longlong *)0x0) {
              plVar7 = (longlong *)FUN_140084ac0();
            }
            lVar10 = *plVar7;
            if ((lVar10 != 0) && (lVar13 = lVar10, (*(uint *)(plVar7 + 1) >> 8 & 1) != 0)) {
              lVar13 = lVar10 + 4;
            }
            FUN_140060c00(&local_2a8,lVar13);
            pppppppuVar23 = local_2a8;
            if (local_154 == 1) {
              FUN_140060990(&local_228,&DAT_140478088);
              FUN_140060d90(&local_2a8,&local_228);
              FUN_140016770(&local_228);
              pppppppuVar23 = local_2a8;
            }
            goto LAB_140072edd;
          }
        }
        uVar19 = local_278;
        uVar17 = uStack_290;
        pppppppuVar15 = &local_288;
        if (7 < uStack_270) {
          pppppppuVar15 = local_288;
        }
        if (uStack_290 < local_278) {
          uVar21 = 0x7ffffffffffffffe;
          if (0x7ffffffffffffffe < local_278) {
                    /* WARNING: Subroutine does not return */
            FUN_1400172e0();
          }
          uVar14 = local_278 | 7;
          if ((uVar14 < 0x7fffffffffffffff) &&
             (uStack_290 <= 0x7ffffffffffffffe - (uStack_290 >> 1))) {
            uVar3 = (uStack_290 >> 1) + uStack_290;
            uVar21 = uVar14;
            if (uVar14 < uVar3) {
              uVar21 = uVar3;
            }
            puVar22 = auStack_2d8;
            if (0x7fffffffffffffff < uVar21 + 1) goto LAB_14007398a;
            uVar14 = (uVar21 + 1) * 2;
            if (uVar14 != 0) goto LAB_140073086;
            pppppppuVar23 = (undefined8 *******)0x0;
          }
          else {
            uVar14 = 0xfffffffffffffffe;
LAB_140073086:
            if (uVar14 < 0x1000) {
              pppppppuVar23 = (undefined8 *******)FUN_14028af20();
            }
            else {
              puVar22 = auStack_2d8;
              if (uVar14 + 0x27 <= uVar14) goto LAB_14007398a;
              ppppppuVar11 = (undefined8 ******)FUN_14028af20(uVar14 + 0x27);
              if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_140073983;
              pppppppuVar23 =
                   (undefined8 *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
              pppppppuVar23[-1] = ppppppuVar11;
            }
          }
          lVar13 = uVar19 * 2;
          local_298 = uVar19;
          uStack_290 = uVar21;
          FUN_1404210f0(pppppppuVar23,pppppppuVar15,lVar13);
          *(undefined2 *)(lVar13 + (longlong)pppppppuVar23) = 0;
          if (7 < uVar17) {
            uVar19 = uVar17 * 2 + 2;
            pppppppuVar15 = local_2a8;
            if (0xfff < uVar19) {
              pppppppuVar15 = (undefined8 *******)local_2a8[-1];
              if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppppuVar15)))
              goto LAB_140073983;
              uVar19 = uVar17 * 2 + 0x29;
            }
            thunk_FUN_14028af80(pppppppuVar15,uVar19);
          }
        }
        else {
          local_298 = local_278;
          pppppppuVar23 = &local_2a8;
          if (7 < uStack_290) {
            pppppppuVar23 = local_2a8;
          }
          lVar13 = local_278 * 2;
          FUN_1404210f0(pppppppuVar23,pppppppuVar15,lVar13);
          *(undefined2 *)(lVar13 + (longlong)pppppppuVar23) = 0;
          pppppppuVar23 = local_2a8;
        }
      }
LAB_140072edd:
      local_2a8 = pppppppuVar23;
      FUN_140085440(local_128);
      FUN_140085440(local_150);
    }
    FUN_140018ce0(&local_288,&local_248);
    FUN_140018ce0(&local_2a8,&local_268);
    if ((param_4 != 0) || (param_4 = FUN_14011e520(&local_268), param_4 != 0)) {
      if ((param_4 != 2) || (cVar5 = FUN_140018980(&local_268), cVar5 == '\0')) {
        FUN_1400187b0(&local_248);
        FUN_1400187b0(&local_268);
      }
      uVar12 = FUN_140053f80(&local_2a8,&local_228);
      puVar8 = (undefined8 *)FUN_140018ce0(uVar12,&local_1a8);
      if (param_4 == 4) {
        plVar7 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if (((*plVar7 == 5) && (iVar6 = memcmp(puVar8,&DAT_140488af8,5), iVar6 == 0)) &&
           (DAT_1404e6368 == '\0')) {
          param_4 = 2;
        }
      }
      if (0xf < local_190) {
        lVar10 = CONCAT71(uStack_1a7,local_1a8);
        uVar17 = local_190 + 1;
        lVar13 = lVar10;
        if (0xfff < uVar17) {
          lVar13 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
          uVar17 = local_190 + 0x28;
        }
        thunk_FUN_14028af80(lVar13,uVar17);
      }
      local_198 = 0;
      local_190 = 0xf;
      local_1a8 = 0;
      FUN_140016770(&local_228);
      if (((DAT_1404e52e4 >> 0xe & 1) == 0) || (param_4 != 3)) {
        DAT_1404e52e4 = DAT_1404e52e4 | 0x10000;
        FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
        lVar13 = local_res8;
        if ((local_res8 != DAT_1404e5330) &&
           (plVar7 = *(longlong **)(local_res8 + 0x30), plVar7 != (longlong *)0x0)) {
          iVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
          if (param_4 == iVar6) {
            FUN_140084dd0(&local_228,0);
            if (0xf < (ulonglong)param_3[3]) {
              param_3 = (undefined8 *)*param_3;
            }
            plVar16 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              plVar16 = (longlong *)*param_2;
            }
            uVar25 = FUN_140061000(plVar16,param_3);
            local_2b8 = &local_228;
            uVar25 = FUN_140073d00(uVar25,param_2,&local_248,param_5);
            FUN_140076ed0(uVar25,plVar7 + 0xc,param_2);
            puVar22 = &local_268;
            if (0xf < local_250) {
              puVar22 = (undefined1 *)CONCAT71(uStack_267,local_268);
            }
            puVar20 = &local_248;
            if (0xf < local_230) {
              puVar20 = (undefined1 *)CONCAT71(uStack_247,local_248);
            }
            (**(code **)(*plVar7 + 8))(plVar7,puVar20,puVar22,&local_228);
            FUN_14006e0c0();
            FUN_140085440(&local_228);
            if (0xf < local_250) {
              lVar10 = CONCAT71(uStack_267,local_268);
              uVar17 = local_250 + 1;
              lVar13 = lVar10;
              if (0xfff < uVar17) {
                lVar13 = *(longlong *)(lVar10 + -8);
                if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
                uVar17 = local_250 + 0x28;
              }
              thunk_FUN_14028af80(lVar13,uVar17);
            }
            local_258 = 0;
            local_250 = 0xf;
            local_268 = 0;
            if (local_230 < 0x10) goto LAB_140073386;
            lVar10 = CONCAT71(uStack_247,local_248);
            uVar17 = local_230 + 1;
            lVar13 = lVar10;
            if (0xfff < uVar17) {
              lVar13 = *(longlong *)(lVar10 + -8);
              if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
              uVar17 = local_230 + 0x28;
            }
            thunk_FUN_14028af80(lVar13,uVar17);
LAB_140073386:
            local_238 = 0;
            local_230 = 0xf;
            local_248 = 0;
            if (7 < uStack_290) {
              FUN_140016a90(&local_2a8,local_2a8);
            }
            local_298 = 0;
            uStack_290 = 7;
            local_2a8 = (undefined8 *******)((ulonglong)local_2a8 & 0xffffffffffff0000);
            if (7 < uStack_270) {
              FUN_140016a90(&local_288,local_288);
            }
            local_278 = 0;
            uStack_270 = 7;
            local_288 = (undefined8 *******)((ulonglong)local_288 & 0xffffffffffff0000);
            FUN_140085440(param_5);
            return plVar7;
          }
          (**(code **)(*plVar7 + 0x18))(plVar7);
          *(undefined8 *)(lVar13 + 0x30) = 0;
        }
        lVar13 = FUN_14003cb80();
        if (((lVar13 != 0) &&
            (FUN_1400307a0(&DAT_1404e5368,&local_res8,param_2), lVar10 = local_res8,
            local_res8 != DAT_1404e5370)) && ((*(byte *)(local_res8 + 0x53) & 1) == 0)) {
          local_168 = *(undefined8 *)(local_res8 + 0x58);
          uStack_160 = *(undefined8 *)(local_res8 + 0x60);
          local_1f8 = 0;
          local_1e8 = 0;
          local_1d0 = 0;
          uStack_1d8 = 0;
          local_1e0 = 0;
          uStack_1c8 = 7;
          local_1c0 = (undefined *)0x0;
          local_1b8 = 0;
          local_1b4 = 0;
          local_1b2 = 0;
          local_1f0 = DAT_1404e5280;
          uVar12 = FUN_140005ee0(&local_1a8);
          FUN_140016600(&local_228,uVar12);
          if (7 < uStack_1c8) {
            FUN_140016a90(&local_1e0,local_1e0);
          }
          local_1e0 = CONCAT44(uStack_224,local_228);
          uStack_1d8 = CONCAT44(uStack_21c,uStack_220);
          local_1d0 = CONCAT44(uStack_214,local_218);
          uStack_1c8 = CONCAT44(uStack_20c,uStack_210);
          FUN_140016770(&local_1a8);
          local_1c0 = &DAT_1404e55a0;
          local_1b2 = 2;
          local_1b8 = *(undefined4 *)(lVar10 + 0xb8);
          local_1e8 = *(undefined8 *)(lVar10 + 0xc0);
          local_1b4 = *(undefined2 *)(lVar10 + 0x51);
          local_1f8 = lVar13;
          FUN_140076ed0(local_1b8,&local_1f8,param_2);
          FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
          if ((local_res8 != DAT_1404e5330) &&
             (1 < (ulonglong)
                  ((*(longlong *)(local_res8 + 0x40) - *(longlong *)(local_res8 + 0x38) >> 3) *
                  -0x71c71c71c71c71c7))) {
            local_1b2 = local_1b2 | 0x20;
          }
          if ((DAT_1404e5288 != 0) && ((DAT_1404e52e4 >> 0xf & 1) == 0)) {
            local_1b2 = local_1b2 | 8;
          }
          if ((DAT_1404e52e4 >> 0xe & 1) != 0) {
            local_1b2 = local_1b2 | 0x10;
          }
          if (0xf < (ulonglong)param_3[3]) {
            param_3 = (undefined8 *)*param_3;
          }
          plVar7 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            plVar7 = (longlong *)*param_2;
          }
          FUN_140061000(plVar7,param_3);
          plVar7 = (longlong *)FUN_1401048b0(param_4,&local_1f8);
          if (plVar7 != (longlong *)0x0) {
            plVar16 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              plVar16 = (longlong *)*param_2;
            }
            FUN_1400638c0(&DAT_1404e6268,plVar16,plVar7);
            uVar25 = FUN_140084dd0(&local_228,0);
            local_2b8 = &local_228;
            FUN_140073d00(uVar25,param_2,&local_248,param_5);
            (**(code **)(*plVar7 + 0x40))(plVar7,&local_168);
            if (plVar7 + 0x18 != param_2) {
              plVar16 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                plVar16 = (longlong *)*param_2;
              }
              FUN_14000f880(plVar7 + 0x18,plVar16,param_2[2]);
            }
            puVar22 = &local_268;
            if (0xf < local_250) {
              puVar22 = (undefined1 *)CONCAT71(uStack_267,local_268);
            }
            puVar20 = &local_248;
            if (0xf < local_230) {
              puVar20 = (undefined1 *)CONCAT71(uStack_247,local_248);
            }
            (**(code **)(*plVar7 + 8))(plVar7,puVar20,puVar22,&local_228);
            if (((DAT_1404e52e4 & 0x21) != 0) ||
               ((DAT_1404e52e8 >> (*(byte *)(lVar10 + 0x51) & 0x1f) & 1) != 0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,CONCAT71((uint7)(uint3)(DAT_1404e52e4 >> 8),1));
            }
            if ((DAT_1404e52e4 & 0xc0) != 0) {
              (**(code **)(*plVar7 + 0x30))(plVar7,CONCAT71((uint7)(uint3)(DAT_1404e52e4 >> 8),1));
            }
            FUN_140085440(&local_228);
          }
          FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
          if (local_res8 == DAT_1404e5330) {
            FUN_140060560(local_f8);
            local_f8[0] = plVar7;
            uVar12 = FUN_140079340(&DAT_1404e5328,param_2);
            FUN_140067250(uVar12,local_f8);
            FUN_1400190f0(local_f8);
          }
          else {
            puVar8 = (undefined8 *)(local_res8 + 0x30);
            FUN_140062ce0(puVar8);
            *puVar8 = plVar7;
          }
          if (7 < uStack_1c8) {
            FUN_140016a90(&local_1e0,local_1e0);
          }
          local_1d0 = 0;
          uStack_1c8 = 7;
          local_1e0 = local_1e0 & 0xffffffffffff0000;
          if (0xf < local_250) {
            lVar10 = CONCAT71(uStack_267,local_268);
            uVar17 = local_250 + 1;
            lVar13 = lVar10;
            if (0xfff < uVar17) {
              lVar13 = *(longlong *)(lVar10 + -8);
              if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
              uVar17 = local_250 + 0x28;
            }
            thunk_FUN_14028af80(lVar13,uVar17);
          }
          local_258 = 0;
          local_250 = 0xf;
          local_268 = 0;
          if (local_230 < 0x10) goto LAB_1400737ea;
          lVar10 = CONCAT71(uStack_247,local_248);
          uVar17 = local_230 + 1;
          lVar13 = lVar10;
          if (0xfff < uVar17) {
            lVar13 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
            uVar17 = local_230 + 0x28;
          }
          thunk_FUN_14028af80(lVar13,uVar17);
LAB_1400737ea:
          local_238 = 0;
          local_230 = 0xf;
          local_248 = 0;
          if (7 < uStack_290) {
            FUN_140016a90(&local_2a8,local_2a8);
          }
          local_298 = 0;
          uStack_290 = 7;
          local_2a8 = (undefined8 *******)((ulonglong)local_2a8 & 0xffffffffffff0000);
          if (7 < uStack_270) {
            FUN_140016a90(&local_288,local_288);
          }
          local_278 = 0;
          uStack_270 = 7;
          local_288 = (undefined8 *******)((ulonglong)local_288 & 0xffffffffffff0000);
          FUN_140085440(param_5);
          return plVar7;
        }
      }
      if (0xf < local_250) {
        lVar10 = CONCAT71(uStack_267,local_268);
        uVar17 = local_250 + 1;
        lVar13 = lVar10;
        if (0xfff < uVar17) {
          lVar13 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
          uVar17 = local_250 + 0x28;
        }
        thunk_FUN_14028af80(lVar13,uVar17);
      }
      local_258 = 0;
      local_250 = 0xf;
      local_268 = 0;
      if (0xf < local_230) {
        lVar10 = CONCAT71(uStack_247,local_248);
        uVar17 = local_230 + 1;
        lVar13 = lVar10;
        if (0xfff < uVar17) {
          lVar13 = *(longlong *)(lVar10 + -8);
          if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
          uVar17 = local_230 + 0x28;
        }
        thunk_FUN_14028af80(lVar13,uVar17);
      }
      local_238 = 0;
      local_230 = 0xf;
      local_248 = 0;
      if (7 < uStack_290) {
        FUN_140016a90(&local_2a8,local_2a8);
      }
      goto LAB_140073918;
    }
    if (0xf < local_250) {
      lVar10 = CONCAT71(uStack_267,local_268);
      uVar17 = local_250 + 1;
      lVar13 = lVar10;
      if (0xfff < uVar17) {
        lVar13 = *(longlong *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
        uVar17 = local_250 + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar17);
    }
    local_258 = 0;
    local_250 = 0xf;
    local_268 = 0;
    if (0xf < local_230) {
      lVar10 = CONCAT71(uStack_247,local_248);
      uVar17 = local_230 + 1;
      lVar13 = lVar10;
      if (0xfff < uVar17) {
        lVar13 = *(longlong *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar13) - 8U) goto LAB_140073983;
        uVar17 = local_230 + 0x28;
      }
      thunk_FUN_14028af80(lVar13,uVar17);
    }
    local_238 = 0;
    local_230 = 0xf;
    local_248 = 0;
    if (uStack_290 < 8) goto LAB_140073918;
    uVar17 = uStack_290 * 2 + 2;
    pppppppuVar23 = local_2a8;
    if (0xfff < uVar17) {
      pppppppuVar23 = (undefined8 *******)local_2a8[-1];
      if (0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppppuVar23)))
      goto LAB_140073983;
      uVar17 = uStack_290 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppuVar23,uVar17);
LAB_140073918:
    local_2a8 = (undefined8 *******)((ulonglong)local_2a8 & 0xffffffffffff0000);
    uStack_290 = 7;
    local_298 = 0;
    if (7 < uStack_270) {
      FUN_140016a90(&local_288,local_288);
    }
    local_278 = 0;
    uStack_270 = 7;
    local_288 = (undefined8 *******)((ulonglong)local_288 & 0xffffffffffff0000);
    FUN_140085440(param_5);
    return (longlong *)0x0;
  }
  lVar18 = CONCAT44(uStack_224,local_228);
  uVar19 = uVar17 * 2 + 2;
  lVar10 = lVar18;
  if (uVar19 < 0x1000) {
LAB_140072b23:
    thunk_FUN_14028af80(lVar10,uVar19);
    goto LAB_140072b28;
  }
  lVar10 = *(longlong *)(lVar18 + -8);
  if ((lVar18 - lVar10) - 8U < 0x20) {
    uVar19 = uVar17 * 2 + 0x29;
    goto LAB_140072b23;
  }
LAB_140073983:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar22 = auStack_2d0;
LAB_14007398a:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_14007398f;
  FUN_140017370();
LAB_140072bf0:
  psVar1 = psVar24 + -1;
  if (psVar24[-1] == 0x5c) goto LAB_140072c0d;
  if ((psVar24[-1] == 0x2f) || (psVar24 = psVar1, psVar9 == psVar1)) goto LAB_140072c0d;
  goto LAB_140072bf0;
}

