// Function: FUN_14024be40
// Addr: 14024be40
// Size: 1891 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14024be40(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  longlong *local_278;
  longlong *plStack_270;
  longlong *local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong lStack_230;
  undefined2 local_228;
  ulonglong local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 local_1ec;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  if (param_3 < 0xb) {
    lVar2 = *(longlong *)(param_1 + 200);
    if (0 < param_3) {
      local_228 = 0;
      local_278 = (longlong *)0x0;
      plStack_270 = (longlong *)0x0;
      local_268 = (longlong *)0x0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      lStack_240 = 0;
      local_238 = 0;
      lStack_230 = 0;
      local_224 = 0;
      FUN_1401d2340(lVar2 + 0x1a60,0,&local_278);
      plVar9 = local_278;
      if (local_278 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(local_278[1] + 0x1518) + 0x28))
                  (*(longlong **)(local_278[1] + 0x1518),local_278[4]);
        puVar15 = (undefined8 *)*plVar9;
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,1);
        }
        *plVar9 = 0;
        thunk_FUN_14028af80(plVar9,0x28);
      }
      plVar9 = plStack_270;
      local_278 = (longlong *)0x0;
      if (plStack_270 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(plStack_270[1] + 0x1518) + 0x28))
                  (*(longlong **)(plStack_270[1] + 0x1518),plStack_270[4]);
        puVar15 = (undefined8 *)*plVar9;
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,1);
        }
        *plVar9 = 0;
        thunk_FUN_14028af80(plVar9,0x28);
      }
      plVar9 = local_268;
      plStack_270 = (longlong *)0x0;
      if (local_268 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(local_268[1] + 0x1518) + 0x28))
                  (*(longlong **)(local_268[1] + 0x1518),local_268[4]);
        puVar15 = (undefined8 *)*plVar9;
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,1);
        }
        *plVar9 = 0;
        thunk_FUN_14028af80(plVar9,0x28);
      }
      local_268 = (longlong *)0x0;
      if (lStack_240 != 0) {
        FUN_1402d3dd0();
      }
      lStack_240 = 0;
      if (local_238 != 0) {
        FUN_1402d3dd0();
      }
      local_238 = 0;
      if (lStack_230 != 0) {
        FUN_1402d3dd0();
      }
      lStack_230 = 0;
      local_228 = 0;
      local_224 = local_224 & 0xffffffff00000000;
      if (local_258 != 0) {
        uVar11 = (local_248 - local_258 >> 2) * 4;
        lVar10 = local_258;
        if (0xfff < uVar11) {
          if (0x1f < (local_258 - *(longlong *)(local_258 + -8)) - 8U) {
LAB_14024c567:
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            return;
          }
          uVar11 = uVar11 + 0x27;
          lVar10 = *(longlong *)(local_258 + -8);
        }
        thunk_FUN_14028af80(lVar10,uVar11);
      }
    }
    uVar8 = _UNK_140492b78;
    uVar7 = _DAT_140492b70;
    puVar3 = *(undefined8 **)(param_2 + 0x1d0);
    for (puVar15 = *(undefined8 **)(param_2 + 0x1c8); puVar15 != puVar3; puVar15 = puVar15 + 0xf) {
      if ((*(int *)(puVar15 + 0xc) != 1) || (param_3 != 0)) {
        local_218 = 0;
        local_210 = 0;
        local_20c = 0;
        local_208 = uVar7;
        uStack_200 = uVar8;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 0;
        uStack_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0xf;
        local_1e0 = 0;
        local_1c0 = (char *)0x0;
        local_1b8 = 0;
        local_1b0 = (char *)0x0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 0;
        local_16c = 0;
        local_164 = 0;
        local_160 = 0;
        local_158 = 0;
        local_150 = 0;
        local_14c = 0;
        local_144 = 0;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        local_12c = 0;
        local_124 = 0;
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
        local_10c = 0;
        local_104 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 0;
        local_e4 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 0;
        local_c4 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_8c = 0;
        local_84 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        lStack_60 = 0;
        local_58 = 0;
        lStack_50 = 0;
        local_48 = 0;
        lStack_40 = 0;
        puVar12 = puVar15;
        if (0xf < (ulonglong)puVar15[3]) {
          puVar12 = (undefined8 *)*puVar15;
        }
        FUN_1401c3e50(lVar2 + 0x1a60,puVar12,&local_218);
        FUN_14024be40(param_1,&local_218,param_3 + 1);
        if (local_1c0 != (char *)0x0) {
          cVar1 = *local_1c0;
          pcVar14 = local_1c0;
          while (cVar1 != '\0') {
            if ((*pcVar14 == '\x03') && (lVar10 = *(longlong *)(pcVar14 + 0xa0), lVar10 != 0)) {
              uVar11 = (*(longlong *)(pcVar14 + 0xb0) - lVar10 >> 2) * 4;
              if (0xfff < uVar11) {
                if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14024c567;
                uVar11 = uVar11 + 0x27;
                lVar10 = *(longlong *)(lVar10 + -8);
              }
              thunk_FUN_14028af80(lVar10,uVar11);
              pcVar14[0xa0] = '\0';
              pcVar14[0xa1] = '\0';
              pcVar14[0xa2] = '\0';
              pcVar14[0xa3] = '\0';
              pcVar14[0xa4] = '\0';
              pcVar14[0xa5] = '\0';
              pcVar14[0xa6] = '\0';
              pcVar14[0xa7] = '\0';
              pcVar14[0xa8] = '\0';
              pcVar14[0xa9] = '\0';
              pcVar14[0xaa] = '\0';
              pcVar14[0xab] = '\0';
              pcVar14[0xac] = '\0';
              pcVar14[0xad] = '\0';
              pcVar14[0xae] = '\0';
              pcVar14[0xaf] = '\0';
              pcVar14[0xb0] = '\0';
              pcVar14[0xb1] = '\0';
              pcVar14[0xb2] = '\0';
              pcVar14[0xb3] = '\0';
              pcVar14[0xb4] = '\0';
              pcVar14[0xb5] = '\0';
              pcVar14[0xb6] = '\0';
              pcVar14[0xb7] = '\0';
            }
            pcVar14 = pcVar14 + *(ushort *)(pcVar14 + 2);
            cVar1 = *pcVar14;
          }
          FUN_1402d3dd0(local_1c0);
        }
        if (local_1b0 != (char *)0x0) {
          cVar1 = *local_1b0;
          pcVar14 = local_1b0;
          while (cVar1 != '\0') {
            if (*pcVar14 == '\x05') {
              FUN_1401d9410(pcVar14 + 4);
            }
            pcVar14 = pcVar14 + *(ushort *)(pcVar14 + 2);
            cVar1 = *pcVar14;
          }
          FUN_1402d3dd0(local_1b0);
        }
        if (local_1a0 != 0) {
          FUN_1402d3dd0();
        }
        if (local_190 != 0) {
          FUN_1402d3dd0();
        }
        if (local_180 != 0) {
          FUN_1402d3dd0();
        }
        lVar10 = local_48;
        local_1c0 = (char *)0x0;
        local_1b0 = (char *)0x0;
        local_1a0 = 0;
        local_190 = 0;
        local_180 = 0;
        lVar13 = local_68;
        if (local_68 != lStack_60) {
          do {
            piVar4 = *(int **)(lVar13 + 0x10);
            if (*(int **)(lVar13 + 8) != (int *)0x0) {
              for (puVar12 = (undefined8 *)**(undefined8 **)(lVar2 + 0x1b00);
                  puVar12 != *(undefined8 **)(lVar2 + 0x1b00); puVar12 = (undefined8 *)*puVar12) {
                piVar5 = (int *)puVar12[2];
                if (piVar5 == *(int **)(lVar13 + 8)) {
                  *piVar5 = *piVar5 + -1;
                  break;
                }
              }
            }
            if (piVar4 != (int *)0x0) {
              for (puVar12 = (undefined8 *)**(undefined8 **)(lVar2 + 0x1b40);
                  puVar12 != *(undefined8 **)(lVar2 + 0x1b40); puVar12 = (undefined8 *)*puVar12) {
                piVar5 = (int *)puVar12[2];
                if (piVar5 == piVar4) {
                  *piVar5 = *piVar5 + -1;
                  break;
                }
              }
            }
            lVar13 = lVar13 + 0x18;
          } while (lVar13 != lStack_60);
          if (local_68 != lStack_60) {
            lStack_60 = local_68;
          }
        }
        lVar13 = lStack_50;
        if (lStack_50 != local_48) {
          do {
            FUN_140017240(lVar13);
            lVar13 = lVar13 + 0x78;
          } while (lVar13 != lVar10);
          local_48 = lStack_50;
        }
        lVar13 = local_48;
        lVar10 = lStack_50;
        if (lStack_50 != 0) {
          for (; lVar10 != lVar13; lVar10 = lVar10 + 0x78) {
            FUN_140017240(lVar10);
          }
          uVar11 = (lStack_40 - lStack_50 >> 3) * 8;
          lVar10 = lStack_50;
          if (0xfff < uVar11) {
            if (0x1f < (lStack_50 - *(longlong *)(lStack_50 + -8)) - 8U) goto LAB_14024c567;
            uVar11 = uVar11 + 0x27;
            lVar10 = *(longlong *)(lStack_50 + -8);
          }
          thunk_FUN_14028af80(lVar10,uVar11);
          lStack_50 = 0;
          local_48 = 0;
          lStack_40 = 0;
        }
        if (local_68 != 0) {
          uVar11 = (local_58 - local_68 >> 3) * 8;
          lVar10 = local_68;
          if (0xfff < uVar11) {
            if (0x1f < (local_68 - *(longlong *)(local_68 + -8)) - 8U) goto LAB_14024c567;
            uVar11 = uVar11 + 0x27;
            lVar10 = *(longlong *)(local_68 + -8);
          }
          thunk_FUN_14028af80(lVar10,uVar11);
          local_58 = 0;
          local_68 = 0;
          lStack_60 = 0;
        }
        if (0xf < local_1c8) {
          uVar11 = local_1c8 + 1;
          lVar10 = local_1e0;
          if (0xfff < uVar11) {
            lVar10 = *(longlong *)(local_1e0 + -8);
            if (0x1f < (local_1e0 - lVar10) - 8U) goto LAB_14024c567;
            uVar11 = local_1c8 + 0x28;
          }
          thunk_FUN_14028af80(lVar10,uVar11);
        }
      }
    }
  }
  return;
}

